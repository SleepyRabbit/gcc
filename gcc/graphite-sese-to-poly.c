/* Conversion of SESE regions to Polyhedra.
   Copyright (C) 2009 Free Software Foundation, Inc.
   Contributed by Sebastian Pop <sebastian.pop@amd.com>.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "ggc.h"
#include "tree.h"
#include "rtl.h"
#include "basic-block.h"
#include "diagnostic.h"
#include "tree-flow.h"
#include "toplev.h"
#include "tree-dump.h"
#include "timevar.h"
#include "cfgloop.h"
#include "tree-chrec.h"
#include "tree-data-ref.h"
#include "tree-scalar-evolution.h"
#include "tree-pass.h"
#include "domwalk.h"
#include "value-prof.h"
#include "pointer-set.h"
#include "gimple.h"
#include "sese.h"

#ifdef HAVE_cloog
#include "cloog/cloog.h"
#include "ppl_c.h"
#include "graphite-ppl.h"
#include "graphite.h"
#include "graphite-poly.h"
#include "graphite-scop-detection.h"
#include "graphite-data-ref.h"
#include "graphite-clast-to-gimple.h"
#include "graphite-sese-to-poly.h"

/* Returns true when BB will be represented in graphite.  Return false
   for the basic blocks that contain code eliminated in the code
   generation pass: i.e. induction variables and exit conditions.  */

static bool
graphite_stmt_p (sese region, basic_block bb,
		 VEC (data_reference_p, heap) *drs)
{
  gimple_stmt_iterator gsi;
  loop_p loop = bb->loop_father;

  if (VEC_length (data_reference_p, drs) > 0)
    return true;

  for (gsi = gsi_start_bb (bb); !gsi_end_p (gsi); gsi_next (&gsi))
    {
      gimple stmt = gsi_stmt (gsi);

      switch (gimple_code (stmt))
        {
          /* Control flow expressions can be ignored, as they are
             represented in the iteration domains and will be
             regenerated by graphite.  */
	case GIMPLE_COND:
	case GIMPLE_GOTO:
	case GIMPLE_SWITCH:
	  break;

	case GIMPLE_ASSIGN:
	  {
	    tree var = gimple_assign_lhs (stmt);
	    var = analyze_scalar_evolution (loop, var);
	    var = instantiate_scev (block_before_sese (region), loop, var);

	    if (chrec_contains_undetermined (var))
	      return true;

	    break;
	  }

	default:
	  return true;
        }
    }

  return false;
}

/* Store the GRAPHITE representation of BB.  */

static gimple_bb_p
new_gimple_bb (basic_block bb, VEC (data_reference_p, heap) *drs)
{
  struct gimple_bb *gbb;

  gbb = XNEW (struct gimple_bb);
  bb->aux = gbb;
  GBB_BB (gbb) = bb;
  GBB_DATA_REFS (gbb) = drs;
  GBB_CONDITIONS (gbb) = NULL;
  GBB_CONDITION_CASES (gbb) = NULL;
  GBB_CLOOG_IV_TYPES (gbb) = NULL;
  GBB_LOOPS (gbb) = NULL;
 
  return gbb;
}

/* Frees GBB.  */

static void
free_gimple_bb (struct gimple_bb *gbb)
{
  if (GBB_CLOOG_IV_TYPES (gbb))
    htab_delete (GBB_CLOOG_IV_TYPES (gbb));

  /* FIXME: free_data_refs is disabled for the moment, but should be
     enabled.

     free_data_refs (GBB_DATA_REFS (gbb)); */

  VEC_free (loop_p, heap, GBB_LOOPS (gbb));
  VEC_free (gimple, heap, GBB_CONDITIONS (gbb));
  VEC_free (gimple, heap, GBB_CONDITION_CASES (gbb));
  GBB_BB (gbb)->aux = 0;
  XDELETE (gbb);
}

/* Deletes all gimple bbs in SCOP.  */

static void
remove_gbbs_in_scop (scop_p scop)
{
  int i;
  poly_bb_p pbb;

  for (i = 0; VEC_iterate (poly_bb_p, SCOP_BBS (scop), i, pbb); i++)
    free_gimple_bb (PBB_BLACK_BOX (pbb));
}

/* Deletes all scops in SCOPS.  */

void
free_scops (VEC (scop_p, heap) *scops)
{
  int i;
  scop_p scop;

  for (i = 0; VEC_iterate (scop_p, scops, i, scop); i++)
    {
      remove_gbbs_in_scop (scop);
      free_sese (SCOP_REGION (scop));
      free_scop (scop);
    }

  VEC_free (scop_p, heap, scops);
}

/* Generates a polyhedral black box only if the bb contains interesting
   information.  */

static void
try_generate_gimple_bb (scop_p scop, basic_block bb)
{
  sese region = SCOP_REGION (scop); 
  VEC (data_reference_p, heap) *drs = VEC_alloc (data_reference_p, heap, 5);
  struct loop *nest = outermost_loop_in_sese (region, bb);
  gimple_stmt_iterator gsi;

  for (gsi = gsi_start_bb (bb); !gsi_end_p (gsi); gsi_next (&gsi))
    find_data_references_in_stmt (nest, gsi_stmt (gsi), &drs);

  if (!graphite_stmt_p (region, bb, drs))
    {
      free_data_refs (drs);
      return;
    }

  new_poly_bb (scop, new_gimple_bb (bb, drs));
}

/* Returns true if all predecessors of BB, that are not dominated by BB, are
   marked in MAP.  The predecessors dominated by BB are loop latches and will 
   be handled after BB.  */

static bool
all_non_dominated_preds_marked_p (basic_block bb, sbitmap map)
{
  edge e;
  edge_iterator ei; 

  FOR_EACH_EDGE (e, ei, bb->preds)
    if (!TEST_BIT (map, e->src->index)
	&& !dominated_by_p (CDI_DOMINATORS, e->src, bb))
	return false;

  return true;
}

/* Recursive helper function for build_scops_bbs.  */

static void
build_scop_bbs_1 (scop_p scop, sbitmap visited, basic_block bb)
{
  sese region = SCOP_REGION (scop);
  VEC (basic_block, heap) *dom;

  if (TEST_BIT (visited, bb->index)
      || !bb_in_region (bb, SESE_ENTRY_BB (region), SESE_EXIT_BB (region)))
    return;

  try_generate_gimple_bb (scop, bb);
  SET_BIT (visited, bb->index); 

  dom = get_dominated_by (CDI_DOMINATORS, bb);

  if (dom == NULL)
    return;
  
  while (!VEC_empty (basic_block, dom))
    {
      int i;
      basic_block dom_bb;

      for (i = 0; VEC_iterate (basic_block, dom, i, dom_bb); i++)
	if (all_non_dominated_preds_marked_p (dom_bb, visited))
	  {
	    build_scop_bbs_1 (scop, visited, dom_bb);
	    VEC_unordered_remove (basic_block, dom, i);
	    break;
	  }
    }
}

/* Gather the basic blocks belonging to the SCOP.  */

void
build_scop_bbs (scop_p scop)
{
  sbitmap visited = sbitmap_alloc (last_basic_block);
  sese region = SCOP_REGION (scop);

  sbitmap_zero (visited);
  build_scop_bbs_1 (scop, visited, SESE_ENTRY_BB (region));

  sbitmap_free (visited);
}

/* Converts the STATIC_SCHEDULE of PBB into a scattering polyhedron.  
   We generate SCATTERING_DIMENSIONS scattering dimensions.
   
   CLooG 0.15.0 and previous versions require, that all
   scattering functions of one CloogProgram have the same number of
   scattering dimensions, therefore we allow to specify it.  This
   should be removed in future versions of CLooG.

   The scattering polyhedron consists of these dimensions: scattering,
   loop_iterators, parameters.

   Example:

   | scattering_dimensions = 5
   | used_scattering_dimensions = 3
   | nb_iterators = 1 
   | scop_nb_params = 2
   |
   | Schedule:
   |   i
   | 4 5
   |
   | Scattering polyhedron:
   |
   | scattering: {s1, s2, s3, s4, s5}
   | loop_iterators: {i}
   | parameters: {p1, p2}
   |
   | s1  s2  s3  s4  s5  i   p1  p2  1 
   | 1   0   0   0   0   0   0   0  -4  = 0
   | 0   1   0   0   0  -1   0   0   0  = 0
   | 0   0   1   0   0   0   0   0  -5  = 0  */

static void
build_pbb_scattering_polyhedrons (ppl_Linear_Expression_t static_schedule,
				  poly_bb_p pbb, int scattering_dimensions) 
{
  int i;
  scop_p scop = PBB_SCOP (pbb);
  int nb_iterators = pbb_nb_loops (pbb);
  int used_scattering_dimensions = nb_iterators * 2 + 1;
  int nb_params = scop_nb_params (scop);
  ppl_Coefficient_t c;
  ppl_dimension_type dim = scattering_dimensions + nb_iterators + nb_params;
  Value v;

  gcc_assert (scattering_dimensions >= used_scattering_dimensions);

  value_init (v);
  ppl_new_Coefficient (&c);
  ppl_new_NNC_Polyhedron_from_space_dimension
    (&PBB_TRANSFORMED_SCATTERING (pbb), dim, 0);

  for (i = 0; i < scattering_dimensions; i++)
    {
      ppl_Constraint_t cstr;
      ppl_Linear_Expression_t expr;

      ppl_new_Linear_Expression_with_dimension (&expr, dim);
      value_set_si (v, 1);
      ppl_assign_Coefficient_from_mpz_t (c, v);
      ppl_Linear_Expression_add_to_coefficient (expr, i, c);

      /* Textual order inside this loop.  */
      if ((i % 2) == 0)
	{
	  ppl_Linear_Expression_coefficient (static_schedule, i / 2, c);
	  ppl_Coefficient_to_mpz_t (c, v);
	  value_oppose (v, v);
	  ppl_assign_Coefficient_from_mpz_t (c, v);
	  ppl_Linear_Expression_add_to_inhomogeneous (expr, c);
	}

      /* Iterations of this loop.  */
      if ((i % 2) == 1)
	{
	  int loop = (i - 1) / 2;

	  value_set_si (v, -1);
	  ppl_assign_Coefficient_from_mpz_t (c, v);
	  ppl_Linear_Expression_add_to_coefficient
	    (expr, scattering_dimensions + loop, c);
	}
      
      ppl_new_Constraint (&cstr, expr, PPL_CONSTRAINT_TYPE_EQUAL);
      ppl_Polyhedron_add_constraint (PBB_TRANSFORMED_SCATTERING (pbb), cstr);
      ppl_delete_Linear_Expression (expr);
      ppl_delete_Constraint (cstr);
    }

  value_clear (v);
  ppl_delete_Coefficient (c);

  ppl_new_NNC_Polyhedron_from_NNC_Polyhedron (&PBB_ORIGINAL_SCATTERING (pbb),
					      PBB_TRANSFORMED_SCATTERING (pbb));
}

/* Build for BB the static schedule.

   The STATIC_SCHEDULE is defined like this:

   A
   for (i: ...)
     {
       for (j: ...)
         {
           B
           C 
         }

       for (k: ...)
         {
           D
           E 
         }
     }
   F

   Static schedules for A to F:

     DEPTH
     0 1 2 
   A 0
   B 1 0 0
   C 1 0 1
   D 1 1 0
   E 1 1 1 
   F 2
*/

static void
build_scop_scattering (scop_p scop)
{
  int i;
  poly_bb_p pbb;
  gimple_bb_p previous_gbb = NULL;
  ppl_Linear_Expression_t static_schedule;
  ppl_Coefficient_t c;
  Value v;

  value_init (v);
  ppl_new_Coefficient (&c);
  ppl_new_Linear_Expression (&static_schedule);

  /* We have to start schedules at 0 on the first component and
     because we cannot compare_prefix_loops against a previous loop,
     prefix will be equal to zero, and that index will be
     incremented before copying.  */
  value_set_si (v, -1);
  ppl_assign_Coefficient_from_mpz_t (c, v);
  ppl_Linear_Expression_add_to_coefficient (static_schedule, 0, c);

  for (i = 0; VEC_iterate (poly_bb_p, SCOP_BBS (scop), i, pbb); i++)
    {
      gimple_bb_p gbb = PBB_BLACK_BOX (pbb);
      ppl_Linear_Expression_t common;
      int prefix;
      int nb_scat_dims = pbb_nb_loops (pbb) * 2 + 1;

      if (previous_gbb)
	prefix = nb_common_loops (SCOP_REGION (scop), previous_gbb, gbb);
      else
	prefix = 0;

      previous_gbb = gbb;
      ppl_new_Linear_Expression_with_dimension (&common, prefix + 1);
      ppl_assign_Linear_Expression_from_Linear_Expression (common,
							   static_schedule);

      value_set_si (v, 1);
      ppl_assign_Coefficient_from_mpz_t (c, v);
      ppl_Linear_Expression_add_to_coefficient (common, prefix, c);
      ppl_assign_Linear_Expression_from_Linear_Expression (static_schedule,
							   common);

      build_pbb_scattering_polyhedrons (common, pbb, nb_scat_dims);
							
      ppl_delete_Linear_Expression (common);
    }

  value_clear (v);
  ppl_delete_Coefficient (c);
  ppl_delete_Linear_Expression (static_schedule);
} 

/* Build the LOOPS vector for all bbs in SCOP.  */

static void
build_bb_loops (scop_p scop)
{
  poly_bb_p pbb;
  int i;

  for (i = 0; VEC_iterate (poly_bb_p, SCOP_BBS (scop), i, pbb); i++)
    {
      loop_p loop;
      int depth; 
      gimple_bb_p gbb = PBB_BLACK_BOX (pbb);

      loop = GBB_BB (gbb)->loop_father;  
      depth = sese_loop_depth (SCOP_REGION (scop), loop); 

      GBB_LOOPS (gbb) = VEC_alloc (loop_p, heap, 3);
      VEC_safe_grow_cleared (loop_p, heap, GBB_LOOPS (gbb), depth);


      while (sese_contains_loop (SCOP_REGION(scop), loop))
        {
          VEC_replace (loop_p, GBB_LOOPS (gbb), depth - 1, loop);
          loop = loop_outer (loop);
          depth--;
        }
    }
}

/* Add the value K to the dimension D of the linear expression EXPR.  */

static void
add_value_to_dim (ppl_dimension_type d, ppl_Linear_Expression_t expr, 
		  Value k)
{
  Value val;
  ppl_Coefficient_t coef;

  ppl_new_Coefficient (&coef);
  ppl_Linear_Expression_coefficient (expr, d, coef);
  value_init (val);
  ppl_Coefficient_to_mpz_t (coef, val);

  value_addto (val, val, k);

  ppl_assign_Coefficient_from_mpz_t (coef, val);
  ppl_Linear_Expression_add_to_coefficient (expr, d, coef);
  value_clear (val);
  ppl_delete_Coefficient (coef);
}

/* In the context of scop S, scan E, the right hand side of a scalar
   evolution function in loop VAR, and translate it to a linear
   expression EXPR.  */

static void
scan_tree_for_params_right_scev (sese s, tree e, int var,
				 ppl_Linear_Expression_t expr)
{
  if (expr)
    {
      loop_p loop = get_loop (var);
      ppl_dimension_type l = sese_loop_depth (s, loop) - 1;
      Value val;

      /* We can not deal with parametric strides like:
 
      | p = parameter;
      |
      | for i:
      |   a [i * p] = ...   */
      gcc_assert (TREE_CODE (e) == INTEGER_CST);

      value_init (val);
      value_set_si (val, int_cst_value (e));
      add_value_to_dim (l, expr, val);
      value_clear (val);
    }
}

/* Scan the integer constant CST, and add it to the inhomogeneous part of the
   linear expression EXPR.  */

static void
scan_tree_for_params_int (tree cst, ppl_Linear_Expression_t expr)
{
  Value val;
  ppl_Coefficient_t coef;
  int v = int_cst_value (cst);

  value_init (val);
  value_set_si (val, 0);

  /* Necessary to not get "-1 = 2^n - 1". */
  if (v < 0)
    value_sub_int (val, val, -v);
  else
    value_add_int (val, val, v);

  ppl_new_Coefficient (&coef);
  ppl_assign_Coefficient_from_mpz_t (coef, val);
  ppl_Linear_Expression_add_to_inhomogeneous (expr, coef);
  value_clear (val);
  ppl_delete_Coefficient (coef);
}

/* In the context of sese S, scan the expression E and translate it to
   a linear expression C.  When parsing a symbolic multiplication, K
   represents the constant multiplier of an expression containing
   parameters.  */

static void
scan_tree_for_params (sese s, tree e, ppl_Linear_Expression_t c,
		      Value k)
{
  if (e == chrec_dont_know)
    return;

  switch (TREE_CODE (e))
    {
    case POLYNOMIAL_CHREC:
      scan_tree_for_params_right_scev (s, CHREC_RIGHT (e), CHREC_VARIABLE (e), 
				       c);
				       
      scan_tree_for_params (s, CHREC_LEFT (e), c, k);
      break;

    case MULT_EXPR:
      if (chrec_contains_symbols (TREE_OPERAND (e, 0)))
	{
	  if (c)
	    {
	      Value val;
	      gcc_assert (host_integerp (TREE_OPERAND (e, 1), 0));
	      value_init (val);
	      value_set_si (val, int_cst_value (TREE_OPERAND (e, 1)));
	      value_multiply (k, k, val);
	      value_clear (val);
	    }
	  scan_tree_for_params (s, TREE_OPERAND (e, 0), c, k);
	}
      else
	{
	  if (c)
	    {
	      Value val;
	      gcc_assert (host_integerp (TREE_OPERAND (e, 0), 0));
	      value_init (val);
	      value_set_si (val, int_cst_value (TREE_OPERAND (e, 0)));
	      value_multiply (k, k, val);
	      value_clear (val);
	    }
	  scan_tree_for_params (s, TREE_OPERAND (e, 1), c, k);
	}
      break;

    case PLUS_EXPR:
    case POINTER_PLUS_EXPR:
      scan_tree_for_params (s, TREE_OPERAND (e, 0), c, k);
      scan_tree_for_params (s, TREE_OPERAND (e, 1), c, k);
      break;

    case MINUS_EXPR:
      {
	ppl_Linear_Expression_t tmp_expr = NULL;

        if (c)
	  {
	    ppl_dimension_type dim;
	    ppl_Linear_Expression_space_dimension (c, &dim);
	    ppl_new_Linear_Expression_with_dimension (&tmp_expr, dim);
	  }

	scan_tree_for_params (s, TREE_OPERAND (e, 0), c, k);
	scan_tree_for_params (s, TREE_OPERAND (e, 1), tmp_expr, k);

	if (c)
	  {
	    ppl_subtract_Linear_Expression_from_Linear_Expression (c, tmp_expr);
	    ppl_delete_Linear_Expression (tmp_expr);
	  }

	break;
      }

    case NEGATE_EXPR:
      {
	ppl_Linear_Expression_t tmp_expr = NULL;

	if (c)
	  {
	    ppl_dimension_type dim;
	    ppl_Linear_Expression_space_dimension (c, &dim);
	    ppl_new_Linear_Expression_with_dimension (&tmp_expr, dim);
	  }

	scan_tree_for_params (s, TREE_OPERAND (e, 0), tmp_expr, k);

	if (c)
	  {
	    ppl_subtract_Linear_Expression_from_Linear_Expression (c, tmp_expr);
	    ppl_delete_Linear_Expression (tmp_expr);
	  }

	break;
      }

    case SSA_NAME:
      {
	ppl_dimension_type p = parameter_index_in_region (e, s);
	if (c)
	  {
	    ppl_dimension_type dim;
	    ppl_Linear_Expression_space_dimension (c, &dim);
	    p += dim - sese_nb_params (s);
	    add_value_to_dim (p, c, k);
	  }
	break;
      }

    case INTEGER_CST:
      if (c)
	scan_tree_for_params_int (e, c);
      break;

    CASE_CONVERT:
    case NON_LVALUE_EXPR:
      scan_tree_for_params (s, TREE_OPERAND (e, 0), c, k);
      break;

   default:
      gcc_unreachable ();
      break;
    }
}

/* Data structure for idx_record_params.  */

struct irp_data
{
  struct loop *loop;
  sese sese;
};

/* For a data reference with an ARRAY_REF as its BASE, record the
   parameters occurring in IDX.  DTA is passed in as complementary
   information, and is used by the automatic walker function.  This
   function is a callback for for_each_index.  */

static bool
idx_record_params (tree base, tree *idx, void *dta)
{
  struct irp_data *data = (struct irp_data *) dta;

  if (TREE_CODE (base) != ARRAY_REF)
    return true;

  if (TREE_CODE (*idx) == SSA_NAME)
    {
      tree scev;
      sese sese = data->sese;
      struct loop *loop = data->loop;
      Value one;

      scev = analyze_scalar_evolution (loop, *idx);
      scev = instantiate_scev (block_before_sese (sese), loop, scev);

      value_init (one);
      value_set_si (one, 1);
      scan_tree_for_params (sese, scev, NULL, one);
      value_clear (one);
    }

  return true;
}

/* Find parameters with respect to SESE in BB. We are looking in memory
   access functions, conditions and loop bounds.  */

static void
find_params_in_bb (sese sese, gimple_bb_p gbb)
{
  int i;
  data_reference_p dr;
  gimple stmt;
  loop_p father = GBB_BB (gbb)->loop_father;

  for (i = 0; VEC_iterate (data_reference_p, GBB_DATA_REFS (gbb), i, dr); i++)
    {
      struct irp_data irp;

      irp.loop = father;
      irp.sese = sese;
      for_each_index (&dr->ref, idx_record_params, &irp);
    }

  /* Find parameters in conditional statements.  */ 
  for (i = 0; VEC_iterate (gimple, GBB_CONDITIONS (gbb), i, stmt); i++)
    {
      Value one;
      loop_p loop = father;

      tree lhs, rhs;

      lhs = gimple_cond_lhs (stmt);
      lhs = analyze_scalar_evolution (loop, lhs);
      lhs = instantiate_scev (block_before_sese (sese), loop, lhs);

      rhs = gimple_cond_rhs (stmt);
      rhs = analyze_scalar_evolution (loop, rhs);
      rhs = instantiate_scev (block_before_sese (sese), loop, rhs);

      value_init (one);
      value_set_si (one, 1);
      scan_tree_for_params (sese, lhs, NULL, one);
      scan_tree_for_params (sese, rhs, NULL, one);
      value_clear (one);
    }
}

/* Record the parameters used in the SCOP.  A variable is a parameter
   in a scop if it does not vary during the execution of that scop.  */

static void
find_scop_parameters (scop_p scop)
{
  poly_bb_p pbb;
  unsigned i;
  sese region = SCOP_REGION (scop);
  struct loop *loop;
  Value one;

  value_init (one);
  value_set_si (one, 1);

  /* Find the parameters used in the loop bounds.  */
  for (i = 0; VEC_iterate (loop_p, SESE_LOOP_NEST (region), i, loop); i++)
    {
      tree nb_iters = number_of_latch_executions (loop);

      if (!chrec_contains_symbols (nb_iters))
	continue;

      nb_iters = analyze_scalar_evolution (loop, nb_iters);
      nb_iters = instantiate_scev (block_before_sese (region), loop, nb_iters);
      scan_tree_for_params (region, nb_iters, NULL, one);
    }

  value_clear (one);

  /* Find the parameters used in data accesses.  */
  for (i = 0; VEC_iterate (poly_bb_p, SCOP_BBS (scop), i, pbb); i++)
    find_params_in_bb (region, PBB_BLACK_BOX (pbb));

  SESE_ADD_PARAMS (region) = false;
}

/* Returns a gimple_bb from BB.  */

static inline gimple_bb_p
gbb_from_bb (basic_block bb)
{
  return (gimple_bb_p) bb->aux;
}

/* Builds the constraint polyhedra for LOOP in SCOP.  OUTER_PH gives
   the constraints for the surrounding loops.  */

static void
build_loop_iteration_domains (scop_p scop, struct loop *loop,
                              ppl_Polyhedron_t outer_ph, int nb)

{
  int i;
  poly_bb_p pbb;
  Value one, minus_one, val;
  ppl_Polyhedron_t ph;
  ppl_Linear_Expression_t lb_expr, ub_expr;
  ppl_Constraint_t lb, ub;
  ppl_Coefficient_t coef;
  ppl_const_Constraint_System_t pcs;
  tree nb_iters = number_of_latch_executions (loop);
  ppl_dimension_type dim = nb + 1 + scop_nb_params (scop);
  ppl_dimension_type *map;

  value_init (one);
  value_init (minus_one);
  value_init (val);
  value_set_si (one, 1);
  value_set_si (minus_one, -1);

  ppl_new_Linear_Expression_with_dimension (&lb_expr, dim);
  ppl_new_Linear_Expression_with_dimension (&ub_expr, dim);
  ppl_new_NNC_Polyhedron_from_space_dimension (&ph, dim, 0);

  /* 0 <= loop_i */
  ppl_new_Coefficient_from_mpz_t (&coef, one);
  ppl_Linear_Expression_add_to_coefficient (lb_expr, nb, coef);
  ppl_new_Constraint (&lb, lb_expr, PPL_CONSTRAINT_TYPE_GREATER_OR_EQUAL);
  ppl_delete_Linear_Expression (lb_expr);

  /* loop_i <= nb_iters */
  ppl_assign_Coefficient_from_mpz_t (coef, minus_one);
  ppl_Linear_Expression_add_to_coefficient (ub_expr, nb, coef);

  if (TREE_CODE (nb_iters) == INTEGER_CST)
    {
      value_set_si (val, int_cst_value (nb_iters));
      ppl_assign_Coefficient_from_mpz_t (coef, val);
      ppl_Linear_Expression_add_to_inhomogeneous (ub_expr, coef);
      ppl_new_Constraint (&ub, ub_expr, PPL_CONSTRAINT_TYPE_GREATER_OR_EQUAL);
    }
  else if (!chrec_contains_undetermined (nb_iters))
    {
      nb_iters = analyze_scalar_evolution (loop, nb_iters);
      nb_iters = instantiate_scev (block_before_sese (SCOP_REGION (scop)), loop,
						      nb_iters);
      scan_tree_for_params (SCOP_REGION (scop), nb_iters, ub_expr, one);
      ppl_new_Constraint (&ub, ub_expr, PPL_CONSTRAINT_TYPE_GREATER_OR_EQUAL);
    }
  else
    gcc_unreachable ();

  ppl_delete_Linear_Expression (ub_expr);
  ppl_Polyhedron_get_constraints (outer_ph, &pcs);
  ppl_Polyhedron_add_constraints (ph, pcs);

  map = (ppl_dimension_type *) XNEWVEC (ppl_dimension_type, dim);
  for (i = 0; i < (int) nb; i++)
    map[i] = i;
  for (i = (int) nb; i < (int) dim - 1; i++)
    map[i] = i + 1;
  map[dim - 1] = nb;

  ppl_Polyhedron_map_space_dimensions (ph, map, dim);
  free (map);
  ppl_Polyhedron_add_constraint (ph, lb);
  ppl_Polyhedron_add_constraint (ph, ub);
  ppl_delete_Constraint (lb);
  ppl_delete_Constraint (ub);

  if (loop->inner && loop_in_sese_p (loop->inner, SCOP_REGION (scop)))
    build_loop_iteration_domains (scop, loop->inner, ph, nb + 1);

  if (nb != 0
      && loop->next
      && loop_in_sese_p (loop->next, SCOP_REGION (scop)))
    build_loop_iteration_domains (scop, loop->next, outer_ph, nb);

  for (i = 0; VEC_iterate (poly_bb_p, SCOP_BBS (scop), i, pbb); i++)
    if (gbb_loop (PBB_BLACK_BOX (pbb)) == loop)
      {
	ppl_delete_Pointset_Powerset_NNC_Polyhedron (PBB_DOMAIN (pbb));
	ppl_new_Pointset_Powerset_NNC_Polyhedron_from_NNC_Polyhedron (
	  &PBB_DOMAIN (pbb), ph);
      }

  ppl_delete_Coefficient (coef);
  ppl_delete_Polyhedron (ph);
  value_clear (one);
  value_clear (minus_one);
  value_clear (val);
}

/* Returns a linear expression for tree T evaluated in PBB.  */

static ppl_Linear_Expression_t
create_linear_expr_from_tree (poly_bb_p pbb, tree t)
{
  Value one;
  gimple_bb_p gbb = PBB_BLACK_BOX (pbb);
  loop_p loop = GBB_BB (gbb)->loop_father;
  ppl_Linear_Expression_t res;
  ppl_dimension_type dim;
  scop_p scop = PBB_SCOP (pbb);
  basic_block before_scop = block_before_sese (SCOP_REGION (scop));

  value_init (one);
  value_set_si (one, 1);
  dim = pbb_nb_loops (pbb) + scop_nb_params (scop);
  ppl_new_Linear_Expression_with_dimension (&res, dim);

  t = analyze_scalar_evolution (loop, t);
  t = instantiate_scev (before_scop, loop, t);
  scan_tree_for_params (SCOP_REGION (scop), t, res, one);

  value_clear (one);
 
  return res; 
}

/* Returns the ppl constraint type from the gimple tree code CODE.  */

static enum ppl_enum_Constraint_Type
ppl_constraint_type_from_tree_code (enum tree_code code)
{
  switch (code)
    {
    case LT_EXPR:
      return PPL_CONSTRAINT_TYPE_LESS_THAN;

    case GT_EXPR:
      return PPL_CONSTRAINT_TYPE_GREATER_THAN;

    case LE_EXPR:
      return PPL_CONSTRAINT_TYPE_LESS_OR_EQUAL;

    case GE_EXPR:
      return PPL_CONSTRAINT_TYPE_GREATER_OR_EQUAL;

    case EQ_EXPR:
      return PPL_CONSTRAINT_TYPE_EQUAL;

    default:
      gcc_unreachable ();
    }
}

/* Add conditional statement STMT to PS.  It is evaluated in PBB and
   CODE is used as the comparison operator.  This allows us to invert the
   condition or to handle inequalities.  */

static void
add_condition_to_domain (ppl_Pointset_Powerset_NNC_Polyhedron_t ps, gimple stmt,
			 poly_bb_p pbb, enum tree_code code)
{
  ppl_Linear_Expression_t left, right;
  ppl_Constraint_t cstr;
  enum ppl_enum_Constraint_Type type;

  type = ppl_constraint_type_from_tree_code (code);

  left = create_linear_expr_from_tree (pbb, gimple_cond_lhs (stmt));
  right = create_linear_expr_from_tree (pbb, gimple_cond_rhs (stmt));
  ppl_subtract_Linear_Expression_from_Linear_Expression (left, right);

  ppl_new_Constraint (&cstr, left, type);
  ppl_Pointset_Powerset_NNC_Polyhedron_add_constraint (ps, cstr); 

  ppl_delete_Constraint (cstr);
  ppl_delete_Linear_Expression (left);
  ppl_delete_Linear_Expression (right);
}

/* Add conditional statement STMT to pbb.  CODE is used as the comparision
   operator.  This allows us to invert the condition or to handle
   inequalities.  */

static void
add_condition_to_pbb (poly_bb_p pbb, gimple stmt, enum tree_code code)
{
  if (code == NE_EXPR)
    {
      ppl_Pointset_Powerset_NNC_Polyhedron_t left = PBB_DOMAIN (pbb); 
      ppl_Pointset_Powerset_NNC_Polyhedron_t right;
ppl_new_Pointset_Powerset_NNC_Polyhedron_from_Pointset_Powerset_NNC_Polyhedron (
  &right, left);
      add_condition_to_domain (left, stmt, pbb, LT_EXPR);
      add_condition_to_domain (right, stmt, pbb, GT_EXPR);
      ppl_Pointset_Powerset_NNC_Polyhedron_concatenate_assign (left,
							       right);
      ppl_delete_Pointset_Powerset_NNC_Polyhedron (right);
    }
  else
    add_condition_to_domain (PBB_DOMAIN (pbb), stmt, pbb, GT_EXPR);
}

/* Add conditions to the domain of PBB.  */

static void
add_conditions_to_domain (poly_bb_p pbb)
{
  unsigned int i;
  gimple stmt;
  gimple_bb_p gbb = PBB_BLACK_BOX (pbb);
  VEC (gimple, heap) *conditions = GBB_CONDITIONS (gbb);

  if (VEC_empty (gimple, conditions))
    return;

  for (i = 0; VEC_iterate (gimple, conditions, i, stmt); i++)
    switch (gimple_code (stmt))
      {
      case GIMPLE_COND:
	  {
	    enum tree_code code = gimple_cond_code (stmt);

	    /* The conditions for ELSE-branches are inverted.  */
	    if (VEC_index (gimple, gbb->condition_cases, i) == NULL)
	      code = invert_tree_comparison (code, false);
	    
	    add_condition_to_pbb (pbb, stmt, code);
	    break;
	  }

      case GIMPLE_SWITCH:
	/* Switch statements are not supported right now - fall throught.  */

      default:
	gcc_unreachable ();
	break;
      }
}

/* Returns true when PHI defines an induction variable in the loop
   containing the PHI node.  */

static bool
phi_node_is_iv (gimple phi)
{
  loop_p loop = gimple_bb (phi)->loop_father;
  tree scev = analyze_scalar_evolution (loop, gimple_phi_result (phi));

  return tree_contains_chrecs (scev, NULL);
}

/* Returns true when BB contains scalar phi nodes that are not an
   induction variable of a loop.  */

static bool
bb_contains_non_iv_scalar_phi_nodes (basic_block bb)
{
  gimple phi = NULL;
  gimple_stmt_iterator si;

  for (si = gsi_start_phis (bb); !gsi_end_p (si); gsi_next (&si))
    if (is_gimple_reg (gimple_phi_result (gsi_stmt (si))))
      {
	/* Store the unique scalar PHI node: at this point, loops
	   should be in cannonical form, so we expect to see at most
	   one scalar phi node in the loop header.  */
	if (phi || bb != bb->loop_father->header)
	  return true;

	phi = gsi_stmt (si);
      }

  if (!phi || phi_node_is_iv (phi))
    return false;

  return true;
}

/* Check if SCOP contains non scalar phi nodes.  */

static bool
scop_contains_non_iv_scalar_phi_nodes (scop_p scop)
{
  int i;
  poly_bb_p pbb;

  for (i = 0; VEC_iterate (poly_bb_p, SCOP_BBS (scop), i, pbb); i++)
    if (bb_contains_non_iv_scalar_phi_nodes (GBB_BB (PBB_BLACK_BOX (pbb))))
      return true;

  return false;
}

/* Flag in MAP all the BBs in SCOP.  */

static void
flag_bb_in_region (sbitmap map, sese region)
{
  basic_block bb;

  FOR_EACH_BB (bb)
    if (bb_in_region (bb, SESE_ENTRY_BB (region), SESE_EXIT_BB (region)))
      SET_BIT (map, bb->index);
}

/* Structure used to pass data to dom_walk.  */

struct bsc
{
  VEC (gimple, heap) **conditions, **cases;
};

/* Returns non NULL when BB has a single predecessor and the last
   statement of that predecessor is a COND_EXPR.  */

static gimple
single_pred_cond (basic_block bb)
{
  if (single_pred_p (bb))
    {
      edge e = single_pred_edge (bb);
      basic_block pred = e->src;
      gimple stmt = last_stmt (pred);

      if (stmt && gimple_code (stmt) == GIMPLE_COND)
	return stmt;
    }
  return NULL;
}

/* Call-back for dom_walk executed before visiting the dominated
   blocks.  */

static void
build_sese_conditions_before (struct dom_walk_data *dw_data,
			      basic_block bb)
{
  struct bsc *data = (struct bsc *) dw_data->global_data;
  VEC (gimple, heap) **conditions = data->conditions;
  VEC (gimple, heap) **cases = data->cases;
  gimple_bb_p gbb = gbb_from_bb (bb);
  gimple stmt = single_pred_cond (bb);

  if (stmt)
    {
      edge e = single_pred_edge (bb);

      VEC_safe_push (gimple, heap, *conditions, stmt);

      if (e->flags & EDGE_TRUE_VALUE)
	VEC_safe_push (gimple, heap, *cases, stmt);
      else 
	VEC_safe_push (gimple, heap, *cases, NULL);
    }

  if (gbb)
    {
      GBB_CONDITIONS (gbb) = VEC_copy (gimple, heap, *conditions);
      GBB_CONDITION_CASES (gbb) = VEC_copy (gimple, heap, *cases);
    }
}

/* Call-back for dom_walk executed after visiting the dominated
   blocks.  */

static void
build_sese_conditions_after (struct dom_walk_data *dw_data,
			     basic_block bb)
{
  struct bsc *data = (struct bsc *) dw_data->global_data;
  VEC (gimple, heap) **conditions = data->conditions;
  VEC (gimple, heap) **cases = data->cases;

  if (single_pred_cond (bb))
    {
      VEC_pop (gimple, *conditions);
      VEC_pop (gimple, *cases);
    }
}

/* Record all conditions in REGION.  */

static void 
build_sese_conditions (sese region)
{
  struct dom_walk_data walk_data;
  VEC (gimple, heap) *conditions = VEC_alloc (gimple, heap, 3);
  VEC (gimple, heap) *cases = VEC_alloc (gimple, heap, 3);
  sbitmap map = sbitmap_alloc (last_basic_block);
  struct bsc data;

  sbitmap_zero (map);
  flag_bb_in_region (map, region);

  data.conditions = &conditions;
  data.cases = &cases;

  walk_data.walk_stmts_backward = false;
  walk_data.dom_direction = CDI_DOMINATORS;
  walk_data.initialize_block_local_data = NULL;
  walk_data.before_dom_children_before_stmts = build_sese_conditions_before;
  walk_data.before_dom_children_walk_stmts = NULL;
  walk_data.before_dom_children_after_stmts = NULL;
  walk_data.after_dom_children_before_stmts = build_sese_conditions_after;
  walk_data.after_dom_children_walk_stmts = NULL;
  walk_data.after_dom_children_after_stmts = NULL;
  walk_data.global_data = &data;
  walk_data.block_local_data_size = 0;
  walk_data.interesting_blocks = map;

  init_walk_dominator_tree (&walk_data);
  walk_dominator_tree (&walk_data, SESE_ENTRY_BB (region));
  fini_walk_dominator_tree (&walk_data);

  sbitmap_free (map);
  VEC_free (gimple, heap, conditions);
  VEC_free (gimple, heap, cases);
}

/* Traverses all the GBBs of the SCOP and add their constraints to the
   iteration domains.  */

static void
add_conditions_to_constraints (scop_p scop)
{
  int i;
  poly_bb_p pbb;

  for (i = 0; VEC_iterate (poly_bb_p, SCOP_BBS (scop), i, pbb); i++)
    add_conditions_to_domain (pbb);
}

/* Build the iteration domains: the loops belonging to the current
   SCOP, and that vary for the execution of the current basic block.
   Returns false if there is no loop in SCOP.  */

static void 
build_scop_iteration_domain (scop_p scop)
{
  struct loop *loop;
  sese region = SCOP_REGION (scop);
  int i;

  /* Build cloog loop for all loops, that are in the uppermost loop layer of
     this SCoP.  */
  for (i = 0; VEC_iterate (loop_p, SESE_LOOP_NEST (region), i, loop); i++)
    if (!loop_in_sese_p (loop_outer (loop), region)) 
      {
	ppl_Polyhedron_t ph;
	ppl_new_NNC_Polyhedron_from_space_dimension (&ph, 0, 0);
	build_loop_iteration_domains (scop, loop, ph, 0);
	ppl_delete_Polyhedron (ph);
      }
}

/* Build data accesses for DR in PBB.  */

static void
build_poly_dr (data_reference_p dr, poly_bb_p pbb)
{
  Value v;
  ppl_Polyhedron_t accesses;
  int i, dr_nb_subscripts = DR_NUM_DIMENSIONS (dr);

  scop_p scop = PBB_SCOP (pbb);
  sese region = SCOP_REGION (scop);
  ppl_dimension_type dom_nb_dims = scop_nb_params (scop) + pbb_nb_loops (pbb);
  ppl_dimension_type accessp_nb_dims = dom_nb_dims + 1 + dr_nb_subscripts;
  ppl_new_NNC_Polyhedron_from_space_dimension (&accesses, accessp_nb_dims, 0);
					       
  value_init (v);

  /* Set alias set to 1 for all accesses.
     TODO: Set alias set depending on the memory base of the dr.  */
  {
    ppl_Linear_Expression_t alias;
    ppl_Coefficient_t c;
    ppl_Constraint_t cstr;
    
    ppl_new_Coefficient (&c);
    ppl_new_Linear_Expression_with_dimension (&alias, accessp_nb_dims);
    value_set_si (v, 1);
    add_value_to_dim (dom_nb_dims, alias, v);

    value_set_si (v, -1);
    ppl_assign_Coefficient_from_mpz_t (c, v);
    ppl_Linear_Expression_add_to_inhomogeneous (alias, c);

    ppl_new_Constraint (&cstr, alias, PPL_CONSTRAINT_TYPE_EQUAL);
    ppl_Polyhedron_add_constraint (accesses, cstr);

    ppl_delete_Linear_Expression (alias);
    ppl_delete_Constraint (cstr); 
  }
  
  for (i = 0; i < dr_nb_subscripts; i++)
    {
      ppl_Linear_Expression_t fn, access;
      ppl_Constraint_t cstr;

      ppl_new_Linear_Expression_with_dimension (&fn, dom_nb_dims);
      ppl_new_Linear_Expression_with_dimension (&access, accessp_nb_dims);

      value_set_si (v, 1);
      scan_tree_for_params (region, DR_ACCESS_FN (dr, i), fn, v);
      ppl_assign_Linear_Expression_from_Linear_Expression (access, fn);

      add_value_to_dim (dom_nb_dims + 1 + i, access, v);
      ppl_new_Constraint (&cstr, access, PPL_CONSTRAINT_TYPE_EQUAL);
      ppl_Polyhedron_add_constraint (accesses, cstr);

      ppl_delete_Linear_Expression (fn);
      ppl_delete_Linear_Expression (access);
      ppl_delete_Constraint (cstr); 
    }

  value_clear (v);
}

/* Build the data references for PBB.  */

static void
build_pbb_drs (poly_bb_p pbb)
{
  int j;
  data_reference_p dr;
  VEC (data_reference_p, heap) *gbb_drs = GBB_DATA_REFS (PBB_BLACK_BOX (pbb));

  for (j = 0; VEC_iterate (data_reference_p, gbb_drs, j, dr); j++)
    build_poly_dr (dr, pbb);
}

/* Build data references in SCOP.  */

static void
build_scop_drs (scop_p scop)
{
  int i;
  poly_bb_p pbb;

  for (i = 0; VEC_iterate (poly_bb_p, SCOP_BBS (scop), i, pbb); i++)
    build_pbb_drs (pbb);
}

/* Builds the polyhedral representation for a SESE region.  */

bool
build_poly_scop (scop_p scop)
{
  sese region = SCOP_REGION (scop);
  build_scop_bbs (scop);
  build_sese_loop_nests (region);
  if (scop_contains_non_iv_scalar_phi_nodes (scop))
    return false;

  build_bb_loops (scop);
  build_sese_conditions (region);
  find_scop_parameters (scop);
  scop_set_nb_params (scop, sese_nb_params (region));
  build_scop_iteration_domain (scop);
  add_conditions_to_constraints (scop);
  build_scop_scattering (scop);
  if (0)
    build_scop_drs (scop);

  return true;
}

/* Always return false.  Exercise the scop_to_clast function.  */

void
check_poly_representation (scop_p scop)
{
#ifdef ENABLE_CHECKING
  cloog_prog_clast pc = scop_to_clast (scop);
  cloog_clast_free (pc.stmt);
  cloog_program_free (pc.prog);
#endif
}
#endif
