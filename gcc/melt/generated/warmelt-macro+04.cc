/* GCC MELT GENERATED C++ FILE warmelt-macro+04.cc - DO NOT EDIT - see http://gcc-melt.org/ */
/* secondary MELT generated C++ file of rank #4 */
#include "melt-run.h"


/* used hash from melt-run.h when compiling this file: */
MELT_EXTERN const char meltrun_used_md5_melt_f4[] = MELT_RUN_HASHMD5 /* from melt-run.h */;


/**** warmelt-macro+04.cc declarations ****/
/**** MELT GENERATED DECLARATIONS for warmelt-macro ** DO NOT EDIT ; see gcc-melt.org ****/

/****++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
***
    Copyright 2008 - 2013 Free Software Foundation, Inc.
    Contributed by Basile Starynkevitch <basile@starynkevitch.net>

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
    <http://www.gnu.org/licenses/>.
***
----------------------------------------------------------------****/


/** ordinary MELT module meltbuild-sources/warmelt-macro**/
#define MELT_HAS_INITIAL_ENVIRONMENT 1 /*usualmodule*/



class Melt_InitialClassyFrame_WARMELTmiMACRO_h584434599; // forward declaration fromline 6543
typedef Melt_InitialClassyFrame_WARMELTmiMACRO_h584434599 Melt_InitialFrame;
/*** 6 MELT module variables declarations ****/
MELT_EXTERN void melt_forwarding_module_data (void);
MELT_EXTERN void melt_marking_module_data (void);

MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY melt_WARMELTmiMACRO_module_var_ptr_tab[16];
MELT_EXTERN bool MELT_MODULE_VISIBILITY melt_WARMELTmiMACRO_module_var_flags[1];

static inline melt_ptr_t
melt_module_var_fetch (int ix)
{
    return (ix > 0  &&  ix <= 6)?melt_WARMELTmiMACRO_module_var_ptr_tab[ix]:NULL;
}

static inline void
melt_module_var_put (int ix, melt_ptr_t val)
{
    if (ix > 0  &&  ix <= 6)
        {
            melt_WARMELTmiMACRO_module_var_ptr_tab[ix]= val;
            melt_WARMELTmiMACRO_module_var_flags[ix/16] = true;
        }
}

/* MELT module variables indexes */
enum
{
    meltmodatix_none,
    meltmodvarix_DIAGV_GIMPLE_symb = 1,
    meltmodvarix_DIAGV_GIMPLE_SEQ_symb = 2,
    meltmodvarix_DIAGV_TREE_symb = 3,
    meltmodvarix_DIAGV_BASIC_BLOCK_symb = 4,
    meltmodvarix_DIAGV_EDGE_symb = 5,
    meltmodvarix_MELT_TRANSRUNMACRO_CLOS_symb = 6,
    meltmodatix_last
}; /* end MELT module variables indexes */

/*** 6 MELT called hook declarations ***/

/*declare MELT called hook #0 HOOK_FRESH_ENVIRONMENT_REFERENCE_MAKER **/
MELT_EXTERN melt_ptr_t melthook_HOOK_FRESH_ENVIRONMENT_REFERENCE_MAKER (melt_ptr_t melthookdatap, melt_ptr_t meltinp0_PREVENV, const char* meltinp1_MODULNAME);

/*declare MELT called hook #1 HOOK_MACRO_EXPORTER **/
MELT_EXTERN void melthook_HOOK_MACRO_EXPORTER (melt_ptr_t melthookdatap, melt_ptr_t meltinp0_SYM, melt_ptr_t meltinp1_VAL, melt_ptr_t meltinp2_CONTENV);

/*declare MELT called hook #2 HOOK_MELT_MAKE_LOCATION **/
MELT_EXTERN melt_ptr_t melthook_HOOK_MELT_MAKE_LOCATION (melt_ptr_t melthookdatap, const char* meltinp0_FILENAME, long meltinp1_LINENO);

/*declare MELT called hook #3 HOOK_PATMACRO_EXPORTER **/
MELT_EXTERN void melthook_HOOK_PATMACRO_EXPORTER (melt_ptr_t melthookdatap, melt_ptr_t meltinp0_SYM, melt_ptr_t meltinp1_MACVAL, melt_ptr_t meltinp2_PATVAL, melt_ptr_t meltinp3_CONTENV);

/*declare MELT called hook #4 HOOK_SYMBOL_IMPORTER **/
MELT_EXTERN melt_ptr_t melthook_HOOK_SYMBOL_IMPORTER (melt_ptr_t melthookdatap, const char* meltinp0_SYMNAMESTR, const char* meltinp1_MODULENAMESTR, melt_ptr_t meltinp2_PARENV);

/*declare MELT called hook #5 HOOK_VALUE_EXPORTER **/
MELT_EXTERN void melthook_HOOK_VALUE_EXPORTER (melt_ptr_t melthookdatap, melt_ptr_t meltinp0_SYM, melt_ptr_t meltinp1_VAL, melt_ptr_t meltinp2_CONTENV);

/*** end of 6 MELT called hook declarations ***/

/*** no extra MELT c-headers ***/




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_1_WARMELTmiMACRO_REGISTER_DIAG_GIMPLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_2_WARMELTmiMACRO_REGISTER_DIAG_GIMPLE_SEQ(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_3_WARMELTmiMACRO_REGISTER_DIAG_TREE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_4_WARMELTmiMACRO_REGISTER_DIAG_BASIC_BLOCK(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_5_WARMELTmiMACRO_REGISTER_DIAG_EDGE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_6_WARMELTmiMACRO_DIAGNOSTIC_ARGS_MACRO(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_7_WARMELTmiMACRO_DIAGNOSTIC_EXPAND_MESSAGE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_8_WARMELTmiMACRO_ERROR_AT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_9_WARMELTmiMACRO_WARNING_AT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_10_WARMELTmiMACRO_INFORM_AT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_11_WARMELTmiMACRO_MELT_MAKE_SEXPR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_12_WARMELTmiMACRO_S_EXPR_WEIGHT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_13_WARMELTmiMACRO_LAMBDA_cl1(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_14_WARMELTmiMACRO_EXPAND_RESTLIST_AS_LIST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_15_WARMELTmiMACRO_EXPAND_RESTLIST_AS_TUPLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_16_WARMELTmiMACRO_EXPAND_PAIRLIST_AS_LIST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_17_WARMELTmiMACRO_EXPAND_PAIRLIST_AS_TUPLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_18_WARMELTmiMACRO_REGISTER_GENERATOR_DEVICE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_19_WARMELTmiMACRO_EXPAND_APPLY(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_20_WARMELTmiMACRO_EXPAND_MSEND(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_21_WARMELTmiMACRO_EXPAND_FIELDEXPR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_22_WARMELTmiMACRO_EXPAND_CITERATION(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_23_WARMELTmiMACRO_EXPAND_CMATCHEXPR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_24_WARMELTmiMACRO_EXPAND_FUNMATCHEXPR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_25_WARMELTmiMACRO_EXPAND_KEYWORDFUN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_26_WARMELTmiMACRO_MACROEXPAND_1(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_27_WARMELTmiMACRO_LAMBDA_cl2(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_28_WARMELTmiMACRO_EXPAND_PRIMITIVE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_29_WARMELTmiMACRO_EXPAND_HOOK(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_30_WARMELTmiMACRO_PATTERNEXPAND_PAIRLIST_AS_TUPLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_31_WARMELTmiMACRO_LAMBDA_cl3(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_32_WARMELTmiMACRO_PATMACEXPAND_FOR_MATCHER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_33_WARMELTmiMACRO_LAMBDA_cl4(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_34_WARMELTmiMACRO_LAMBDA_cl5(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_35_WARMELTmiMACRO_PATTERN_WEIGHT_TUPLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_36_WARMELTmiMACRO_LAMBDA_cl6(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_37_WARMELTmiMACRO_PATTERNEXPAND_EXPR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_38_WARMELTmiMACRO_PATTERNEXPAND_1(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_39_WARMELTmiMACRO_MACROEXPAND_TOPLEVEL_LIST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_40_WARMELTmiMACRO_LAMBDA_ARG_BINDINGS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_41_WARMELTmiMACRO_INSTALL_INITIAL_MACRO(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_42_WARMELTmiMACRO_INSTALL_INITIAL_PATMACRO(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_43_WARMELTmiMACRO_WARN_IF_REDEFINED(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_44_WARMELTmiMACRO_FLATTEN_FOR_C_CODE_EXPANSION(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_45_WARMELTmiMACRO_PARSE_PAIRLIST_C_CODE_EXPANSION(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_46_WARMELTmiMACRO_CHECK_C_EXPANSION(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_47_WARMELTmiMACRO_MELT_REGISTER_TRANSLATOR_RUNNER_MACROEXPANSIONS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_48_WARMELTmiMACRO_MELT_INVOKE_TRANSLATOR_RUNNER_MACROEXPANSIONS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_49_WARMELTmiMACRO_MEXPAND_DEFPRIMITIVE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_50_WARMELTmiMACRO_MEXPAND_DEFCITERATOR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_51_WARMELTmiMACRO_MEXPAND_DEFCMATCHER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_52_WARMELTmiMACRO_LAMBDA_cl7(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_53_WARMELTmiMACRO_MEXPAND_DEFUNMATCHER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_54_WARMELTmiMACRO_LAMBDA_cl8(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_55_WARMELTmiMACRO_MEXPAND_DEFUN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_56_WARMELTmiMACRO_MELT_DELAYED_MACRO_EXPANDER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_57_WARMELTmiMACRO_MEXPAND_DEFMACRO(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_58_WARMELTmiMACRO_LAMBDA_cl9(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_MACRO_INSTALLER**/

/** declaration of hook melthook_HOOK_MACRO_INSTALLER */
MELT_EXTERN
void melthook_HOOK_MACRO_INSTALLER(melt_ptr_t melthookdatap,
                                   melt_ptr_t meltinp0_MBIND,
                                   melt_ptr_t meltinp1_MEXPCLOS)
;



/** end of declaration for hook melthook_HOOK_MACRO_INSTALLER**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_60_WARMELTmiMACRO_MEXPAND_DEFVAR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_61_WARMELTmiMACRO_MEXPAND_DEFHOOK(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_62_WARMELTmiMACRO_MEXPAND_DEFINE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_63_WARMELTmiMACRO_LAMBDA_cl10(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_64_WARMELTmiMACRO_SCAN_DEFCLASS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_65_WARMELTmiMACRO_MEXPAND_DEFCLASS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_66_WARMELTmiMACRO_PARSE_FIELD_ASSIGNMENT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_67_WARMELTmiMACRO_LAMBDA_cl11(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_68_WARMELTmiMACRO_MEXPAND_DEFINSTANCE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_69_WARMELTmiMACRO_MEXPAND_DEFSELECTOR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_70_WARMELTmiMACRO_MEXPAND_INSTANCE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_71_WARMELTmiMACRO_MEXPAND_LOAD(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_72_WARMELTmiMACRO_PARSE_FIELD_PATTERN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_73_WARMELTmiMACRO_LAMBDA_cl12(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_74_WARMELTmiMACRO_PATEXPAND_INSTANCE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_75_WARMELTmiMACRO_LAMBDA_cl13(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_76_WARMELTmiMACRO_PATEXPAND_OBJECT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_77_WARMELTmiMACRO_LAMBDA_cl14(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_78_WARMELTmiMACRO_MEXPAND_OBJECT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_79_WARMELTmiMACRO_EXPAND_MACROSTRING_PAIRS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_80_WARMELTmiMACRO_LAMBDA_cl15(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_81_WARMELTmiMACRO_MEXPAND_CODE_CHUNK(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_82_WARMELTmiMACRO_MEXPAND_EXPR_CHUNK(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_83_WARMELTmiMACRO_MEXPAND_UNSAFE_PUT_FIELDS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_88_WARMELTmiMACRO_LAMBDA_cl16(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_90_WARMELTmiMACRO_MEXPAND_IF(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_94_WARMELTmiMACRO_LAMBDA_cl17(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_98_WARMELTmiMACRO_MEXPAND_COND(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_99_WARMELTmiMACRO_LAMBDA_cl18(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_100_WARMELTmiMACRO_MEXPAND_AND(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_101_WARMELTmiMACRO_LAMBDA_cl19(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_102_WARMELTmiMACRO_PATEXPAND_AS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_103_WARMELTmiMACRO_MEXPAND_AS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_105_WARMELTmiMACRO_PATEXPAND_AND(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_106_WARMELTmiMACRO_MEXPAND_OR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_107_WARMELTmiMACRO_LAMBDA_cl20(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_108_WARMELTmiMACRO_PATEXPAND_OR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_109_WARMELTmiMACRO_MEXPAND_REFERENCE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_110_WARMELTmiMACRO_PATEXPAND_REFERENCE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_111_WARMELTmiMACRO_MEXPANDOBSOLETE_CONTAINER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_112_WARMELTmiMACRO_PATEXPANDOBSOLETE_CONTAINER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_113_WARMELTmiMACRO_MEXPAND_DEREF(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_114_WARMELTmiMACRO_MEXPANDOBSOLETE_CONTENT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_115_WARMELTmiMACRO_MEXPAND_SET_REF(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_116_WARMELTmiMACRO_MEXPAND_PLUS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_117_WARMELTmiMACRO_MEXPAND_MINUS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_118_WARMELTmiMACRO_MEXPAND_TIMES(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_119_WARMELTmiMACRO_MEXPAND_DIV(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_120_WARMELTmiMACRO_MEXPAND_TUPLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_121_WARMELTmiMACRO_PATEXPAND_TUPLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_122_WARMELTmiMACRO_MEXPAND_LIST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_123_WARMELTmiMACRO_PATEXPAND_LIST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_124_WARMELTmiMACRO_MEXPAND_MATCH(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_125_WARMELTmiMACRO_LAMBDA_cl21(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_126_WARMELTmiMACRO_MEXPAND_MATCHALT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_127_WARMELTmiMACRO_LAMBDA_cl22(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_128_WARMELTmiMACRO_MEXPAND_LETBINDING(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_129_WARMELTmiMACRO_MEXPAND_LET(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_130_WARMELTmiMACRO_LAMBDA_cl23(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_131_WARMELTmiMACRO_LAMBDA_cl24(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_132_WARMELTmiMACRO_YES_RECURSIVELY_CONSTRUCTIBLE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_133_WARMELTmiMACRO_MEXPAND_LETREC(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_134_WARMELTmiMACRO_LAMBDA_cl25(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_135_WARMELTmiMACRO_LAMBDA_cl26(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_136_WARMELTmiMACRO_MEXPAND_LAMBDA(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_137_WARMELTmiMACRO_LAMBDA_cl27(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_138_WARMELTmiMACRO_MEXPAND_VARIADIC(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_139_WARMELTmiMACRO_LAMBDA_cl28(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_140_WARMELTmiMACRO_LAMBDA_cl29(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_141_WARMELTmiMACRO_LAMBDA_cl30(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_142_WARMELTmiMACRO_LAMBDA_cl31(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_143_WARMELTmiMACRO_MEXPAND_MULTICALL(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_144_WARMELTmiMACRO_LAMBDA_cl32(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_145_WARMELTmiMACRO_LAMBDA_cl33(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_146_WARMELTmiMACRO_EXPAND_QUOTED_SEXPR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_147_WARMELTmiMACRO_MEXPAND_QUOTE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_148_WARMELTmiMACRO_ANTIQUOTER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_149_WARMELTmiMACRO_MEXPAND_BACKQUOTE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_150_WARMELTmiMACRO_MEXPAND_COMMA(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_151_WARMELTmiMACRO_MEXPAND_BOX(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_152_WARMELTmiMACRO_MEXPAND_CONSTANT_BOX(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_153_WARMELTmiMACRO_MEXPAND_UNBOX(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_154_WARMELTmiMACRO_MEXPAND_COMMENT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_155_WARMELTmiMACRO_MEXPAND_CHEADER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_156_WARMELTmiMACRO_MEXPAND_CIMPLEMENT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_157_WARMELTmiMACRO_MEXPAND_USE_PACKAGE_FROM_PKG_CONFIG(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_158_WARMELTmiMACRO_PAIRLIST_TO_RETURN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_159_WARMELTmiMACRO_LAMBDA_cl34(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_160_WARMELTmiMACRO_MEXPAND_PROGN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_161_WARMELTmiMACRO_MEXPAND_RETURN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_162_WARMELTmiMACRO_MEXPAND_FOREVER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_163_WARMELTmiMACRO_LAMBDA_cl35(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_164_WARMELTmiMACRO_MEXPAND_EXIT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_165_WARMELTmiMACRO_LAMBDA_cl36(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_166_WARMELTmiMACRO_MEXPAND_AGAIN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_167_WARMELTmiMACRO_MEXPAND_COMPILE_WARNING(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_168_WARMELTmiMACRO_MEXPAND_ASSERT_MSG(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_169_WARMELTmiMACRO_MEXPAND_THIS_LINE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_170_WARMELTmiMACRO_MEXPAND_THIS_FILE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_171_WARMELTmiMACRO_MEXPAND_DEBUG(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_172_WARMELTmiMACRO_MEXPAND_EXPORT_VALUES(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_173_WARMELTmiMACRO_LAMBDA_cl37(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_174_WARMELTmiMACRO_MEXPAND_EXPORT_MACRO(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_175_WARMELTmiMACRO_MEXPAND_EXPORT_PATMACRO(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_176_WARMELTmiMACRO_MEXPAND_EXPORT_CLASS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_177_WARMELTmiMACRO_LAMBDA_cl38(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_178_WARMELTmiMACRO_MEXPAND_EXPORT_SYNONYM(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_179_WARMELTmiMACRO_MEXPAND_CURRENT_MODULE_ENVIRONMENT_REFERENCE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_180_WARMELTmiMACRO_MEXPAND_PARENT_MODULE_ENVIRONMENT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_181_WARMELTmiMACRO_MEXPAND_UPDATE_CURRENT_MODULE_ENVIRONMENT_REFERENCE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_182_WARMELTmiMACRO_MEXPAND_FETCH_PREDEFINED(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_183_WARMELTmiMACRO_MEXPAND_STORE_PREDEFINED(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);


MELT_EXTERN void* melt_start_this_module (void*); /*mandatory start of module*/


/*declare opaque initial frame: */

typedef Melt_InitialClassyFrame_WARMELTmiMACRO_h584434599 /*opaqueinitialclassy*/ meltinitial_frame_t;


/* define different names when debugging or not */
#if MELT_HAVE_DEBUG
MELT_EXTERN const char meltmodule_WARMELTmiMACRO__melt_have_debug_enabled[];
#define melt_have_debug_string meltmodule_WARMELTmiMACRO__melt_have_debug_enabled
#else /*!MELT_HAVE_DEBUG*/
MELT_EXTERN const char meltmodule_WARMELTmiMACRO__melt_have_debug_disabled[];
#define melt_have_debug_string meltmodule_WARMELTmiMACRO__melt_have_debug_disabled
#endif /*!MELT_HAVE_DEBUG*/



void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_0 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_1 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_2 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_3 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_4 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_5 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_6 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_7 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_8 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_9 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_10 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_11 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_12 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_13 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_14 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_15 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_16 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_17 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_18 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_19 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_20 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_21 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_22 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_23 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_24 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_25 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_26 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_27 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_28 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_29 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_30 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_31 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_32 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_33 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_34 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_35 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_36 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_37 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_38 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_39 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_40 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_41 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_42 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_43 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_44 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_45 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_46 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_47 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_48 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_49 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_50 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_51 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_52 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiMACRO__initialmeltchunk_53 (meltinitial_frame_t*, char*);


/**** warmelt-macro+04.cc implementations ****/




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS fromline 1718 */

    /** start of frame for meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS// fromline 1534
        : public Melt_CallFrameWithValues<40>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[7];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<40> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS), clos) {};
        MeltFrame_meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS() //the constructor fromline 1608
            : Melt_CallFrameWithValues<40> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<40> (fil,lin, sizeof(MeltFrame_meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS)) {};
        MeltFrame_meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<40> (fil,lin, sizeof(MeltFrame_meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS


    /** end of frame for meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS fromline 1663**/

    /* end of frame for routine meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS fromline 1722 */

    /* classy proc frame meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS */
    MeltFrame_meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_PUT_FIELDS", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5196:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5197:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L1*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
            MELT_LOCATION("warmelt-macro.melt:5197:/ cond");
            /*cond*/
            if (/*_#IS_A__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V7*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5197:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5197;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                            meltfptr[7] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V7*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V8*/ meltfptr[7];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5197:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                        meltfptr[7] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V6*/
            meltfptr[5] = /*_._IFELSE___V7*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5197:/ clear");
            /*clear*/ /*_#IS_A__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V7*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V6*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5198:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L2*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[2])));;
            MELT_LOCATION("warmelt-macro.melt:5198:/ cond");
            /*cond*/
            if (/*_#IS_A__L2*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V10*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5198:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5198;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                            meltfptr[10] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V10*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V11*/ meltfptr[10];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5198:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                        meltfptr[10] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V9*/
            meltfptr[7] = /*_._IFELSE___V10*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5198:/ clear");
            /*clear*/ /*_#IS_A__L2*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V10*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V9*/ meltfptr[7] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#NULL__L3*/
        meltfnum[0] =
            ((/*_.MEXPANDER__V4*/ meltfptr[3]) == NULL);;
        MELT_LOCATION("warmelt-macro.melt:5199:/ cond");
        /*cond*/
        if (/*_#NULL__L3*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*^compute*/
                    /*_.MEXPANDER__V4*/ meltfptr[3] = /*_.SETQ___V13*/ meltfptr[6] = (/*!MACROEXPAND_1*/ meltfrout->tabval[3]);;
                    /*_._IF___V12*/
                    meltfptr[10] = /*_.SETQ___V13*/ meltfptr[6];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5199:/ clear");
                    /*clear*/ /*_.SETQ___V13*/
                    meltfptr[6] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V12*/ meltfptr[10] =  /*reallynil*/ NULL ;;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:5200:/ quasiblock");


        /*_.FIELDS__V15*/
        meltfptr[14] = (/*nil*/NULL);;
        /*^compute*/
        /*_.FIELDNAMS__V16*/
        meltfptr[15] = (/*nil*/NULL);;
        MELT_LOCATION("warmelt-macro.melt:5202:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V17*/
            meltfptr[16] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5203:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V18*/
            meltfptr[17] = slot;
        };
        ;
        /*_.LIST_FIRST__V19*/
        meltfptr[18] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V17*/ meltfptr[16])));;
        /*^compute*/
        /*_.CURPAIR__V20*/
        meltfptr[19] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V19*/ meltfptr[18])));;
        /*^compute*/
        /*_.OBJSRC__V21*/
        meltfptr[20] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#IS_A__L4*/
        meltfnum[3] =
            melt_is_instance_of((melt_ptr_t)(/*_.OBJSRC__V21*/ meltfptr[20]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
        MELT_LOCATION("warmelt-macro.melt:5207:/ cond");
        /*cond*/
        if (/*_#IS_A__L4*/ meltfnum[3]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5208:/ apply");
                    /*apply*/
                    {
                        union meltparam_un argtab[3];
                        memset(&argtab, 0, sizeof(argtab));
                        /*^apply.arg*/
                        argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                        /*^apply.arg*/
                        argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                        /*^apply.arg*/
                        argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                        /*_.MEXPANDER__V23*/
                        meltfptr[22] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.OBJSRC__V21*/ meltfptr[20]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                    }
                    ;
                    /*_.OBJEXP__V22*/
                    meltfptr[21] = /*_.MEXPANDER__V23*/ meltfptr[22];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5207:/ clear");
                    /*clear*/ /*_.MEXPANDER__V23*/
                    meltfptr[22] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_.OBJEXP__V22*/ meltfptr[21] = /*_.OBJSRC__V21*/ meltfptr[20];;
            }
        ;
        /*^compute*/
        /*_.PAIR_TAIL__V24*/
        meltfptr[22] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19])));;
        MELT_LOCATION("warmelt-macro.melt:5211:/ compute");
        /*_.CURPAIR__V20*/
        meltfptr[19] = /*_.SETQ___V25*/ meltfptr[24] = /*_.PAIR_TAIL__V24*/ meltfptr[22];;
        MELT_LOCATION("warmelt-macro.melt:5212:/ quasiblock");


        /*_.FLDLIST__V27*/
        meltfptr[26] =
            (meltgc_new_list((meltobject_ptr_t)((/*!DISCR_LIST*/ meltfrout->tabval[4]))));;
        MELT_LOCATION("warmelt-macro.melt:5214:/ loop");
        /*loop*/
        {
meltlabloop_INSLOOP_7:;/*^loopbody*/

            /*^block*/
            /*anyblock*/
            {


                MELT_CHECK_SIGNAL();
                ;

                MELT_CHECK_SIGNAL();
                ;
                /*_#IS_PAIR__L5*/
                meltfnum[4] =
                    (melt_magic_discr((melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19])) == MELTOBMAG_PAIR);;
                /*^compute*/
                /*_#NOT__L6*/
                meltfnum[5] =
                    (!(/*_#IS_PAIR__L5*/ meltfnum[4]));;
                MELT_LOCATION("warmelt-macro.melt:5215:/ cond");
                /*cond*/
                if (/*_#NOT__L6*/ meltfnum[5]) /*then*/
                    {
                        /*^cond.then*/
                        /*^block*/
                        /*anyblock*/
                        {

                            /*^quasiblock*/


                            /*^compute*/
                            /*_.INSLOOP__V29*/ meltfptr[28] =  /*reallynil*/ NULL ;;

                            /*^exit*/
                            /*exit*/
                            {
                                goto meltlabexit_INSLOOP_7;
                            }
                            ;
                            /*epilog*/
                        }
                        ;
                    } /*noelse*/
                ;
                MELT_LOCATION("warmelt-macro.melt:5216:/ quasiblock");


                /*_.CURFKW__V30*/
                meltfptr[29] =
                    (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19])));;

                MELT_CHECK_SIGNAL();
                ;
                /*^compute*/
                /*_#IS_NOT_A__L7*/
                meltfnum[6] =
                    !melt_is_instance_of((melt_ptr_t)(/*_.CURFKW__V30*/ meltfptr[29]), (melt_ptr_t)((/*!CLASS_KEYWORD*/ meltfrout->tabval[5])));;
                MELT_LOCATION("warmelt-macro.melt:5217:/ cond");
                /*cond*/
                if (/*_#IS_NOT_A__L7*/ meltfnum[6]) /*then*/
                    {
                        /*^cond.then*/
                        /*^block*/
                        /*anyblock*/
                        {


                            {
                                MELT_LOCATION("warmelt-macro.melt:5218:/ locexp");
                                /* error_plain */
                                melt_error_str((melt_ptr_t)(/*_.LOC__V18*/ meltfptr[17]), ( "expecting heyword in PUT_FIELDS"), (melt_ptr_t)0);
                            }
                            ;
                            /*epilog*/
                        }
                        ;
                    } /*noelse*/
                ;
                /*_.PAIR_TAIL__V31*/
                meltfptr[30] =
                    (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19])));;
                MELT_LOCATION("warmelt-macro.melt:5219:/ compute");
                /*_.CURPAIR__V20*/
                meltfptr[19] = /*_.SETQ___V32*/ meltfptr[31] = /*_.PAIR_TAIL__V31*/ meltfptr[30];;
                MELT_LOCATION("warmelt-macro.melt:5220:/ quasiblock");


                /*_.CUREXP__V33*/
                meltfptr[32] =
                    (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19])));;
                MELT_LOCATION("warmelt-macro.melt:5221:/ quasiblock");



                MELT_CHECK_SIGNAL();
                ;
                MELT_LOCATION("warmelt-macro.melt:5222:/ apply");
                /*apply*/
                {
                    union meltparam_un argtab[6];
                    memset(&argtab, 0, sizeof(argtab));
                    /*^apply.arg*/
                    argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.LOC__V18*/ meltfptr[17];
                    /*^apply.arg*/
                    argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.CURFKW__V30*/ meltfptr[29];
                    /*^apply.arg*/
                    argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.CUREXP__V33*/ meltfptr[32];
                    /*^apply.arg*/
                    argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                    /*^apply.arg*/
                    argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                    /*^apply.arg*/
                    argtab[5].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                    /*_.FLDA__V34*/
                    meltfptr[33] =  melt_apply ((meltclosure_ptr_t)((/*!PARSE_FIELD_ASSIGNMENT*/ meltfrout->tabval[6])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                }
                ;

                MELT_CHECK_SIGNAL();
                ;
                MELT_LOCATION("warmelt-macro.melt:5223:/ cond");
                /*cond*/
                if (/*_.FLDA__V34*/ meltfptr[33]) /*then*/
                    {
                        /*^cond.then*/
                        /*^block*/
                        /*anyblock*/
                        {


                            {
                                MELT_LOCATION("warmelt-macro.melt:5224:/ locexp");
                                meltgc_append_list((melt_ptr_t)(/*_.FLDLIST__V27*/ meltfptr[26]), (melt_ptr_t)(/*_.FLDA__V34*/ meltfptr[33]));
                            }
                            ;
                            /*epilog*/
                        }
                        ;
                    } /*noelse*/
                ;

                MELT_LOCATION("warmelt-macro.melt:5221:/ clear");
                /*clear*/ /*_.FLDA__V34*/
                meltfptr[33] = 0 ;

                MELT_LOCATION("warmelt-macro.melt:5220:/ clear");
                /*clear*/ /*_.CUREXP__V33*/
                meltfptr[32] = 0 ;

                MELT_LOCATION("warmelt-macro.melt:5216:/ clear");
                /*clear*/ /*_.CURFKW__V30*/
                meltfptr[29] = 0 ;
                /*^clear*/
                /*clear*/ /*_#IS_NOT_A__L7*/
                meltfnum[6] = 0 ;
                /*^clear*/
                /*clear*/ /*_.PAIR_TAIL__V31*/
                meltfptr[30] = 0 ;
                /*^clear*/
                /*clear*/ /*_.SETQ___V32*/
                meltfptr[31] = 0 ;
                /*_.PAIR_TAIL__V35*/
                meltfptr[33] =
                    (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19])));;
                MELT_LOCATION("warmelt-macro.melt:5226:/ compute");
                /*_.CURPAIR__V20*/
                meltfptr[19] = /*_.SETQ___V36*/ meltfptr[32] = /*_.PAIR_TAIL__V35*/ meltfptr[33];;

                MELT_CHECK_SIGNAL();
                ;
                /*epilog*/

                MELT_LOCATION("warmelt-macro.melt:5214:/ clear");
                /*clear*/ /*_#IS_PAIR__L5*/
                meltfnum[4] = 0 ;
                /*^clear*/
                /*clear*/ /*_#NOT__L6*/
                meltfnum[5] = 0 ;
                /*^clear*/
                /*clear*/ /*_.PAIR_TAIL__V35*/
                meltfptr[33] = 0 ;
                /*^clear*/
                /*clear*/ /*_.SETQ___V36*/
                meltfptr[32] = 0 ;
            }
            ;
            ;
            goto meltlabloop_INSLOOP_7;
meltlabexit_INSLOOP_7:;/*^loopepilog*/
            /*loopepilog*/
            /*_.FOREVER___V28*/
            meltfptr[27] = /*_.INSLOOP__V29*/ meltfptr[28];;
        }
        ;
        MELT_LOCATION("warmelt-macro.melt:5228:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[1];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &(/*!DISCR_MULTIPLE*/ meltfrout->tabval[8]);
            /*_.FASTUP__V38*/
            meltfptr[30] =  melt_apply ((meltclosure_ptr_t)((/*!LIST_TO_MULTIPLE*/ meltfrout->tabval[7])), (melt_ptr_t)(/*_.FLDLIST__V27*/ meltfptr[26]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5229:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_PUT_FIELDS*/ meltfrout->tabval[9])), (4), "CLASS_SOURCE_PUT_FIELDS");
            /*_.INST__V40*/
            meltfptr[33] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V40*/ meltfptr[33])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V40*/ meltfptr[33]), (1), (/*_.LOC__V18*/ meltfptr[17]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SUPUT_OBJ", melt_magic_discr((melt_ptr_t)(/*_.INST__V40*/ meltfptr[33])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V40*/ meltfptr[33]), (2), (/*_.OBJEXP__V22*/ meltfptr[21]), "SUPUT_OBJ");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SUPUT_FIELDS", melt_magic_discr((melt_ptr_t)(/*_.INST__V40*/ meltfptr[33])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V40*/ meltfptr[33]), (3), (/*_.FASTUP__V38*/ meltfptr[30]), "SUPUT_FIELDS");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V40*/ meltfptr[33], "newly made instance");
        ;
        /*_.INST___V39*/
        meltfptr[31] = /*_.INST__V40*/ meltfptr[33];;
        /*^compute*/
        /*_.LET___V37*/
        meltfptr[29] = /*_.INST___V39*/ meltfptr[31];;

        MELT_LOCATION("warmelt-macro.melt:5228:/ clear");
        /*clear*/ /*_.FASTUP__V38*/
        meltfptr[30] = 0 ;
        /*^clear*/
        /*clear*/ /*_.INST___V39*/
        meltfptr[31] = 0 ;
        /*_.LET___V26*/
        meltfptr[25] = /*_.LET___V37*/ meltfptr[29];;

        MELT_LOCATION("warmelt-macro.melt:5212:/ clear");
        /*clear*/ /*_.FLDLIST__V27*/
        meltfptr[26] = 0 ;
        /*^clear*/
        /*clear*/ /*_.FOREVER___V28*/
        meltfptr[27] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V37*/
        meltfptr[29] = 0 ;
        /*_.LET___V14*/
        meltfptr[6] = /*_.LET___V26*/ meltfptr[25];;

        MELT_LOCATION("warmelt-macro.melt:5200:/ clear");
        /*clear*/ /*_.FIELDS__V15*/
        meltfptr[14] = 0 ;
        /*^clear*/
        /*clear*/ /*_.FIELDNAMS__V16*/
        meltfptr[15] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CONT__V17*/
        meltfptr[16] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V18*/
        meltfptr[17] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.OBJSRC__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_A__L4*/
        meltfnum[3] = 0 ;
        /*^clear*/
        /*clear*/ /*_.OBJEXP__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V24*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V26*/
        meltfptr[25] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5196:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V14*/ meltfptr[6];;

        {
            MELT_LOCATION("warmelt-macro.melt:5196:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V6*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V9*/
        meltfptr[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NULL__L3*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V12*/
        meltfptr[10] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V14*/
        meltfptr[6] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_PUT_FIELDS", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_84_WARMELTmiMACRO_MEXPAND_PUT_FIELDS*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD fromline 1718 */

    /** start of frame for meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD// fromline 1534
        : public Melt_CallFrameWithValues<36>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[6];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<36> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD), clos) {};
        MeltFrame_meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD() //the constructor fromline 1608
            : Melt_CallFrameWithValues<36> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<36> (fil,lin, sizeof(MeltFrame_meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD)) {};
        MeltFrame_meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<36> (fil,lin, sizeof(MeltFrame_meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD


    /** end of frame for meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD fromline 1663**/

    /* end of frame for routine meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD fromline 1722 */

    /* classy proc frame meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD */
    MeltFrame_meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_UNSAFE_GET_FIELD", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5243:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5244:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L1*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
            MELT_LOCATION("warmelt-macro.melt:5244:/ cond");
            /*cond*/
            if (/*_#IS_A__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V7*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5244:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5244;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                            meltfptr[7] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V7*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V8*/ meltfptr[7];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5244:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                        meltfptr[7] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V6*/
            meltfptr[5] = /*_._IFELSE___V7*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5244:/ clear");
            /*clear*/ /*_#IS_A__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V7*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V6*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5245:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L2*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[2])));;
            MELT_LOCATION("warmelt-macro.melt:5245:/ cond");
            /*cond*/
            if (/*_#IS_A__L2*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V10*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5245:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5245;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                            meltfptr[10] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V10*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V11*/ meltfptr[10];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5245:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                        meltfptr[10] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V9*/
            meltfptr[7] = /*_._IFELSE___V10*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5245:/ clear");
            /*clear*/ /*_#IS_A__L2*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V10*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V9*/ meltfptr[7] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5246:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V13*/
            meltfptr[6] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5247:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V14*/
            meltfptr[13] = slot;
        };
        ;
        /*_.LIST_FIRST__V15*/
        meltfptr[14] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V13*/ meltfptr[6])));;
        /*^compute*/
        /*_.CURPAIR__V16*/
        meltfptr[15] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V15*/ meltfptr[14])));;
        /*^compute*/
        /*_.CURFKW__V17*/
        meltfptr[16] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V16*/ meltfptr[15])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#IS_NOT_A__L3*/
        meltfnum[0] =
            !melt_is_instance_of((melt_ptr_t)(/*_.CURFKW__V17*/ meltfptr[16]), (melt_ptr_t)((/*!CLASS_KEYWORD*/ meltfrout->tabval[3])));;
        MELT_LOCATION("warmelt-macro.melt:5251:/ cond");
        /*cond*/
        if (/*_#IS_NOT_A__L3*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5253:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V14*/ meltfptr[13]), ( "field keyword expected in UNSAFE_GET_FIELD"), (melt_ptr_t)0);
                    }
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5254:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] = (/*nil*/NULL);;

                    {
                        MELT_LOCATION("warmelt-macro.melt:5254:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:5252:/ quasiblock");


                    /*_.PROGN___V20*/
                    meltfptr[19] = /*_.RETURN___V19*/ meltfptr[18];;
                    /*^compute*/
                    /*_._IF___V18*/
                    meltfptr[17] = /*_.PROGN___V20*/ meltfptr[19];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5251:/ clear");
                    /*clear*/ /*_.RETURN___V19*/
                    meltfptr[18] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V20*/
                    meltfptr[19] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V18*/ meltfptr[17] =  /*reallynil*/ NULL ;;
            }
        ;
        /*^compute*/
        /*_.PAIR_TAIL__V21*/
        meltfptr[18] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V16*/ meltfptr[15])));;
        MELT_LOCATION("warmelt-macro.melt:5255:/ compute");
        /*_.CURPAIR__V16*/
        meltfptr[15] = /*_.SETQ___V22*/ meltfptr[19] = /*_.PAIR_TAIL__V21*/ meltfptr[18];;
        MELT_LOCATION("warmelt-macro.melt:5256:/ quasiblock");


        /*_.CUREXP__V24*/
        meltfptr[23] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V16*/ meltfptr[15])));;
        /*^compute*/
        /*_.PAIR_TAIL__V25*/
        meltfptr[24] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V16*/ meltfptr[15])));;
        MELT_LOCATION("warmelt-macro.melt:5257:/ compute");
        /*_.CURPAIR__V16*/
        meltfptr[15] = /*_.SETQ___V26*/ meltfptr[25] = /*_.PAIR_TAIL__V25*/ meltfptr[24];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5258:/ cond");
        /*cond*/
        if (/*_.CURPAIR__V16*/ meltfptr[15]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        /*^locexp*/
                        /* error_plain */ melt_error_str((melt_ptr_t)(/*_.LOC__V14*/ meltfptr[13]), ( "UNSAFE_GET_FIELD with more than two sons"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5261:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[6];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.LOC__V14*/ meltfptr[13];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.CURFKW__V17*/ meltfptr[16];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.CUREXP__V24*/ meltfptr[23];
            /*^apply.arg*/
            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[5].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.FLDA__V28*/
            meltfptr[27] =  melt_apply ((meltclosure_ptr_t)((/*!PARSE_FIELD_ASSIGNMENT*/ meltfrout->tabval[4])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_A__L4*/
        meltfnum[3] =
            melt_is_instance_of((melt_ptr_t)(/*_.FLDA__V28*/ meltfptr[27]), (melt_ptr_t)((/*!CLASS_SOURCE_FIELDASSIGN*/ meltfrout->tabval[5])));;
        /*^compute*/
        /*_#NOT__L5*/
        meltfnum[4] =
            (!(/*_#IS_A__L4*/ meltfnum[3]));;
        MELT_LOCATION("warmelt-macro.melt:5262:/ cond");
        /*cond*/
        if (/*_#NOT__L5*/ meltfnum[4]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5264:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V14*/ meltfptr[13]), ( "bad field and expression in UNSAFE_GET_FIELD"), (melt_ptr_t)0);
                    }
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5265:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] = (/*nil*/NULL);;

                    {
                        MELT_LOCATION("warmelt-macro.melt:5265:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:5263:/ quasiblock");


                    /*_.PROGN___V31*/
                    meltfptr[30] = /*_.RETURN___V30*/ meltfptr[29];;
                    /*^compute*/
                    /*_._IF___V29*/
                    meltfptr[28] = /*_.PROGN___V31*/ meltfptr[30];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5262:/ clear");
                    /*clear*/ /*_.RETURN___V30*/
                    meltfptr[29] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V31*/
                    meltfptr[30] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V29*/ meltfptr[28] =  /*reallynil*/ NULL ;;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:5266:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.FLDA__V28*/ meltfptr[27]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SFLA_FIELD");
            /*_.FLD__V33*/
            meltfptr[30] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5267:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.FLDA__V28*/ meltfptr[27]) /*=obj*/;
            melt_object_get_field(slot,obj, 3, "SFLA_EXPR");
            /*_.EXP__V34*/
            meltfptr[33] = slot;
        };
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#NULL__L6*/
        meltfnum[5] =
            ((/*_.EXP__V34*/ meltfptr[33]) == NULL);;
        MELT_LOCATION("warmelt-macro.melt:5268:/ cond");
        /*cond*/
        if (/*_#NULL__L6*/ meltfnum[5]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5269:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V14*/ meltfptr[13]), ( "missing object expression for (UNSAFE_GET_FIELD :field objexpr)"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5270:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_UNSAFE_GET_FIELD*/ meltfrout->tabval[6])), (4), "CLASS_SOURCE_UNSAFE_GET_FIELD");
            /*_.INST__V36*/
            meltfptr[35] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V36*/ meltfptr[35])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V36*/ meltfptr[35]), (1), (/*_.LOC__V14*/ meltfptr[13]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SUGET_OBJ", melt_magic_discr((melt_ptr_t)(/*_.INST__V36*/ meltfptr[35])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V36*/ meltfptr[35]), (2), (/*_.EXP__V34*/ meltfptr[33]), "SUGET_OBJ");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SUGET_FIELD", melt_magic_discr((melt_ptr_t)(/*_.INST__V36*/ meltfptr[35])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V36*/ meltfptr[35]), (3), (/*_.FLD__V33*/ meltfptr[30]), "SUGET_FIELD");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V36*/ meltfptr[35], "newly made instance");
        ;
        /*_.INST___V35*/
        meltfptr[34] = /*_.INST__V36*/ meltfptr[35];;
        /*^compute*/
        /*_.LET___V32*/
        meltfptr[29] = /*_.INST___V35*/ meltfptr[34];;

        MELT_LOCATION("warmelt-macro.melt:5266:/ clear");
        /*clear*/ /*_.FLD__V33*/
        meltfptr[30] = 0 ;
        /*^clear*/
        /*clear*/ /*_.EXP__V34*/
        meltfptr[33] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NULL__L6*/
        meltfnum[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.INST___V35*/
        meltfptr[34] = 0 ;
        /*_.LET___V27*/
        meltfptr[26] = /*_.LET___V32*/ meltfptr[29];;

        MELT_LOCATION("warmelt-macro.melt:5261:/ clear");
        /*clear*/ /*_.FLDA__V28*/
        meltfptr[27] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_A__L4*/
        meltfnum[3] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L5*/
        meltfnum[4] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V29*/
        meltfptr[28] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V32*/
        meltfptr[29] = 0 ;
        /*_.LET___V23*/
        meltfptr[22] = /*_.LET___V27*/ meltfptr[26];;

        MELT_LOCATION("warmelt-macro.melt:5256:/ clear");
        /*clear*/ /*_.CUREXP__V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V26*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V27*/
        meltfptr[26] = 0 ;
        /*_.LET___V12*/
        meltfptr[10] = /*_.LET___V23*/ meltfptr[22];;

        MELT_LOCATION("warmelt-macro.melt:5246:/ clear");
        /*clear*/ /*_.CONT__V13*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V14*/
        meltfptr[13] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V15*/
        meltfptr[14] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V16*/
        meltfptr[15] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURFKW__V17*/
        meltfptr[16] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_NOT_A__L3*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V18*/
        meltfptr[17] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V21*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V22*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V23*/
        meltfptr[22] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5243:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V12*/ meltfptr[10];;

        {
            MELT_LOCATION("warmelt-macro.melt:5243:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V6*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V9*/
        meltfptr[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V12*/
        meltfptr[10] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_UNSAFE_GET_FIELD", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_85_WARMELTmiMACRO_MEXPAND_UNSAFE_GET_FIELD*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD fromline 1718 */

    /** start of frame for meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD// fromline 1534
        : public Melt_CallFrameWithValues<36>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[6];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<36> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD), clos) {};
        MeltFrame_meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD() //the constructor fromline 1608
            : Melt_CallFrameWithValues<36> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<36> (fil,lin, sizeof(MeltFrame_meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD)) {};
        MeltFrame_meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<36> (fil,lin, sizeof(MeltFrame_meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD


    /** end of frame for meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD fromline 1663**/

    /* end of frame for routine meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD fromline 1722 */

    /* classy proc frame meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD */
    MeltFrame_meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_GET_FIELD", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5284:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5285:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L1*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
            MELT_LOCATION("warmelt-macro.melt:5285:/ cond");
            /*cond*/
            if (/*_#IS_A__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V7*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5285:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5285;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                            meltfptr[7] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V7*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V8*/ meltfptr[7];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5285:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                        meltfptr[7] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V6*/
            meltfptr[5] = /*_._IFELSE___V7*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5285:/ clear");
            /*clear*/ /*_#IS_A__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V7*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V6*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5286:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L2*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[2])));;
            MELT_LOCATION("warmelt-macro.melt:5286:/ cond");
            /*cond*/
            if (/*_#IS_A__L2*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V10*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5286:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5286;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                            meltfptr[10] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V10*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V11*/ meltfptr[10];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5286:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                        meltfptr[10] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V9*/
            meltfptr[7] = /*_._IFELSE___V10*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5286:/ clear");
            /*clear*/ /*_#IS_A__L2*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V10*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V9*/ meltfptr[7] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5287:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V13*/
            meltfptr[6] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5288:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V14*/
            meltfptr[13] = slot;
        };
        ;
        /*_.LIST_FIRST__V15*/
        meltfptr[14] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V13*/ meltfptr[6])));;
        /*^compute*/
        /*_.CURPAIR__V16*/
        meltfptr[15] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V15*/ meltfptr[14])));;
        /*^compute*/
        /*_.CURFKW__V17*/
        meltfptr[16] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V16*/ meltfptr[15])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#IS_NOT_A__L3*/
        meltfnum[0] =
            !melt_is_instance_of((melt_ptr_t)(/*_.CURFKW__V17*/ meltfptr[16]), (melt_ptr_t)((/*!CLASS_KEYWORD*/ meltfrout->tabval[3])));;
        MELT_LOCATION("warmelt-macro.melt:5292:/ cond");
        /*cond*/
        if (/*_#IS_NOT_A__L3*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5294:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V14*/ meltfptr[13]), ( "field keyword expected in GET_FIELD"), (melt_ptr_t)0);
                    }
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5295:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] = (/*nil*/NULL);;

                    {
                        MELT_LOCATION("warmelt-macro.melt:5295:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:5293:/ quasiblock");


                    /*_.PROGN___V20*/
                    meltfptr[19] = /*_.RETURN___V19*/ meltfptr[18];;
                    /*^compute*/
                    /*_._IF___V18*/
                    meltfptr[17] = /*_.PROGN___V20*/ meltfptr[19];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5292:/ clear");
                    /*clear*/ /*_.RETURN___V19*/
                    meltfptr[18] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V20*/
                    meltfptr[19] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V18*/ meltfptr[17] =  /*reallynil*/ NULL ;;
            }
        ;
        /*^compute*/
        /*_.PAIR_TAIL__V21*/
        meltfptr[18] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V16*/ meltfptr[15])));;
        MELT_LOCATION("warmelt-macro.melt:5296:/ compute");
        /*_.CURPAIR__V16*/
        meltfptr[15] = /*_.SETQ___V22*/ meltfptr[19] = /*_.PAIR_TAIL__V21*/ meltfptr[18];;
        MELT_LOCATION("warmelt-macro.melt:5297:/ quasiblock");


        /*_.CUREXP__V24*/
        meltfptr[23] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V16*/ meltfptr[15])));;
        /*^compute*/
        /*_.PAIR_TAIL__V25*/
        meltfptr[24] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V16*/ meltfptr[15])));;
        MELT_LOCATION("warmelt-macro.melt:5298:/ compute");
        /*_.CURPAIR__V16*/
        meltfptr[15] = /*_.SETQ___V26*/ meltfptr[25] = /*_.PAIR_TAIL__V25*/ meltfptr[24];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5299:/ cond");
        /*cond*/
        if (/*_.CURPAIR__V16*/ meltfptr[15]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        /*^locexp*/
                        /* error_plain */ melt_error_str((melt_ptr_t)(/*_.LOC__V14*/ meltfptr[13]), ( "UNSAFE_GET_FIELD with more than two sons"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5302:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[6];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.LOC__V14*/ meltfptr[13];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.CURFKW__V17*/ meltfptr[16];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.CUREXP__V24*/ meltfptr[23];
            /*^apply.arg*/
            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[5].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.FLDA__V28*/
            meltfptr[27] =  melt_apply ((meltclosure_ptr_t)((/*!PARSE_FIELD_ASSIGNMENT*/ meltfrout->tabval[4])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_A__L4*/
        meltfnum[3] =
            melt_is_instance_of((melt_ptr_t)(/*_.FLDA__V28*/ meltfptr[27]), (melt_ptr_t)((/*!CLASS_SOURCE_FIELDASSIGN*/ meltfrout->tabval[5])));;
        /*^compute*/
        /*_#NOT__L5*/
        meltfnum[4] =
            (!(/*_#IS_A__L4*/ meltfnum[3]));;
        MELT_LOCATION("warmelt-macro.melt:5303:/ cond");
        /*cond*/
        if (/*_#NOT__L5*/ meltfnum[4]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5305:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V14*/ meltfptr[13]), ( "bad field and expression in GET_FIELD"), (melt_ptr_t)0);
                    }
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5306:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] = (/*nil*/NULL);;

                    {
                        MELT_LOCATION("warmelt-macro.melt:5306:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:5304:/ quasiblock");


                    /*_.PROGN___V31*/
                    meltfptr[30] = /*_.RETURN___V30*/ meltfptr[29];;
                    /*^compute*/
                    /*_._IF___V29*/
                    meltfptr[28] = /*_.PROGN___V31*/ meltfptr[30];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5303:/ clear");
                    /*clear*/ /*_.RETURN___V30*/
                    meltfptr[29] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V31*/
                    meltfptr[30] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V29*/ meltfptr[28] =  /*reallynil*/ NULL ;;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:5307:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.FLDA__V28*/ meltfptr[27]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SFLA_FIELD");
            /*_.FLD__V33*/
            meltfptr[30] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5308:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.FLDA__V28*/ meltfptr[27]) /*=obj*/;
            melt_object_get_field(slot,obj, 3, "SFLA_EXPR");
            /*_.EXP__V34*/
            meltfptr[33] = slot;
        };
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#NULL__L6*/
        meltfnum[5] =
            ((/*_.EXP__V34*/ meltfptr[33]) == NULL);;
        MELT_LOCATION("warmelt-macro.melt:5309:/ cond");
        /*cond*/
        if (/*_#NULL__L6*/ meltfnum[5]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5310:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V14*/ meltfptr[13]), ( "missing object expression for (GET_FIELD :field objexpr)"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5311:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_GET_FIELD*/ meltfrout->tabval[6])), (4), "CLASS_SOURCE_GET_FIELD");
            /*_.INST__V36*/
            meltfptr[35] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V36*/ meltfptr[35])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V36*/ meltfptr[35]), (1), (/*_.LOC__V14*/ meltfptr[13]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SUGET_OBJ", melt_magic_discr((melt_ptr_t)(/*_.INST__V36*/ meltfptr[35])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V36*/ meltfptr[35]), (2), (/*_.EXP__V34*/ meltfptr[33]), "SUGET_OBJ");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SUGET_FIELD", melt_magic_discr((melt_ptr_t)(/*_.INST__V36*/ meltfptr[35])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V36*/ meltfptr[35]), (3), (/*_.FLD__V33*/ meltfptr[30]), "SUGET_FIELD");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V36*/ meltfptr[35], "newly made instance");
        ;
        /*_.INST___V35*/
        meltfptr[34] = /*_.INST__V36*/ meltfptr[35];;
        /*^compute*/
        /*_.LET___V32*/
        meltfptr[29] = /*_.INST___V35*/ meltfptr[34];;

        MELT_LOCATION("warmelt-macro.melt:5307:/ clear");
        /*clear*/ /*_.FLD__V33*/
        meltfptr[30] = 0 ;
        /*^clear*/
        /*clear*/ /*_.EXP__V34*/
        meltfptr[33] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NULL__L6*/
        meltfnum[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.INST___V35*/
        meltfptr[34] = 0 ;
        /*_.LET___V27*/
        meltfptr[26] = /*_.LET___V32*/ meltfptr[29];;

        MELT_LOCATION("warmelt-macro.melt:5302:/ clear");
        /*clear*/ /*_.FLDA__V28*/
        meltfptr[27] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_A__L4*/
        meltfnum[3] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L5*/
        meltfnum[4] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V29*/
        meltfptr[28] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V32*/
        meltfptr[29] = 0 ;
        /*_.LET___V23*/
        meltfptr[22] = /*_.LET___V27*/ meltfptr[26];;

        MELT_LOCATION("warmelt-macro.melt:5297:/ clear");
        /*clear*/ /*_.CUREXP__V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V26*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V27*/
        meltfptr[26] = 0 ;
        /*_.LET___V12*/
        meltfptr[10] = /*_.LET___V23*/ meltfptr[22];;

        MELT_LOCATION("warmelt-macro.melt:5287:/ clear");
        /*clear*/ /*_.CONT__V13*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V14*/
        meltfptr[13] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V15*/
        meltfptr[14] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V16*/
        meltfptr[15] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURFKW__V17*/
        meltfptr[16] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_NOT_A__L3*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V18*/
        meltfptr[17] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V21*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V22*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V23*/
        meltfptr[22] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5284:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V12*/ meltfptr[10];;

        {
            MELT_LOCATION("warmelt-macro.melt:5284:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V6*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V9*/
        meltfptr[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V12*/
        meltfptr[10] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_GET_FIELD", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_86_WARMELTmiMACRO_MEXPAND_GET_FIELD*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN fromline 1718 */

    /** start of frame for meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN// fromline 1534
        : public Melt_CallFrameWithValues<26>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[7];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<26> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN), clos) {};
        MeltFrame_meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN() //the constructor fromline 1608
            : Melt_CallFrameWithValues<26> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<26> (fil,lin, sizeof(MeltFrame_meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN)) {};
        MeltFrame_meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<26> (fil,lin, sizeof(MeltFrame_meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN


    /** end of frame for meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN fromline 1663**/

    /* end of frame for routine meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN fromline 1722 */

    /* classy proc frame meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN */
    MeltFrame_meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("PAIRLIST_TO_PROGN", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5325:/ getarg");
    /*_.PAIR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.LOC__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.LOC__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V5*/ meltfptr[4])) != NULL);


    /*getarg#4*/
    /*^getarg*/
    if (meltxargdescr_[3] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V6*/
    meltfptr[5] = (meltxargtab_[3].meltbp_aptr) ? (*(meltxargtab_[3].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V6*/ meltfptr[5])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5326:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5326:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5326:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5326;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "pairlist_to_progn pair=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.PAIR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V8*/
                            meltfptr[7] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V7*/
                        meltfptr[6] = /*_.MELT_DEBUG_FUN__V8*/ meltfptr[7];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5326:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V8*/
                        meltfptr[7] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V7*/ meltfptr[6] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5326:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V7*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5327:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V4*/ meltfptr[3]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:5327:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V10*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5327:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5327;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V4*/ meltfptr[3];
                            /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                            meltfptr[10] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V10*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V11*/ meltfptr[10];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5327:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                        meltfptr[10] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V9*/
            meltfptr[7] = /*_._IFELSE___V10*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5327:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V10*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V9*/ meltfptr[7] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5328:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_PAIR__L4*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.PAIR__V2*/ meltfptr[1])) == MELTOBMAG_PAIR);;
            MELT_LOCATION("warmelt-macro.melt:5328:/ cond");
            /*cond*/
            if (/*_#IS_PAIR__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V13*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5328:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check_pair";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5328;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.PAIR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V14*/
                            meltfptr[13] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V13*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V14*/ meltfptr[13];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5328:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V14*/
                        meltfptr[13] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V12*/
            meltfptr[10] = /*_._IFELSE___V13*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5328:/ clear");
            /*clear*/ /*_#IS_PAIR__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V13*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V12*/ meltfptr[10] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5329:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L5*/
            meltfnum[1] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V6*/ meltfptr[5])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:5329:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V16*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5329:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5329;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V6*/ meltfptr[5];
                            /*_.MELT_ASSERT_FAILURE_FUN__V17*/
                            meltfptr[16] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V16*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V17*/ meltfptr[16];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5329:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V17*/
                        meltfptr[16] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V15*/
            meltfptr[13] = /*_._IFELSE___V16*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5329:/ clear");
            /*clear*/ /*_#IS_OBJECT__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V16*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V15*/ meltfptr[13] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5330:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:5333:/ quasiblock");


        /*^newclosure*/
        /*newclosure*/ /*_.LAMBDA___V20*/
        meltfptr[19] =
            (melt_ptr_t) meltgc_new_closure((meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_CLOSURE)))), (meltroutine_ptr_t)((/*!konst_5*/ meltfrout->tabval[5])), (3));
        ;
        /*^putclosedv*/
        /*putclosv*/
        melt_assertmsg("putclosv checkclo", melt_magic_discr((melt_ptr_t)(/*_.LAMBDA___V20*/ meltfptr[19])) == MELTOBMAG_CLOSURE);
        melt_assertmsg("putclosv checkoff", 0>= 0 && 0< melt_closure_size((melt_ptr_t) (/*_.LAMBDA___V20*/ meltfptr[19])));
        ((meltclosure_ptr_t)/*_.LAMBDA___V20*/ meltfptr[19])->tabval[0] = (melt_ptr_t)(/*_.MEXPANDER__V5*/ meltfptr[4]);
        ;
        /*^putclosedv*/
        /*putclosv*/
        melt_assertmsg("putclosv checkclo", melt_magic_discr((melt_ptr_t)(/*_.LAMBDA___V20*/ meltfptr[19])) == MELTOBMAG_CLOSURE);
        melt_assertmsg("putclosv checkoff", 1>= 0 && 1< melt_closure_size((melt_ptr_t) (/*_.LAMBDA___V20*/ meltfptr[19])));
        ((meltclosure_ptr_t)/*_.LAMBDA___V20*/ meltfptr[19])->tabval[1] = (melt_ptr_t)(/*_.ENV__V4*/ meltfptr[3]);
        ;
        /*^putclosedv*/
        /*putclosv*/
        melt_assertmsg("putclosv checkclo", melt_magic_discr((melt_ptr_t)(/*_.LAMBDA___V20*/ meltfptr[19])) == MELTOBMAG_CLOSURE);
        melt_assertmsg("putclosv checkoff", 2>= 0 && 2< melt_closure_size((melt_ptr_t) (/*_.LAMBDA___V20*/ meltfptr[19])));
        ((meltclosure_ptr_t)/*_.LAMBDA___V20*/ meltfptr[19])->tabval[2] = (melt_ptr_t)(/*_.MODCTX__V6*/ meltfptr[5]);
        ;
        /*_.LAMBDA___V19*/
        meltfptr[6] = /*_.LAMBDA___V20*/ meltfptr[19];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5330:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[2];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &(/*!DISCR_MULTIPLE*/ meltfrout->tabval[4]);
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.LAMBDA___V19*/ meltfptr[6];
            /*_.BODYTUP__V21*/
            meltfptr[20] =  melt_apply ((meltclosure_ptr_t)((/*!PAIRLIST_TO_MULTIPLE*/ meltfrout->tabval[3])), (melt_ptr_t)(/*_.PAIR__V2*/ meltfptr[1]), (MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5335:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_PROGN*/ meltfrout->tabval[6])), (3), "CLASS_SOURCE_PROGN");
            /*_.INST__V23*/
            meltfptr[22] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V23*/ meltfptr[22])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V23*/ meltfptr[22]), (1), (/*_.LOC__V3*/ meltfptr[2]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SPROGN_BODY", melt_magic_discr((melt_ptr_t)(/*_.INST__V23*/ meltfptr[22])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V23*/ meltfptr[22]), (2), (/*_.BODYTUP__V21*/ meltfptr[20]), "SPROGN_BODY");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V23*/ meltfptr[22], "newly made instance");
        ;
        /*_.SPROGN__V22*/
        meltfptr[21] = /*_.INST__V23*/ meltfptr[22];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5339:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5339:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L7*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5339:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L7*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5339;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "pairlist_to_progn sprogn";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SPROGN__V22*/ meltfptr[21];
                            /*_.MELT_DEBUG_FUN__V25*/
                            meltfptr[24] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V24*/
                        meltfptr[23] = /*_.MELT_DEBUG_FUN__V25*/ meltfptr[24];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5339:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L7*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V25*/
                        meltfptr[24] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V24*/ meltfptr[23] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5339:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V24*/
            meltfptr[23] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5340:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.SPROGN__V22*/ meltfptr[21];;

        {
            MELT_LOCATION("warmelt-macro.melt:5340:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V18*/
        meltfptr[16] = /*_.RETURN___V26*/ meltfptr[24];;

        MELT_LOCATION("warmelt-macro.melt:5330:/ clear");
        /*clear*/ /*_.LAMBDA___V19*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.BODYTUP__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SPROGN__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V26*/
        meltfptr[24] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5325:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V18*/ meltfptr[16];;

        {
            MELT_LOCATION("warmelt-macro.melt:5325:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V9*/
        meltfptr[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V12*/
        meltfptr[10] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V15*/
        meltfptr[13] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V18*/
        meltfptr[16] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("PAIRLIST_TO_PROGN", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_87_WARMELTmiMACRO_PAIRLIST_TO_PROGN*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_88_WARMELTmiMACRO_LAMBDA_cl16(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                       const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_88_WARMELTmiMACRO_LAMBDA_cl16_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_88_WARMELTmiMACRO_LAMBDA_cl16 fromline 1718 */

    /** start of frame for meltrout_88_WARMELTmiMACRO_LAMBDA_cl16 of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_88_WARMELTmiMACRO_LAMBDA_cl16// fromline 1534
        : public Melt_CallFrameWithValues<3>
    {
    public: /* fromline 1538*/
// no classy longs
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_88_WARMELTmiMACRO_LAMBDA_cl16(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<3> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_88_WARMELTmiMACRO_LAMBDA_cl16), clos) {};
        MeltFrame_meltrout_88_WARMELTmiMACRO_LAMBDA_cl16() //the constructor fromline 1608
            : Melt_CallFrameWithValues<3> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_88_WARMELTmiMACRO_LAMBDA_cl16)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_88_WARMELTmiMACRO_LAMBDA_cl16(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<3> (fil,lin, sizeof(MeltFrame_meltrout_88_WARMELTmiMACRO_LAMBDA_cl16)) {};
        MeltFrame_meltrout_88_WARMELTmiMACRO_LAMBDA_cl16(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<3> (fil,lin, sizeof(MeltFrame_meltrout_88_WARMELTmiMACRO_LAMBDA_cl16), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_88_WARMELTmiMACRO_LAMBDA_cl16


    /** end of frame for meltrout_88_WARMELTmiMACRO_LAMBDA_cl16 fromline 1663**/

    /* end of frame for routine meltrout_88_WARMELTmiMACRO_LAMBDA_cl16 fromline 1722 */

    /* classy proc frame meltrout_88_WARMELTmiMACRO_LAMBDA_cl16 */
    MeltFrame_meltrout_88_WARMELTmiMACRO_LAMBDA_cl16
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_88_WARMELTmiMACRO_LAMBDA_cl16 fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("LAMBDA_cl16", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5333:/ getarg");
    /*_.E__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &(/*~ENV*/ meltfclos->tabval[1]);
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &(/*~MEXPANDER*/ meltfclos->tabval[0]);
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &(/*~MODCTX*/ meltfclos->tabval[2]);
            /*_.MEXPANDER__V3*/
            meltfptr[2] =  melt_apply ((meltclosure_ptr_t)((/*~MEXPANDER*/ meltfclos->tabval[0])), (melt_ptr_t)(/*_.E__V2*/ meltfptr[1]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        /*^quasiblock*/


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.MEXPANDER__V3*/ meltfptr[2];;

        {
            MELT_LOCATION("warmelt-macro.melt:5333:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.MEXPANDER__V3*/
        meltfptr[2] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("LAMBDA_cl16", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_88_WARMELTmiMACRO_LAMBDA_cl16_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_88_WARMELTmiMACRO_LAMBDA_cl16*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ fromline 1718 */

    /** start of frame for meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ// fromline 1534
        : public Melt_CallFrameWithValues<34>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[5];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<34> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ), clos) {};
        MeltFrame_meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ() //the constructor fromline 1608
            : Melt_CallFrameWithValues<34> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<34> (fil,lin, sizeof(MeltFrame_meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ)) {};
        MeltFrame_meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<34> (fil,lin, sizeof(MeltFrame_meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ


    /** end of frame for meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ fromline 1663**/

    /* end of frame for routine meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ fromline 1722 */

    /* classy proc frame meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ */
    MeltFrame_meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_SETQ", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5344:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5345:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L1*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
            MELT_LOCATION("warmelt-macro.melt:5345:/ cond");
            /*cond*/
            if (/*_#IS_A__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V7*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5345:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5345;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                            meltfptr[7] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V7*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V8*/ meltfptr[7];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5345:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                        meltfptr[7] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V6*/
            meltfptr[5] = /*_._IFELSE___V7*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5345:/ clear");
            /*clear*/ /*_#IS_A__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V7*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V6*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5346:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L2*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[2])));;
            MELT_LOCATION("warmelt-macro.melt:5346:/ cond");
            /*cond*/
            if (/*_#IS_A__L2*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V10*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5346:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5346;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                            meltfptr[10] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V10*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V11*/ meltfptr[10];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5346:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                        meltfptr[10] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V9*/
            meltfptr[7] = /*_._IFELSE___V10*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5346:/ clear");
            /*clear*/ /*_#IS_A__L2*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V10*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V9*/ meltfptr[7] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#NULL__L3*/
        meltfnum[0] =
            ((/*_.MEXPANDER__V4*/ meltfptr[3]) == NULL);;
        MELT_LOCATION("warmelt-macro.melt:5347:/ cond");
        /*cond*/
        if (/*_#NULL__L3*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*^compute*/
                    /*_.MEXPANDER__V4*/ meltfptr[3] = /*_.SETQ___V13*/ meltfptr[6] = (/*!MACROEXPAND_1*/ meltfrout->tabval[3]);;
                    /*_._IF___V12*/
                    meltfptr[10] = /*_.SETQ___V13*/ meltfptr[6];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5347:/ clear");
                    /*clear*/ /*_.SETQ___V13*/
                    meltfptr[6] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V12*/ meltfptr[10] =  /*reallynil*/ NULL ;;
            }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5348:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L4*/
            meltfnum[3] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:5348:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L4*/ meltfnum[3]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V15*/ meltfptr[14] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5348:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5348;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                            meltfptr[15] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V15*/
                        meltfptr[14] = /*_.MELT_ASSERT_FAILURE_FUN__V16*/ meltfptr[15];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5348:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                        meltfptr[15] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V14*/
            meltfptr[6] = /*_._IFELSE___V15*/ meltfptr[14];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5348:/ clear");
            /*clear*/ /*_#IS_OBJECT__L4*/
            meltfnum[3] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V15*/
            meltfptr[14] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V14*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5349:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V18*/
            meltfptr[14] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5350:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V19*/
            meltfptr[18] = slot;
        };
        ;
        /*_.LIST_FIRST__V20*/
        meltfptr[19] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V18*/ meltfptr[14])));;
        /*^compute*/
        /*_.CURPAIR__V21*/
        meltfptr[20] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V20*/ meltfptr[19])));;
        /*^compute*/
        /*_.CURSYM__V22*/
        meltfptr[21] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#IS_NOT_A__L5*/
        meltfnum[3] =
            !melt_is_instance_of((melt_ptr_t)(/*_.CURSYM__V22*/ meltfptr[21]), (melt_ptr_t)((/*!CLASS_SYMBOL*/ meltfrout->tabval[4])));;
        MELT_LOCATION("warmelt-macro.melt:5354:/ cond");
        /*cond*/
        if (/*_#IS_NOT_A__L5*/ meltfnum[3]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5356:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "var symbol name expected in SETQ"), (melt_ptr_t)0);
                    }
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5357:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] = (/*nil*/NULL);;

                    {
                        MELT_LOCATION("warmelt-macro.melt:5357:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:5355:/ quasiblock");


                    /*_.PROGN___V25*/
                    meltfptr[24] = /*_.RETURN___V24*/ meltfptr[23];;
                    /*^compute*/
                    /*_._IF___V23*/
                    meltfptr[22] = /*_.PROGN___V25*/ meltfptr[24];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5354:/ clear");
                    /*clear*/ /*_.RETURN___V24*/
                    meltfptr[23] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V25*/
                    meltfptr[24] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V23*/ meltfptr[22] =  /*reallynil*/ NULL ;;
            }
        ;
        /*^compute*/
        /*_.PAIR_TAIL__V26*/
        meltfptr[23] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;
        MELT_LOCATION("warmelt-macro.melt:5358:/ compute");
        /*_.CURPAIR__V21*/
        meltfptr[20] = /*_.SETQ___V27*/ meltfptr[24] = /*_.PAIR_TAIL__V26*/ meltfptr[23];;
        MELT_LOCATION("warmelt-macro.melt:5359:/ quasiblock");


        /*_.CUREXP__V29*/
        meltfptr[28] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;
        /*^compute*/
        /*_.PAIR_TAIL__V30*/
        meltfptr[29] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V21*/ meltfptr[20])));;
        MELT_LOCATION("warmelt-macro.melt:5360:/ compute");
        /*_.CURPAIR__V21*/
        meltfptr[20] = /*_.SETQ___V31*/ meltfptr[30] = /*_.PAIR_TAIL__V30*/ meltfptr[29];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5361:/ cond");
        /*cond*/
        if (/*_.CURPAIR__V21*/ meltfptr[20]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        /*^locexp*/
                        /* error_plain */ melt_error_str((melt_ptr_t)(/*_.LOC__V19*/ meltfptr[18]), ( "SETQ with more than two sons"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;

        MELT_CHECK_SIGNAL();
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5365:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.MEXPANDER__V32*/
            meltfptr[31] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.CUREXP__V29*/ meltfptr[28]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        MELT_LOCATION("warmelt-macro.melt:5362:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_SETQ*/ meltfrout->tabval[5])), (4), "CLASS_SOURCE_SETQ");
            /*_.INST__V34*/
            meltfptr[33] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V34*/ meltfptr[33])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V34*/ meltfptr[33]), (1), (/*_.LOC__V19*/ meltfptr[18]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SSTQ_VAR", melt_magic_discr((melt_ptr_t)(/*_.INST__V34*/ meltfptr[33])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V34*/ meltfptr[33]), (2), (/*_.CURSYM__V22*/ meltfptr[21]), "SSTQ_VAR");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SSTQ_EXPR", melt_magic_discr((melt_ptr_t)(/*_.INST__V34*/ meltfptr[33])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V34*/ meltfptr[33]), (3), (/*_.MEXPANDER__V32*/ meltfptr[31]), "SSTQ_EXPR");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V34*/ meltfptr[33], "newly made instance");
        ;
        /*_.INST___V33*/
        meltfptr[32] = /*_.INST__V34*/ meltfptr[33];;
        /*^compute*/
        /*_.LET___V28*/
        meltfptr[27] = /*_.INST___V33*/ meltfptr[32];;

        MELT_LOCATION("warmelt-macro.melt:5359:/ clear");
        /*clear*/ /*_.CUREXP__V29*/
        meltfptr[28] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V30*/
        meltfptr[29] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V31*/
        meltfptr[30] = 0 ;
        /*^clear*/
        /*clear*/ /*_.MEXPANDER__V32*/
        meltfptr[31] = 0 ;
        /*^clear*/
        /*clear*/ /*_.INST___V33*/
        meltfptr[32] = 0 ;
        /*_.LET___V17*/
        meltfptr[15] = /*_.LET___V28*/ meltfptr[27];;

        MELT_LOCATION("warmelt-macro.melt:5349:/ clear");
        /*clear*/ /*_.CONT__V18*/
        meltfptr[14] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURSYM__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_NOT_A__L5*/
        meltfnum[3] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V26*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V27*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V28*/
        meltfptr[27] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5344:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V17*/ meltfptr[15];;

        {
            MELT_LOCATION("warmelt-macro.melt:5344:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V6*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V9*/
        meltfptr[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NULL__L3*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V12*/
        meltfptr[10] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V14*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V17*/
        meltfptr[15] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_SETQ", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_89_WARMELTmiMACRO_MEXPAND_SETQ*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_90_WARMELTmiMACRO_MEXPAND_IF(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                      const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_90_WARMELTmiMACRO_MEXPAND_IF_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_90_WARMELTmiMACRO_MEXPAND_IF fromline 1718 */

    /** start of frame for meltrout_90_WARMELTmiMACRO_MEXPAND_IF of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_90_WARMELTmiMACRO_MEXPAND_IF// fromline 1534
        : public Melt_CallFrameWithValues<58>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[22];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_90_WARMELTmiMACRO_MEXPAND_IF(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<58> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_90_WARMELTmiMACRO_MEXPAND_IF), clos) {};
        MeltFrame_meltrout_90_WARMELTmiMACRO_MEXPAND_IF() //the constructor fromline 1608
            : Melt_CallFrameWithValues<58> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_90_WARMELTmiMACRO_MEXPAND_IF)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_90_WARMELTmiMACRO_MEXPAND_IF(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<58> (fil,lin, sizeof(MeltFrame_meltrout_90_WARMELTmiMACRO_MEXPAND_IF)) {};
        MeltFrame_meltrout_90_WARMELTmiMACRO_MEXPAND_IF(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<58> (fil,lin, sizeof(MeltFrame_meltrout_90_WARMELTmiMACRO_MEXPAND_IF), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_90_WARMELTmiMACRO_MEXPAND_IF


    /** end of frame for meltrout_90_WARMELTmiMACRO_MEXPAND_IF fromline 1663**/

    /* end of frame for routine meltrout_90_WARMELTmiMACRO_MEXPAND_IF fromline 1722 */

    /* classy proc frame meltrout_90_WARMELTmiMACRO_MEXPAND_IF */
    MeltFrame_meltrout_90_WARMELTmiMACRO_MEXPAND_IF
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_90_WARMELTmiMACRO_MEXPAND_IF fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_IF", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5375:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5376:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5376:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5376:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5376;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_if sexpr";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5376:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5376:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5377:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:5377:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5377:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5377;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5377:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5377:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5378:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:5378:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5378:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5378;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5378:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5378:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#NULL__L5*/
        meltfnum[1] =
            ((/*_.MEXPANDER__V4*/ meltfptr[3]) == NULL);;
        MELT_LOCATION("warmelt-macro.melt:5379:/ cond");
        /*cond*/
        if (/*_#NULL__L5*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*^compute*/
                    /*_.MEXPANDER__V4*/ meltfptr[3] = /*_.SETQ___V15*/ meltfptr[5] = (/*!MACROEXPAND_1*/ meltfrout->tabval[4]);;
                    /*_._IF___V14*/
                    meltfptr[12] = /*_.SETQ___V15*/ meltfptr[5];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5379:/ clear");
                    /*clear*/ /*_.SETQ___V15*/
                    meltfptr[5] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V14*/ meltfptr[12] =  /*reallynil*/ NULL ;;
            }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5380:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L6*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:5380:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V17*/ meltfptr[16] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5380:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5380;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V18*/
                            meltfptr[17] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V17*/
                        meltfptr[16] = /*_.MELT_ASSERT_FAILURE_FUN__V18*/ meltfptr[17];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5380:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V18*/
                        meltfptr[17] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V16*/
            meltfptr[5] = /*_._IFELSE___V17*/ meltfptr[16];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5380:/ clear");
            /*clear*/ /*_#IS_OBJECT__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V17*/
            meltfptr[16] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V16*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5381:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:5382:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V20*/
            meltfptr[16] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5383:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V21*/
            meltfptr[20] = slot;
        };
        ;
        /*_.LIST_FIRST__V22*/
        meltfptr[21] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V20*/ meltfptr[16])));;
        /*^compute*/
        /*_.CURPAIR__V23*/
        meltfptr[22] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V22*/ meltfptr[21])));;
        /*^compute*/
        /*_.CURIF__V24*/
        meltfptr[23] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#IS_PAIR__L7*/
        meltfnum[0] =
            (melt_magic_discr((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])) == MELTOBMAG_PAIR);;
        /*^compute*/
        /*_#NOT__L8*/
        meltfnum[7] =
            (!(/*_#IS_PAIR__L7*/ meltfnum[0]));;
        MELT_LOCATION("warmelt-macro.melt:5386:/ cond");
        /*cond*/
        if (/*_#NOT__L8*/ meltfnum[7]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5387:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "missing condition in IF"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;
        /*_.PAIR_TAIL__V25*/
        meltfptr[24] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;
        MELT_LOCATION("warmelt-macro.melt:5388:/ compute");
        /*_.CURPAIR__V23*/
        meltfptr[22] = /*_.SETQ___V26*/ meltfptr[25] = /*_.PAIR_TAIL__V25*/ meltfptr[24];;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_PAIR__L9*/
        meltfnum[8] =
            (melt_magic_discr((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])) == MELTOBMAG_PAIR);;
        /*^compute*/
        /*_#NOT__L10*/
        meltfnum[9] =
            (!(/*_#IS_PAIR__L9*/ meltfnum[8]));;
        MELT_LOCATION("warmelt-macro.melt:5389:/ cond");
        /*cond*/
        if (/*_#NOT__L10*/ meltfnum[9]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5390:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "missing then in IF"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5391:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XCOND__V28*/
            meltfptr[27] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.CURIF__V24*/ meltfptr[23]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5392:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L11*/
            meltfnum[10] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5392:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L11*/ meltfnum[10]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L12*/ meltfnum[11] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5392:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L12*/ meltfnum[11];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5392;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_if xcond";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.XCOND__V28*/ meltfptr[27];
                            /*_.MELT_DEBUG_FUN__V30*/
                            meltfptr[29] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V29*/
                        meltfptr[28] = /*_.MELT_DEBUG_FUN__V30*/ meltfptr[29];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5392:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L12*/
                        meltfnum[11] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V30*/
                        meltfptr[29] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V29*/ meltfptr[28] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5392:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L11*/
            meltfnum[10] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V29*/
            meltfptr[28] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5393:/ quasiblock");


        /*_.CURTHEN__V32*/
        meltfptr[28] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;
        /*^compute*/
        /*_.PAIR_TAIL__V33*/
        meltfptr[32] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;
        MELT_LOCATION("warmelt-macro.melt:5394:/ compute");
        /*_.CURPAIR__V23*/
        meltfptr[22] = /*_.SETQ___V34*/ meltfptr[33] = /*_.PAIR_TAIL__V33*/ meltfptr[32];;
        MELT_LOCATION("warmelt-macro.melt:5395:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XTHEN__V36*/
            meltfptr[35] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.CURTHEN__V32*/ meltfptr[28]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5397:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L13*/
            meltfnum[11] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5397:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L13*/ meltfnum[11]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L14*/ meltfnum[10] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5397:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L14*/ meltfnum[10];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5397;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_if xthen";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.XTHEN__V36*/ meltfptr[35];
                            /*_.MELT_DEBUG_FUN__V38*/
                            meltfptr[37] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V37*/
                        meltfptr[36] = /*_.MELT_DEBUG_FUN__V38*/ meltfptr[37];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5397:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L14*/
                        meltfnum[10] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V38*/
                        meltfptr[37] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V37*/ meltfptr[36] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5397:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L13*/
            meltfnum[11] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V37*/
            meltfptr[36] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_PAIR__L15*/
        meltfnum[10] =
            (melt_magic_discr((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])) == MELTOBMAG_PAIR);;
        MELT_LOCATION("warmelt-macro.melt:5398:/ cond");
        /*cond*/
        if (/*_#IS_PAIR__L15*/ meltfnum[10]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    MELT_LOCATION("warmelt-macro.melt:5399:/ quasiblock");


                    /*_.CURELSE__V41*/
                    meltfptr[40] =
                        (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5400:/ apply");
                    /*apply*/
                    {
                        union meltparam_un argtab[3];
                        memset(&argtab, 0, sizeof(argtab));
                        /*^apply.arg*/
                        argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                        /*^apply.arg*/
                        argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                        /*^apply.arg*/
                        argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                        /*_.XELSE__V42*/
                        meltfptr[41] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.CURELSE__V41*/ meltfptr[40]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                    }
                    ;

#if MELT_HAVE_DEBUG
                    MELT_LOCATION("warmelt-macro.melt:5401:/ cppif.then");
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                            melt_dbgcounter++;
#endif
                            ;
                        }
                        ;

                        MELT_CHECK_SIGNAL();
                        ;
                        /*_#MELT_NEED_DBG__L16*/
                        meltfnum[11] =
                            /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                            (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                            0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                            ;;
                        MELT_LOCATION("warmelt-macro.melt:5401:/ cond");
                        /*cond*/
                        if (/*_#MELT_NEED_DBG__L16*/ meltfnum[11]) /*then*/
                            {
                                /*^cond.then*/
                                /*^block*/
                                /*anyblock*/
                                {

                                    /*_#MELT_CALLCOUNT__L17*/ meltfnum[16] =
                                        /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                        meltcallcount  /* melt_callcount debugging */
#else
                                        0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                        ;;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-macro.melt:5401:/ apply");
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[5];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L17*/ meltfnum[16];
                                        /*^apply.arg*/
                                        argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                        /*^apply.arg*/
                                        argtab[2].meltbp_long = 5401;
                                        /*^apply.arg*/
                                        argtab[3].meltbp_cstring =  "mexpand_if xelse";
                                        /*^apply.arg*/
                                        argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.XELSE__V42*/ meltfptr[41];
                                        /*_.MELT_DEBUG_FUN__V44*/
                                        meltfptr[43] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;
                                    /*_._IF___V43*/
                                    meltfptr[42] = /*_.MELT_DEBUG_FUN__V44*/ meltfptr[43];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-macro.melt:5401:/ clear");
                                    /*clear*/ /*_#MELT_CALLCOUNT__L17*/
                                    meltfnum[16] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.MELT_DEBUG_FUN__V44*/
                                    meltfptr[43] = 0 ;
                                }
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*_._IF___V43*/ meltfptr[42] =  /*reallynil*/ NULL ;;
                            }
                        ;

                        {
                            MELT_LOCATION("warmelt-macro.melt:5401:/ locexp");
                            /*void*/
                            (void)0;
                        }
                        ;
                        /*^quasiblock*/


                        /*epilog*/

                        /*^clear*/
                        /*clear*/ /*_#MELT_NEED_DBG__L16*/
                        meltfnum[11] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_._IF___V43*/
                        meltfptr[42] = 0 ;
                    }

#else /*MELT_HAVE_DEBUG*/
                    /*^cppif.else*/
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*void*/(void)0;
                        }
                        ;
                        /*epilog*/
                    }

#endif /*MELT_HAVE_DEBUG*/
                    ;
                    /*_.PAIR_TAIL__V45*/
                    meltfptr[43] =
                        (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;
                    MELT_LOCATION("warmelt-macro.melt:5402:/ compute");
                    /*_.CURPAIR__V23*/
                    meltfptr[22] = /*_.SETQ___V46*/ meltfptr[42] = /*_.PAIR_TAIL__V45*/ meltfptr[43];;

                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#IS_PAIR__L18*/
                    meltfnum[16] =
                        (melt_magic_discr((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])) == MELTOBMAG_PAIR);;
                    MELT_LOCATION("warmelt-macro.melt:5403:/ cond");
                    /*cond*/
                    if (/*_#IS_PAIR__L18*/ meltfnum[16]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {


                                {
                                    MELT_LOCATION("warmelt-macro.melt:5404:/ locexp");
                                    /* error_plain */
                                    melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "IF with more than three sons"), (melt_ptr_t)0);
                                }
                                ;
                                /*epilog*/
                            }
                            ;
                        } /*noelse*/
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5405:/ quasiblock");



                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5406:/ quasiblock");


                    /*^rawallocobj*/
                    /*rawallocobj*/
                    {
                        melt_ptr_t newobj = 0;
                        melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_IFELSE*/ meltfrout->tabval[5])), (5), "CLASS_SOURCE_IFELSE");
                        /*_.INST__V49*/
                        meltfptr[48] =
                            newobj;
                    };
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V49*/ meltfptr[48])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V49*/ meltfptr[48]), (1), (/*_.LOC__V21*/ meltfptr[20]), "LOCA_LOCATION");
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @SIF_TEST", melt_magic_discr((melt_ptr_t)(/*_.INST__V49*/ meltfptr[48])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V49*/ meltfptr[48]), (2), (/*_.XCOND__V28*/ meltfptr[27]), "SIF_TEST");
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @SIF_THEN", melt_magic_discr((melt_ptr_t)(/*_.INST__V49*/ meltfptr[48])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V49*/ meltfptr[48]), (3), (/*_.XTHEN__V36*/ meltfptr[35]), "SIF_THEN");
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @SIF_ELSE", melt_magic_discr((melt_ptr_t)(/*_.INST__V49*/ meltfptr[48])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V49*/ meltfptr[48]), (4), (/*_.XELSE__V42*/ meltfptr[41]), "SIF_ELSE");
                    ;
                    /*^touchobj*/

                    melt_dbgtrace_written_object (/*_.INST__V49*/ meltfptr[48], "newly made instance");
                    ;
                    /*_.RESE__V48*/
                    meltfptr[47] = /*_.INST__V49*/ meltfptr[48];;

#if MELT_HAVE_DEBUG
                    MELT_LOCATION("warmelt-macro.melt:5412:/ cppif.then");
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                            melt_dbgcounter++;
#endif
                            ;
                        }
                        ;

                        MELT_CHECK_SIGNAL();
                        ;
                        /*_#MELT_NEED_DBG__L19*/
                        meltfnum[11] =
                            /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                            (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                            0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                            ;;
                        MELT_LOCATION("warmelt-macro.melt:5412:/ cond");
                        /*cond*/
                        if (/*_#MELT_NEED_DBG__L19*/ meltfnum[11]) /*then*/
                            {
                                /*^cond.then*/
                                /*^block*/
                                /*anyblock*/
                                {

                                    /*_#MELT_CALLCOUNT__L20*/ meltfnum[19] =
                                        /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                        meltcallcount  /* melt_callcount debugging */
#else
                                        0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                        ;;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-macro.melt:5412:/ apply");
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[5];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L20*/ meltfnum[19];
                                        /*^apply.arg*/
                                        argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                        /*^apply.arg*/
                                        argtab[2].meltbp_long = 5412;
                                        /*^apply.arg*/
                                        argtab[3].meltbp_cstring =  "mexpand_if with else return rese";
                                        /*^apply.arg*/
                                        argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RESE__V48*/ meltfptr[47];
                                        /*_.MELT_DEBUG_FUN__V51*/
                                        meltfptr[50] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;
                                    /*_._IF___V50*/
                                    meltfptr[49] = /*_.MELT_DEBUG_FUN__V51*/ meltfptr[50];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-macro.melt:5412:/ clear");
                                    /*clear*/ /*_#MELT_CALLCOUNT__L20*/
                                    meltfnum[19] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.MELT_DEBUG_FUN__V51*/
                                    meltfptr[50] = 0 ;
                                }
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*_._IF___V50*/ meltfptr[49] =  /*reallynil*/ NULL ;;
                            }
                        ;

                        {
                            MELT_LOCATION("warmelt-macro.melt:5412:/ locexp");
                            /*void*/
                            (void)0;
                        }
                        ;
                        /*^quasiblock*/


                        /*epilog*/

                        /*^clear*/
                        /*clear*/ /*_#MELT_NEED_DBG__L19*/
                        meltfnum[11] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_._IF___V50*/
                        meltfptr[49] = 0 ;
                    }

#else /*MELT_HAVE_DEBUG*/
                    /*^cppif.else*/
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*void*/(void)0;
                        }
                        ;
                        /*epilog*/
                    }

#endif /*MELT_HAVE_DEBUG*/
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5413:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] = /*_.RESE__V48*/ meltfptr[47];;

                    {
                        MELT_LOCATION("warmelt-macro.melt:5413:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    /*_.LET___V47*/
                    meltfptr[46] = /*_.RETURN___V52*/ meltfptr[50];;

                    MELT_LOCATION("warmelt-macro.melt:5405:/ clear");
                    /*clear*/ /*_.RESE__V48*/
                    meltfptr[47] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.RETURN___V52*/
                    meltfptr[50] = 0 ;
                    /*_.LET___V40*/
                    meltfptr[36] = /*_.LET___V47*/ meltfptr[46];;

                    MELT_LOCATION("warmelt-macro.melt:5399:/ clear");
                    /*clear*/ /*_.CURELSE__V41*/
                    meltfptr[40] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.XELSE__V42*/
                    meltfptr[41] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PAIR_TAIL__V45*/
                    meltfptr[43] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.SETQ___V46*/
                    meltfptr[42] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_#IS_PAIR__L18*/
                    meltfnum[16] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.LET___V47*/
                    meltfptr[46] = 0 ;
                    /*_._IFELSE___V39*/
                    meltfptr[37] = /*_.LET___V40*/ meltfptr[36];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5398:/ clear");
                    /*clear*/ /*_.LET___V40*/
                    meltfptr[36] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*^block*/
                /*anyblock*/
                {

                    MELT_LOCATION("warmelt-macro.melt:5414:/ quasiblock");



                    MELT_CHECK_SIGNAL();
                    ;
                    /*^quasiblock*/


                    /*^rawallocobj*/
                    /*rawallocobj*/
                    {
                        melt_ptr_t newobj = 0;
                        melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_IF*/ meltfrout->tabval[6])), (4), "CLASS_SOURCE_IF");
                        /*_.INST__V55*/
                        meltfptr[50] =
                            newobj;
                    };
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V55*/ meltfptr[50])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V55*/ meltfptr[50]), (1), (/*_.LOC__V21*/ meltfptr[20]), "LOCA_LOCATION");
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @SIF_TEST", melt_magic_discr((melt_ptr_t)(/*_.INST__V55*/ meltfptr[50])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V55*/ meltfptr[50]), (2), (/*_.XCOND__V28*/ meltfptr[27]), "SIF_TEST");
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @SIF_THEN", melt_magic_discr((melt_ptr_t)(/*_.INST__V55*/ meltfptr[50])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V55*/ meltfptr[50]), (3), (/*_.XTHEN__V36*/ meltfptr[35]), "SIF_THEN");
                    ;
                    /*^touchobj*/

                    melt_dbgtrace_written_object (/*_.INST__V55*/ meltfptr[50], "newly made instance");
                    ;
                    /*_.RESP__V54*/
                    meltfptr[47] = /*_.INST__V55*/ meltfptr[50];;

#if MELT_HAVE_DEBUG
                    MELT_LOCATION("warmelt-macro.melt:5418:/ cppif.then");
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                            melt_dbgcounter++;
#endif
                            ;
                        }
                        ;

                        MELT_CHECK_SIGNAL();
                        ;
                        /*_#MELT_NEED_DBG__L21*/
                        meltfnum[19] =
                            /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                            (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                            0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                            ;;
                        MELT_LOCATION("warmelt-macro.melt:5418:/ cond");
                        /*cond*/
                        if (/*_#MELT_NEED_DBG__L21*/ meltfnum[19]) /*then*/
                            {
                                /*^cond.then*/
                                /*^block*/
                                /*anyblock*/
                                {

                                    /*_#MELT_CALLCOUNT__L22*/ meltfnum[11] =
                                        /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                        meltcallcount  /* melt_callcount debugging */
#else
                                        0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                        ;;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-macro.melt:5418:/ apply");
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[5];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L22*/ meltfnum[11];
                                        /*^apply.arg*/
                                        argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                        /*^apply.arg*/
                                        argtab[2].meltbp_long = 5418;
                                        /*^apply.arg*/
                                        argtab[3].meltbp_cstring =  "mexpand_if plain return resp";
                                        /*^apply.arg*/
                                        argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RESP__V54*/ meltfptr[47];
                                        /*_.MELT_DEBUG_FUN__V57*/
                                        meltfptr[41] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;
                                    /*_._IF___V56*/
                                    meltfptr[40] = /*_.MELT_DEBUG_FUN__V57*/ meltfptr[41];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-macro.melt:5418:/ clear");
                                    /*clear*/ /*_#MELT_CALLCOUNT__L22*/
                                    meltfnum[11] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.MELT_DEBUG_FUN__V57*/
                                    meltfptr[41] = 0 ;
                                }
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*_._IF___V56*/ meltfptr[40] =  /*reallynil*/ NULL ;;
                            }
                        ;

                        {
                            MELT_LOCATION("warmelt-macro.melt:5418:/ locexp");
                            /*void*/
                            (void)0;
                        }
                        ;
                        /*^quasiblock*/


                        /*epilog*/

                        /*^clear*/
                        /*clear*/ /*_#MELT_NEED_DBG__L21*/
                        meltfnum[19] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_._IF___V56*/
                        meltfptr[40] = 0 ;
                    }

#else /*MELT_HAVE_DEBUG*/
                    /*^cppif.else*/
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*void*/(void)0;
                        }
                        ;
                        /*epilog*/
                    }

#endif /*MELT_HAVE_DEBUG*/
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5419:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] = /*_.RESP__V54*/ meltfptr[47];;

                    {
                        MELT_LOCATION("warmelt-macro.melt:5419:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    /*_.LET___V53*/
                    meltfptr[49] = /*_.RETURN___V58*/ meltfptr[43];;

                    MELT_LOCATION("warmelt-macro.melt:5414:/ clear");
                    /*clear*/ /*_.RESP__V54*/
                    meltfptr[47] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.RETURN___V58*/
                    meltfptr[43] = 0 ;
                    /*_._IFELSE___V39*/
                    meltfptr[37] = /*_.LET___V53*/ meltfptr[49];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5398:/ clear");
                    /*clear*/ /*_.LET___V53*/
                    meltfptr[49] = 0 ;
                }
                ;
            }
        ;
        /*_.LET___V35*/
        meltfptr[34] = /*_._IFELSE___V39*/ meltfptr[37];;

        MELT_LOCATION("warmelt-macro.melt:5395:/ clear");
        /*clear*/ /*_.XTHEN__V36*/
        meltfptr[35] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_PAIR__L15*/
        meltfnum[10] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IFELSE___V39*/
        meltfptr[37] = 0 ;
        /*_.LET___V31*/
        meltfptr[29] = /*_.LET___V35*/ meltfptr[34];;

        MELT_LOCATION("warmelt-macro.melt:5393:/ clear");
        /*clear*/ /*_.CURTHEN__V32*/
        meltfptr[28] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V33*/
        meltfptr[32] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V34*/
        meltfptr[33] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V35*/
        meltfptr[34] = 0 ;
        /*_.LET___V27*/
        meltfptr[26] = /*_.LET___V31*/ meltfptr[29];;

        MELT_LOCATION("warmelt-macro.melt:5391:/ clear");
        /*clear*/ /*_.XCOND__V28*/
        meltfptr[27] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V31*/
        meltfptr[29] = 0 ;
        /*_.LET___V19*/
        meltfptr[17] = /*_.LET___V27*/ meltfptr[26];;

        MELT_LOCATION("warmelt-macro.melt:5381:/ clear");
        /*clear*/ /*_.CONT__V20*/
        meltfptr[16] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURIF__V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_PAIR__L7*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L8*/
        meltfnum[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V26*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_PAIR__L9*/
        meltfnum[8] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L10*/
        meltfnum[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V27*/
        meltfptr[26] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5375:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V19*/ meltfptr[17];;

        {
            MELT_LOCATION("warmelt-macro.melt:5375:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NULL__L5*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V16*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V19*/
        meltfptr[17] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_IF", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_90_WARMELTmiMACRO_MEXPAND_IF_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_90_WARMELTmiMACRO_MEXPAND_IF*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN fromline 1718 */

    /** start of frame for meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN// fromline 1534
        : public Melt_CallFrameWithValues<34>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[12];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<34> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN), clos) {};
        MeltFrame_meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN() //the constructor fromline 1608
            : Melt_CallFrameWithValues<34> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<34> (fil,lin, sizeof(MeltFrame_meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN)) {};
        MeltFrame_meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<34> (fil,lin, sizeof(MeltFrame_meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN


    /** end of frame for meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN fromline 1663**/

    /* end of frame for routine meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN fromline 1722 */

    /* classy proc frame meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN */
    MeltFrame_meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_WHEN", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5429:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5430:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5430:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5430:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5430;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_when sexpr";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5430:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5430:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5431:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:5431:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5431:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5431;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5431:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5431:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5432:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:5432:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5432:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5432;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5432:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5432:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#NULL__L5*/
        meltfnum[1] =
            ((/*_.MEXPANDER__V4*/ meltfptr[3]) == NULL);;
        MELT_LOCATION("warmelt-macro.melt:5433:/ cond");
        /*cond*/
        if (/*_#NULL__L5*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*^compute*/
                    /*_.MEXPANDER__V4*/ meltfptr[3] = /*_.SETQ___V15*/ meltfptr[5] = (/*!MACROEXPAND_1*/ meltfrout->tabval[4]);;
                    /*_._IF___V14*/
                    meltfptr[12] = /*_.SETQ___V15*/ meltfptr[5];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5433:/ clear");
                    /*clear*/ /*_.SETQ___V15*/
                    meltfptr[5] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V14*/ meltfptr[12] =  /*reallynil*/ NULL ;;
            }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5434:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L6*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:5434:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V17*/ meltfptr[16] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5434:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5434;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V18*/
                            meltfptr[17] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V17*/
                        meltfptr[16] = /*_.MELT_ASSERT_FAILURE_FUN__V18*/ meltfptr[17];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5434:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V18*/
                        meltfptr[17] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V16*/
            meltfptr[5] = /*_._IFELSE___V17*/ meltfptr[16];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5434:/ clear");
            /*clear*/ /*_#IS_OBJECT__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V17*/
            meltfptr[16] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V16*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5435:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:5436:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V20*/
            meltfptr[16] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5437:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V21*/
            meltfptr[20] = slot;
        };
        ;
        /*_.LIST_FIRST__V22*/
        meltfptr[21] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V20*/ meltfptr[16])));;
        /*^compute*/
        /*_.CURPAIR__V23*/
        meltfptr[22] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V22*/ meltfptr[21])));;
        /*^compute*/
        /*_.CURIF__V24*/
        meltfptr[23] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#IS_PAIR__L7*/
        meltfnum[0] =
            (melt_magic_discr((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])) == MELTOBMAG_PAIR);;
        /*^compute*/
        /*_#NOT__L8*/
        meltfnum[7] =
            (!(/*_#IS_PAIR__L7*/ meltfnum[0]));;
        MELT_LOCATION("warmelt-macro.melt:5441:/ cond");
        /*cond*/
        if (/*_#NOT__L8*/ meltfnum[7]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5442:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "missing condition in WHEN"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;
        /*_.PAIR_TAIL__V25*/
        meltfptr[24] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;
        MELT_LOCATION("warmelt-macro.melt:5443:/ compute");
        /*_.CURPAIR__V23*/
        meltfptr[22] = /*_.SETQ___V26*/ meltfptr[25] = /*_.PAIR_TAIL__V25*/ meltfptr[24];;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_PAIR__L9*/
        meltfnum[8] =
            (melt_magic_discr((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])) == MELTOBMAG_PAIR);;
        /*^compute*/
        /*_#NOT__L10*/
        meltfnum[9] =
            (!(/*_#IS_PAIR__L9*/ meltfnum[8]));;
        MELT_LOCATION("warmelt-macro.melt:5444:/ cond");
        /*cond*/
        if (/*_#NOT__L10*/ meltfnum[9]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5445:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "missing body in WHEN"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5446:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XCOND__V28*/
            meltfptr[27] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.CURIF__V24*/ meltfptr[23]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5447:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[4];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.LOC__V21*/ meltfptr[20];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XPROGN__V29*/
            meltfptr[28] =  melt_apply ((meltclosure_ptr_t)((/*!PAIRLIST_TO_PROGN*/ meltfrout->tabval[5])), (melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5448:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_IF*/ meltfrout->tabval[6])), (4), "CLASS_SOURCE_IF");
            /*_.INST__V31*/
            meltfptr[30] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V31*/ meltfptr[30])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V31*/ meltfptr[30]), (1), (/*_.LOC__V21*/ meltfptr[20]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SIF_TEST", melt_magic_discr((melt_ptr_t)(/*_.INST__V31*/ meltfptr[30])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V31*/ meltfptr[30]), (2), (/*_.XCOND__V28*/ meltfptr[27]), "SIF_TEST");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SIF_THEN", melt_magic_discr((melt_ptr_t)(/*_.INST__V31*/ meltfptr[30])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V31*/ meltfptr[30]), (3), (/*_.XPROGN__V29*/ meltfptr[28]), "SIF_THEN");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V31*/ meltfptr[30], "newly made instance");
        ;
        /*_.XWHEN__V30*/
        meltfptr[29] = /*_.INST__V31*/ meltfptr[30];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5453:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L11*/
            meltfnum[10] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5453:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L11*/ meltfnum[10]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L12*/ meltfnum[11] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5453:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L12*/ meltfnum[11];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5453;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_when return xwhen=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.XWHEN__V30*/ meltfptr[29];
                            /*_.MELT_DEBUG_FUN__V33*/
                            meltfptr[32] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V32*/
                        meltfptr[31] = /*_.MELT_DEBUG_FUN__V33*/ meltfptr[32];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5453:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L12*/
                        meltfnum[11] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V33*/
                        meltfptr[32] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V32*/ meltfptr[31] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5453:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L11*/
            meltfnum[10] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V32*/
            meltfptr[31] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5454:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.XWHEN__V30*/ meltfptr[29];;

        {
            MELT_LOCATION("warmelt-macro.melt:5454:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V27*/
        meltfptr[26] = /*_.RETURN___V34*/ meltfptr[32];;

        MELT_LOCATION("warmelt-macro.melt:5446:/ clear");
        /*clear*/ /*_.XCOND__V28*/
        meltfptr[27] = 0 ;
        /*^clear*/
        /*clear*/ /*_.XPROGN__V29*/
        meltfptr[28] = 0 ;
        /*^clear*/
        /*clear*/ /*_.XWHEN__V30*/
        meltfptr[29] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V34*/
        meltfptr[32] = 0 ;
        /*_.LET___V19*/
        meltfptr[17] = /*_.LET___V27*/ meltfptr[26];;

        MELT_LOCATION("warmelt-macro.melt:5435:/ clear");
        /*clear*/ /*_.CONT__V20*/
        meltfptr[16] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURIF__V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_PAIR__L7*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L8*/
        meltfnum[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V26*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_PAIR__L9*/
        meltfnum[8] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L10*/
        meltfnum[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V27*/
        meltfptr[26] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5429:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V19*/ meltfptr[17];;

        {
            MELT_LOCATION("warmelt-macro.melt:5429:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NULL__L5*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V16*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V19*/
        meltfptr[17] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_WHEN", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_91_WARMELTmiMACRO_MEXPAND_WHEN*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS fromline 1718 */

    /** start of frame for meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS// fromline 1534
        : public Melt_CallFrameWithValues<34>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[12];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<34> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS), clos) {};
        MeltFrame_meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS() //the constructor fromline 1608
            : Melt_CallFrameWithValues<34> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<34> (fil,lin, sizeof(MeltFrame_meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS)) {};
        MeltFrame_meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<34> (fil,lin, sizeof(MeltFrame_meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS


    /** end of frame for meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS fromline 1663**/

    /* end of frame for routine meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS fromline 1722 */

    /* classy proc frame meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS */
    MeltFrame_meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_UNLESS", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5465:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5466:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5466:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5466:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5466;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_unless sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5466:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5466:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5467:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:5467:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5467:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5467;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5467:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5467:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5468:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:5468:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5468:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5468;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5468:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5468:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#NULL__L5*/
        meltfnum[1] =
            ((/*_.MEXPANDER__V4*/ meltfptr[3]) == NULL);;
        MELT_LOCATION("warmelt-macro.melt:5469:/ cond");
        /*cond*/
        if (/*_#NULL__L5*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*^compute*/
                    /*_.MEXPANDER__V4*/ meltfptr[3] = /*_.SETQ___V15*/ meltfptr[5] = (/*!MACROEXPAND_1*/ meltfrout->tabval[4]);;
                    /*_._IF___V14*/
                    meltfptr[12] = /*_.SETQ___V15*/ meltfptr[5];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5469:/ clear");
                    /*clear*/ /*_.SETQ___V15*/
                    meltfptr[5] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V14*/ meltfptr[12] =  /*reallynil*/ NULL ;;
            }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5470:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L6*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:5470:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V17*/ meltfptr[16] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5470:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5470;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V18*/
                            meltfptr[17] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V17*/
                        meltfptr[16] = /*_.MELT_ASSERT_FAILURE_FUN__V18*/ meltfptr[17];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5470:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V18*/
                        meltfptr[17] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V16*/
            meltfptr[5] = /*_._IFELSE___V17*/ meltfptr[16];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5470:/ clear");
            /*clear*/ /*_#IS_OBJECT__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V17*/
            meltfptr[16] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V16*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5471:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:5472:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V20*/
            meltfptr[16] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5473:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V21*/
            meltfptr[20] = slot;
        };
        ;
        /*_.LIST_FIRST__V22*/
        meltfptr[21] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V20*/ meltfptr[16])));;
        /*^compute*/
        /*_.CURPAIR__V23*/
        meltfptr[22] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V22*/ meltfptr[21])));;
        /*^compute*/
        /*_.CURIF__V24*/
        meltfptr[23] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#IS_PAIR__L7*/
        meltfnum[0] =
            (melt_magic_discr((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])) == MELTOBMAG_PAIR);;
        /*^compute*/
        /*_#NOT__L8*/
        meltfnum[7] =
            (!(/*_#IS_PAIR__L7*/ meltfnum[0]));;
        MELT_LOCATION("warmelt-macro.melt:5477:/ cond");
        /*cond*/
        if (/*_#NOT__L8*/ meltfnum[7]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5478:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "missing condition in UNLESS"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;
        /*_.PAIR_TAIL__V25*/
        meltfptr[24] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;
        MELT_LOCATION("warmelt-macro.melt:5479:/ compute");
        /*_.CURPAIR__V23*/
        meltfptr[22] = /*_.SETQ___V26*/ meltfptr[25] = /*_.PAIR_TAIL__V25*/ meltfptr[24];;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_PAIR__L9*/
        meltfnum[8] =
            (melt_magic_discr((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])) == MELTOBMAG_PAIR);;
        /*^compute*/
        /*_#NOT__L10*/
        meltfnum[9] =
            (!(/*_#IS_PAIR__L9*/ meltfnum[8]));;
        MELT_LOCATION("warmelt-macro.melt:5480:/ cond");
        /*cond*/
        if (/*_#NOT__L10*/ meltfnum[9]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5481:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "missing body in UNLESS"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5482:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XCOND__V28*/
            meltfptr[27] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.CURIF__V24*/ meltfptr[23]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5483:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[4];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.LOC__V21*/ meltfptr[20];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XPROGN__V29*/
            meltfptr[28] =  melt_apply ((meltclosure_ptr_t)((/*!PAIRLIST_TO_PROGN*/ meltfrout->tabval[5])), (melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5484:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_IFELSE*/ meltfrout->tabval[6])), (5), "CLASS_SOURCE_IFELSE");
            /*_.INST__V31*/
            meltfptr[30] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V31*/ meltfptr[30])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V31*/ meltfptr[30]), (1), (/*_.LOC__V21*/ meltfptr[20]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SIF_TEST", melt_magic_discr((melt_ptr_t)(/*_.INST__V31*/ meltfptr[30])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V31*/ meltfptr[30]), (2), (/*_.XCOND__V28*/ meltfptr[27]), "SIF_TEST");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SIF_THEN", melt_magic_discr((melt_ptr_t)(/*_.INST__V31*/ meltfptr[30])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V31*/ meltfptr[30]), (3), ((/*nil*/NULL)), "SIF_THEN");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SIF_ELSE", melt_magic_discr((melt_ptr_t)(/*_.INST__V31*/ meltfptr[30])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V31*/ meltfptr[30]), (4), (/*_.XPROGN__V29*/ meltfptr[28]), "SIF_ELSE");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V31*/ meltfptr[30], "newly made instance");
        ;
        /*_.XUNLESS__V30*/
        meltfptr[29] = /*_.INST__V31*/ meltfptr[30];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5490:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L11*/
            meltfnum[10] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5490:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L11*/ meltfnum[10]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L12*/ meltfnum[11] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5490:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L12*/ meltfnum[11];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5490;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_unless return xunless=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.XUNLESS__V30*/ meltfptr[29];
                            /*_.MELT_DEBUG_FUN__V33*/
                            meltfptr[32] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V32*/
                        meltfptr[31] = /*_.MELT_DEBUG_FUN__V33*/ meltfptr[32];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5490:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L12*/
                        meltfnum[11] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V33*/
                        meltfptr[32] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V32*/ meltfptr[31] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5490:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L11*/
            meltfnum[10] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V32*/
            meltfptr[31] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5491:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.XUNLESS__V30*/ meltfptr[29];;

        {
            MELT_LOCATION("warmelt-macro.melt:5491:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V27*/
        meltfptr[26] = /*_.RETURN___V34*/ meltfptr[32];;

        MELT_LOCATION("warmelt-macro.melt:5482:/ clear");
        /*clear*/ /*_.XCOND__V28*/
        meltfptr[27] = 0 ;
        /*^clear*/
        /*clear*/ /*_.XPROGN__V29*/
        meltfptr[28] = 0 ;
        /*^clear*/
        /*clear*/ /*_.XUNLESS__V30*/
        meltfptr[29] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V34*/
        meltfptr[32] = 0 ;
        /*_.LET___V19*/
        meltfptr[17] = /*_.LET___V27*/ meltfptr[26];;

        MELT_LOCATION("warmelt-macro.melt:5471:/ clear");
        /*clear*/ /*_.CONT__V20*/
        meltfptr[16] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURIF__V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_PAIR__L7*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L8*/
        meltfnum[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V26*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_PAIR__L9*/
        meltfnum[8] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L10*/
        meltfnum[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V27*/
        meltfptr[26] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5465:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V19*/ meltfptr[17];;

        {
            MELT_LOCATION("warmelt-macro.melt:5465:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NULL__L5*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V16*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V19*/
        meltfptr[17] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_UNLESS", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_92_WARMELTmiMACRO_MEXPAND_UNLESS*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB fromline 1718 */

    /** start of frame for meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB// fromline 1534
        : public Melt_CallFrameWithValues<54>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[14];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<54> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB), clos) {};
        MeltFrame_meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB() //the constructor fromline 1608
            : Melt_CallFrameWithValues<54> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<54> (fil,lin, sizeof(MeltFrame_meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB)) {};
        MeltFrame_meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<54> (fil,lin, sizeof(MeltFrame_meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB


    /** end of frame for meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB fromline 1663**/

    /* end of frame for routine meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB fromline 1722 */

    /* classy proc frame meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB */
    MeltFrame_meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_WITH_CLONED_SYMB", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5504:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5505:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5505:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5505:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5505;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_with_cloned_symb sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5505:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5505:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5506:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:5506:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5506:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5506;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5506:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5506:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5507:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:5507:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5507:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5507;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5507:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5507:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#NULL__L5*/
        meltfnum[1] =
            ((/*_.MEXPANDER__V4*/ meltfptr[3]) == NULL);;
        MELT_LOCATION("warmelt-macro.melt:5508:/ cond");
        /*cond*/
        if (/*_#NULL__L5*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*^compute*/
                    /*_.MEXPANDER__V4*/ meltfptr[3] = /*_.SETQ___V15*/ meltfptr[5] = (/*!MACROEXPAND_1*/ meltfrout->tabval[4]);;
                    /*_._IF___V14*/
                    meltfptr[12] = /*_.SETQ___V15*/ meltfptr[5];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5508:/ clear");
                    /*clear*/ /*_.SETQ___V15*/
                    meltfptr[5] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V14*/ meltfptr[12] =  /*reallynil*/ NULL ;;
            }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5509:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L6*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:5509:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V17*/ meltfptr[16] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5509:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5509;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V18*/
                            meltfptr[17] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V17*/
                        meltfptr[16] = /*_.MELT_ASSERT_FAILURE_FUN__V18*/ meltfptr[17];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5509:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V18*/
                        meltfptr[17] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V16*/
            meltfptr[5] = /*_._IFELSE___V17*/ meltfptr[16];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5509:/ clear");
            /*clear*/ /*_#IS_OBJECT__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V17*/
            meltfptr[16] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V16*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5510:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:5511:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V20*/
            meltfptr[16] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5512:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V21*/
            meltfptr[20] = slot;
        };
        ;
        /*_.LIST_FIRST__V22*/
        meltfptr[21] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V20*/ meltfptr[16])));;
        /*^compute*/
        /*_.CURPAIR__V23*/
        meltfptr[22] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V22*/ meltfptr[21])));;
        /*^compute*/
        /*_.SYMBS__V24*/
        meltfptr[23] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5515:/ apply");
        /*apply*/
        {
            /*_.NEWENV__V25*/ meltfptr[24] =  melt_apply ((meltclosure_ptr_t)((/*!FRESH_ENV*/ meltfrout->tabval[5])), (melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (""), (union meltparam_un*)0, "", (union meltparam_un*)0);
        }
        ;
        /*_.BINDLIST__V26*/
        meltfptr[25] =
            (meltgc_new_list((meltobject_ptr_t)((/*!DISCR_LIST*/ meltfrout->tabval[6]))));;
        /*^compute*/
        /*_.BODYL__V27*/
        meltfptr[26] = (/*nil*/NULL);;
        MELT_LOCATION("warmelt-macro.melt:5519:/ quasiblock");


        /*^newclosure*/
        /*newclosure*/ /*_.LAMBDA___V29*/
        meltfptr[28] =
            (melt_ptr_t) meltgc_new_closure((meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_CLOSURE)))), (meltroutine_ptr_t)((/*!konst_17*/ meltfrout->tabval[17])), (2));
        ;
        /*^putclosedv*/
        /*putclosv*/
        melt_assertmsg("putclosv checkclo", melt_magic_discr((melt_ptr_t)(/*_.LAMBDA___V29*/ meltfptr[28])) == MELTOBMAG_CLOSURE);
        melt_assertmsg("putclosv checkoff", 0>= 0 && 0< melt_closure_size((melt_ptr_t) (/*_.LAMBDA___V29*/ meltfptr[28])));
        ((meltclosure_ptr_t)/*_.LAMBDA___V29*/ meltfptr[28])->tabval[0] = (melt_ptr_t)(/*_.NEWENV__V25*/ meltfptr[24]);
        ;
        /*^putclosedv*/
        /*putclosv*/
        melt_assertmsg("putclosv checkclo", melt_magic_discr((melt_ptr_t)(/*_.LAMBDA___V29*/ meltfptr[28])) == MELTOBMAG_CLOSURE);
        melt_assertmsg("putclosv checkoff", 1>= 0 && 1< melt_closure_size((melt_ptr_t) (/*_.LAMBDA___V29*/ meltfptr[28])));
        ((meltclosure_ptr_t)/*_.LAMBDA___V29*/ meltfptr[28])->tabval[1] = (melt_ptr_t)(/*_.BINDLIST__V26*/ meltfptr[25]);
        ;
        /*_.PROCESSLIST__V28*/
        meltfptr[27] = /*_.LAMBDA___V29*/ meltfptr[28];;
        /*^compute*/
        /*_.PAIR_TAIL__V30*/
        meltfptr[29] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;
        MELT_LOCATION("warmelt-macro.melt:5551:/ compute");
        /*_.CURPAIR__V23*/
        meltfptr[22] = /*_.SETQ___V31*/ meltfptr[30] = /*_.PAIR_TAIL__V30*/ meltfptr[29];;

        MELT_CHECK_SIGNAL();
        ;
        /*_#NULL__L7*/
        meltfnum[0] =
            ((/*_.SYMBS__V24*/ meltfptr[23]) == NULL);;
        MELT_LOCATION("warmelt-macro.melt:5553:/ cond");
        /*cond*/
        if (/*_#NULL__L7*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {




                    {
                        MELT_LOCATION("warmelt-macro.melt:5554:/ locexp");
                        /*void*/
                        (void)0;
                    }
                    ;
                    /*clear*/ /*_._IFELSE___V32*/
                    meltfptr[31] = 0 ;
                    /*epilog*/
                }
                ;
            }
        else
            {
                MELT_LOCATION("warmelt-macro.melt:5553:/ cond.else");

                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#IS_A__L8*/
                    meltfnum[7] =
                        melt_is_instance_of((melt_ptr_t)(/*_.SYMBS__V24*/ meltfptr[23]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
                    MELT_LOCATION("warmelt-macro.melt:5556:/ cond");
                    /*cond*/
                    if (/*_#IS_A__L8*/ meltfnum[7]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {

                                MELT_LOCATION("warmelt-macro.melt:5557:/ quasiblock");


                                /*^getslot*/
                                {
                                    melt_ptr_t slot=NULL, obj=NULL;
                                    obj = (melt_ptr_t)(/*_.SYMBS__V24*/ meltfptr[23]) /*=obj*/;
                                    melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
                                    /*_.LOCA_LOCATION__V34*/
                                    meltfptr[33] = slot;
                                };
                                ;
                                /*^cond*/
                                /*cond*/
                                if (/*_.LOCA_LOCATION__V34*/ meltfptr[33]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*_.SYLOC__V35*/ meltfptr[34] = /*_.LOCA_LOCATION__V34*/ meltfptr[33];;
                                    }
                                else
                                    {
                                        MELT_LOCATION("warmelt-macro.melt:5557:/ cond.else");

                                        /*_.SYLOC__V35*/
                                        meltfptr[34] = /*_.LOC__V21*/ meltfptr[20];;
                                    }
                                ;
                                MELT_LOCATION("warmelt-macro.melt:5558:/ getslot");
                                {
                                    melt_ptr_t slot=NULL, obj=NULL;
                                    obj = (melt_ptr_t)(/*_.SYMBS__V24*/ meltfptr[23]) /*=obj*/;
                                    melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
                                    /*_.SYLIST__V36*/
                                    meltfptr[35] = slot;
                                };
                                ;

                                MELT_CHECK_SIGNAL();
                                ;
                                MELT_LOCATION("warmelt-macro.melt:5560:/ apply");
                                /*apply*/
                                {
                                    union meltparam_un argtab[1];
                                    memset(&argtab, 0, sizeof(argtab));
                                    /*^apply.arg*/
                                    argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.SYLIST__V36*/ meltfptr[35];
                                    /*_.PROCESSLIST__V37*/
                                    meltfptr[36] =  melt_apply ((meltclosure_ptr_t)(/*_.PROCESSLIST__V28*/ meltfptr[27]), (melt_ptr_t)(/*_.SYLOC__V35*/ meltfptr[34]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                }
                                ;

                                {
                                    MELT_LOCATION("warmelt-macro.melt:5561:/ locexp");
                                    /*void*/
                                    (void)0;
                                }
                                ;
                                /*_._IFELSE___V33*/
                                meltfptr[32] = /*_.PROCESSLIST__V37*/ meltfptr[36];;

                                MELT_LOCATION("warmelt-macro.melt:5557:/ clear");
                                /*clear*/ /*_.LOCA_LOCATION__V34*/
                                meltfptr[33] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.SYLOC__V35*/
                                meltfptr[34] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.SYLIST__V36*/
                                meltfptr[35] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.PROCESSLIST__V37*/
                                meltfptr[36] = 0 ;
                                /*epilog*/
                            }
                            ;
                        }
                    else
                        {
                            MELT_LOCATION("warmelt-macro.melt:5556:/ cond.else");

                            /*^block*/
                            /*anyblock*/
                            {


                                MELT_CHECK_SIGNAL();
                                ;
                                /*_#IS_LIST__L9*/
                                meltfnum[8] =
                                    (melt_magic_discr((melt_ptr_t)(/*_.SYMBS__V24*/ meltfptr[23])) == MELTOBMAG_LIST);;
                                MELT_LOCATION("warmelt-macro.melt:5563:/ cond");
                                /*cond*/
                                if (/*_#IS_LIST__L9*/ meltfnum[8]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^block*/
                                        /*anyblock*/
                                        {


                                            MELT_CHECK_SIGNAL();
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:5564:/ apply");
                                            /*apply*/
                                            {
                                                union meltparam_un argtab[1];
                                                memset(&argtab, 0, sizeof(argtab));
                                                /*^apply.arg*/
                                                argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.SYMBS__V24*/ meltfptr[23];
                                                /*_.PROCESSLIST__V39*/
                                                meltfptr[34] =  melt_apply ((meltclosure_ptr_t)(/*_.PROCESSLIST__V28*/ meltfptr[27]), (melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                            }
                                            ;

                                            {
                                                MELT_LOCATION("warmelt-macro.melt:5565:/ locexp");
                                                /*void*/
                                                (void)0;
                                            }
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:5563:/ quasiblock");


                                            /*epilog*/

                                            /*^clear*/
                                            /*clear*/ /*_.PROCESSLIST__V39*/
                                            meltfptr[34] = 0 ;
                                        }
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*^block*/
                                        /*anyblock*/
                                        {


                                            MELT_CHECK_SIGNAL();
                                            ;
                                            /*_#IS_MULTIPLE__L10*/
                                            meltfnum[9] =
                                                (melt_magic_discr((melt_ptr_t)(/*_.SYMBS__V24*/ meltfptr[23])) == MELTOBMAG_MULTIPLE);;
                                            MELT_LOCATION("warmelt-macro.melt:5566:/ cond");
                                            /*cond*/
                                            if (/*_#IS_MULTIPLE__L10*/ meltfnum[9]) /*then*/
                                                {
                                                    /*^cond.then*/
                                                    /*^block*/
                                                    /*anyblock*/
                                                    {


                                                        MELT_CHECK_SIGNAL();
                                                        ;
                                                        MELT_LOCATION("warmelt-macro.melt:5567:/ apply");
                                                        /*apply*/
                                                        {
                                                            union meltparam_un argtab[1];
                                                            memset(&argtab, 0, sizeof(argtab));
                                                            /*^apply.arg*/
                                                            argtab[0].meltbp_aptr = (melt_ptr_t*) &(/*!DISCR_LIST*/ meltfrout->tabval[6]);
                                                            /*_.MULTIPLE_TO_LIST__V41*/
                                                            meltfptr[36] =  melt_apply ((meltclosure_ptr_t)((/*!MULTIPLE_TO_LIST*/ meltfrout->tabval[18])), (melt_ptr_t)(/*_.SYMBS__V24*/ meltfptr[23]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                        }
                                                        ;

                                                        MELT_CHECK_SIGNAL();
                                                        ;
                                                        /*^apply*/
                                                        /*apply*/
                                                        {
                                                            union meltparam_un argtab[1];
                                                            memset(&argtab, 0, sizeof(argtab));
                                                            /*^apply.arg*/
                                                            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.MULTIPLE_TO_LIST__V41*/ meltfptr[36];
                                                            /*_.PROCESSLIST__V42*/
                                                            meltfptr[34] =  melt_apply ((meltclosure_ptr_t)(/*_.PROCESSLIST__V28*/ meltfptr[27]), (melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                        }
                                                        ;

                                                        {
                                                            MELT_LOCATION("warmelt-macro.melt:5568:/ locexp");
                                                            /*void*/
                                                            (void)0;
                                                        }
                                                        ;
                                                        MELT_LOCATION("warmelt-macro.melt:5566:/ quasiblock");


                                                        /*epilog*/

                                                        /*^clear*/
                                                        /*clear*/ /*_.MULTIPLE_TO_LIST__V41*/
                                                        meltfptr[36] = 0 ;
                                                        /*^clear*/
                                                        /*clear*/ /*_.PROCESSLIST__V42*/
                                                        meltfptr[34] = 0 ;
                                                    }
                                                    ;
                                                }
                                            else    /*^cond.else*/
                                                {

                                                    /*^block*/
                                                    /*anyblock*/
                                                    {


                                                        {
                                                            MELT_LOCATION("warmelt-macro.melt:5570:/ locexp");
                                                            /* error_plain */
                                                            melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "WITH_CLONED_SYMB wants a list of symbols as first argument"), (melt_ptr_t)0);
                                                        }
                                                        ;

                                                        MELT_CHECK_SIGNAL();
                                                        ;
                                                        MELT_LOCATION("warmelt-macro.melt:5571:/ quasiblock");


                                                        /*_._RETVAL___V1*/
                                                        meltfptr[0] = (/*nil*/NULL);;
                                                        MELT_LOCATION("warmelt-macro.melt:5571:/ putxtraresult");
                                                        if (!meltxrestab_ || !meltxresdescr_) goto meltlabend_rout;
                                                        if (meltxresdescr_[0] != MELTBPAR_PTR) goto meltlabend_rout;
                                                        if (meltxrestab_[0].meltbp_aptr) *(meltxrestab_[0].meltbp_aptr) = (melt_ptr_t) ((/*nil*/NULL));
                                                        ;
                                                        /*^finalreturn*/
                                                        ;
                                                        /*finalret*/
                                                        goto meltlabend_rout ;
                                                        MELT_LOCATION("warmelt-macro.melt:5569:/ quasiblock");


                                                        /*_.PROGN___V44*/
                                                        meltfptr[34] = /*_.RETURN___V43*/ meltfptr[36];;
                                                        /*^compute*/
                                                        /*_._IFELSE___V40*/
                                                        meltfptr[35] = /*_.PROGN___V44*/ meltfptr[34];;
                                                        /*epilog*/

                                                        MELT_LOCATION("warmelt-macro.melt:5566:/ clear");
                                                        /*clear*/ /*_.RETURN___V43*/
                                                        meltfptr[36] = 0 ;
                                                        /*^clear*/
                                                        /*clear*/ /*_.PROGN___V44*/
                                                        meltfptr[34] = 0 ;
                                                    }
                                                    ;
                                                }
                                            ;
                                            /*_._IFELSE___V38*/
                                            meltfptr[33] = /*_._IFELSE___V40*/ meltfptr[35];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:5563:/ clear");
                                            /*clear*/ /*_#IS_MULTIPLE__L10*/
                                            meltfnum[9] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_._IFELSE___V40*/
                                            meltfptr[35] = 0 ;
                                        }
                                        ;
                                    }
                                ;
                                /*_._IFELSE___V33*/
                                meltfptr[32] = /*_._IFELSE___V38*/ meltfptr[33];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:5556:/ clear");
                                /*clear*/ /*_#IS_LIST__L9*/
                                meltfnum[8] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_._IFELSE___V38*/
                                meltfptr[33] = 0 ;
                            }
                            ;
                        }
                    ;
                    /*_._IFELSE___V32*/
                    meltfptr[31] = /*_._IFELSE___V33*/ meltfptr[32];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5553:/ clear");
                    /*clear*/ /*_#IS_A__L8*/
                    meltfnum[7] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_._IFELSE___V33*/
                    meltfptr[32] = 0 ;
                }
                ;
            }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5572:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L11*/
            meltfnum[9] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5572:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L11*/ meltfnum[9]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L12*/ meltfnum[8] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5572:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L12*/ meltfnum[8];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5572;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_with_cloned_symb bindlist=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.BINDLIST__V26*/ meltfptr[25];
                            /*_.MELT_DEBUG_FUN__V46*/
                            meltfptr[34] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V45*/
                        meltfptr[36] = /*_.MELT_DEBUG_FUN__V46*/ meltfptr[34];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5572:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L12*/
                        meltfnum[8] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V46*/
                        meltfptr[34] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V45*/ meltfptr[36] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5572:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L11*/
            meltfnum[9] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V45*/
            meltfptr[36] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5574:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.NEWENV__V25*/ meltfptr[24];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.MBODY__V48*/
            meltfptr[33] =  melt_apply ((meltclosure_ptr_t)((/*!EXPAND_PAIRLIST_AS_TUPLE*/ meltfrout->tabval[19])), (melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5577:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[1];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &(/*!DISCR_MULTIPLE*/ meltfrout->tabval[22]);
            /*_.LIST_TO_MULTIPLE__V49*/
            meltfptr[32] =  melt_apply ((meltclosure_ptr_t)((/*!LIST_TO_MULTIPLE*/ meltfrout->tabval[21])), (melt_ptr_t)(/*_.BINDLIST__V26*/ meltfptr[25]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        MELT_LOCATION("warmelt-macro.melt:5575:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_LET*/ meltfrout->tabval[20])), (4), "CLASS_SOURCE_LET");
            /*_.INST__V51*/
            meltfptr[36] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V51*/ meltfptr[36])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V51*/ meltfptr[36]), (1), (/*_.LOC__V21*/ meltfptr[20]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SLET_BINDINGS", melt_magic_discr((melt_ptr_t)(/*_.INST__V51*/ meltfptr[36])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V51*/ meltfptr[36]), (2), (/*_.LIST_TO_MULTIPLE__V49*/ meltfptr[32]), "SLET_BINDINGS");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SLET_BODY", melt_magic_discr((melt_ptr_t)(/*_.INST__V51*/ meltfptr[36])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V51*/ meltfptr[36]), (3), (/*_.MBODY__V48*/ meltfptr[33]), "SLET_BODY");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V51*/ meltfptr[36], "newly made instance");
        ;
        /*_.MLET__V50*/
        meltfptr[34] = /*_.INST__V51*/ meltfptr[36];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5581:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L13*/
            meltfnum[7] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5581:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L13*/ meltfnum[7]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L14*/ meltfnum[8] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5581:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L14*/ meltfnum[8];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5581;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_with_cloned_symb result mbody=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.MBODY__V48*/ meltfptr[33];
                            /*_.MELT_DEBUG_FUN__V53*/
                            meltfptr[52] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V52*/
                        meltfptr[51] = /*_.MELT_DEBUG_FUN__V53*/ meltfptr[52];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5581:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L14*/
                        meltfnum[8] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V53*/
                        meltfptr[52] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V52*/ meltfptr[51] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5581:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L13*/
            meltfnum[7] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V52*/
            meltfptr[51] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5582:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.MBODY__V48*/ meltfptr[33];;

        {
            MELT_LOCATION("warmelt-macro.melt:5582:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V47*/
        meltfptr[35] = /*_.RETURN___V54*/ meltfptr[52];;

        MELT_LOCATION("warmelt-macro.melt:5574:/ clear");
        /*clear*/ /*_.MBODY__V48*/
        meltfptr[33] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_TO_MULTIPLE__V49*/
        meltfptr[32] = 0 ;
        /*^clear*/
        /*clear*/ /*_.MLET__V50*/
        meltfptr[34] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V54*/
        meltfptr[52] = 0 ;
        /*_.LET___V19*/
        meltfptr[17] = /*_.LET___V47*/ meltfptr[35];;

        MELT_LOCATION("warmelt-macro.melt:5510:/ clear");
        /*clear*/ /*_.CONT__V20*/
        meltfptr[16] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SYMBS__V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.NEWENV__V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.BINDLIST__V26*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_.BODYL__V27*/
        meltfptr[26] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PROCESSLIST__V28*/
        meltfptr[27] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V30*/
        meltfptr[29] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V31*/
        meltfptr[30] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NULL__L7*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IFELSE___V32*/
        meltfptr[31] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V47*/
        meltfptr[35] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5504:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V19*/ meltfptr[17];;

        {
            MELT_LOCATION("warmelt-macro.melt:5504:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NULL__L5*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V16*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V19*/
        meltfptr[17] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_WITH_CLONED_SYMB", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_93_WARMELTmiMACRO_MEXPAND_WITH_CLONED_SYMB*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_94_WARMELTmiMACRO_LAMBDA_cl17(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                       const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_94_WARMELTmiMACRO_LAMBDA_cl17_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_94_WARMELTmiMACRO_LAMBDA_cl17 fromline 1718 */

    /** start of frame for meltrout_94_WARMELTmiMACRO_LAMBDA_cl17 of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_94_WARMELTmiMACRO_LAMBDA_cl17// fromline 1534
        : public Melt_CallFrameWithValues<23>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[3];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_94_WARMELTmiMACRO_LAMBDA_cl17(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<23> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_94_WARMELTmiMACRO_LAMBDA_cl17), clos) {};
        MeltFrame_meltrout_94_WARMELTmiMACRO_LAMBDA_cl17() //the constructor fromline 1608
            : Melt_CallFrameWithValues<23> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_94_WARMELTmiMACRO_LAMBDA_cl17)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_94_WARMELTmiMACRO_LAMBDA_cl17(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<23> (fil,lin, sizeof(MeltFrame_meltrout_94_WARMELTmiMACRO_LAMBDA_cl17)) {};
        MeltFrame_meltrout_94_WARMELTmiMACRO_LAMBDA_cl17(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<23> (fil,lin, sizeof(MeltFrame_meltrout_94_WARMELTmiMACRO_LAMBDA_cl17), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_94_WARMELTmiMACRO_LAMBDA_cl17


    /** end of frame for meltrout_94_WARMELTmiMACRO_LAMBDA_cl17 fromline 1663**/

    /* end of frame for routine meltrout_94_WARMELTmiMACRO_LAMBDA_cl17 fromline 1722 */

    /* classy proc frame meltrout_94_WARMELTmiMACRO_LAMBDA_cl17 */
    MeltFrame_meltrout_94_WARMELTmiMACRO_LAMBDA_cl17
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_94_WARMELTmiMACRO_LAMBDA_cl17 fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("LAMBDA_cl17", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5519:/ getarg");
    /*_.BLOC__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.BLIST__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.BLIST__V3*/ meltfptr[2])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5520:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_LIST_OR_NULL__L1*/
            meltfnum[0] =
                ((/*_.BLIST__V3*/ meltfptr[2]) == NULL
                 || (melt_unsafe_magic_discr((melt_ptr_t)(/*_.BLIST__V3*/ meltfptr[2])) == MELTOBMAG_LIST));;
            MELT_LOCATION("warmelt-macro.melt:5520:/ cond");
            /*cond*/
            if (/*_#IS_LIST_OR_NULL__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V5*/ meltfptr[4] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5520:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check blist";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5520;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.BLIST__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V6*/
                            meltfptr[5] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V5*/
                        meltfptr[4] = /*_.MELT_ASSERT_FAILURE_FUN__V6*/ meltfptr[5];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5520:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V6*/
                        meltfptr[5] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V4*/
            meltfptr[3] = /*_._IFELSE___V5*/ meltfptr[4];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5520:/ clear");
            /*clear*/ /*_#IS_LIST_OR_NULL__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V5*/
            meltfptr[4] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V4*/ meltfptr[3] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        /*citerblock FOREACH_IN_LIST*/
        {
            /* start foreach_in_list meltcit1__EACHLIST */
            for (/*_.CURPAIR__V7*/ meltfptr[5] = melt_list_first( (melt_ptr_t)/*_.BLIST__V3*/ meltfptr[2]);
                                   melt_magic_discr((melt_ptr_t) /*_.CURPAIR__V7*/ meltfptr[5]) == MELTOBMAG_PAIR;
                                   /*_.CURPAIR__V7*/ meltfptr[5] = melt_pair_tail((melt_ptr_t) /*_.CURPAIR__V7*/ meltfptr[5]))
                {
                    /*_.CURSYMB__V8*/ meltfptr[4] = melt_pair_head((melt_ptr_t) /*_.CURPAIR__V7*/ meltfptr[5]);



                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#IS_NOT_A__L2*/
                    meltfnum[0] =
                        !melt_is_instance_of((melt_ptr_t)(/*_.CURSYMB__V8*/ meltfptr[4]), (melt_ptr_t)((/*!CLASS_SYMBOL*/ meltfrout->tabval[1])));;
                    MELT_LOCATION("warmelt-macro.melt:5524:/ cond");
                    /*cond*/
                    if (/*_#IS_NOT_A__L2*/ meltfnum[0]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {


                                {
                                    MELT_LOCATION("warmelt-macro.melt:5525:/ locexp");
                                    /* error_plain */
                                    melt_error_str((melt_ptr_t)(/*_.BLOC__V2*/ meltfptr[1]), ( "non-symbol in symbol list for (WITH_CLONED_SYMB <symbol-list> <body\
...>)"), (melt_ptr_t)0);
                                }
                                ;
                                MELT_LOCATION("warmelt-macro.melt:5526:/ quasiblock");


                                /*_._RETVAL___V1*/
                                meltfptr[0] =  /*reallynil*/ NULL ;;

                                {
                                    MELT_LOCATION("warmelt-macro.melt:5526:/ locexp");
                                    /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                    if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                        melt_warn_for_no_expected_secondary_results();
                                    /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                    ;
                                }
                                ;
                                /*^finalreturn*/
                                ;
                                /*finalret*/
                                goto meltlabend_rout ;
                                MELT_LOCATION("warmelt-macro.melt:5524:/ quasiblock");


                                /*_.PROGN___V11*/
                                meltfptr[10] = /*_.RETURN___V10*/ meltfptr[9];;
                                /*^compute*/
                                /*_._IF___V9*/
                                meltfptr[8] = /*_.PROGN___V11*/ meltfptr[10];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:5524:/ clear");
                                /*clear*/ /*_.RETURN___V10*/
                                meltfptr[9] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.PROGN___V11*/
                                meltfptr[10] = 0 ;
                            }
                            ;
                        }
                    else    /*^cond.else*/
                        {

                            /*_._IF___V9*/ meltfptr[8] =  /*reallynil*/ NULL ;;
                        }
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    /*^compute*/
                    /*_#IS_A__L3*/
                    meltfnum[2] =
                        melt_is_instance_of((melt_ptr_t)(/*_.CURSYMB__V8*/ meltfptr[4]), (melt_ptr_t)((/*!CLASS_KEYWORD*/ meltfrout->tabval[2])));;
                    MELT_LOCATION("warmelt-macro.melt:5527:/ cond");
                    /*cond*/
                    if (/*_#IS_A__L3*/ meltfnum[2]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {

                                MELT_LOCATION("warmelt-macro.melt:5529:/ cond");
                                /*cond*/
                                if (
                                    /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.CURSYMB__V8*/ meltfptr[4]),
                                                                  (melt_ptr_t)((/*!CLASS_NAMED*/ meltfrout->tabval[3])))
                                ) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^getslot*/
                                        {
                                            melt_ptr_t slot=NULL, obj=NULL;
                                            obj = (melt_ptr_t)(/*_.CURSYMB__V8*/ meltfptr[4]) /*=obj*/;
                                            melt_object_get_field(slot,obj, 1, "NAMED_NAME");
                                            /*_.NAMED_NAME__V12*/
                                            meltfptr[9] = slot;
                                        };
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*_.NAMED_NAME__V12*/ meltfptr[9] =  /*reallynil*/ NULL ;;
                                    }
                                ;

                                {
                                    MELT_LOCATION("warmelt-macro.melt:5528:/ locexp");
                                    melt_warning_str(0, (melt_ptr_t)(/*_.BLOC__V2*/ meltfptr[1]), ( "keyword in WITH_CLONED_SYMB is discouraged"), (melt_ptr_t)(/*_.NAMED_NAME__V12*/ meltfptr[9]));
                                }
                                ;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:5527:/ clear");
                                /*clear*/ /*_.NAMED_NAME__V12*/
                                meltfptr[9] = 0 ;
                            }
                            ;
                        } /*noelse*/
                    ;

                    MELT_CHECK_SIGNAL();
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5530:/ apply");
                    /*apply*/
                    {
                        union meltparam_un argtab[1];
                        memset(&argtab, 0, sizeof(argtab));
                        /*^apply.arg*/
                        argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.CURSYMB__V8*/ meltfptr[4];
                        /*_.FIND_ENV__V13*/
                        meltfptr[10] =  melt_apply ((meltclosure_ptr_t)((/*!FIND_ENV*/ meltfrout->tabval[4])), (melt_ptr_t)((/*~NEWENV*/ meltfclos->tabval[0])), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                    }
                    ;
                    /*^cond*/
                    /*cond*/
                    if (/*_.FIND_ENV__V13*/ meltfptr[10]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {

                                MELT_LOCATION("warmelt-macro.melt:5532:/ cond");
                                /*cond*/
                                if (
                                    /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.CURSYMB__V8*/ meltfptr[4]),
                                                                  (melt_ptr_t)((/*!CLASS_NAMED*/ meltfrout->tabval[3])))
                                ) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^getslot*/
                                        {
                                            melt_ptr_t slot=NULL, obj=NULL;
                                            obj = (melt_ptr_t)(/*_.CURSYMB__V8*/ meltfptr[4]) /*=obj*/;
                                            melt_object_get_field(slot,obj, 1, "NAMED_NAME");
                                            /*_.NAMED_NAME__V14*/
                                            meltfptr[9] = slot;
                                        };
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*_.NAMED_NAME__V14*/ meltfptr[9] =  /*reallynil*/ NULL ;;
                                    }
                                ;

                                {
                                    MELT_LOCATION("warmelt-macro.melt:5531:/ locexp");
                                    melt_warning_str(0, (melt_ptr_t)(/*_.BLOC__V2*/ meltfptr[1]), ( "symbol in WITH_CLONED_SYMB hides previous definition"), (melt_ptr_t)(/*_.NAMED_NAME__V14*/ meltfptr[9]));
                                }
                                ;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:5530:/ clear");
                                /*clear*/ /*_.NAMED_NAME__V14*/
                                meltfptr[9] = 0 ;
                            }
                            ;
                        } /*noelse*/
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5533:/ quasiblock");



                    MELT_CHECK_SIGNAL();
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5536:/ quasiblock");


                    /*^rawallocobj*/
                    /*rawallocobj*/
                    {
                        melt_ptr_t newobj = 0;
                        melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_QUOTE*/ meltfrout->tabval[7])), (3), "CLASS_SOURCE_QUOTE");
                        /*_.INST__V16*/
                        meltfptr[15] =
                            newobj;
                    };
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V16*/ meltfptr[15])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V16*/ meltfptr[15]), (1), (/*_.BLOC__V2*/ meltfptr[1]), "LOCA_LOCATION");
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @SQUOTED", melt_magic_discr((melt_ptr_t)(/*_.INST__V16*/ meltfptr[15])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V16*/ meltfptr[15]), (2), (/*_.CURSYMB__V8*/ meltfptr[4]), "SQUOTED");
                    ;
                    /*^touchobj*/

                    melt_dbgtrace_written_object (/*_.INST__V16*/ meltfptr[15], "newly made instance");
                    ;
                    /*_.INST___V15*/
                    meltfptr[9] = /*_.INST__V16*/ meltfptr[15];;
                    MELT_LOCATION("warmelt-macro.melt:5536:/ blockmultialloc");
                    /*multiallocblock*/
                    {
                        struct meltletrec_1_st
                        {
                            struct MELT_MULTIPLE_STRUCT(1) rtup_0__TUPLREC__x2;
                            long meltletrec_1_endgap;
                        } *meltletrec_1_ptr = 0;
                        meltletrec_1_ptr = (struct meltletrec_1_st *) meltgc_allocate (sizeof (struct meltletrec_1_st), 0);
                        /*^blockmultialloc.initfill*/
                        /*inimult rtup_0__TUPLREC__x2*/
                        /*_.TUPLREC___V18*/
                        meltfptr[17] = (melt_ptr_t) &meltletrec_1_ptr->rtup_0__TUPLREC__x2;
                        meltletrec_1_ptr->rtup_0__TUPLREC__x2.discr = (meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_MULTIPLE))));
                        meltletrec_1_ptr->rtup_0__TUPLREC__x2.nbval = 1;


                        /*^putuple*/
                        /*putupl#2*/
                        melt_assertmsg("putupl [:5536] #2 checktup", melt_magic_discr((melt_ptr_t)(/*_.TUPLREC___V18*/ meltfptr[17]))== MELTOBMAG_MULTIPLE);
                        melt_assertmsg("putupl [:5536] #2 checkoff", (0>=0 && 0< melt_multiple_length((melt_ptr_t)(/*_.TUPLREC___V18*/ meltfptr[17]))));
                        ((meltmultiple_ptr_t)(/*_.TUPLREC___V18*/ meltfptr[17]))->tabval[0] = (melt_ptr_t)(/*_.INST___V15*/ meltfptr[9]);
                        ;
                        /*^touch*/
                        meltgc_touch(/*_.TUPLREC___V18*/ meltfptr[17]);
                        ;
                        /*_.TUPLE___V17*/
                        meltfptr[16] = /*_.TUPLREC___V18*/ meltfptr[17];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5536:/ clear");
                        /*clear*/ /*_.TUPLREC___V18*/
                        meltfptr[17] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.TUPLREC___V18*/
                        meltfptr[17] = 0 ;
                    } /*end multiallocblock*/
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5533:/ quasiblock");


                    /*^rawallocobj*/
                    /*rawallocobj*/
                    {
                        melt_ptr_t newobj = 0;
                        melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_APPLY*/ meltfrout->tabval[5])), (4), "CLASS_SOURCE_APPLY");
                        /*_.INST__V20*/
                        meltfptr[19] =
                            newobj;
                    };
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V20*/ meltfptr[19])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V20*/ meltfptr[19]), (1), (/*_.BLOC__V2*/ meltfptr[1]), "LOCA_LOCATION");
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @SAPP_FUN", melt_magic_discr((melt_ptr_t)(/*_.INST__V20*/ meltfptr[19])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V20*/ meltfptr[19]), (3), ((/*!konst_6_CLONE_SYMBOL*/ meltfrout->tabval[6])), "SAPP_FUN");
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @SARGOP_ARGS", melt_magic_discr((melt_ptr_t)(/*_.INST__V20*/ meltfptr[19])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V20*/ meltfptr[19]), (2), (/*_.TUPLE___V17*/ meltfptr[16]), "SARGOP_ARGS");
                    ;
                    /*^touchobj*/

                    melt_dbgtrace_written_object (/*_.INST__V20*/ meltfptr[19], "newly made instance");
                    ;
                    /*_.APPCLONESYMB__V19*/
                    meltfptr[17] = /*_.INST__V20*/ meltfptr[19];;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5539:/ quasiblock");


                    /*^rawallocobj*/
                    /*rawallocobj*/
                    {
                        melt_ptr_t newobj = 0;
                        melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_LET_BINDING*/ meltfrout->tabval[8])), (5), "CLASS_SOURCE_LET_BINDING");
                        /*_.INST__V22*/
                        meltfptr[21] =
                            newobj;
                    };
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V22*/ meltfptr[21])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V22*/ meltfptr[21]), (1), (/*_.BLOC__V2*/ meltfptr[1]), "LOCA_LOCATION");
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @SLETB_TYPE", melt_magic_discr((melt_ptr_t)(/*_.INST__V22*/ meltfptr[21])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V22*/ meltfptr[21]), (3), ((/*!CTYPE_VALUE*/ meltfrout->tabval[9])), "SLETB_TYPE");
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @SLETB_BINDER", melt_magic_discr((melt_ptr_t)(/*_.INST__V22*/ meltfptr[21])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V22*/ meltfptr[21]), (2), (/*_.CURSYMB__V8*/ meltfptr[4]), "SLETB_BINDER");
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @SLETB_EXPR", melt_magic_discr((melt_ptr_t)(/*_.INST__V22*/ meltfptr[21])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V22*/ meltfptr[21]), (4), (/*_.APPCLONESYMB__V19*/ meltfptr[17]), "SLETB_EXPR");
                    ;
                    /*^touchobj*/

                    melt_dbgtrace_written_object (/*_.INST__V22*/ meltfptr[21], "newly made instance");
                    ;
                    /*_.BINDSYMB__V21*/
                    meltfptr[20] = /*_.INST__V22*/ meltfptr[21];;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5546:/ apply");
                    /*apply*/
                    {
                        union meltparam_un argtab[1];
                        memset(&argtab, 0, sizeof(argtab));
                        /*^apply.arg*/
                        argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.BINDSYMB__V21*/ meltfptr[20];
                        /*_.PUT_ENV__V23*/
                        meltfptr[22] =  melt_apply ((meltclosure_ptr_t)((/*!PUT_ENV*/ meltfrout->tabval[10])), (melt_ptr_t)((/*~NEWENV*/ meltfclos->tabval[0])), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                    }
                    ;

                    {
                        MELT_LOCATION("warmelt-macro.melt:5547:/ locexp");
                        meltgc_append_list((melt_ptr_t)((/*~BINDLIST*/ meltfclos->tabval[1])), (melt_ptr_t)(/*_.BINDSYMB__V21*/ meltfptr[20]));
                    }
                    ;

                    MELT_LOCATION("warmelt-macro.melt:5533:/ clear");
                    /*clear*/ /*_.INST___V15*/
                    meltfptr[9] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.TUPLE___V17*/
                    meltfptr[16] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.APPCLONESYMB__V19*/
                    meltfptr[17] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.BINDSYMB__V21*/
                    meltfptr[20] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PUT_ENV__V23*/
                    meltfptr[22] = 0 ;
                } /* end foreach_in_list meltcit1__EACHLIST */
            /*_.CURPAIR__V7*/ meltfptr[5] = NULL;
            /*_.CURSYMB__V8*/
            meltfptr[4] = NULL;


            /*citerepilog*/

            MELT_LOCATION("warmelt-macro.melt:5521:/ clear");
            /*clear*/ /*_.CURPAIR__V7*/
            meltfptr[5] = 0 ;
            /*^clear*/
            /*clear*/ /*_.CURSYMB__V8*/
            meltfptr[4] = 0 ;
            /*^clear*/
            /*clear*/ /*_#IS_NOT_A__L2*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V9*/
            meltfptr[8] = 0 ;
            /*^clear*/
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[2] = 0 ;
            /*^clear*/
            /*clear*/ /*_.FIND_ENV__V13*/
            meltfptr[10] = 0 ;
        } /*endciterblock FOREACH_IN_LIST*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*epilog*/

        MELT_LOCATION("warmelt-macro.melt:5519:/ clear");
        /*clear*/ /*_.IFCPP___V4*/
        meltfptr[3] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("LAMBDA_cl17", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_94_WARMELTmiMACRO_LAMBDA_cl17_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_94_WARMELTmiMACRO_LAMBDA_cl17*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF fromline 1718 */

    /** start of frame for meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF// fromline 1534
        : public Melt_CallFrameWithValues<56>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[22];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<56> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF), clos) {};
        MeltFrame_meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF() //the constructor fromline 1608
            : Melt_CallFrameWithValues<56> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<56> (fil,lin, sizeof(MeltFrame_meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF)) {};
        MeltFrame_meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<56> (fil,lin, sizeof(MeltFrame_meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF


    /** end of frame for meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF fromline 1663**/

    /* end of frame for routine meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF fromline 1722 */

    /* classy proc frame meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF */
    MeltFrame_meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_CPPIF", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5594:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5595:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L1*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
            MELT_LOCATION("warmelt-macro.melt:5595:/ cond");
            /*cond*/
            if (/*_#IS_A__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V7*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5595:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5595;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                            meltfptr[7] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V7*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V8*/ meltfptr[7];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5595:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                        meltfptr[7] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V6*/
            meltfptr[5] = /*_._IFELSE___V7*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5595:/ clear");
            /*clear*/ /*_#IS_A__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V7*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V6*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5596:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L2*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[2])));;
            MELT_LOCATION("warmelt-macro.melt:5596:/ cond");
            /*cond*/
            if (/*_#IS_A__L2*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V10*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5596:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5596;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                            meltfptr[10] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V10*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V11*/ meltfptr[10];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5596:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                        meltfptr[10] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V9*/
            meltfptr[7] = /*_._IFELSE___V10*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5596:/ clear");
            /*clear*/ /*_#IS_A__L2*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V10*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V9*/ meltfptr[7] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#NULL__L3*/
        meltfnum[0] =
            ((/*_.MEXPANDER__V4*/ meltfptr[3]) == NULL);;
        MELT_LOCATION("warmelt-macro.melt:5597:/ cond");
        /*cond*/
        if (/*_#NULL__L3*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*^compute*/
                    /*_.MEXPANDER__V4*/ meltfptr[3] = /*_.SETQ___V13*/ meltfptr[6] = (/*!MACROEXPAND_1*/ meltfrout->tabval[3]);;
                    /*_._IF___V12*/
                    meltfptr[10] = /*_.SETQ___V13*/ meltfptr[6];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5597:/ clear");
                    /*clear*/ /*_.SETQ___V13*/
                    meltfptr[6] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V12*/ meltfptr[10] =  /*reallynil*/ NULL ;;
            }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5598:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L4*/
            meltfnum[3] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:5598:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L4*/ meltfnum[3]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V15*/ meltfptr[14] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5598:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5598;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                            meltfptr[15] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V15*/
                        meltfptr[14] = /*_.MELT_ASSERT_FAILURE_FUN__V16*/ meltfptr[15];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5598:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V16*/
                        meltfptr[15] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V14*/
            meltfptr[6] = /*_._IFELSE___V15*/ meltfptr[14];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5598:/ clear");
            /*clear*/ /*_#IS_OBJECT__L4*/
            meltfnum[3] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V15*/
            meltfptr[14] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V14*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5599:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L5*/
            meltfnum[3] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5599:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L5*/ meltfnum[3]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L6*/ meltfnum[5] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5599:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L6*/ meltfnum[5];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5599;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_cppif sexpr";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V18*/
                            meltfptr[14] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[4])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V17*/
                        meltfptr[15] = /*_.MELT_DEBUG_FUN__V18*/ meltfptr[14];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5599:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L6*/
                        meltfnum[5] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V18*/
                        meltfptr[14] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V17*/ meltfptr[15] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5599:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L5*/
            meltfnum[3] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V17*/
            meltfptr[15] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5600:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:5601:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V20*/
            meltfptr[15] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5602:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V21*/
            meltfptr[20] = slot;
        };
        ;
        /*_.LIST_FIRST__V22*/
        meltfptr[21] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V20*/ meltfptr[15])));;
        /*^compute*/
        /*_.CURPAIR__V23*/
        meltfptr[22] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V22*/ meltfptr[21])));;
        /*^compute*/
        /*_.CURIF__V24*/
        meltfptr[23] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#IS_PAIR__L7*/
        meltfnum[5] =
            (melt_magic_discr((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])) == MELTOBMAG_PAIR);;
        /*^compute*/
        /*_#NOT__L8*/
        meltfnum[3] =
            (!(/*_#IS_PAIR__L7*/ meltfnum[5]));;
        MELT_LOCATION("warmelt-macro.melt:5606:/ cond");
        /*cond*/
        if (/*_#NOT__L8*/ meltfnum[3]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5607:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "missing condition in CPPIF"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;
        /*_.PAIR_TAIL__V25*/
        meltfptr[24] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;
        MELT_LOCATION("warmelt-macro.melt:5608:/ compute");
        /*_.CURPAIR__V23*/
        meltfptr[22] = /*_.SETQ___V26*/ meltfptr[25] = /*_.PAIR_TAIL__V25*/ meltfptr[24];;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_PAIR__L9*/
        meltfnum[8] =
            (melt_magic_discr((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])) == MELTOBMAG_PAIR);;
        /*^compute*/
        /*_#NOT__L10*/
        meltfnum[9] =
            (!(/*_#IS_PAIR__L9*/ meltfnum[8]));;
        MELT_LOCATION("warmelt-macro.melt:5609:/ cond");
        /*cond*/
        if (/*_#NOT__L10*/ meltfnum[9]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5610:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "missing then in CPPIF"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5611:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XCOND__V28*/
            meltfptr[27] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.CURIF__V24*/ meltfptr[23]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5612:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L11*/
            meltfnum[10] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5612:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L11*/ meltfnum[10]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L12*/ meltfnum[11] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5612:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L12*/ meltfnum[11];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5612;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_cppif xcond";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.XCOND__V28*/ meltfptr[27];
                            /*_.MELT_DEBUG_FUN__V30*/
                            meltfptr[29] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[4])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V29*/
                        meltfptr[28] = /*_.MELT_DEBUG_FUN__V30*/ meltfptr[29];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5612:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L12*/
                        meltfnum[11] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V30*/
                        meltfptr[29] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V29*/ meltfptr[28] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5612:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L11*/
            meltfnum[10] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V29*/
            meltfptr[28] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_STRING__L13*/
        meltfnum[11] =
            (melt_magic_discr((melt_ptr_t)(/*_.XCOND__V28*/ meltfptr[27])) == MELTOBMAG_STRING);;
        MELT_LOCATION("warmelt-macro.melt:5614:/ cond");
        /*cond*/
        if (/*_#IS_STRING__L13*/ meltfnum[11]) /*then*/
            {
                /*^cond.then*/
                /*_._IFELSE___V31*/ meltfptr[29] = (/*nil*/NULL);;
            }
        else
            {
                MELT_LOCATION("warmelt-macro.melt:5614:/ cond.else");

                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#IS_A__L14*/
                    meltfnum[10] =
                        melt_is_instance_of((melt_ptr_t)(/*_.XCOND__V28*/ meltfptr[27]), (melt_ptr_t)((/*!CLASS_SYMBOL*/ meltfrout->tabval[5])));;
                    MELT_LOCATION("warmelt-macro.melt:5615:/ cond");
                    /*cond*/
                    if (/*_#IS_A__L14*/ meltfnum[10]) /*then*/
                        {
                            /*^cond.then*/
                            /*_._IFELSE___V32*/ meltfptr[28] = (/*nil*/NULL);;
                        }
                    else
                        {
                            MELT_LOCATION("warmelt-macro.melt:5615:/ cond.else");

                            /*^block*/
                            /*anyblock*/
                            {


                                {
                                    MELT_LOCATION("warmelt-macro.melt:5617:/ locexp");
                                    /* error_plain */
                                    melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "invalid cpp-condition in CPPIF - string or symbol expected"), (melt_ptr_t)0);
                                }
                                ;

                                MELT_CHECK_SIGNAL();
                                ;
                                MELT_LOCATION("warmelt-macro.melt:5618:/ quasiblock");


                                /*_._RETVAL___V1*/
                                meltfptr[0] = (/*nil*/NULL);;

                                {
                                    MELT_LOCATION("warmelt-macro.melt:5618:/ locexp");
                                    /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                    if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                        melt_warn_for_no_expected_secondary_results();
                                    /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                    ;
                                }
                                ;
                                /*^finalreturn*/
                                ;
                                /*finalret*/
                                goto meltlabend_rout ;
                                MELT_LOCATION("warmelt-macro.melt:5616:/ quasiblock");


                                /*_.PROGN___V34*/
                                meltfptr[33] = /*_.RETURN___V33*/ meltfptr[32];;
                                /*^compute*/
                                /*_._IFELSE___V32*/
                                meltfptr[28] = /*_.PROGN___V34*/ meltfptr[33];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:5615:/ clear");
                                /*clear*/ /*_.RETURN___V33*/
                                meltfptr[32] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.PROGN___V34*/
                                meltfptr[33] = 0 ;
                            }
                            ;
                        }
                    ;
                    /*_._IFELSE___V31*/
                    meltfptr[29] = /*_._IFELSE___V32*/ meltfptr[28];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5614:/ clear");
                    /*clear*/ /*_#IS_A__L14*/
                    meltfnum[10] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_._IFELSE___V32*/
                    meltfptr[28] = 0 ;
                }
                ;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:5619:/ quasiblock");


        /*_.CURTHEN__V36*/
        meltfptr[33] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;
        /*^compute*/
        /*_.PAIR_TAIL__V37*/
        meltfptr[28] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;
        MELT_LOCATION("warmelt-macro.melt:5620:/ compute");
        /*_.CURPAIR__V23*/
        meltfptr[22] = /*_.SETQ___V38*/ meltfptr[37] = /*_.PAIR_TAIL__V37*/ meltfptr[28];;
        MELT_LOCATION("warmelt-macro.melt:5621:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^apply*/
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
            /*_.XTHEN__V40*/
            meltfptr[39] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.CURTHEN__V36*/ meltfptr[33]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        /*_.XELSE__V41*/
        meltfptr[40] = (/*nil*/NULL);;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5624:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L15*/
            meltfnum[10] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5624:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L15*/ meltfnum[10]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L16*/ meltfnum[15] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5624:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L16*/ meltfnum[15];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5624;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_cppif xthen";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.XTHEN__V40*/ meltfptr[39];
                            /*_.MELT_DEBUG_FUN__V43*/
                            meltfptr[42] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[4])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V42*/
                        meltfptr[41] = /*_.MELT_DEBUG_FUN__V43*/ meltfptr[42];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5624:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L16*/
                        meltfnum[15] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V43*/
                        meltfptr[42] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V42*/ meltfptr[41] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5624:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L15*/
            meltfnum[10] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V42*/
            meltfptr[41] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_PAIR__L17*/
        meltfnum[15] =
            (melt_magic_discr((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])) == MELTOBMAG_PAIR);;
        MELT_LOCATION("warmelt-macro.melt:5625:/ cond");
        /*cond*/
        if (/*_#IS_PAIR__L17*/ meltfnum[15]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    MELT_LOCATION("warmelt-macro.melt:5626:/ quasiblock");


                    /*_.CURELSE__V44*/
                    meltfptr[42] =
                        (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5627:/ apply");
                    /*apply*/
                    {
                        union meltparam_un argtab[3];
                        memset(&argtab, 0, sizeof(argtab));
                        /*^apply.arg*/
                        argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                        /*^apply.arg*/
                        argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                        /*^apply.arg*/
                        argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                        /*_.GOTXELSE__V45*/
                        meltfptr[41] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.CURELSE__V44*/ meltfptr[42]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                    }
                    ;

#if MELT_HAVE_DEBUG
                    MELT_LOCATION("warmelt-macro.melt:5628:/ cppif.then");
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                            melt_dbgcounter++;
#endif
                            ;
                        }
                        ;

                        MELT_CHECK_SIGNAL();
                        ;
                        /*_#MELT_NEED_DBG__L18*/
                        meltfnum[10] =
                            /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                            (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                            0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                            ;;
                        MELT_LOCATION("warmelt-macro.melt:5628:/ cond");
                        /*cond*/
                        if (/*_#MELT_NEED_DBG__L18*/ meltfnum[10]) /*then*/
                            {
                                /*^cond.then*/
                                /*^block*/
                                /*anyblock*/
                                {

                                    /*_#MELT_CALLCOUNT__L19*/ meltfnum[18] =
                                        /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                        meltcallcount  /* melt_callcount debugging */
#else
                                        0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                        ;;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-macro.melt:5628:/ apply");
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[5];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L19*/ meltfnum[18];
                                        /*^apply.arg*/
                                        argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                        /*^apply.arg*/
                                        argtab[2].meltbp_long = 5628;
                                        /*^apply.arg*/
                                        argtab[3].meltbp_cstring =  "mexpand_cppif gotxelse";
                                        /*^apply.arg*/
                                        argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.GOTXELSE__V45*/ meltfptr[41];
                                        /*_.MELT_DEBUG_FUN__V47*/
                                        meltfptr[46] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[4])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;
                                    /*_._IF___V46*/
                                    meltfptr[45] = /*_.MELT_DEBUG_FUN__V47*/ meltfptr[46];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-macro.melt:5628:/ clear");
                                    /*clear*/ /*_#MELT_CALLCOUNT__L19*/
                                    meltfnum[18] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.MELT_DEBUG_FUN__V47*/
                                    meltfptr[46] = 0 ;
                                }
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*_._IF___V46*/ meltfptr[45] =  /*reallynil*/ NULL ;;
                            }
                        ;

                        {
                            MELT_LOCATION("warmelt-macro.melt:5628:/ locexp");
                            /*void*/
                            (void)0;
                        }
                        ;
                        /*^quasiblock*/


                        /*epilog*/

                        /*^clear*/
                        /*clear*/ /*_#MELT_NEED_DBG__L18*/
                        meltfnum[10] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_._IF___V46*/
                        meltfptr[45] = 0 ;
                    }

#else /*MELT_HAVE_DEBUG*/
                    /*^cppif.else*/
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*void*/(void)0;
                        }
                        ;
                        /*epilog*/
                    }

#endif /*MELT_HAVE_DEBUG*/
                    ;
                    /*_.PAIR_TAIL__V48*/
                    meltfptr[46] =
                        (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])));;
                    MELT_LOCATION("warmelt-macro.melt:5629:/ compute");
                    /*_.CURPAIR__V23*/
                    meltfptr[22] = /*_.SETQ___V49*/ meltfptr[45] = /*_.PAIR_TAIL__V48*/ meltfptr[46];;
                    MELT_LOCATION("warmelt-macro.melt:5630:/ compute");
                    /*_.XELSE__V41*/
                    meltfptr[40] = /*_.SETQ___V50*/ meltfptr[49] = /*_.GOTXELSE__V45*/ meltfptr[41];;

                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#IS_PAIR__L20*/
                    meltfnum[18] =
                        (melt_magic_discr((melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22])) == MELTOBMAG_PAIR);;
                    MELT_LOCATION("warmelt-macro.melt:5631:/ cond");
                    /*cond*/
                    if (/*_#IS_PAIR__L20*/ meltfnum[18]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {


                                {
                                    MELT_LOCATION("warmelt-macro.melt:5632:/ locexp");
                                    /* error_plain */
                                    melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "CPPIF with more than three sons"), (melt_ptr_t)0);
                                }
                                ;
                                /*epilog*/
                            }
                            ;
                        } /*noelse*/
                    ;

                    MELT_LOCATION("warmelt-macro.melt:5626:/ clear");
                    /*clear*/ /*_.CURELSE__V44*/
                    meltfptr[42] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.GOTXELSE__V45*/
                    meltfptr[41] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PAIR_TAIL__V48*/
                    meltfptr[46] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.SETQ___V49*/
                    meltfptr[45] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.SETQ___V50*/
                    meltfptr[49] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_#IS_PAIR__L20*/
                    meltfnum[18] = 0 ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5633:/ quasiblock");



        MELT_CHECK_SIGNAL();
        ;
        /*^quasiblock*/


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_CPPIF*/ meltfrout->tabval[6])), (5), "CLASS_SOURCE_CPPIF");
            /*_.INST__V53*/
            meltfptr[46] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V53*/ meltfptr[46])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V53*/ meltfptr[46]), (1), (/*_.LOC__V21*/ meltfptr[20]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SIFP_COND", melt_magic_discr((melt_ptr_t)(/*_.INST__V53*/ meltfptr[46])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V53*/ meltfptr[46]), (2), (/*_.XCOND__V28*/ meltfptr[27]), "SIFP_COND");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SIFP_THEN", melt_magic_discr((melt_ptr_t)(/*_.INST__V53*/ meltfptr[46])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V53*/ meltfptr[46]), (3), (/*_.XTHEN__V40*/ meltfptr[39]), "SIFP_THEN");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @SIFP_ELSE", melt_magic_discr((melt_ptr_t)(/*_.INST__V53*/ meltfptr[46])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V53*/ meltfptr[46]), (4), (/*_.XELSE__V41*/ meltfptr[40]), "SIFP_ELSE");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V53*/ meltfptr[46], "newly made instance");
        ;
        /*_.RESP__V52*/
        meltfptr[41] = /*_.INST__V53*/ meltfptr[46];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5640:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L21*/
            meltfnum[10] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5640:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L21*/ meltfnum[10]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L22*/ meltfnum[18] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5640:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L22*/ meltfnum[18];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5640;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_cppif return resp";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RESP__V52*/ meltfptr[41];
                            /*_.MELT_DEBUG_FUN__V55*/
                            meltfptr[49] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[4])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V54*/
                        meltfptr[45] = /*_.MELT_DEBUG_FUN__V55*/ meltfptr[49];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5640:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L22*/
                        meltfnum[18] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V55*/
                        meltfptr[49] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V54*/ meltfptr[45] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5640:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L21*/
            meltfnum[10] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V54*/
            meltfptr[45] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5641:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.RESP__V52*/ meltfptr[41];;

        {
            MELT_LOCATION("warmelt-macro.melt:5641:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V51*/
        meltfptr[42] = /*_.RETURN___V56*/ meltfptr[49];;

        MELT_LOCATION("warmelt-macro.melt:5633:/ clear");
        /*clear*/ /*_.RESP__V52*/
        meltfptr[41] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V56*/
        meltfptr[49] = 0 ;
        /*_.LET___V39*/
        meltfptr[38] = /*_.LET___V51*/ meltfptr[42];;

        MELT_LOCATION("warmelt-macro.melt:5621:/ clear");
        /*clear*/ /*_.XTHEN__V40*/
        meltfptr[39] = 0 ;
        /*^clear*/
        /*clear*/ /*_.XELSE__V41*/
        meltfptr[40] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_PAIR__L17*/
        meltfnum[15] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V51*/
        meltfptr[42] = 0 ;
        /*_.LET___V35*/
        meltfptr[32] = /*_.LET___V39*/ meltfptr[38];;

        MELT_LOCATION("warmelt-macro.melt:5619:/ clear");
        /*clear*/ /*_.CURTHEN__V36*/
        meltfptr[33] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V37*/
        meltfptr[28] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V38*/
        meltfptr[37] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V39*/
        meltfptr[38] = 0 ;
        /*_.LET___V27*/
        meltfptr[26] = /*_.LET___V35*/ meltfptr[32];;

        MELT_LOCATION("warmelt-macro.melt:5611:/ clear");
        /*clear*/ /*_.XCOND__V28*/
        meltfptr[27] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_STRING__L13*/
        meltfnum[11] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IFELSE___V31*/
        meltfptr[29] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V35*/
        meltfptr[32] = 0 ;
        /*_.LET___V19*/
        meltfptr[14] = /*_.LET___V27*/ meltfptr[26];;

        MELT_LOCATION("warmelt-macro.melt:5600:/ clear");
        /*clear*/ /*_.CONT__V20*/
        meltfptr[15] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURIF__V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_PAIR__L7*/
        meltfnum[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L8*/
        meltfnum[3] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V25*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SETQ___V26*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_PAIR__L9*/
        meltfnum[8] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L10*/
        meltfnum[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V27*/
        meltfptr[26] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5594:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V19*/ meltfptr[14];;

        {
            MELT_LOCATION("warmelt-macro.melt:5594:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V6*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V9*/
        meltfptr[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NULL__L3*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V12*/
        meltfptr[10] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V14*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V19*/
        meltfptr[14] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_CPPIF", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_95_WARMELTmiMACRO_MEXPAND_CPPIF*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION fromline 1718 */

    /** start of frame for meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION// fromline 1534
        : public Melt_CallFrameWithValues<8>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[2];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<8> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION), clos) {};
        MeltFrame_meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION() //the constructor fromline 1608
            : Melt_CallFrameWithValues<8> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<8> (fil,lin, sizeof(MeltFrame_meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION)) {};
        MeltFrame_meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<8> (fil,lin, sizeof(MeltFrame_meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION


    /** end of frame for meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION fromline 1663**/

    /* end of frame for routine meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION fromline 1722 */

    /* classy proc frame meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION */
    MeltFrame_meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("FILTERGCCVERSION", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5651:/ getarg");
    /*_.VERSIONSTR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5652:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_STRING__L1*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.VERSIONSTR__V2*/ meltfptr[1])) == MELTOBMAG_STRING);;
            MELT_LOCATION("warmelt-macro.melt:5652:/ cond");
            /*cond*/
            if (/*_#IS_STRING__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V4*/ meltfptr[3] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5652:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check versionstr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5652;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.VERSIONSTR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V5*/
                            meltfptr[4] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V4*/
                        meltfptr[3] = /*_.MELT_ASSERT_FAILURE_FUN__V5*/ meltfptr[4];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5652:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V5*/
                        meltfptr[4] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V3*/
            meltfptr[2] = /*_._IFELSE___V4*/ meltfptr[3];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5652:/ clear");
            /*clear*/ /*_#IS_STRING__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V4*/
            meltfptr[3] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V3*/ meltfptr[2] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5653:/ quasiblock");


        /*_#VERSIONLEN__L2*/
        meltfnum[0] =
            melt_string_length((melt_ptr_t)(/*_.VERSIONSTR__V2*/ meltfptr[1]));;
        /*^compute*/
        /*_.RES__V7*/
        meltfptr[3] = (/*nil*/NULL);;

        {
            MELT_LOCATION("warmelt-macro.melt:5656:/ locexp");
            if (/*_#VERSIONLEN__L2*/ meltfnum[0]>0 /*FILTERGCC__1*/
                                     && !strncmp (melt_string_str((melt_ptr_t)/*_.VERSIONSTR__V2*/ meltfptr[1]),
                                                  melt_gccversionstr,
                                                  /*_#VERSIONLEN__L2*/ meltfnum[0]))
                /*_.RES__V7*/ meltfptr[3] = /*_.VERSIONSTR__V2*/ meltfptr[1];
            ;
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5664:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.RES__V7*/ meltfptr[3];;

        {
            MELT_LOCATION("warmelt-macro.melt:5664:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V6*/
        meltfptr[4] = /*_.RETURN___V8*/ meltfptr[7];;

        MELT_LOCATION("warmelt-macro.melt:5653:/ clear");
        /*clear*/ /*_#VERSIONLEN__L2*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RES__V7*/
        meltfptr[3] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V8*/
        meltfptr[7] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5651:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V6*/ meltfptr[4];;

        {
            MELT_LOCATION("warmelt-macro.melt:5651:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V3*/
        meltfptr[2] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V6*/
        meltfptr[4] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("FILTERGCCVERSION", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_96_WARMELTmiMACRO_FILTERGCCVERSION*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF fromline 1718 */

    /** start of frame for meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF// fromline 1534
        : public Melt_CallFrameWithValues<60>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[21];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<60> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF), clos) {};
        MeltFrame_meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF() //the constructor fromline 1608
            : Melt_CallFrameWithValues<60> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<60> (fil,lin, sizeof(MeltFrame_meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF)) {};
        MeltFrame_meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<60> (fil,lin, sizeof(MeltFrame_meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF


    /** end of frame for meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF fromline 1663**/

    /* end of frame for routine meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF fromline 1722 */

    /* classy proc frame meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF */
    MeltFrame_meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_GCCIF", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5666:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5667:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L1*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
            MELT_LOCATION("warmelt-macro.melt:5667:/ cond");
            /*cond*/
            if (/*_#IS_A__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V7*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5667:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5667;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                            meltfptr[7] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V7*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V8*/ meltfptr[7];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5667:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                        meltfptr[7] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V6*/
            meltfptr[5] = /*_._IFELSE___V7*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5667:/ clear");
            /*clear*/ /*_#IS_A__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V7*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V6*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5668:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L2*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[2])));;
            MELT_LOCATION("warmelt-macro.melt:5668:/ cond");
            /*cond*/
            if (/*_#IS_A__L2*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V10*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5668:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5668;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                            meltfptr[10] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V10*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V11*/ meltfptr[10];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5668:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                        meltfptr[10] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V9*/
            meltfptr[7] = /*_._IFELSE___V10*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5668:/ clear");
            /*clear*/ /*_#IS_A__L2*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V10*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V9*/ meltfptr[7] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5669:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L3*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5669:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L3*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L4*/ meltfnum[3] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5669:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L4*/ meltfnum[3];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5669;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_gccif sexpr";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V13*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V12*/
                        meltfptr[10] = /*_.MELT_DEBUG_FUN__V13*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5669:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L4*/
                        meltfnum[3] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V13*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V12*/ meltfptr[10] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5669:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L3*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V12*/
            meltfptr[10] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5670:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:5671:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V15*/
            meltfptr[10] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5672:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.SLOC__V16*/
            meltfptr[15] = slot;
        };
        ;
        /*_.LIST_FIRST__V17*/
        meltfptr[16] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V15*/ meltfptr[10])));;
        /*^compute*/
        /*_.CURPAIR__V18*/
        meltfptr[17] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V17*/ meltfptr[16])));;
        /*^compute*/
        /*_.CURIF__V19*/
        meltfptr[18] =
            (melt_pair_head((melt_ptr_t)(/*_.CURPAIR__V18*/ meltfptr[17])));;
        /*^compute*/
        /*_.RESTPAIR__V20*/
        meltfptr[19] =
            (melt_pair_tail((melt_ptr_t)(/*_.CURPAIR__V18*/ meltfptr[17])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#IS_A__L5*/
        meltfnum[3] =
            melt_is_instance_of((melt_ptr_t)(/*_.CURIF__V19*/ meltfptr[18]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
        MELT_LOCATION("warmelt-macro.melt:5677:/ cond");
        /*cond*/
        if (/*_#IS_A__L5*/ meltfnum[3]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    MELT_LOCATION("warmelt-macro.melt:5678:/ quasiblock");


                    /*^cond*/
                    /*cond*/
                    if (
                        /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.CURIF__V19*/ meltfptr[18]),
                                                      (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])))
                    ) /*then*/
                        {
                            /*^cond.then*/
                            /*^getslot*/
                            {
                                melt_ptr_t slot=NULL, obj=NULL;
                                obj = (melt_ptr_t)(/*_.CURIF__V19*/ meltfptr[18]) /*=obj*/;
                                melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
                                /*_.XCURIF__V23*/
                                meltfptr[22] = slot;
                            };
                            ;
                        }
                    else    /*^cond.else*/
                        {

                            /*_.XCURIF__V23*/ meltfptr[22] =  /*reallynil*/ NULL ;;
                        }
                    ;

#if MELT_HAVE_DEBUG
                    MELT_LOCATION("warmelt-macro.melt:5680:/ cppif.then");
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                            melt_dbgcounter++;
#endif
                            ;
                        }
                        ;

                        MELT_CHECK_SIGNAL();
                        ;
                        /*_#MELT_NEED_DBG__L6*/
                        meltfnum[0] =
                            /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                            (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                            0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                            ;;
                        MELT_LOCATION("warmelt-macro.melt:5680:/ cond");
                        /*cond*/
                        if (/*_#MELT_NEED_DBG__L6*/ meltfnum[0]) /*then*/
                            {
                                /*^cond.then*/
                                /*^block*/
                                /*anyblock*/
                                {

                                    /*_#MELT_CALLCOUNT__L7*/ meltfnum[6] =
                                        /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                        meltcallcount  /* melt_callcount debugging */
#else
                                        0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                        ;;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-macro.melt:5680:/ apply");
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[5];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L7*/ meltfnum[6];
                                        /*^apply.arg*/
                                        argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                        /*^apply.arg*/
                                        argtab[2].meltbp_long = 5680;
                                        /*^apply.arg*/
                                        argtab[3].meltbp_cstring =  "mexpand_gccif xcurif=";
                                        /*^apply.arg*/
                                        argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.XCURIF__V23*/ meltfptr[22];
                                        /*_.MELT_DEBUG_FUN__V25*/
                                        meltfptr[24] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;
                                    /*_._IF___V24*/
                                    meltfptr[23] = /*_.MELT_DEBUG_FUN__V25*/ meltfptr[24];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-macro.melt:5680:/ clear");
                                    /*clear*/ /*_#MELT_CALLCOUNT__L7*/
                                    meltfnum[6] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.MELT_DEBUG_FUN__V25*/
                                    meltfptr[24] = 0 ;
                                }
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*_._IF___V24*/ meltfptr[23] =  /*reallynil*/ NULL ;;
                            }
                        ;

                        {
                            MELT_LOCATION("warmelt-macro.melt:5680:/ locexp");
                            /*void*/
                            (void)0;
                        }
                        ;
                        /*^quasiblock*/


                        /*epilog*/

                        /*^clear*/
                        /*clear*/ /*_#MELT_NEED_DBG__L6*/
                        meltfnum[0] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_._IF___V24*/
                        meltfptr[23] = 0 ;
                    }

#else /*MELT_HAVE_DEBUG*/
                    /*^cppif.else*/
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*void*/(void)0;
                        }
                        ;
                        /*epilog*/
                    }

#endif /*MELT_HAVE_DEBUG*/
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5681:/ compute");
                    /*_.CURIF__V19*/
                    meltfptr[18] = /*_.SETQ___V26*/ meltfptr[24] = /*_.XCURIF__V23*/ meltfptr[22];;
                    /*_.LET___V22*/
                    meltfptr[21] = /*_.SETQ___V26*/ meltfptr[24];;

                    MELT_LOCATION("warmelt-macro.melt:5678:/ clear");
                    /*clear*/ /*_.XCURIF__V23*/
                    meltfptr[22] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.SETQ___V26*/
                    meltfptr[24] = 0 ;
                    /*_._IF___V21*/
                    meltfptr[20] = /*_.LET___V22*/ meltfptr[21];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5677:/ clear");
                    /*clear*/ /*_.LET___V22*/
                    meltfptr[21] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V21*/ meltfptr[20] =  /*reallynil*/ NULL ;;
            }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5683:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L8*/
            meltfnum[6] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5683:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L8*/ meltfnum[6]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L9*/ meltfnum[0] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5683:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L9*/ meltfnum[0];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5683;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_gccif curif";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CURIF__V19*/ meltfptr[18];
                            /*_.MELT_DEBUG_FUN__V28*/
                            meltfptr[22] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V27*/
                        meltfptr[23] = /*_.MELT_DEBUG_FUN__V28*/ meltfptr[22];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5683:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L9*/
                        meltfnum[0] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V28*/
                        meltfptr[22] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V27*/ meltfptr[23] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5683:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L8*/
            meltfnum[6] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V27*/
            meltfptr[23] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_STRING__L10*/
        meltfnum[0] =
            (melt_magic_discr((melt_ptr_t)(/*_.CURIF__V19*/ meltfptr[18])) == MELTOBMAG_STRING);;
        MELT_LOCATION("warmelt-macro.melt:5685:/ cond");
        /*cond*/
        if (/*_#IS_STRING__L10*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5686:/ apply");
                    /*apply*/
                    {
                        /*_.FILTERGCCVERSION__V30*/ meltfptr[21] =  melt_apply ((meltclosure_ptr_t)((/*!FILTERGCCVERSION*/ meltfrout->tabval[4])), (melt_ptr_t)(/*_.CURIF__V19*/ meltfptr[18]), (""), (union meltparam_un*)0, "", (union meltparam_un*)0);
                    }
                    ;
                    /*^cond*/
                    /*cond*/
                    if (/*_.FILTERGCCVERSION__V30*/ meltfptr[21]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {

                                MELT_LOCATION("warmelt-macro.melt:5687:/ quasiblock");



                                MELT_CHECK_SIGNAL();
                                ;
                                /*^apply*/
                                /*apply*/
                                {
                                    union meltparam_un argtab[3];
                                    memset(&argtab, 0, sizeof(argtab));
                                    /*^apply.arg*/
                                    argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                                    /*^apply.arg*/
                                    argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                                    /*^apply.arg*/
                                    argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                                    /*_.EXPREST__V33*/
                                    meltfptr[32] =  melt_apply ((meltclosure_ptr_t)((/*!EXPAND_PAIRLIST_AS_TUPLE*/ meltfrout->tabval[5])), (melt_ptr_t)(/*_.RESTPAIR__V20*/ meltfptr[19]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                }
                                ;

#if MELT_HAVE_DEBUG
                                MELT_LOCATION("warmelt-macro.melt:5689:/ cppif.then");
                                /*^block*/
                                /*anyblock*/
                                {


                                    {
                                        /*^locexp*/
                                        /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                        melt_dbgcounter++;
#endif
                                        ;
                                    }
                                    ;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    /*_#MELT_NEED_DBG__L11*/
                                    meltfnum[6] =
                                        /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                        (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                        0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                        ;;
                                    MELT_LOCATION("warmelt-macro.melt:5689:/ cond");
                                    /*cond*/
                                    if (/*_#MELT_NEED_DBG__L11*/ meltfnum[6]) /*then*/
                                        {
                                            /*^cond.then*/
                                            /*^block*/
                                            /*anyblock*/
                                            {

                                                /*_#MELT_CALLCOUNT__L12*/ meltfnum[11] =
                                                    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                    meltcallcount  /* melt_callcount debugging */
#else
                                                    0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                    ;;

                                                MELT_CHECK_SIGNAL();
                                                ;
                                                MELT_LOCATION("warmelt-macro.melt:5689:/ apply");
                                                /*apply*/
                                                {
                                                    union meltparam_un argtab[5];
                                                    memset(&argtab, 0, sizeof(argtab));
                                                    /*^apply.arg*/
                                                    argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L12*/ meltfnum[11];
                                                    /*^apply.arg*/
                                                    argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                    /*^apply.arg*/
                                                    argtab[2].meltbp_long = 5689;
                                                    /*^apply.arg*/
                                                    argtab[3].meltbp_cstring =  "mexpand_gccif return exprest";
                                                    /*^apply.arg*/
                                                    argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.EXPREST__V33*/ meltfptr[32];
                                                    /*_.MELT_DEBUG_FUN__V35*/
                                                    meltfptr[34] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                }
                                                ;
                                                /*_._IF___V34*/
                                                meltfptr[33] = /*_.MELT_DEBUG_FUN__V35*/ meltfptr[34];;
                                                /*epilog*/

                                                MELT_LOCATION("warmelt-macro.melt:5689:/ clear");
                                                /*clear*/ /*_#MELT_CALLCOUNT__L12*/
                                                meltfnum[11] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_.MELT_DEBUG_FUN__V35*/
                                                meltfptr[34] = 0 ;
                                            }
                                            ;
                                        }
                                    else    /*^cond.else*/
                                        {

                                            /*_._IF___V34*/ meltfptr[33] =  /*reallynil*/ NULL ;;
                                        }
                                    ;

                                    {
                                        MELT_LOCATION("warmelt-macro.melt:5689:/ locexp");
                                        /*void*/
                                        (void)0;
                                    }
                                    ;
                                    /*^quasiblock*/


                                    /*epilog*/

                                    /*^clear*/
                                    /*clear*/ /*_#MELT_NEED_DBG__L11*/
                                    meltfnum[6] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_._IF___V34*/
                                    meltfptr[33] = 0 ;
                                }

#else /*MELT_HAVE_DEBUG*/
                                /*^cppif.else*/
                                /*^block*/
                                /*anyblock*/
                                {


                                    {
                                        /*^locexp*/
                                        /*void*/(void)0;
                                    }
                                    ;
                                    /*epilog*/
                                }

#endif /*MELT_HAVE_DEBUG*/
                                ;

                                MELT_CHECK_SIGNAL();
                                ;
                                MELT_LOCATION("warmelt-macro.melt:5690:/ quasiblock");


                                /*_._RETVAL___V1*/
                                meltfptr[0] = /*_.EXPREST__V33*/ meltfptr[32];;

                                {
                                    MELT_LOCATION("warmelt-macro.melt:5690:/ locexp");
                                    /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                    if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                        melt_warn_for_no_expected_secondary_results();
                                    /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                    ;
                                }
                                ;
                                /*^finalreturn*/
                                ;
                                /*finalret*/
                                goto meltlabend_rout ;
                                /*_.LET___V32*/
                                meltfptr[23] = /*_.RETURN___V36*/ meltfptr[34];;

                                MELT_LOCATION("warmelt-macro.melt:5687:/ clear");
                                /*clear*/ /*_.EXPREST__V33*/
                                meltfptr[32] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.RETURN___V36*/
                                meltfptr[34] = 0 ;
                                /*_._IFELSE___V31*/
                                meltfptr[22] = /*_.LET___V32*/ meltfptr[23];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:5686:/ clear");
                                /*clear*/ /*_.LET___V32*/
                                meltfptr[23] = 0 ;
                            }
                            ;
                        }
                    else    /*^cond.else*/
                        {

                            /*^block*/
                            /*anyblock*/
                            {


#if MELT_HAVE_DEBUG
                                MELT_LOCATION("warmelt-macro.melt:5692:/ cppif.then");
                                /*^block*/
                                /*anyblock*/
                                {


                                    {
                                        /*^locexp*/
                                        /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                        melt_dbgcounter++;
#endif
                                        ;
                                    }
                                    ;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    /*_#MELT_NEED_DBG__L13*/
                                    meltfnum[11] =
                                        /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                        (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                        0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                        ;;
                                    MELT_LOCATION("warmelt-macro.melt:5692:/ cond");
                                    /*cond*/
                                    if (/*_#MELT_NEED_DBG__L13*/ meltfnum[11]) /*then*/
                                        {
                                            /*^cond.then*/
                                            /*^block*/
                                            /*anyblock*/
                                            {

                                                /*_#MELT_CALLCOUNT__L14*/ meltfnum[6] =
                                                    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                    meltcallcount  /* melt_callcount debugging */
#else
                                                    0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                    ;;

                                                MELT_CHECK_SIGNAL();
                                                ;
                                                MELT_LOCATION("warmelt-macro.melt:5692:/ apply");
                                                /*apply*/
                                                {
                                                    union meltparam_un argtab[5];
                                                    memset(&argtab, 0, sizeof(argtab));
                                                    /*^apply.arg*/
                                                    argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L14*/ meltfnum[6];
                                                    /*^apply.arg*/
                                                    argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                    /*^apply.arg*/
                                                    argtab[2].meltbp_long = 5692;
                                                    /*^apply.arg*/
                                                    argtab[3].meltbp_cstring =  "mexpand_gccif sexpr gcc version mismatched";
                                                    /*^apply.arg*/
                                                    argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                                                    /*_.MELT_DEBUG_FUN__V38*/
                                                    meltfptr[32] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                }
                                                ;
                                                /*_._IF___V37*/
                                                meltfptr[33] = /*_.MELT_DEBUG_FUN__V38*/ meltfptr[32];;
                                                /*epilog*/

                                                MELT_LOCATION("warmelt-macro.melt:5692:/ clear");
                                                /*clear*/ /*_#MELT_CALLCOUNT__L14*/
                                                meltfnum[6] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_.MELT_DEBUG_FUN__V38*/
                                                meltfptr[32] = 0 ;
                                            }
                                            ;
                                        }
                                    else    /*^cond.else*/
                                        {

                                            /*_._IF___V37*/ meltfptr[33] =  /*reallynil*/ NULL ;;
                                        }
                                    ;

                                    {
                                        MELT_LOCATION("warmelt-macro.melt:5692:/ locexp");
                                        /*void*/
                                        (void)0;
                                    }
                                    ;
                                    /*^quasiblock*/


                                    /*epilog*/

                                    /*^clear*/
                                    /*clear*/ /*_#MELT_NEED_DBG__L13*/
                                    meltfnum[11] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_._IF___V37*/
                                    meltfptr[33] = 0 ;
                                }

#else /*MELT_HAVE_DEBUG*/
                                /*^cppif.else*/
                                /*^block*/
                                /*anyblock*/
                                {


                                    {
                                        /*^locexp*/
                                        /*void*/(void)0;
                                    }
                                    ;
                                    /*epilog*/
                                }

#endif /*MELT_HAVE_DEBUG*/
                                ;
                                MELT_LOCATION("warmelt-macro.melt:5693:/ quasiblock");


                                /*_._RETVAL___V1*/
                                meltfptr[0] =  /*reallynil*/ NULL ;;

                                {
                                    MELT_LOCATION("warmelt-macro.melt:5693:/ locexp");
                                    /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                    if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                        melt_warn_for_no_expected_secondary_results();
                                    /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                    ;
                                }
                                ;
                                /*^finalreturn*/
                                ;
                                /*finalret*/
                                goto meltlabend_rout ;
                                MELT_LOCATION("warmelt-macro.melt:5691:/ quasiblock");


                                /*_.PROGN___V40*/
                                meltfptr[23] = /*_.RETURN___V39*/ meltfptr[34];;
                                /*^compute*/
                                /*_._IFELSE___V31*/
                                meltfptr[22] = /*_.PROGN___V40*/ meltfptr[23];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:5686:/ clear");
                                /*clear*/ /*_.RETURN___V39*/
                                meltfptr[34] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.PROGN___V40*/
                                meltfptr[23] = 0 ;
                            }
                            ;
                        }
                    ;
                    /*_._IFELSE___V29*/
                    meltfptr[24] = /*_._IFELSE___V31*/ meltfptr[22];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5685:/ clear");
                    /*clear*/ /*_.FILTERGCCVERSION__V30*/
                    meltfptr[21] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_._IFELSE___V31*/
                    meltfptr[22] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#IS_LIST__L15*/
                    meltfnum[6] =
                        (melt_magic_discr((melt_ptr_t)(/*_.CURIF__V19*/ meltfptr[18])) == MELTOBMAG_LIST);;
                    MELT_LOCATION("warmelt-macro.melt:5694:/ cond");
                    /*cond*/
                    if (/*_#IS_LIST__L15*/ meltfnum[6]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {

                                MELT_LOCATION("warmelt-macro.melt:5695:/ quasiblock");


                                /*_.OK__V43*/
                                meltfptr[34] = (/*nil*/NULL);;
                                /*citerblock FOREACH_IN_LIST*/
                                {
                                    /* start foreach_in_list meltcit1__EACHLIST */
                                    for (/*_.CURPAIR__V44*/ meltfptr[23] = melt_list_first( (melt_ptr_t)/*_.CURIF__V19*/ meltfptr[18]);
                                                            melt_magic_discr((melt_ptr_t) /*_.CURPAIR__V44*/ meltfptr[23]) == MELTOBMAG_PAIR;
                                                            /*_.CURPAIR__V44*/ meltfptr[23] = melt_pair_tail((melt_ptr_t) /*_.CURPAIR__V44*/ meltfptr[23]))
                                        {
                                            /*_.CURSTR__V45*/ meltfptr[21] = melt_pair_head((melt_ptr_t) /*_.CURPAIR__V44*/ meltfptr[23]);



                                            MELT_CHECK_SIGNAL();
                                            ;
                                            /*_#IS_STRING__L16*/
                                            meltfnum[11] =
                                                (melt_magic_discr((melt_ptr_t)(/*_.CURSTR__V45*/ meltfptr[21])) == MELTOBMAG_STRING);;
                                            /*^compute*/
                                            /*_#NOT__L17*/
                                            meltfnum[16] =
                                                (!(/*_#IS_STRING__L16*/ meltfnum[11]));;
                                            MELT_LOCATION("warmelt-macro.melt:5700:/ cond");
                                            /*cond*/
                                            if (/*_#NOT__L17*/ meltfnum[16]) /*then*/
                                                {
                                                    /*^cond.then*/
                                                    /*^block*/
                                                    /*anyblock*/
                                                    {


                                                        {
                                                            MELT_LOCATION("warmelt-macro.melt:5701:/ locexp");
                                                            /* error_plain */
                                                            melt_error_str((melt_ptr_t)(/*_.SLOC__V16*/ meltfptr[15]), ( "GCCIF condition not a list of strings"), (melt_ptr_t)0);
                                                        }
                                                        ;
                                                        /*epilog*/
                                                    }
                                                    ;
                                                } /*noelse*/
                                            ;

                                            MELT_CHECK_SIGNAL();
                                            ;

                                            MELT_CHECK_SIGNAL();
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:5702:/ apply");
                                            /*apply*/
                                            {
                                                /*_.FILTERGCCVERSION__V46*/ meltfptr[22] =  melt_apply ((meltclosure_ptr_t)((/*!FILTERGCCVERSION*/ meltfrout->tabval[4])), (melt_ptr_t)(/*_.CURSTR__V45*/ meltfptr[21]), (""), (union meltparam_un*)0, "", (union meltparam_un*)0);
                                            }
                                            ;
                                            /*^cond*/
                                            /*cond*/
                                            if (/*_.FILTERGCCVERSION__V46*/ meltfptr[22]) /*then*/
                                                {
                                                    /*^cond.then*/
                                                    /*^block*/
                                                    /*anyblock*/
                                                    {

                                                        MELT_LOCATION("warmelt-macro.melt:5703:/ compute");
                                                        /*_.OK__V43*/
                                                        meltfptr[34] = /*_.SETQ___V48*/ meltfptr[47] = (/*!konst_6_TRUE*/ meltfrout->tabval[6]);;
                                                        /*_._IF___V47*/
                                                        meltfptr[46] = /*_.SETQ___V48*/ meltfptr[47];;
                                                        /*epilog*/

                                                        MELT_LOCATION("warmelt-macro.melt:5702:/ clear");
                                                        /*clear*/ /*_.SETQ___V48*/
                                                        meltfptr[47] = 0 ;
                                                    }
                                                    ;
                                                }
                                            else    /*^cond.else*/
                                                {

                                                    /*_._IF___V47*/ meltfptr[46] =  /*reallynil*/ NULL ;;
                                                }
                                            ;
                                        } /* end foreach_in_list meltcit1__EACHLIST */
                                    /*_.CURPAIR__V44*/ meltfptr[23] = NULL;
                                    /*_.CURSTR__V45*/
                                    meltfptr[21] = NULL;


                                    /*citerepilog*/

                                    MELT_LOCATION("warmelt-macro.melt:5697:/ clear");
                                    /*clear*/ /*_.CURPAIR__V44*/
                                    meltfptr[23] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.CURSTR__V45*/
                                    meltfptr[21] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_#IS_STRING__L16*/
                                    meltfnum[11] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_#NOT__L17*/
                                    meltfnum[16] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.FILTERGCCVERSION__V46*/
                                    meltfptr[22] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_._IF___V47*/
                                    meltfptr[46] = 0 ;
                                } /*endciterblock FOREACH_IN_LIST*/
                                ;

                                MELT_CHECK_SIGNAL();
                                ;
                                MELT_LOCATION("warmelt-macro.melt:5705:/ cond");
                                /*cond*/
                                if (/*_.OK__V43*/ meltfptr[34]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^block*/
                                        /*anyblock*/
                                        {

                                            MELT_LOCATION("warmelt-macro.melt:5706:/ quasiblock");



                                            MELT_CHECK_SIGNAL();
                                            ;
                                            /*^apply*/
                                            /*apply*/
                                            {
                                                union meltparam_un argtab[3];
                                                memset(&argtab, 0, sizeof(argtab));
                                                /*^apply.arg*/
                                                argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                                                /*^apply.arg*/
                                                argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                                                /*^apply.arg*/
                                                argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                                                /*_.EXPREST__V51*/
                                                meltfptr[50] =  melt_apply ((meltclosure_ptr_t)((/*!EXPAND_PAIRLIST_AS_TUPLE*/ meltfrout->tabval[5])), (melt_ptr_t)(/*_.RESTPAIR__V20*/ meltfptr[19]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                            }
                                            ;

#if MELT_HAVE_DEBUG
                                            MELT_LOCATION("warmelt-macro.melt:5708:/ cppif.then");
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                                    melt_dbgcounter++;
#endif
                                                    ;
                                                }
                                                ;

                                                MELT_CHECK_SIGNAL();
                                                ;
                                                /*_#MELT_NEED_DBG__L18*/
                                                meltfnum[17] =
                                                    /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                                    (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                                    0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                                    ;;
                                                MELT_LOCATION("warmelt-macro.melt:5708:/ cond");
                                                /*cond*/
                                                if (/*_#MELT_NEED_DBG__L18*/ meltfnum[17]) /*then*/
                                                    {
                                                        /*^cond.then*/
                                                        /*^block*/
                                                        /*anyblock*/
                                                        {

                                                            /*_#MELT_CALLCOUNT__L19*/ meltfnum[18] =
                                                                /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                                meltcallcount  /* melt_callcount debugging */
#else
                                                                0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                                ;;

                                                            MELT_CHECK_SIGNAL();
                                                            ;
                                                            MELT_LOCATION("warmelt-macro.melt:5708:/ apply");
                                                            /*apply*/
                                                            {
                                                                union meltparam_un argtab[5];
                                                                memset(&argtab, 0, sizeof(argtab));
                                                                /*^apply.arg*/
                                                                argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L19*/ meltfnum[18];
                                                                /*^apply.arg*/
                                                                argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                                /*^apply.arg*/
                                                                argtab[2].meltbp_long = 5708;
                                                                /*^apply.arg*/
                                                                argtab[3].meltbp_cstring =  "mexpand_gccif return exprest multicond";
                                                                /*^apply.arg*/
                                                                argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.EXPREST__V51*/ meltfptr[50];
                                                                /*_.MELT_DEBUG_FUN__V53*/
                                                                meltfptr[52] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                            }
                                                            ;
                                                            /*_._IF___V52*/
                                                            meltfptr[51] = /*_.MELT_DEBUG_FUN__V53*/ meltfptr[52];;
                                                            /*epilog*/

                                                            MELT_LOCATION("warmelt-macro.melt:5708:/ clear");
                                                            /*clear*/ /*_#MELT_CALLCOUNT__L19*/
                                                            meltfnum[18] = 0 ;
                                                            /*^clear*/
                                                            /*clear*/ /*_.MELT_DEBUG_FUN__V53*/
                                                            meltfptr[52] = 0 ;
                                                        }
                                                        ;
                                                    }
                                                else    /*^cond.else*/
                                                    {

                                                        /*_._IF___V52*/ meltfptr[51] =  /*reallynil*/ NULL ;;
                                                    }
                                                ;

                                                {
                                                    MELT_LOCATION("warmelt-macro.melt:5708:/ locexp");
                                                    /*void*/
                                                    (void)0;
                                                }
                                                ;
                                                /*^quasiblock*/


                                                /*epilog*/

                                                /*^clear*/
                                                /*clear*/ /*_#MELT_NEED_DBG__L18*/
                                                meltfnum[17] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_._IF___V52*/
                                                meltfptr[51] = 0 ;
                                            }

#else /*MELT_HAVE_DEBUG*/
                                            /*^cppif.else*/
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*void*/(void)0;
                                                }
                                                ;
                                                /*epilog*/
                                            }

#endif /*MELT_HAVE_DEBUG*/
                                            ;

                                            MELT_CHECK_SIGNAL();
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:5709:/ quasiblock");


                                            /*_._RETVAL___V1*/
                                            meltfptr[0] = /*_.EXPREST__V51*/ meltfptr[50];;

                                            {
                                                MELT_LOCATION("warmelt-macro.melt:5709:/ locexp");
                                                /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                                if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                                    melt_warn_for_no_expected_secondary_results();
                                                /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                                ;
                                            }
                                            ;
                                            /*^finalreturn*/
                                            ;
                                            /*finalret*/
                                            goto meltlabend_rout ;
                                            /*_.LET___V50*/
                                            meltfptr[49] = /*_.RETURN___V54*/ meltfptr[52];;

                                            MELT_LOCATION("warmelt-macro.melt:5706:/ clear");
                                            /*clear*/ /*_.EXPREST__V51*/
                                            meltfptr[50] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.RETURN___V54*/
                                            meltfptr[52] = 0 ;
                                            /*_._IFELSE___V49*/
                                            meltfptr[47] = /*_.LET___V50*/ meltfptr[49];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:5705:/ clear");
                                            /*clear*/ /*_.LET___V50*/
                                            meltfptr[49] = 0 ;
                                        }
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*^block*/
                                        /*anyblock*/
                                        {


#if MELT_HAVE_DEBUG
                                            MELT_LOCATION("warmelt-macro.melt:5711:/ cppif.then");
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                                    melt_dbgcounter++;
#endif
                                                    ;
                                                }
                                                ;

                                                MELT_CHECK_SIGNAL();
                                                ;
                                                /*_#MELT_NEED_DBG__L20*/
                                                meltfnum[18] =
                                                    /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                                    (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                                    0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                                    ;;
                                                MELT_LOCATION("warmelt-macro.melt:5711:/ cond");
                                                /*cond*/
                                                if (/*_#MELT_NEED_DBG__L20*/ meltfnum[18]) /*then*/
                                                    {
                                                        /*^cond.then*/
                                                        /*^block*/
                                                        /*anyblock*/
                                                        {

                                                            /*_#MELT_CALLCOUNT__L21*/ meltfnum[17] =
                                                                /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                                meltcallcount  /* melt_callcount debugging */
#else
                                                                0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                                ;;

                                                            MELT_CHECK_SIGNAL();
                                                            ;
                                                            MELT_LOCATION("warmelt-macro.melt:5711:/ apply");
                                                            /*apply*/
                                                            {
                                                                union meltparam_un argtab[5];
                                                                memset(&argtab, 0, sizeof(argtab));
                                                                /*^apply.arg*/
                                                                argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L21*/ meltfnum[17];
                                                                /*^apply.arg*/
                                                                argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                                /*^apply.arg*/
                                                                argtab[2].meltbp_long = 5711;
                                                                /*^apply.arg*/
                                                                argtab[3].meltbp_cstring =  "mexpand_gccif sexpr gcc version multicond mismatched";
                                                                /*^apply.arg*/
                                                                argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                                                                /*_.MELT_DEBUG_FUN__V56*/
                                                                meltfptr[50] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                            }
                                                            ;
                                                            /*_._IF___V55*/
                                                            meltfptr[51] = /*_.MELT_DEBUG_FUN__V56*/ meltfptr[50];;
                                                            /*epilog*/

                                                            MELT_LOCATION("warmelt-macro.melt:5711:/ clear");
                                                            /*clear*/ /*_#MELT_CALLCOUNT__L21*/
                                                            meltfnum[17] = 0 ;
                                                            /*^clear*/
                                                            /*clear*/ /*_.MELT_DEBUG_FUN__V56*/
                                                            meltfptr[50] = 0 ;
                                                        }
                                                        ;
                                                    }
                                                else    /*^cond.else*/
                                                    {

                                                        /*_._IF___V55*/ meltfptr[51] =  /*reallynil*/ NULL ;;
                                                    }
                                                ;

                                                {
                                                    MELT_LOCATION("warmelt-macro.melt:5711:/ locexp");
                                                    /*void*/
                                                    (void)0;
                                                }
                                                ;
                                                /*^quasiblock*/


                                                /*epilog*/

                                                /*^clear*/
                                                /*clear*/ /*_#MELT_NEED_DBG__L20*/
                                                meltfnum[18] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_._IF___V55*/
                                                meltfptr[51] = 0 ;
                                            }

#else /*MELT_HAVE_DEBUG*/
                                            /*^cppif.else*/
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*void*/(void)0;
                                                }
                                                ;
                                                /*epilog*/
                                            }

#endif /*MELT_HAVE_DEBUG*/
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:5712:/ quasiblock");


                                            /*_._RETVAL___V1*/
                                            meltfptr[0] =  /*reallynil*/ NULL ;;

                                            {
                                                MELT_LOCATION("warmelt-macro.melt:5712:/ locexp");
                                                /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                                if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                                    melt_warn_for_no_expected_secondary_results();
                                                /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                                ;
                                            }
                                            ;
                                            /*^finalreturn*/
                                            ;
                                            /*finalret*/
                                            goto meltlabend_rout ;
                                            MELT_LOCATION("warmelt-macro.melt:5710:/ quasiblock");


                                            /*_.PROGN___V58*/
                                            meltfptr[49] = /*_.RETURN___V57*/ meltfptr[52];;
                                            /*^compute*/
                                            /*_._IFELSE___V49*/
                                            meltfptr[47] = /*_.PROGN___V58*/ meltfptr[49];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:5705:/ clear");
                                            /*clear*/ /*_.RETURN___V57*/
                                            meltfptr[52] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.PROGN___V58*/
                                            meltfptr[49] = 0 ;
                                        }
                                        ;
                                    }
                                ;
                                /*_.LET___V42*/
                                meltfptr[33] = /*_._IFELSE___V49*/ meltfptr[47];;

                                MELT_LOCATION("warmelt-macro.melt:5695:/ clear");
                                /*clear*/ /*_.OK__V43*/
                                meltfptr[34] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_._IFELSE___V49*/
                                meltfptr[47] = 0 ;
                                /*_._IFELSE___V41*/
                                meltfptr[32] = /*_.LET___V42*/ meltfptr[33];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:5694:/ clear");
                                /*clear*/ /*_.LET___V42*/
                                meltfptr[33] = 0 ;
                            }
                            ;
                        }
                    else    /*^cond.else*/
                        {

                            /*^block*/
                            /*anyblock*/
                            {


                                {
                                    MELT_LOCATION("warmelt-macro.melt:5716:/ locexp");
                                    /* error_plain */
                                    melt_error_str((melt_ptr_t)(/*_.SLOC__V16*/ meltfptr[15]), ( "GCC-IF bad condition, should be a string or a list of strings"), (melt_ptr_t)0);
                                }
                                ;
                                MELT_LOCATION("warmelt-macro.melt:5717:/ quasiblock");


                                /*_._RETVAL___V1*/
                                meltfptr[0] =  /*reallynil*/ NULL ;;

                                {
                                    MELT_LOCATION("warmelt-macro.melt:5717:/ locexp");
                                    /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                    if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                        melt_warn_for_no_expected_secondary_results();
                                    /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                    ;
                                }
                                ;
                                /*^finalreturn*/
                                ;
                                /*finalret*/
                                goto meltlabend_rout ;
                                MELT_LOCATION("warmelt-macro.melt:5715:/ quasiblock");


                                /*_.PROGN___V60*/
                                meltfptr[51] = /*_.RETURN___V59*/ meltfptr[50];;
                                /*^compute*/
                                /*_._IFELSE___V41*/
                                meltfptr[32] = /*_.PROGN___V60*/ meltfptr[51];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:5694:/ clear");
                                /*clear*/ /*_.RETURN___V59*/
                                meltfptr[50] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.PROGN___V60*/
                                meltfptr[51] = 0 ;
                            }
                            ;
                        }
                    ;
                    /*_._IFELSE___V29*/
                    meltfptr[24] = /*_._IFELSE___V41*/ meltfptr[32];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5685:/ clear");
                    /*clear*/ /*_#IS_LIST__L15*/
                    meltfnum[6] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_._IFELSE___V41*/
                    meltfptr[32] = 0 ;
                }
                ;
            }
        ;
        /*_.LET___V14*/
        meltfptr[6] = /*_._IFELSE___V29*/ meltfptr[24];;

        MELT_LOCATION("warmelt-macro.melt:5670:/ clear");
        /*clear*/ /*_.CONT__V15*/
        meltfptr[10] = 0 ;
        /*^clear*/
        /*clear*/ /*_.SLOC__V16*/
        meltfptr[15] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V17*/
        meltfptr[16] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V18*/
        meltfptr[17] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURIF__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RESTPAIR__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_A__L5*/
        meltfnum[3] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_STRING__L10*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IFELSE___V29*/
        meltfptr[24] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5666:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V14*/ meltfptr[6];;

        {
            MELT_LOCATION("warmelt-macro.melt:5666:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V6*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V9*/
        meltfptr[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V14*/
        meltfptr[6] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_GCCIF", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_97_WARMELTmiMACRO_MEXPAND_GCCIF*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_98_WARMELTmiMACRO_MEXPAND_COND(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_98_WARMELTmiMACRO_MEXPAND_COND_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_98_WARMELTmiMACRO_MEXPAND_COND fromline 1718 */

    /** start of frame for meltrout_98_WARMELTmiMACRO_MEXPAND_COND of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_98_WARMELTmiMACRO_MEXPAND_COND// fromline 1534
        : public Melt_CallFrameWithValues<86>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[35];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_98_WARMELTmiMACRO_MEXPAND_COND(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<86> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_98_WARMELTmiMACRO_MEXPAND_COND), clos) {};
        MeltFrame_meltrout_98_WARMELTmiMACRO_MEXPAND_COND() //the constructor fromline 1608
            : Melt_CallFrameWithValues<86> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_98_WARMELTmiMACRO_MEXPAND_COND)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_98_WARMELTmiMACRO_MEXPAND_COND(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<86> (fil,lin, sizeof(MeltFrame_meltrout_98_WARMELTmiMACRO_MEXPAND_COND)) {};
        MeltFrame_meltrout_98_WARMELTmiMACRO_MEXPAND_COND(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<86> (fil,lin, sizeof(MeltFrame_meltrout_98_WARMELTmiMACRO_MEXPAND_COND), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_98_WARMELTmiMACRO_MEXPAND_COND


    /** end of frame for meltrout_98_WARMELTmiMACRO_MEXPAND_COND fromline 1663**/

    /* end of frame for routine meltrout_98_WARMELTmiMACRO_MEXPAND_COND fromline 1722 */

    /* classy proc frame meltrout_98_WARMELTmiMACRO_MEXPAND_COND */
    MeltFrame_meltrout_98_WARMELTmiMACRO_MEXPAND_COND
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_98_WARMELTmiMACRO_MEXPAND_COND fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_COND", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5729:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5730:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L1*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
            MELT_LOCATION("warmelt-macro.melt:5730:/ cond");
            /*cond*/
            if (/*_#IS_A__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V7*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5730:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5730;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                            meltfptr[7] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V7*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V8*/ meltfptr[7];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5730:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                        meltfptr[7] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V6*/
            meltfptr[5] = /*_._IFELSE___V7*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5730:/ clear");
            /*clear*/ /*_#IS_A__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V7*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V6*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5731:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L2*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[2])));;
            MELT_LOCATION("warmelt-macro.melt:5731:/ cond");
            /*cond*/
            if (/*_#IS_A__L2*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V10*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5731:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5731;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                            meltfptr[10] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V10*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V11*/ meltfptr[10];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5731:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                        meltfptr[10] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V9*/
            meltfptr[7] = /*_._IFELSE___V10*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5731:/ clear");
            /*clear*/ /*_#IS_A__L2*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V10*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V9*/ meltfptr[7] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5732:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L3*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5732:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L3*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L4*/ meltfnum[3] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5732:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L4*/ meltfnum[3];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5732;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_cond sexpr";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V13*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V12*/
                        meltfptr[10] = /*_.MELT_DEBUG_FUN__V13*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5732:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L4*/
                        meltfnum[3] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V13*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V12*/ meltfptr[10] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5732:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L3*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V12*/
            meltfptr[10] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5733:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:5734:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V15*/
            meltfptr[10] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5735:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V16*/
            meltfptr[15] = slot;
        };
        ;
        /*_.LIST_FIRST__V17*/
        meltfptr[16] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V15*/ meltfptr[10])));;
        /*^compute*/
        /*_.PAIR_TAIL__V18*/
        meltfptr[17] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V17*/ meltfptr[16])));;
        MELT_LOCATION("warmelt-macro.melt:5739:/ quasiblock");


        /*^newclosure*/
        /*newclosure*/ /*_.LAMBDA___V20*/
        meltfptr[19] =
            (melt_ptr_t) meltgc_new_closure((meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_CLOSURE)))), (meltroutine_ptr_t)((/*!konst_7*/ meltfrout->tabval[7])), (1));
        ;
        /*^putclosedv*/
        /*putclosv*/
        melt_assertmsg("putclosv checkclo", melt_magic_discr((melt_ptr_t)(/*_.LAMBDA___V20*/ meltfptr[19])) == MELTOBMAG_CLOSURE);
        melt_assertmsg("putclosv checkoff", 0>= 0 && 0< melt_closure_size((melt_ptr_t) (/*_.LAMBDA___V20*/ meltfptr[19])));
        ((meltclosure_ptr_t)/*_.LAMBDA___V20*/ meltfptr[19])->tabval[0] = (melt_ptr_t)(/*_.LOC__V16*/ meltfptr[15]);
        ;
        /*_.LAMBDA___V19*/
        meltfptr[18] = /*_.LAMBDA___V20*/ meltfptr[19];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5736:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[2];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &(/*!DISCR_MULTIPLE*/ meltfrout->tabval[5]);
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.LAMBDA___V19*/ meltfptr[18];
            /*_.CEXPTUPLE__V21*/
            meltfptr[20] =  melt_apply ((meltclosure_ptr_t)((/*!PAIRLIST_TO_MULTIPLE*/ meltfrout->tabval[4])), (melt_ptr_t)(/*_.PAIR_TAIL__V18*/ meltfptr[17]), (MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        /*_#NBCOND__L5*/
        meltfnum[3] =
            (melt_multiple_length((melt_ptr_t)(/*_.CEXPTUPLE__V21*/ meltfptr[20])));;
        MELT_LOCATION("warmelt-macro.melt:5745:/ quasiblock");


        /*_.LX__V23*/
        meltfptr[22] =
            (melt_multiple_nth((melt_ptr_t)(/*_.CEXPTUPLE__V21*/ meltfptr[20]), (-1)));;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5746:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5746:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L7*/ meltfnum[6] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5746:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L7*/ meltfnum[6];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5746;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_cond lastcexp lx";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.LX__V23*/ meltfptr[22];
                            /*_.MELT_DEBUG_FUN__V25*/
                            meltfptr[24] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V24*/
                        meltfptr[23] = /*_.MELT_DEBUG_FUN__V25*/ meltfptr[24];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5746:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L7*/
                        meltfnum[6] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V25*/
                        meltfptr[24] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V24*/ meltfptr[23] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5746:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V24*/
            meltfptr[23] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;
        /*_.LET___V22*/
        meltfptr[21] = /*_.LX__V23*/ meltfptr[22];;

        MELT_LOCATION("warmelt-macro.melt:5745:/ clear");
        /*clear*/ /*_.LX__V23*/
        meltfptr[22] = 0 ;
        /*_.LASTCEXP__V26*/
        meltfptr[24] = /*_.LET___V22*/ meltfptr[21];;
        /*^compute*/
        /*_#IX__L8*/
        meltfnum[6] =
            ((/*_#NBCOND__L5*/ meltfnum[3]) - (1));;
        /*^compute*/
        /*_.RES__V27*/
        meltfptr[23] = (/*nil*/NULL);;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5751:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L9*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5751:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L9*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L10*/ meltfnum[9] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5751:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L10*/ meltfnum[9];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5751;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_cond cexptuple";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CEXPTUPLE__V21*/ meltfptr[20];
                            /*_.MELT_DEBUG_FUN__V29*/
                            meltfptr[28] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V28*/
                        meltfptr[22] = /*_.MELT_DEBUG_FUN__V29*/ meltfptr[28];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5751:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L10*/
                        meltfnum[9] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V29*/
                        meltfptr[28] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V28*/ meltfptr[22] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5751:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L9*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V28*/
            meltfptr[22] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5752:/ loop");
        /*loop*/
        {
meltlabloop_CONDLOOP_1:;/*^loopbody*/

            /*^block*/
            /*anyblock*/
            {


                MELT_CHECK_SIGNAL();
                ;

                MELT_CHECK_SIGNAL();
                ;
                /*_#ltI__L11*/
                meltfnum[9] =
                    ((/*_#IX__L8*/ meltfnum[6]) < (0));;
                MELT_LOCATION("warmelt-macro.melt:5753:/ cond");
                /*cond*/
                if (/*_#ltI__L11*/ meltfnum[9]) /*then*/
                    {
                        /*^cond.then*/
                        /*^block*/
                        /*anyblock*/
                        {

                            /*^quasiblock*/


                            /*^compute*/
                            /*_.CONDLOOP__V31*/ meltfptr[22] =  /*reallynil*/ NULL ;;

                            /*^exit*/
                            /*exit*/
                            {
                                goto meltlabexit_CONDLOOP_1;
                            }
                            ;
                            /*epilog*/
                        }
                        ;
                    } /*noelse*/
                ;
                MELT_LOCATION("warmelt-macro.melt:5754:/ quasiblock");


                /*_.CURCOND__V32*/
                meltfptr[31] =
                    (melt_multiple_nth((melt_ptr_t)(/*_.CEXPTUPLE__V21*/ meltfptr[20]), (/*_#IX__L8*/ meltfnum[6])));;

#if MELT_HAVE_DEBUG
                MELT_LOCATION("warmelt-macro.melt:5755:/ cppif.then");
                /*^block*/
                /*anyblock*/
                {


                    {
                        /*^locexp*/
                        /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                        melt_dbgcounter++;
#endif
                        ;
                    }
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#MELT_NEED_DBG__L12*/
                    meltfnum[0] =
                        /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                        (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                        0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                        ;;
                    MELT_LOCATION("warmelt-macro.melt:5755:/ cond");
                    /*cond*/
                    if (/*_#MELT_NEED_DBG__L12*/ meltfnum[0]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {

                                /*_#MELT_CALLCOUNT__L13*/ meltfnum[12] =
                                    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                    meltcallcount  /* melt_callcount debugging */
#else
                                    0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                    ;;

                                MELT_CHECK_SIGNAL();
                                ;
                                MELT_LOCATION("warmelt-macro.melt:5755:/ apply");
                                /*apply*/
                                {
                                    union meltparam_un argtab[5];
                                    memset(&argtab, 0, sizeof(argtab));
                                    /*^apply.arg*/
                                    argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L13*/ meltfnum[12];
                                    /*^apply.arg*/
                                    argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                    /*^apply.arg*/
                                    argtab[2].meltbp_long = 5755;
                                    /*^apply.arg*/
                                    argtab[3].meltbp_cstring =  "mexpand_cond curcond";
                                    /*^apply.arg*/
                                    argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CURCOND__V32*/ meltfptr[31];
                                    /*_.MELT_DEBUG_FUN__V34*/
                                    meltfptr[33] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                }
                                ;
                                /*_._IF___V33*/
                                meltfptr[32] = /*_.MELT_DEBUG_FUN__V34*/ meltfptr[33];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-macro.melt:5755:/ clear");
                                /*clear*/ /*_#MELT_CALLCOUNT__L13*/
                                meltfnum[12] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.MELT_DEBUG_FUN__V34*/
                                meltfptr[33] = 0 ;
                            }
                            ;
                        }
                    else    /*^cond.else*/
                        {

                            /*_._IF___V33*/ meltfptr[32] =  /*reallynil*/ NULL ;;
                        }
                    ;

                    {
                        MELT_LOCATION("warmelt-macro.melt:5755:/ locexp");
                        /*void*/
                        (void)0;
                    }
                    ;
                    /*^quasiblock*/


                    /*epilog*/

                    /*^clear*/
                    /*clear*/ /*_#MELT_NEED_DBG__L12*/
                    meltfnum[0] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_._IF___V33*/
                    meltfptr[32] = 0 ;
                }

#else /*MELT_HAVE_DEBUG*/
                /*^cppif.else*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        /*^locexp*/
                        /*void*/(void)0;
                    }
                    ;
                    /*epilog*/
                }

#endif /*MELT_HAVE_DEBUG*/
                ;

                MELT_CHECK_SIGNAL();
                ;

                MELT_CHECK_SIGNAL();
                ;
                /*_#NULL__L14*/
                meltfnum[12] =
                    ((/*_.RES__V27*/ meltfptr[23]) == NULL);;
                MELT_LOCATION("warmelt-macro.melt:5757:/ cond");
                /*cond*/
                if (/*_#NULL__L14*/ meltfnum[12]) /*then*/
                    {
                        /*^cond.then*/
                        /*^block*/
                        /*anyblock*/
                        {


                            MELT_CHECK_SIGNAL();
                            ;
                            /*_#IS_A__L16*/
                            meltfnum[15] =
                                melt_is_instance_of((melt_ptr_t)(/*_.CURCOND__V32*/ meltfptr[31]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
                            MELT_LOCATION("warmelt-macro.melt:5757:/ cond");
                            /*cond*/
                            if (/*_#IS_A__L16*/ meltfnum[15]) /*then*/
                                {
                                    /*^cond.then*/
                                    /*^block*/
                                    /*anyblock*/
                                    {

                                        MELT_LOCATION("warmelt-macro.melt:5760:/ getslot");
                                        {
                                            melt_ptr_t slot=NULL, obj=NULL;
                                            obj = (melt_ptr_t)(/*_.CURCOND__V32*/ meltfptr[31]) /*=obj*/;
                                            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
                                            /*_.SEXP_CONTENTS__V35*/
                                            meltfptr[33] = slot;
                                        };
                                        ;
                                        /*_.LIST_FIRST__V36*/
                                        meltfptr[32] =
                                            (melt_list_first((melt_ptr_t)(/*_.SEXP_CONTENTS__V35*/ meltfptr[33])));;
                                        /*^compute*/
                                        /*_.PAIR_HEAD__V37*/
                                        meltfptr[36] =
                                            (melt_pair_head((melt_ptr_t)(/*_.LIST_FIRST__V36*/ meltfptr[32])));;
                                        /*^compute*/
                                        /*_#eqeq__L18*/
                                        meltfnum[17] =
                                            (((/*!konst_8_ELSE*/ meltfrout->tabval[8])) == (/*_.PAIR_HEAD__V37*/ meltfptr[36]));;
                                        /*^compute*/
                                        /*_#_IF___L17*/
                                        meltfnum[16] = /*_#eqeq__L18*/ meltfnum[17];;
                                        /*epilog*/

                                        MELT_LOCATION("warmelt-macro.melt:5757:/ clear");
                                        /*clear*/ /*_.SEXP_CONTENTS__V35*/
                                        meltfptr[33] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_.LIST_FIRST__V36*/
                                        meltfptr[32] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_.PAIR_HEAD__V37*/
                                        meltfptr[36] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_#eqeq__L18*/
                                        meltfnum[17] = 0 ;
                                    }
                                    ;
                                }
                            else    /*^cond.else*/
                                {

                                    /*_#_IF___L17*/ meltfnum[16] = 0;;
                                }
                            ;
                            /*^compute*/
                            /*_#_IF___L15*/
                            meltfnum[0] = /*_#_IF___L17*/ meltfnum[16];;
                            /*epilog*/

                            MELT_LOCATION("warmelt-macro.melt:5757:/ clear");
                            /*clear*/ /*_#IS_A__L16*/
                            meltfnum[15] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_#_IF___L17*/
                            meltfnum[16] = 0 ;
                        }
                        ;
                    }
                else    /*^cond.else*/
                    {

                        /*_#_IF___L15*/ meltfnum[0] = 0;;
                    }
                ;
                MELT_LOCATION("warmelt-macro.melt:5757:/ cond");
                /*cond*/
                if (/*_#_IF___L15*/ meltfnum[0]) /*then*/
                    {
                        /*^cond.then*/
                        /*^block*/
                        /*anyblock*/
                        {

                            MELT_LOCATION("warmelt-macro.melt:5761:/ quasiblock");


                            MELT_LOCATION("warmelt-macro.melt:5762:/ getslot");
                            {
                                melt_ptr_t slot=NULL, obj=NULL;
                                obj = (melt_ptr_t)(/*_.CURCOND__V32*/ meltfptr[31]) /*=obj*/;
                                melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
                                /*_.SEXP_CONTENTS__V38*/
                                meltfptr[33] = slot;
                            };
                            ;
                            /*_.LIST_FIRST__V39*/
                            meltfptr[32] =
                                (melt_list_first((melt_ptr_t)(/*_.SEXP_CONTENTS__V38*/ meltfptr[33])));;
                            /*^compute*/
                            /*_.RESTPAIRS__V40*/
                            meltfptr[36] =
                                (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V39*/ meltfptr[32])));;

                            MELT_CHECK_SIGNAL();
                            ;
                            MELT_LOCATION("warmelt-macro.melt:5764:/ cond");
                            /*cond*/
                            if (/*_.RESTPAIRS__V40*/ meltfptr[36]) /*then*/
                                {
                                    /*^cond.then*/
                                    /*^block*/
                                    /*anyblock*/
                                    {

                                        MELT_LOCATION("warmelt-macro.melt:5766:/ getslot");
                                        {
                                            melt_ptr_t slot=NULL, obj=NULL;
                                            obj = (melt_ptr_t)(/*_.CURCOND__V32*/ meltfptr[31]) /*=obj*/;
                                            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
                                            /*_.LOCA_LOCATION__V42*/
                                            meltfptr[41] = slot;
                                        };
                                        ;

                                        MELT_CHECK_SIGNAL();
                                        ;
                                        MELT_LOCATION("warmelt-macro.melt:5765:/ apply");
                                        /*apply*/
                                        {
                                            union meltparam_un argtab[4];
                                            memset(&argtab, 0, sizeof(argtab));
                                            /*^apply.arg*/
                                            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.LOCA_LOCATION__V42*/ meltfptr[41];
                                            /*^apply.arg*/
                                            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                                            /*^apply.arg*/
                                            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                                            /*^apply.arg*/
                                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                                            /*_.PAIRLIST_TO_PROGN__V43*/
                                            meltfptr[42] =  melt_apply ((meltclosure_ptr_t)((/*!PAIRLIST_TO_PROGN*/ meltfrout->tabval[9])), (melt_ptr_t)(/*_.RESTPAIRS__V40*/ meltfptr[36]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                        }
                                        ;
                                        /*^compute*/
                                        /*_.RES__V27*/
                                        meltfptr[23] = /*_.SETQ___V44*/ meltfptr[43] = /*_.PAIRLIST_TO_PROGN__V43*/ meltfptr[42];;
                                        /*_._IF___V41*/
                                        meltfptr[40] = /*_.SETQ___V44*/ meltfptr[43];;
                                        /*epilog*/

                                        MELT_LOCATION("warmelt-macro.melt:5764:/ clear");
                                        /*clear*/ /*_.LOCA_LOCATION__V42*/
                                        meltfptr[41] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_.PAIRLIST_TO_PROGN__V43*/
                                        meltfptr[42] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_.SETQ___V44*/
                                        meltfptr[43] = 0 ;
                                    }
                                    ;
                                }
                            else    /*^cond.else*/
                                {

                                    /*_._IF___V41*/ meltfptr[40] =  /*reallynil*/ NULL ;;
                                }
                            ;

#if MELT_HAVE_DEBUG
                            MELT_LOCATION("warmelt-macro.melt:5769:/ cppif.then");
                            /*^block*/
                            /*anyblock*/
                            {


                                {
                                    /*^locexp*/
                                    /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                    melt_dbgcounter++;
#endif
                                    ;
                                }
                                ;

                                MELT_CHECK_SIGNAL();
                                ;
                                /*_#MELT_NEED_DBG__L19*/
                                meltfnum[17] =
                                    /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                    (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                    0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                    ;;
                                MELT_LOCATION("warmelt-macro.melt:5769:/ cond");
                                /*cond*/
                                if (/*_#MELT_NEED_DBG__L19*/ meltfnum[17]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^block*/
                                        /*anyblock*/
                                        {

                                            /*_#MELT_CALLCOUNT__L20*/ meltfnum[15] =
                                                /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                meltcallcount  /* melt_callcount debugging */
#else
                                                0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                ;;

                                            MELT_CHECK_SIGNAL();
                                            ;
                                            MELT_LOCATION("warmelt-macro.melt:5769:/ apply");
                                            /*apply*/
                                            {
                                                union meltparam_un argtab[5];
                                                memset(&argtab, 0, sizeof(argtab));
                                                /*^apply.arg*/
                                                argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L20*/ meltfnum[15];
                                                /*^apply.arg*/
                                                argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                /*^apply.arg*/
                                                argtab[2].meltbp_long = 5769;
                                                /*^apply.arg*/
                                                argtab[3].meltbp_cstring =  "mexpand_cond res for :else";
                                                /*^apply.arg*/
                                                argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RES__V27*/ meltfptr[23];
                                                /*_.MELT_DEBUG_FUN__V46*/
                                                meltfptr[42] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                            }
                                            ;
                                            /*_._IF___V45*/
                                            meltfptr[41] = /*_.MELT_DEBUG_FUN__V46*/ meltfptr[42];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:5769:/ clear");
                                            /*clear*/ /*_#MELT_CALLCOUNT__L20*/
                                            meltfnum[15] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.MELT_DEBUG_FUN__V46*/
                                            meltfptr[42] = 0 ;
                                        }
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*_._IF___V45*/ meltfptr[41] =  /*reallynil*/ NULL ;;
                                    }
                                ;

                                {
                                    MELT_LOCATION("warmelt-macro.melt:5769:/ locexp");
                                    /*void*/
                                    (void)0;
                                }
                                ;
                                /*^quasiblock*/


                                /*epilog*/

                                /*^clear*/
                                /*clear*/ /*_#MELT_NEED_DBG__L19*/
                                meltfnum[17] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_._IF___V45*/
                                meltfptr[41] = 0 ;
                            }

#else /*MELT_HAVE_DEBUG*/
                            /*^cppif.else*/
                            /*^block*/
                            /*anyblock*/
                            {


                                {
                                    /*^locexp*/
                                    /*void*/(void)0;
                                }
                                ;
                                /*epilog*/
                            }

#endif /*MELT_HAVE_DEBUG*/
                            ;

                            MELT_LOCATION("warmelt-macro.melt:5761:/ clear");
                            /*clear*/ /*_.SEXP_CONTENTS__V38*/
                            meltfptr[33] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_.LIST_FIRST__V39*/
                            meltfptr[32] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_.RESTPAIRS__V40*/
                            meltfptr[36] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_._IF___V41*/
                            meltfptr[40] = 0 ;
                            /*epilog*/
                        }
                        ;
                    }
                else
                    {
                        MELT_LOCATION("warmelt-macro.melt:5757:/ cond.else");

                        /*^block*/
                        /*anyblock*/
                        {


                            MELT_CHECK_SIGNAL();
                            ;
                            /*_#IS_A__L21*/
                            meltfnum[16] =
                                melt_is_instance_of((melt_ptr_t)(/*_.CURCOND__V32*/ meltfptr[31]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
                            MELT_LOCATION("warmelt-macro.melt:5771:/ cond");
                            /*cond*/
                            if (/*_#IS_A__L21*/ meltfnum[16]) /*then*/
                                {
                                    /*^cond.then*/
                                    /*^block*/
                                    /*anyblock*/
                                    {

                                        MELT_LOCATION("warmelt-macro.melt:5772:/ quasiblock");


                                        /*^getslot*/
                                        {
                                            melt_ptr_t slot=NULL, obj=NULL;
                                            obj = (melt_ptr_t)(/*_.CURCOND__V32*/ meltfptr[31]) /*=obj*/;
                                            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
                                            /*_.CURCONDCONT__V47*/
                                            meltfptr[43] = slot;
                                        };
                                        ;
                                        MELT_LOCATION("warmelt-macro.melt:5773:/ getslot");
                                        {
                                            melt_ptr_t slot=NULL, obj=NULL;
                                            obj = (melt_ptr_t)(/*_.CURCOND__V32*/ meltfptr[31]) /*=obj*/;
                                            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
                                            /*_.CURCONDLOC__V48*/
                                            meltfptr[42] = slot;
                                        };
                                        ;
                                        /*_.LIST_FIRST__V49*/
                                        meltfptr[41] =
                                            (melt_list_first((melt_ptr_t)(/*_.CURCONDCONT__V47*/ meltfptr[43])));;
                                        /*^compute*/
                                        /*_.CURCONDTEST__V50*/
                                        meltfptr[33] =
                                            (melt_pair_head((melt_ptr_t)(/*_.LIST_FIRST__V49*/ meltfptr[41])));;
                                        /*^compute*/
                                        /*_.LIST_FIRST__V51*/
                                        meltfptr[32] =
                                            (melt_list_first((melt_ptr_t)(/*_.CURCONDCONT__V47*/ meltfptr[43])));;
                                        /*^compute*/
                                        /*_.CURCONDRESTPAIRS__V52*/
                                        meltfptr[36] =
                                            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V51*/ meltfptr[32])));;

                                        MELT_CHECK_SIGNAL();
                                        ;
                                        /*^compute*/
                                        /*_#NULL__L22*/
                                        meltfnum[15] =
                                            ((/*_.CURCONDRESTPAIRS__V52*/ meltfptr[36]) == NULL);;
                                        MELT_LOCATION("warmelt-macro.melt:5777:/ cond");
                                        /*cond*/
                                        if (/*_#NULL__L22*/ meltfnum[15]) /*then*/
                                            {
                                                /*^cond.then*/
                                                /*^block*/
                                                /*anyblock*/
                                                {


                                                    MELT_CHECK_SIGNAL();
                                                    ;

                                                    MELT_CHECK_SIGNAL();
                                                    ;
                                                    MELT_LOCATION("warmelt-macro.melt:5783:/ apply");
                                                    /*apply*/
                                                    {
                                                        union meltparam_un argtab[3];
                                                        memset(&argtab, 0, sizeof(argtab));
                                                        /*^apply.arg*/
                                                        argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                                                        /*^apply.arg*/
                                                        argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                                                        /*^apply.arg*/
                                                        argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                                                        /*_.MEXPANDER__V53*/
                                                        meltfptr[40] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.CURCONDTEST__V50*/ meltfptr[33]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                    }
                                                    ;
                                                    MELT_LOCATION("warmelt-macro.melt:5782:/ blockmultialloc");
                                                    /*multiallocblock*/
                                                    {
                                                        struct meltletrec_1_st
                                                        {
                                                            struct MELT_MULTIPLE_STRUCT(2) rtup_0__TUPLREC__x3;
                                                            long meltletrec_1_endgap;
                                                        } *meltletrec_1_ptr = 0;
                                                        meltletrec_1_ptr = (struct meltletrec_1_st *) meltgc_allocate (sizeof (struct meltletrec_1_st), 0);
                                                        /*^blockmultialloc.initfill*/
                                                        /*inimult rtup_0__TUPLREC__x3*/
                                                        /*_.TUPLREC___V55*/
                                                        meltfptr[54] = (melt_ptr_t) &meltletrec_1_ptr->rtup_0__TUPLREC__x3;
                                                        meltletrec_1_ptr->rtup_0__TUPLREC__x3.discr = (meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_MULTIPLE))));
                                                        meltletrec_1_ptr->rtup_0__TUPLREC__x3.nbval = 2;


                                                        /*^putuple*/
                                                        /*putupl#3*/
                                                        melt_assertmsg("putupl [:5782] #3 checktup", melt_magic_discr((melt_ptr_t)(/*_.TUPLREC___V55*/ meltfptr[54]))== MELTOBMAG_MULTIPLE);
                                                        melt_assertmsg("putupl [:5782] #3 checkoff", (0>=0 && 0< melt_multiple_length((melt_ptr_t)(/*_.TUPLREC___V55*/ meltfptr[54]))));
                                                        ((meltmultiple_ptr_t)(/*_.TUPLREC___V55*/ meltfptr[54]))->tabval[0] = (melt_ptr_t)(/*_.MEXPANDER__V53*/ meltfptr[40]);
                                                        ;
                                                        /*^putuple*/
                                                        /*putupl#4*/
                                                        melt_assertmsg("putupl [:5782] #4 checktup", melt_magic_discr((melt_ptr_t)(/*_.TUPLREC___V55*/ meltfptr[54]))== MELTOBMAG_MULTIPLE);
                                                        melt_assertmsg("putupl [:5782] #4 checkoff", (1>=0 && 1< melt_multiple_length((melt_ptr_t)(/*_.TUPLREC___V55*/ meltfptr[54]))));
                                                        ((meltmultiple_ptr_t)(/*_.TUPLREC___V55*/ meltfptr[54]))->tabval[1] = (melt_ptr_t)(/*_.RES__V27*/ meltfptr[23]);
                                                        ;
                                                        /*^touch*/
                                                        meltgc_touch(/*_.TUPLREC___V55*/ meltfptr[54]);
                                                        ;
                                                        /*_.TUPLE___V54*/
                                                        meltfptr[53] = /*_.TUPLREC___V55*/ meltfptr[54];;
                                                        /*epilog*/

                                                        MELT_LOCATION("warmelt-macro.melt:5782:/ clear");
                                                        /*clear*/ /*_.TUPLREC___V55*/
                                                        meltfptr[54] = 0 ;
                                                        /*^clear*/
                                                        /*clear*/ /*_.TUPLREC___V55*/
                                                        meltfptr[54] = 0 ;
                                                    } /*end multiallocblock*/
                                                    ;
                                                    MELT_LOCATION("warmelt-macro.melt:5779:/ quasiblock");


                                                    /*^rawallocobj*/
                                                    /*rawallocobj*/
                                                    {
                                                        melt_ptr_t newobj = 0;
                                                        melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_OR*/ meltfrout->tabval[10])), (3), "CLASS_SOURCE_OR");
                                                        /*_.INST__V57*/
                                                        meltfptr[56] =
                                                            newobj;
                                                    };
                                                    ;
                                                    /*^putslot*/
                                                    /*putslot*/
                                                    melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V57*/ meltfptr[56])) == MELTOBMAG_OBJECT);
                                                    melt_putfield_object((/*_.INST__V57*/ meltfptr[56]), (1), (/*_.CURCONDLOC__V48*/ meltfptr[42]), "LOCA_LOCATION");
                                                    ;
                                                    /*^putslot*/
                                                    /*putslot*/
                                                    melt_assertmsg("checkobj putslot  _ @SOR_DISJ", melt_magic_discr((melt_ptr_t)(/*_.INST__V57*/ meltfptr[56])) == MELTOBMAG_OBJECT);
                                                    melt_putfield_object((/*_.INST__V57*/ meltfptr[56]), (2), (/*_.TUPLE___V54*/ meltfptr[53]), "SOR_DISJ");
                                                    ;
                                                    /*^touchobj*/

                                                    melt_dbgtrace_written_object (/*_.INST__V57*/ meltfptr[56], "newly made instance");
                                                    ;
                                                    /*_.INST___V56*/
                                                    meltfptr[54] = /*_.INST__V57*/ meltfptr[56];;
                                                    MELT_LOCATION("warmelt-macro.melt:5778:/ compute");
                                                    /*_.RES__V27*/
                                                    meltfptr[23] = /*_.SETQ___V58*/ meltfptr[57] = /*_.INST___V56*/ meltfptr[54];;

#if MELT_HAVE_DEBUG
                                                    MELT_LOCATION("warmelt-macro.melt:5785:/ cppif.then");
                                                    /*^block*/
                                                    /*anyblock*/
                                                    {


                                                        {
                                                            /*^locexp*/
                                                            /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                                            melt_dbgcounter++;
#endif
                                                            ;
                                                        }
                                                        ;

                                                        MELT_CHECK_SIGNAL();
                                                        ;
                                                        /*_#MELT_NEED_DBG__L23*/
                                                        meltfnum[17] =
                                                            /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                                            (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                                            0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                                            ;;
                                                        MELT_LOCATION("warmelt-macro.melt:5785:/ cond");
                                                        /*cond*/
                                                        if (/*_#MELT_NEED_DBG__L23*/ meltfnum[17]) /*then*/
                                                            {
                                                                /*^cond.then*/
                                                                /*^block*/
                                                                /*anyblock*/
                                                                {

                                                                    /*_#MELT_CALLCOUNT__L24*/ meltfnum[23] =
                                                                        /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                                        meltcallcount  /* melt_callcount debugging */
#else
                                                                        0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                                        ;;

                                                                    MELT_CHECK_SIGNAL();
                                                                    ;
                                                                    MELT_LOCATION("warmelt-macro.melt:5785:/ apply");
                                                                    /*apply*/
                                                                    {
                                                                        union meltparam_un argtab[5];
                                                                        memset(&argtab, 0, sizeof(argtab));
                                                                        /*^apply.arg*/
                                                                        argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L24*/ meltfnum[23];
                                                                        /*^apply.arg*/
                                                                        argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                                        /*^apply.arg*/
                                                                        argtab[2].meltbp_long = 5785;
                                                                        /*^apply.arg*/
                                                                        argtab[3].meltbp_cstring =  "mexpand_cond res for monoexp cond";
                                                                        /*^apply.arg*/
                                                                        argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RES__V27*/ meltfptr[23];
                                                                        /*_.MELT_DEBUG_FUN__V60*/
                                                                        meltfptr[59] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                                    }
                                                                    ;
                                                                    /*_._IF___V59*/
                                                                    meltfptr[58] = /*_.MELT_DEBUG_FUN__V60*/ meltfptr[59];;
                                                                    /*epilog*/

                                                                    MELT_LOCATION("warmelt-macro.melt:5785:/ clear");
                                                                    /*clear*/ /*_#MELT_CALLCOUNT__L24*/
                                                                    meltfnum[23] = 0 ;
                                                                    /*^clear*/
                                                                    /*clear*/ /*_.MELT_DEBUG_FUN__V60*/
                                                                    meltfptr[59] = 0 ;
                                                                }
                                                                ;
                                                            }
                                                        else    /*^cond.else*/
                                                            {

                                                                /*_._IF___V59*/ meltfptr[58] =  /*reallynil*/ NULL ;;
                                                            }
                                                        ;

                                                        {
                                                            MELT_LOCATION("warmelt-macro.melt:5785:/ locexp");
                                                            /*void*/
                                                            (void)0;
                                                        }
                                                        ;
                                                        /*^quasiblock*/


                                                        /*epilog*/

                                                        /*^clear*/
                                                        /*clear*/ /*_#MELT_NEED_DBG__L23*/
                                                        meltfnum[17] = 0 ;
                                                        /*^clear*/
                                                        /*clear*/ /*_._IF___V59*/
                                                        meltfptr[58] = 0 ;
                                                    }

#else /*MELT_HAVE_DEBUG*/
                                                    /*^cppif.else*/
                                                    /*^block*/
                                                    /*anyblock*/
                                                    {


                                                        {
                                                            /*^locexp*/
                                                            /*void*/(void)0;
                                                        }
                                                        ;
                                                        /*epilog*/
                                                    }

#endif /*MELT_HAVE_DEBUG*/
                                                    ;
                                                    MELT_LOCATION("warmelt-macro.melt:5777:/ quasiblock");


                                                    /*epilog*/

                                                    /*^clear*/
                                                    /*clear*/ /*_.MEXPANDER__V53*/
                                                    meltfptr[40] = 0 ;
                                                    /*^clear*/
                                                    /*clear*/ /*_.TUPLE___V54*/
                                                    meltfptr[53] = 0 ;
                                                    /*^clear*/
                                                    /*clear*/ /*_.INST___V56*/
                                                    meltfptr[54] = 0 ;
                                                    /*^clear*/
                                                    /*clear*/ /*_.SETQ___V58*/
                                                    meltfptr[57] = 0 ;
                                                }
                                                ;
                                            }
                                        else    /*^cond.else*/
                                            {

                                                /*^block*/
                                                /*anyblock*/
                                                {


                                                    MELT_CHECK_SIGNAL();
                                                    ;
                                                    /*_.PAIR_TAIL__V61*/
                                                    meltfptr[59] =
                                                        (melt_pair_tail((melt_ptr_t)(/*_.CURCONDRESTPAIRS__V52*/ meltfptr[36])));;
                                                    /*^compute*/
                                                    /*_#NULL__L25*/
                                                    meltfnum[23] =
                                                        ((/*_.PAIR_TAIL__V61*/ meltfptr[59]) == NULL);;
                                                    MELT_LOCATION("warmelt-macro.melt:5787:/ cond");
                                                    /*cond*/
                                                    if (/*_#NULL__L25*/ meltfnum[23]) /*then*/
                                                        {
                                                            /*^cond.then*/
                                                            /*^block*/
                                                            /*anyblock*/
                                                            {


                                                                MELT_CHECK_SIGNAL();
                                                                ;

                                                                MELT_CHECK_SIGNAL();
                                                                ;
                                                                MELT_LOCATION("warmelt-macro.melt:5791:/ apply");
                                                                /*apply*/
                                                                {
                                                                    union meltparam_un argtab[3];
                                                                    memset(&argtab, 0, sizeof(argtab));
                                                                    /*^apply.arg*/
                                                                    argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                                                                    /*^apply.arg*/
                                                                    argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                                                                    /*^apply.arg*/
                                                                    argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                                                                    /*_.MEXPANDER__V62*/
                                                                    meltfptr[58] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.CURCONDTEST__V50*/ meltfptr[33]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                                }
                                                                ;
                                                                /*_.PAIR_HEAD__V63*/
                                                                meltfptr[40] =
                                                                    (melt_pair_head((melt_ptr_t)(/*_.CURCONDRESTPAIRS__V52*/ meltfptr[36])));;

                                                                MELT_CHECK_SIGNAL();
                                                                ;
                                                                MELT_LOCATION("warmelt-macro.melt:5792:/ apply");
                                                                /*apply*/
                                                                {
                                                                    union meltparam_un argtab[3];
                                                                    memset(&argtab, 0, sizeof(argtab));
                                                                    /*^apply.arg*/
                                                                    argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                                                                    /*^apply.arg*/
                                                                    argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                                                                    /*^apply.arg*/
                                                                    argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                                                                    /*_.MEXPANDER__V64*/
                                                                    meltfptr[53] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.PAIR_HEAD__V63*/ meltfptr[40]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                                }
                                                                ;
                                                                MELT_LOCATION("warmelt-macro.melt:5789:/ quasiblock");


                                                                /*^rawallocobj*/
                                                                /*rawallocobj*/
                                                                {
                                                                    melt_ptr_t newobj = 0;
                                                                    melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_IFELSE*/ meltfrout->tabval[11])), (5), "CLASS_SOURCE_IFELSE");
                                                                    /*_.INST__V66*/
                                                                    meltfptr[57] =
                                                                        newobj;
                                                                };
                                                                ;
                                                                /*^putslot*/
                                                                /*putslot*/
                                                                melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V66*/ meltfptr[57])) == MELTOBMAG_OBJECT);
                                                                melt_putfield_object((/*_.INST__V66*/ meltfptr[57]), (1), (/*_.CURCONDLOC__V48*/ meltfptr[42]), "LOCA_LOCATION");
                                                                ;
                                                                /*^putslot*/
                                                                /*putslot*/
                                                                melt_assertmsg("checkobj putslot  _ @SIF_TEST", melt_magic_discr((melt_ptr_t)(/*_.INST__V66*/ meltfptr[57])) == MELTOBMAG_OBJECT);
                                                                melt_putfield_object((/*_.INST__V66*/ meltfptr[57]), (2), (/*_.MEXPANDER__V62*/ meltfptr[58]), "SIF_TEST");
                                                                ;
                                                                /*^putslot*/
                                                                /*putslot*/
                                                                melt_assertmsg("checkobj putslot  _ @SIF_THEN", melt_magic_discr((melt_ptr_t)(/*_.INST__V66*/ meltfptr[57])) == MELTOBMAG_OBJECT);
                                                                melt_putfield_object((/*_.INST__V66*/ meltfptr[57]), (3), (/*_.MEXPANDER__V64*/ meltfptr[53]), "SIF_THEN");
                                                                ;
                                                                /*^putslot*/
                                                                /*putslot*/
                                                                melt_assertmsg("checkobj putslot  _ @SIF_ELSE", melt_magic_discr((melt_ptr_t)(/*_.INST__V66*/ meltfptr[57])) == MELTOBMAG_OBJECT);
                                                                melt_putfield_object((/*_.INST__V66*/ meltfptr[57]), (4), (/*_.RES__V27*/ meltfptr[23]), "SIF_ELSE");
                                                                ;
                                                                /*^touchobj*/

                                                                melt_dbgtrace_written_object (/*_.INST__V66*/ meltfptr[57], "newly made instance");
                                                                ;
                                                                /*_.INST___V65*/
                                                                meltfptr[54] = /*_.INST__V66*/ meltfptr[57];;
                                                                MELT_LOCATION("warmelt-macro.melt:5788:/ compute");
                                                                /*_.RES__V27*/
                                                                meltfptr[23] = /*_.SETQ___V67*/ meltfptr[66] = /*_.INST___V65*/ meltfptr[54];;

#if MELT_HAVE_DEBUG
                                                                MELT_LOCATION("warmelt-macro.melt:5795:/ cppif.then");
                                                                /*^block*/
                                                                /*anyblock*/
                                                                {


                                                                    {
                                                                        /*^locexp*/
                                                                        /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                                                        melt_dbgcounter++;
#endif
                                                                        ;
                                                                    }
                                                                    ;

                                                                    MELT_CHECK_SIGNAL();
                                                                    ;
                                                                    /*_#MELT_NEED_DBG__L26*/
                                                                    meltfnum[17] =
                                                                        /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                                                        (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                                                        0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                                                        ;;
                                                                    MELT_LOCATION("warmelt-macro.melt:5795:/ cond");
                                                                    /*cond*/
                                                                    if (/*_#MELT_NEED_DBG__L26*/ meltfnum[17]) /*then*/
                                                                        {
                                                                            /*^cond.then*/
                                                                            /*^block*/
                                                                            /*anyblock*/
                                                                            {

                                                                                /*_#MELT_CALLCOUNT__L27*/ meltfnum[26] =
                                                                                    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                                                    meltcallcount  /* melt_callcount debugging */
#else
                                                                                    0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                                                    ;;

                                                                                MELT_CHECK_SIGNAL();
                                                                                ;
                                                                                MELT_LOCATION("warmelt-macro.melt:5795:/ apply");
                                                                                /*apply*/
                                                                                {
                                                                                    union meltparam_un argtab[5];
                                                                                    memset(&argtab, 0, sizeof(argtab));
                                                                                    /*^apply.arg*/
                                                                                    argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L27*/ meltfnum[26];
                                                                                    /*^apply.arg*/
                                                                                    argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                                                    /*^apply.arg*/
                                                                                    argtab[2].meltbp_long = 5795;
                                                                                    /*^apply.arg*/
                                                                                    argtab[3].meltbp_cstring =  "mexpand_cond res for biexp cond";
                                                                                    /*^apply.arg*/
                                                                                    argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RES__V27*/ meltfptr[23];
                                                                                    /*_.MELT_DEBUG_FUN__V69*/
                                                                                    meltfptr[68] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                                                }
                                                                                ;
                                                                                /*_._IF___V68*/
                                                                                meltfptr[67] = /*_.MELT_DEBUG_FUN__V69*/ meltfptr[68];;
                                                                                /*epilog*/

                                                                                MELT_LOCATION("warmelt-macro.melt:5795:/ clear");
                                                                                /*clear*/ /*_#MELT_CALLCOUNT__L27*/
                                                                                meltfnum[26] = 0 ;
                                                                                /*^clear*/
                                                                                /*clear*/ /*_.MELT_DEBUG_FUN__V69*/
                                                                                meltfptr[68] = 0 ;
                                                                            }
                                                                            ;
                                                                        }
                                                                    else    /*^cond.else*/
                                                                        {

                                                                            /*_._IF___V68*/ meltfptr[67] =  /*reallynil*/ NULL ;;
                                                                        }
                                                                    ;

                                                                    {
                                                                        MELT_LOCATION("warmelt-macro.melt:5795:/ locexp");
                                                                        /*void*/
                                                                        (void)0;
                                                                    }
                                                                    ;
                                                                    /*^quasiblock*/


                                                                    /*epilog*/

                                                                    /*^clear*/
                                                                    /*clear*/ /*_#MELT_NEED_DBG__L26*/
                                                                    meltfnum[17] = 0 ;
                                                                    /*^clear*/
                                                                    /*clear*/ /*_._IF___V68*/
                                                                    meltfptr[67] = 0 ;
                                                                }

#else /*MELT_HAVE_DEBUG*/
                                                                /*^cppif.else*/
                                                                /*^block*/
                                                                /*anyblock*/
                                                                {


                                                                    {
                                                                        /*^locexp*/
                                                                        /*void*/(void)0;
                                                                    }
                                                                    ;
                                                                    /*epilog*/
                                                                }

#endif /*MELT_HAVE_DEBUG*/
                                                                ;
                                                                MELT_LOCATION("warmelt-macro.melt:5787:/ quasiblock");


                                                                /*epilog*/

                                                                /*^clear*/
                                                                /*clear*/ /*_.MEXPANDER__V62*/
                                                                meltfptr[58] = 0 ;
                                                                /*^clear*/
                                                                /*clear*/ /*_.PAIR_HEAD__V63*/
                                                                meltfptr[40] = 0 ;
                                                                /*^clear*/
                                                                /*clear*/ /*_.MEXPANDER__V64*/
                                                                meltfptr[53] = 0 ;
                                                                /*^clear*/
                                                                /*clear*/ /*_.INST___V65*/
                                                                meltfptr[54] = 0 ;
                                                                /*^clear*/
                                                                /*clear*/ /*_.SETQ___V67*/
                                                                meltfptr[66] = 0 ;
                                                            }
                                                            ;
                                                        }
                                                    else    /*^cond.else*/
                                                        {

                                                            /*^block*/
                                                            /*anyblock*/
                                                            {


                                                                MELT_CHECK_SIGNAL();
                                                                ;

                                                                MELT_CHECK_SIGNAL();
                                                                ;
                                                                MELT_LOCATION("warmelt-macro.melt:5801:/ apply");
                                                                /*apply*/
                                                                {
                                                                    union meltparam_un argtab[3];
                                                                    memset(&argtab, 0, sizeof(argtab));
                                                                    /*^apply.arg*/
                                                                    argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                                                                    /*^apply.arg*/
                                                                    argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                                                                    /*^apply.arg*/
                                                                    argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                                                                    /*_.MEXPANDER__V70*/
                                                                    meltfptr[68] =  melt_apply ((meltclosure_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.CURCONDTEST__V50*/ meltfptr[33]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                                }
                                                                ;

                                                                MELT_CHECK_SIGNAL();
                                                                ;
                                                                MELT_LOCATION("warmelt-macro.melt:5802:/ apply");
                                                                /*apply*/
                                                                {
                                                                    union meltparam_un argtab[4];
                                                                    memset(&argtab, 0, sizeof(argtab));
                                                                    /*^apply.arg*/
                                                                    argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.CURCONDLOC__V48*/ meltfptr[42];
                                                                    /*^apply.arg*/
                                                                    argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                                                                    /*^apply.arg*/
                                                                    argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.MEXPANDER__V4*/ meltfptr[3];
                                                                    /*^apply.arg*/
                                                                    argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                                                                    /*_.PAIRLIST_TO_PROGN__V71*/
                                                                    meltfptr[67] =  melt_apply ((meltclosure_ptr_t)((/*!PAIRLIST_TO_PROGN*/ meltfrout->tabval[9])), (melt_ptr_t)(/*_.CURCONDRESTPAIRS__V52*/ meltfptr[36]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                                }
                                                                ;
                                                                MELT_LOCATION("warmelt-macro.melt:5799:/ quasiblock");


                                                                /*^rawallocobj*/
                                                                /*rawallocobj*/
                                                                {
                                                                    melt_ptr_t newobj = 0;
                                                                    melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_IFELSE*/ meltfrout->tabval[11])), (5), "CLASS_SOURCE_IFELSE");
                                                                    /*_.INST__V73*/
                                                                    meltfptr[40] =
                                                                        newobj;
                                                                };
                                                                ;
                                                                /*^putslot*/
                                                                /*putslot*/
                                                                melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V73*/ meltfptr[40])) == MELTOBMAG_OBJECT);
                                                                melt_putfield_object((/*_.INST__V73*/ meltfptr[40]), (1), (/*_.CURCONDLOC__V48*/ meltfptr[42]), "LOCA_LOCATION");
                                                                ;
                                                                /*^putslot*/
                                                                /*putslot*/
                                                                melt_assertmsg("checkobj putslot  _ @SIF_TEST", melt_magic_discr((melt_ptr_t)(/*_.INST__V73*/ meltfptr[40])) == MELTOBMAG_OBJECT);
                                                                melt_putfield_object((/*_.INST__V73*/ meltfptr[40]), (2), (/*_.MEXPANDER__V70*/ meltfptr[68]), "SIF_TEST");
                                                                ;
                                                                /*^putslot*/
                                                                /*putslot*/
                                                                melt_assertmsg("checkobj putslot  _ @SIF_THEN", melt_magic_discr((melt_ptr_t)(/*_.INST__V73*/ meltfptr[40])) == MELTOBMAG_OBJECT);
                                                                melt_putfield_object((/*_.INST__V73*/ meltfptr[40]), (3), (/*_.PAIRLIST_TO_PROGN__V71*/ meltfptr[67]), "SIF_THEN");
                                                                ;
                                                                /*^putslot*/
                                                                /*putslot*/
                                                                melt_assertmsg("checkobj putslot  _ @SIF_ELSE", melt_magic_discr((melt_ptr_t)(/*_.INST__V73*/ meltfptr[40])) == MELTOBMAG_OBJECT);
                                                                melt_putfield_object((/*_.INST__V73*/ meltfptr[40]), (4), (/*_.RES__V27*/ meltfptr[23]), "SIF_ELSE");
                                                                ;
                                                                /*^touchobj*/

                                                                melt_dbgtrace_written_object (/*_.INST__V73*/ meltfptr[40], "newly made instance");
                                                                ;
                                                                /*_.INST___V72*/
                                                                meltfptr[58] = /*_.INST__V73*/ meltfptr[40];;
                                                                MELT_LOCATION("warmelt-macro.melt:5798:/ compute");
                                                                /*_.RES__V27*/
                                                                meltfptr[23] = /*_.SETQ___V74*/ meltfptr[53] = /*_.INST___V72*/ meltfptr[58];;

#if MELT_HAVE_DEBUG
                                                                MELT_LOCATION("warmelt-macro.melt:5804:/ cppif.then");
                                                                /*^block*/
                                                                /*anyblock*/
                                                                {


                                                                    {
                                                                        /*^locexp*/
                                                                        /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                                                        melt_dbgcounter++;
#endif
                                                                        ;
                                                                    }
                                                                    ;

                                                                    MELT_CHECK_SIGNAL();
                                                                    ;
                                                                    /*_#MELT_NEED_DBG__L28*/
                                                                    meltfnum[26] =
                                                                        /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                                                        (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                                                        0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                                                        ;;
                                                                    MELT_LOCATION("warmelt-macro.melt:5804:/ cond");
                                                                    /*cond*/
                                                                    if (/*_#MELT_NEED_DBG__L28*/ meltfnum[26]) /*then*/
                                                                        {
                                                                            /*^cond.then*/
                                                                            /*^block*/
                                                                            /*anyblock*/
                                                                            {

                                                                                /*_#MELT_CALLCOUNT__L29*/ meltfnum[17] =
                                                                                    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                                                    meltcallcount  /* melt_callcount debugging */
#else
                                                                                    0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                                                    ;;

                                                                                MELT_CHECK_SIGNAL();
                                                                                ;
                                                                                MELT_LOCATION("warmelt-macro.melt:5804:/ apply");
                                                                                /*apply*/
                                                                                {
                                                                                    union meltparam_un argtab[5];
                                                                                    memset(&argtab, 0, sizeof(argtab));
                                                                                    /*^apply.arg*/
                                                                                    argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L29*/ meltfnum[17];
                                                                                    /*^apply.arg*/
                                                                                    argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                                                    /*^apply.arg*/
                                                                                    argtab[2].meltbp_long = 5804;
                                                                                    /*^apply.arg*/
                                                                                    argtab[3].meltbp_cstring =  "mexpand_cond res for manyexp cond";
                                                                                    /*^apply.arg*/
                                                                                    argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RES__V27*/ meltfptr[23];
                                                                                    /*_.MELT_DEBUG_FUN__V76*/
                                                                                    meltfptr[66] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                                                }
                                                                                ;
                                                                                /*_._IF___V75*/
                                                                                meltfptr[54] = /*_.MELT_DEBUG_FUN__V76*/ meltfptr[66];;
                                                                                /*epilog*/

                                                                                MELT_LOCATION("warmelt-macro.melt:5804:/ clear");
                                                                                /*clear*/ /*_#MELT_CALLCOUNT__L29*/
                                                                                meltfnum[17] = 0 ;
                                                                                /*^clear*/
                                                                                /*clear*/ /*_.MELT_DEBUG_FUN__V76*/
                                                                                meltfptr[66] = 0 ;
                                                                            }
                                                                            ;
                                                                        }
                                                                    else    /*^cond.else*/
                                                                        {

                                                                            /*_._IF___V75*/ meltfptr[54] =  /*reallynil*/ NULL ;;
                                                                        }
                                                                    ;

                                                                    {
                                                                        MELT_LOCATION("warmelt-macro.melt:5804:/ locexp");
                                                                        /*void*/
                                                                        (void)0;
                                                                    }
                                                                    ;
                                                                    /*^quasiblock*/


                                                                    /*epilog*/

                                                                    /*^clear*/
                                                                    /*clear*/ /*_#MELT_NEED_DBG__L28*/
                                                                    meltfnum[26] = 0 ;
                                                                    /*^clear*/
                                                                    /*clear*/ /*_._IF___V75*/
                                                                    meltfptr[54] = 0 ;
                                                                }

#else /*MELT_HAVE_DEBUG*/
                                                                /*^cppif.else*/
                                                                /*^block*/
                                                                /*anyblock*/
                                                                {


                                                                    {
                                                                        /*^locexp*/
                                                                        /*void*/(void)0;
                                                                    }
                                                                    ;
                                                                    /*epilog*/
                                                                }

#endif /*MELT_HAVE_DEBUG*/
                                                                ;
                                                                MELT_LOCATION("warmelt-macro.melt:5797:/ quasiblock");


                                                                /*epilog*/

                                                                MELT_LOCATION("warmelt-macro.melt:5787:/ clear");
                                                                /*clear*/ /*_.MEXPANDER__V70*/
                                                                meltfptr[68] = 0 ;
                                                                /*^clear*/
                                                                /*clear*/ /*_.PAIRLIST_TO_PROGN__V71*/
                                                                meltfptr[67] = 0 ;
                                                                /*^clear*/
                                                                /*clear*/ /*_.INST___V72*/
                                                                meltfptr[58] = 0 ;
                                                                /*^clear*/
                                                                /*clear*/ /*_.SETQ___V74*/
                                                                meltfptr[53] = 0 ;
                                                            }
                                                            ;
                                                        }
                                                    ;
                                                    /*epilog*/

                                                    MELT_LOCATION("warmelt-macro.melt:5777:/ clear");
                                                    /*clear*/ /*_.PAIR_TAIL__V61*/
                                                    meltfptr[59] = 0 ;
                                                    /*^clear*/
                                                    /*clear*/ /*_#NULL__L25*/
                                                    meltfnum[23] = 0 ;
                                                }
                                                ;
                                            }
                                        ;

                                        MELT_LOCATION("warmelt-macro.melt:5772:/ clear");
                                        /*clear*/ /*_.CURCONDCONT__V47*/
                                        meltfptr[43] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_.CURCONDLOC__V48*/
                                        meltfptr[42] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_.LIST_FIRST__V49*/
                                        meltfptr[41] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_.CURCONDTEST__V50*/
                                        meltfptr[33] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_.LIST_FIRST__V51*/
                                        meltfptr[32] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_.CURCONDRESTPAIRS__V52*/
                                        meltfptr[36] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_#NULL__L22*/
                                        meltfnum[15] = 0 ;
                                        /*epilog*/
                                    }
                                    ;
                                }
                            else
                                {
                                    MELT_LOCATION("warmelt-macro.melt:5771:/ cond.else");

                                    /*^block*/
                                    /*anyblock*/
                                    {


                                        MELT_CHECK_SIGNAL();
                                        ;
                                        MELT_LOCATION("warmelt-macro.melt:5810:/ blockmultialloc");
                                        /*multiallocblock*/
                                        {
                                            struct meltletrec_2_st
                                            {
                                                struct MELT_MULTIPLE_STRUCT(2) rtup_0__TUPLREC__x4;
                                                long meltletrec_2_endgap;
                                            } *meltletrec_2_ptr = 0;
                                            meltletrec_2_ptr = (struct meltletrec_2_st *) meltgc_allocate (sizeof (struct meltletrec_2_st), 0);
                                            /*^blockmultialloc.initfill*/
                                            /*inimult rtup_0__TUPLREC__x4*/
                                            /*_.TUPLREC___V78*/
                                            meltfptr[54] = (melt_ptr_t) &meltletrec_2_ptr->rtup_0__TUPLREC__x4;
                                            meltletrec_2_ptr->rtup_0__TUPLREC__x4.discr = (meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_MULTIPLE))));
                                            meltletrec_2_ptr->rtup_0__TUPLREC__x4.nbval = 2;


                                            /*^putuple*/
                                            /*putupl#5*/
                                            melt_assertmsg("putupl [:5810] #5 checktup", melt_magic_discr((melt_ptr_t)(/*_.TUPLREC___V78*/ meltfptr[54]))== MELTOBMAG_MULTIPLE);
                                            melt_assertmsg("putupl [:5810] #5 checkoff", (0>=0 && 0< melt_multiple_length((melt_ptr_t)(/*_.TUPLREC___V78*/ meltfptr[54]))));
                                            ((meltmultiple_ptr_t)(/*_.TUPLREC___V78*/ meltfptr[54]))->tabval[0] = (melt_ptr_t)(/*_.CURCOND__V32*/ meltfptr[31]);
                                            ;
                                            /*^putuple*/
                                            /*putupl#6*/
                                            melt_assertmsg("putupl [:5810] #6 checktup", melt_magic_discr((melt_ptr_t)(/*_.TUPLREC___V78*/ meltfptr[54]))== MELTOBMAG_MULTIPLE);
                                            melt_assertmsg("putupl [:5810] #6 checkoff", (1>=0 && 1< melt_multiple_length((melt_ptr_t)(/*_.TUPLREC___V78*/ meltfptr[54]))));
                                            ((meltmultiple_ptr_t)(/*_.TUPLREC___V78*/ meltfptr[54]))->tabval[1] = (melt_ptr_t)(/*_.RES__V27*/ meltfptr[23]);
                                            ;
                                            /*^touch*/
                                            meltgc_touch(/*_.TUPLREC___V78*/ meltfptr[54]);
                                            ;
                                            /*_.TUPLE___V77*/
                                            meltfptr[66] = /*_.TUPLREC___V78*/ meltfptr[54];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-macro.melt:5810:/ clear");
                                            /*clear*/ /*_.TUPLREC___V78*/
                                            meltfptr[54] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.TUPLREC___V78*/
                                            meltfptr[54] = 0 ;
                                        } /*end multiallocblock*/
                                        ;
                                        MELT_LOCATION("warmelt-macro.melt:5808:/ quasiblock");


                                        /*^rawallocobj*/
                                        /*rawallocobj*/
                                        {
                                            melt_ptr_t newobj = 0;
                                            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_OR*/ meltfrout->tabval[10])), (3), "CLASS_SOURCE_OR");
                                            /*_.INST__V80*/
                                            meltfptr[67] =
                                                newobj;
                                        };
                                        ;
                                        /*^putslot*/
                                        /*putslot*/
                                        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V80*/ meltfptr[67])) == MELTOBMAG_OBJECT);
                                        melt_putfield_object((/*_.INST__V80*/ meltfptr[67]), (1), (/*_.LOC__V16*/ meltfptr[15]), "LOCA_LOCATION");
                                        ;
                                        /*^putslot*/
                                        /*putslot*/
                                        melt_assertmsg("checkobj putslot  _ @SOR_DISJ", melt_magic_discr((melt_ptr_t)(/*_.INST__V80*/ meltfptr[67])) == MELTOBMAG_OBJECT);
                                        melt_putfield_object((/*_.INST__V80*/ meltfptr[67]), (2), (/*_.TUPLE___V77*/ meltfptr[66]), "SOR_DISJ");
                                        ;
                                        /*^touchobj*/

                                        melt_dbgtrace_written_object (/*_.INST__V80*/ meltfptr[67], "newly made instance");
                                        ;
                                        /*_.INST___V79*/
                                        meltfptr[68] = /*_.INST__V80*/ meltfptr[67];;
                                        MELT_LOCATION("warmelt-macro.melt:5808:/ compute");
                                        /*_.RES__V27*/
                                        meltfptr[23] = /*_.SETQ___V81*/ meltfptr[58] = /*_.INST___V79*/ meltfptr[68];;

#if MELT_HAVE_DEBUG
                                        MELT_LOCATION("warmelt-macro.melt:5811:/ cppif.then");
                                        /*^block*/
                                        /*anyblock*/
                                        {


                                            {
                                                /*^locexp*/
                                                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                                melt_dbgcounter++;
#endif
                                                ;
                                            }
                                            ;

                                            MELT_CHECK_SIGNAL();
                                            ;
                                            /*_#MELT_NEED_DBG__L30*/
                                            meltfnum[17] =
                                                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                                ;;
                                            MELT_LOCATION("warmelt-macro.melt:5811:/ cond");
                                            /*cond*/
                                            if (/*_#MELT_NEED_DBG__L30*/ meltfnum[17]) /*then*/
                                                {
                                                    /*^cond.then*/
                                                    /*^block*/
                                                    /*anyblock*/
                                                    {

                                                        /*_#MELT_CALLCOUNT__L31*/ meltfnum[26] =
                                                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                            meltcallcount  /* melt_callcount debugging */
#else
                                                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                            ;;

                                                        MELT_CHECK_SIGNAL();
                                                        ;
                                                        MELT_LOCATION("warmelt-macro.melt:5811:/ apply");
                                                        /*apply*/
                                                        {
                                                            union meltparam_un argtab[5];
                                                            memset(&argtab, 0, sizeof(argtab));
                                                            /*^apply.arg*/
                                                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L31*/ meltfnum[26];
                                                            /*^apply.arg*/
                                                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                                            /*^apply.arg*/
                                                            argtab[2].meltbp_long = 5811;
                                                            /*^apply.arg*/
                                                            argtab[3].meltbp_cstring =  "mexpand_cond res for nonsexp cond";
                                                            /*^apply.arg*/
                                                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RES__V27*/ meltfptr[23];
                                                            /*_.MELT_DEBUG_FUN__V83*/
                                                            meltfptr[59] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                        }
                                                        ;
                                                        /*_._IF___V82*/
                                                        meltfptr[53] = /*_.MELT_DEBUG_FUN__V83*/ meltfptr[59];;
                                                        /*epilog*/

                                                        MELT_LOCATION("warmelt-macro.melt:5811:/ clear");
                                                        /*clear*/ /*_#MELT_CALLCOUNT__L31*/
                                                        meltfnum[26] = 0 ;
                                                        /*^clear*/
                                                        /*clear*/ /*_.MELT_DEBUG_FUN__V83*/
                                                        meltfptr[59] = 0 ;
                                                    }
                                                    ;
                                                }
                                            else    /*^cond.else*/
                                                {

                                                    /*_._IF___V82*/ meltfptr[53] =  /*reallynil*/ NULL ;;
                                                }
                                            ;

                                            {
                                                MELT_LOCATION("warmelt-macro.melt:5811:/ locexp");
                                                /*void*/
                                                (void)0;
                                            }
                                            ;
                                            /*^quasiblock*/


                                            /*epilog*/

                                            /*^clear*/
                                            /*clear*/ /*_#MELT_NEED_DBG__L30*/
                                            meltfnum[17] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_._IF___V82*/
                                            meltfptr[53] = 0 ;
                                        }

#else /*MELT_HAVE_DEBUG*/
                                        /*^cppif.else*/
                                        /*^block*/
                                        /*anyblock*/
                                        {


                                            {
                                                /*^locexp*/
                                                /*void*/(void)0;
                                            }
                                            ;
                                            /*epilog*/
                                        }

#endif /*MELT_HAVE_DEBUG*/
                                        ;
                                        MELT_LOCATION("warmelt-macro.melt:5807:/ quasiblock");


                                        /*epilog*/

                                        MELT_LOCATION("warmelt-macro.melt:5771:/ clear");
                                        /*clear*/ /*_.TUPLE___V77*/
                                        meltfptr[66] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_.INST___V79*/
                                        meltfptr[68] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_.SETQ___V81*/
                                        meltfptr[58] = 0 ;
                                    }
                                    ;
                                }
                            ;
                            /*epilog*/

                            MELT_LOCATION("warmelt-macro.melt:5757:/ clear");
                            /*clear*/ /*_#IS_A__L21*/
                            meltfnum[16] = 0 ;
                        }
                        ;
                    }
                ;

                MELT_LOCATION("warmelt-macro.melt:5754:/ clear");
                /*clear*/ /*_.CURCOND__V32*/
                meltfptr[31] = 0 ;
                /*^clear*/
                /*clear*/ /*_#NULL__L14*/
                meltfnum[12] = 0 ;
                /*^clear*/
                /*clear*/ /*_#_IF___L15*/
                meltfnum[0] = 0 ;
                /*_#miI__L32*/
                meltfnum[23] =
                    ((/*_#IX__L8*/ meltfnum[6]) - (1));;
                MELT_LOCATION("warmelt-macro.melt:5815:/ compute");
                /*_#IX__L8*/
                meltfnum[6] = /*_#SETQ___L33*/ meltfnum[15] = /*_#miI__L32*/ meltfnum[23];;

                MELT_CHECK_SIGNAL();
                ;
                /*epilog*/

                MELT_LOCATION("warmelt-macro.melt:5752:/ clear");
                /*clear*/ /*_#ltI__L11*/
                meltfnum[9] = 0 ;
                /*^clear*/
                /*clear*/ /*_#miI__L32*/
                meltfnum[23] = 0 ;
                /*^clear*/
                /*clear*/ /*_#SETQ___L33*/
                meltfnum[15] = 0 ;
            }
            ;
            ;
            goto meltlabloop_CONDLOOP_1;
meltlabexit_CONDLOOP_1:;/*^loopepilog*/
            /*loopepilog*/
            /*_.FOREVER___V30*/
            meltfptr[28] = /*_.CONDLOOP__V31*/ meltfptr[22];;
        }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5817:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L34*/
            meltfnum[26] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5817:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L34*/ meltfnum[26]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L35*/ meltfnum[17] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5817:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L35*/ meltfnum[17];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5817;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_cond final res";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RES__V27*/ meltfptr[23];
                            /*_.MELT_DEBUG_FUN__V85*/
                            meltfptr[42] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V84*/
                        meltfptr[43] = /*_.MELT_DEBUG_FUN__V85*/ meltfptr[42];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5817:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L35*/
                        meltfnum[17] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V85*/
                        meltfptr[42] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V84*/ meltfptr[43] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5817:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L34*/
            meltfnum[26] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V84*/
            meltfptr[43] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5818:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.RES__V27*/ meltfptr[23];;

        {
            MELT_LOCATION("warmelt-macro.melt:5818:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V14*/
        meltfptr[6] = /*_.RETURN___V86*/ meltfptr[41];;

        MELT_LOCATION("warmelt-macro.melt:5733:/ clear");
        /*clear*/ /*_.CONT__V15*/
        meltfptr[10] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V16*/
        meltfptr[15] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V17*/
        meltfptr[16] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V18*/
        meltfptr[17] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LAMBDA___V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CEXPTUPLE__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NBCOND__L5*/
        meltfnum[3] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LASTCEXP__V26*/
        meltfptr[24] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IX__L8*/
        meltfnum[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RES__V27*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.FOREVER___V30*/
        meltfptr[28] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V86*/
        meltfptr[41] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5729:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V14*/ meltfptr[6];;

        {
            MELT_LOCATION("warmelt-macro.melt:5729:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V6*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V9*/
        meltfptr[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V14*/
        meltfptr[6] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_COND", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_98_WARMELTmiMACRO_MEXPAND_COND_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_98_WARMELTmiMACRO_MEXPAND_COND*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_99_WARMELTmiMACRO_LAMBDA_cl18(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                       const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_99_WARMELTmiMACRO_LAMBDA_cl18_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_99_WARMELTmiMACRO_LAMBDA_cl18 fromline 1718 */

    /** start of frame for meltrout_99_WARMELTmiMACRO_LAMBDA_cl18 of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_99_WARMELTmiMACRO_LAMBDA_cl18// fromline 1534
        : public Melt_CallFrameWithValues<2>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[1];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_99_WARMELTmiMACRO_LAMBDA_cl18(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<2> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_99_WARMELTmiMACRO_LAMBDA_cl18), clos) {};
        MeltFrame_meltrout_99_WARMELTmiMACRO_LAMBDA_cl18() //the constructor fromline 1608
            : Melt_CallFrameWithValues<2> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_99_WARMELTmiMACRO_LAMBDA_cl18)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_99_WARMELTmiMACRO_LAMBDA_cl18(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<2> (fil,lin, sizeof(MeltFrame_meltrout_99_WARMELTmiMACRO_LAMBDA_cl18)) {};
        MeltFrame_meltrout_99_WARMELTmiMACRO_LAMBDA_cl18(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<2> (fil,lin, sizeof(MeltFrame_meltrout_99_WARMELTmiMACRO_LAMBDA_cl18), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_99_WARMELTmiMACRO_LAMBDA_cl18


    /** end of frame for meltrout_99_WARMELTmiMACRO_LAMBDA_cl18 fromline 1663**/

    /* end of frame for routine meltrout_99_WARMELTmiMACRO_LAMBDA_cl18 fromline 1722 */

    /* classy proc frame meltrout_99_WARMELTmiMACRO_LAMBDA_cl18 */
    MeltFrame_meltrout_99_WARMELTmiMACRO_LAMBDA_cl18
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_99_WARMELTmiMACRO_LAMBDA_cl18 fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("LAMBDA_cl18", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5739:/ getarg");
    /*_.C__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_NOT_A__L1*/
        meltfnum[0] =
            !melt_is_instance_of((melt_ptr_t)(/*_.C__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
        MELT_LOCATION("warmelt-macro.melt:5740:/ cond");
        /*cond*/
        if (/*_#IS_NOT_A__L1*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5741:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)((/*~LOC*/ meltfclos->tabval[0])), ( "COND with non-sexpr"), (melt_ptr_t)0);
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5739:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.C__V2*/ meltfptr[1];;

        {
            MELT_LOCATION("warmelt-macro.melt:5739:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_#IS_NOT_A__L1*/
        meltfnum[0] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("LAMBDA_cl18", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_99_WARMELTmiMACRO_LAMBDA_cl18_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_99_WARMELTmiMACRO_LAMBDA_cl18*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_100_WARMELTmiMACRO_MEXPAND_AND(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_100_WARMELTmiMACRO_MEXPAND_AND_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_100_WARMELTmiMACRO_MEXPAND_AND fromline 1718 */

    /** start of frame for meltrout_100_WARMELTmiMACRO_MEXPAND_AND of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_100_WARMELTmiMACRO_MEXPAND_AND// fromline 1534
        : public Melt_CallFrameWithValues<43>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[17];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_100_WARMELTmiMACRO_MEXPAND_AND(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<43> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_100_WARMELTmiMACRO_MEXPAND_AND), clos) {};
        MeltFrame_meltrout_100_WARMELTmiMACRO_MEXPAND_AND() //the constructor fromline 1608
            : Melt_CallFrameWithValues<43> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_100_WARMELTmiMACRO_MEXPAND_AND)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_100_WARMELTmiMACRO_MEXPAND_AND(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<43> (fil,lin, sizeof(MeltFrame_meltrout_100_WARMELTmiMACRO_MEXPAND_AND)) {};
        MeltFrame_meltrout_100_WARMELTmiMACRO_MEXPAND_AND(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<43> (fil,lin, sizeof(MeltFrame_meltrout_100_WARMELTmiMACRO_MEXPAND_AND), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_100_WARMELTmiMACRO_MEXPAND_AND


    /** end of frame for meltrout_100_WARMELTmiMACRO_MEXPAND_AND fromline 1663**/

    /* end of frame for routine meltrout_100_WARMELTmiMACRO_MEXPAND_AND fromline 1722 */

    /* classy proc frame meltrout_100_WARMELTmiMACRO_MEXPAND_AND */
    MeltFrame_meltrout_100_WARMELTmiMACRO_MEXPAND_AND
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_100_WARMELTmiMACRO_MEXPAND_AND fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_AND", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5834:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5835:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5835:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5835:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5835;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_and sexpr:";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5835:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5835:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5836:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:5836:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5836:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5836;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5836:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5836:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5837:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:5837:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5837:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5837;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5837:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5837:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#NULL__L5*/
        meltfnum[1] =
            ((/*_.MEXPANDER__V4*/ meltfptr[3]) == NULL);;
        MELT_LOCATION("warmelt-macro.melt:5838:/ cond");
        /*cond*/
        if (/*_#NULL__L5*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*^compute*/
                    /*_.MEXPANDER__V4*/ meltfptr[3] = /*_.SETQ___V15*/ meltfptr[5] = (/*!MACROEXPAND_1*/ meltfrout->tabval[4]);;
                    /*_._IF___V14*/
                    meltfptr[12] = /*_.SETQ___V15*/ meltfptr[5];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5838:/ clear");
                    /*clear*/ /*_.SETQ___V15*/
                    meltfptr[5] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V14*/ meltfptr[12] =  /*reallynil*/ NULL ;;
            }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5839:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L6*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:5839:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V17*/ meltfptr[16] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5839:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5839;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V18*/
                            meltfptr[17] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V17*/
                        meltfptr[16] = /*_.MELT_ASSERT_FAILURE_FUN__V18*/ meltfptr[17];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5839:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V18*/
                        meltfptr[17] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V16*/
            meltfptr[5] = /*_._IFELSE___V17*/ meltfptr[16];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5839:/ clear");
            /*clear*/ /*_#IS_OBJECT__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V17*/
            meltfptr[16] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V16*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5840:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:5841:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V20*/
            meltfptr[16] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5842:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V21*/
            meltfptr[20] = slot;
        };
        ;
        /*_.LIST_FIRST__V22*/
        meltfptr[21] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V20*/ meltfptr[16])));;
        /*^compute*/
        /*_.CURPAIR__V23*/
        meltfptr[22] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V22*/ meltfptr[21])));;
        MELT_LOCATION("warmelt-macro.melt:5847:/ quasiblock");


        /*^newclosure*/
        /*newclosure*/ /*_.LAMBDA___V25*/
        meltfptr[24] =
            (melt_ptr_t) meltgc_new_closure((meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_CLOSURE)))), (meltroutine_ptr_t)((/*!konst_7*/ meltfrout->tabval[7])), (3));
        ;
        /*^putclosedv*/
        /*putclosv*/
        melt_assertmsg("putclosv checkclo", melt_magic_discr((melt_ptr_t)(/*_.LAMBDA___V25*/ meltfptr[24])) == MELTOBMAG_CLOSURE);
        melt_assertmsg("putclosv checkoff", 0>= 0 && 0< melt_closure_size((melt_ptr_t) (/*_.LAMBDA___V25*/ meltfptr[24])));
        ((meltclosure_ptr_t)/*_.LAMBDA___V25*/ meltfptr[24])->tabval[0] = (melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]);
        ;
        /*^putclosedv*/
        /*putclosv*/
        melt_assertmsg("putclosv checkclo", melt_magic_discr((melt_ptr_t)(/*_.LAMBDA___V25*/ meltfptr[24])) == MELTOBMAG_CLOSURE);
        melt_assertmsg("putclosv checkoff", 1>= 0 && 1< melt_closure_size((melt_ptr_t) (/*_.LAMBDA___V25*/ meltfptr[24])));
        ((meltclosure_ptr_t)/*_.LAMBDA___V25*/ meltfptr[24])->tabval[1] = (melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]);
        ;
        /*^putclosedv*/
        /*putclosv*/
        melt_assertmsg("putclosv checkclo", melt_magic_discr((melt_ptr_t)(/*_.LAMBDA___V25*/ meltfptr[24])) == MELTOBMAG_CLOSURE);
        melt_assertmsg("putclosv checkoff", 2>= 0 && 2< melt_closure_size((melt_ptr_t) (/*_.LAMBDA___V25*/ meltfptr[24])));
        ((meltclosure_ptr_t)/*_.LAMBDA___V25*/ meltfptr[24])->tabval[2] = (melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4]);
        ;
        /*_.LAMBDA___V24*/
        meltfptr[23] = /*_.LAMBDA___V25*/ meltfptr[24];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5844:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[2];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &(/*!DISCR_MULTIPLE*/ meltfrout->tabval[6]);
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.LAMBDA___V24*/ meltfptr[23];
            /*_.CXTUP__V26*/
            meltfptr[25] =  melt_apply ((meltclosure_ptr_t)((/*!PAIRLIST_TO_MULTIPLE*/ meltfrout->tabval[5])), (melt_ptr_t)(/*_.CURPAIR__V23*/ meltfptr[22]), (MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        /*_#NBCOMP__L7*/
        meltfnum[0] =
            (melt_multiple_length((melt_ptr_t)(/*_.CXTUP__V26*/ meltfptr[25])));;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5852:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L8*/
            meltfnum[7] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5852:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L8*/ meltfnum[7]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L9*/ meltfnum[8] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5852:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L9*/ meltfnum[8];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5852;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_and cxtup";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CXTUP__V26*/ meltfptr[25];
                            /*_.MELT_DEBUG_FUN__V28*/
                            meltfptr[27] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V27*/
                        meltfptr[26] = /*_.MELT_DEBUG_FUN__V28*/ meltfptr[27];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5852:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L9*/
                        meltfnum[8] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V28*/
                        meltfptr[27] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V27*/ meltfptr[26] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5852:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L8*/
            meltfnum[7] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V27*/
            meltfptr[26] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#ltI__L10*/
        meltfnum[8] =
            ((/*_#NBCOMP__L7*/ meltfnum[0]) < (1));;
        MELT_LOCATION("warmelt-macro.melt:5853:/ cond");
        /*cond*/
        if (/*_#ltI__L10*/ meltfnum[8]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5855:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "AND without sons"), (melt_ptr_t)0);
                    }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5856:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-macro.melt:5856:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:5854:/ quasiblock");


                    /*_.PROGN___V31*/
                    meltfptr[30] = /*_.RETURN___V30*/ meltfptr[26];;
                    /*^compute*/
                    /*_._IFELSE___V29*/
                    meltfptr[27] = /*_.PROGN___V31*/ meltfptr[30];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5853:/ clear");
                    /*clear*/ /*_.RETURN___V30*/
                    meltfptr[26] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V31*/
                    meltfptr[30] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*^block*/
                /*anyblock*/
                {

                    MELT_LOCATION("warmelt-macro.melt:5857:/ quasiblock");


                    /*_#miI__L11*/
                    meltfnum[7] =
                        ((/*_#NBCOMP__L7*/ meltfnum[0]) - (1));;
                    /*^compute*/
                    /*_.RES__V33*/
                    meltfptr[30] =
                        (melt_multiple_nth((melt_ptr_t)(/*_.CXTUP__V26*/ meltfptr[25]), (/*_#miI__L11*/ meltfnum[7])));;
                    /*^compute*/
                    /*_#IX__L12*/
                    meltfnum[11] =
                        ((/*_#NBCOMP__L7*/ meltfnum[0]) - (2));;
                    MELT_LOCATION("warmelt-macro.melt:5859:/ loop");
                    /*loop*/
                    {
meltlabloop_REVLOOP_1:;/*^loopbody*/

                        /*^block*/
                        /*anyblock*/
                        {


                            MELT_CHECK_SIGNAL();
                            ;

                            MELT_CHECK_SIGNAL();
                            ;
                            /*_#ltI__L13*/
                            meltfnum[12] =
                                ((/*_#IX__L12*/ meltfnum[11]) < (0));;
                            MELT_LOCATION("warmelt-macro.melt:5860:/ cond");
                            /*cond*/
                            if (/*_#ltI__L13*/ meltfnum[12]) /*then*/
                                {
                                    /*^cond.then*/
                                    /*^block*/
                                    /*anyblock*/
                                    {

                                        /*^quasiblock*/


                                        /*^compute*/
                                        /*_.REVLOOP__V35*/ meltfptr[34] =  /*reallynil*/ NULL ;;

                                        /*^exit*/
                                        /*exit*/
                                        {
                                            goto meltlabexit_REVLOOP_1;
                                        }
                                        ;
                                        /*epilog*/
                                    }
                                    ;
                                } /*noelse*/
                            ;
                            MELT_LOCATION("warmelt-macro.melt:5861:/ quasiblock");


                            /*_.CURC__V37*/
                            meltfptr[36] =
                                (melt_multiple_nth((melt_ptr_t)(/*_.CXTUP__V26*/ meltfptr[25]), (/*_#IX__L12*/ meltfnum[11])));;

                            MELT_CHECK_SIGNAL();
                            ;
                            MELT_LOCATION("warmelt-macro.melt:5863:/ quasiblock");


                            /*^rawallocobj*/
                            /*rawallocobj*/
                            {
                                melt_ptr_t newobj = 0;
                                melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_IF*/ meltfrout->tabval[8])), (4), "CLASS_SOURCE_IF");
                                /*_.INST__V39*/
                                meltfptr[38] =
                                    newobj;
                            };
                            ;
                            /*^putslot*/
                            /*putslot*/
                            melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V39*/ meltfptr[38])) == MELTOBMAG_OBJECT);
                            melt_putfield_object((/*_.INST__V39*/ meltfptr[38]), (1), (/*_.LOC__V21*/ meltfptr[20]), "LOCA_LOCATION");
                            ;
                            /*^putslot*/
                            /*putslot*/
                            melt_assertmsg("checkobj putslot  _ @SIF_TEST", melt_magic_discr((melt_ptr_t)(/*_.INST__V39*/ meltfptr[38])) == MELTOBMAG_OBJECT);
                            melt_putfield_object((/*_.INST__V39*/ meltfptr[38]), (2), (/*_.CURC__V37*/ meltfptr[36]), "SIF_TEST");
                            ;
                            /*^putslot*/
                            /*putslot*/
                            melt_assertmsg("checkobj putslot  _ @SIF_THEN", melt_magic_discr((melt_ptr_t)(/*_.INST__V39*/ meltfptr[38])) == MELTOBMAG_OBJECT);
                            melt_putfield_object((/*_.INST__V39*/ meltfptr[38]), (3), (/*_.RES__V33*/ meltfptr[30]), "SIF_THEN");
                            ;
                            /*^touchobj*/

                            melt_dbgtrace_written_object (/*_.INST__V39*/ meltfptr[38], "newly made instance");
                            ;
                            /*_.INST___V38*/
                            meltfptr[37] = /*_.INST__V39*/ meltfptr[38];;
                            MELT_LOCATION("warmelt-macro.melt:5862:/ compute");
                            /*_.RES__V33*/
                            meltfptr[30] = /*_.SETQ___V40*/ meltfptr[39] = /*_.INST___V38*/ meltfptr[37];;
                            /*_.LET___V36*/
                            meltfptr[35] = /*_.SETQ___V40*/ meltfptr[39];;

                            MELT_LOCATION("warmelt-macro.melt:5861:/ clear");
                            /*clear*/ /*_.CURC__V37*/
                            meltfptr[36] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_.INST___V38*/
                            meltfptr[37] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_.SETQ___V40*/
                            meltfptr[39] = 0 ;
                            /*_#miI__L14*/
                            meltfnum[13] =
                                ((/*_#IX__L12*/ meltfnum[11]) - (1));;
                            MELT_LOCATION("warmelt-macro.melt:5868:/ compute");
                            /*_#IX__L12*/
                            meltfnum[11] = /*_#SETQ___L15*/ meltfnum[14] = /*_#miI__L14*/ meltfnum[13];;

                            MELT_CHECK_SIGNAL();
                            ;
                            /*epilog*/

                            MELT_LOCATION("warmelt-macro.melt:5859:/ clear");
                            /*clear*/ /*_#ltI__L13*/
                            meltfnum[12] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_.LET___V36*/
                            meltfptr[35] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_#miI__L14*/
                            meltfnum[13] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_#SETQ___L15*/
                            meltfnum[14] = 0 ;
                        }
                        ;
                        ;
                        goto meltlabloop_REVLOOP_1;
meltlabexit_REVLOOP_1:;/*^loopepilog*/
                        /*loopepilog*/
                        /*_.FOREVER___V34*/
                        meltfptr[33] = /*_.REVLOOP__V35*/ meltfptr[34];;
                    }
                    ;

#if MELT_HAVE_DEBUG
                    MELT_LOCATION("warmelt-macro.melt:5870:/ cppif.then");
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                            melt_dbgcounter++;
#endif
                            ;
                        }
                        ;

                        MELT_CHECK_SIGNAL();
                        ;
                        /*_#MELT_NEED_DBG__L16*/
                        meltfnum[12] =
                            /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                            (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                            0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                            ;;
                        MELT_LOCATION("warmelt-macro.melt:5870:/ cond");
                        /*cond*/
                        if (/*_#MELT_NEED_DBG__L16*/ meltfnum[12]) /*then*/
                            {
                                /*^cond.then*/
                                /*^block*/
                                /*anyblock*/
                                {

                                    /*_#MELT_CALLCOUNT__L17*/ meltfnum[13] =
                                        /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                        meltcallcount  /* melt_callcount debugging */
#else
                                        0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                        ;;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-macro.melt:5870:/ apply");
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[5];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L17*/ meltfnum[13];
                                        /*^apply.arg*/
                                        argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                        /*^apply.arg*/
                                        argtab[2].meltbp_long = 5870;
                                        /*^apply.arg*/
                                        argtab[3].meltbp_cstring =  "mexpand_and res:";
                                        /*^apply.arg*/
                                        argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RES__V33*/ meltfptr[30];
                                        /*_.MELT_DEBUG_FUN__V42*/
                                        meltfptr[37] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;
                                    /*_._IF___V41*/
                                    meltfptr[36] = /*_.MELT_DEBUG_FUN__V42*/ meltfptr[37];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-macro.melt:5870:/ clear");
                                    /*clear*/ /*_#MELT_CALLCOUNT__L17*/
                                    meltfnum[13] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.MELT_DEBUG_FUN__V42*/
                                    meltfptr[37] = 0 ;
                                }
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*_._IF___V41*/ meltfptr[36] =  /*reallynil*/ NULL ;;
                            }
                        ;

                        {
                            MELT_LOCATION("warmelt-macro.melt:5870:/ locexp");
                            /*void*/
                            (void)0;
                        }
                        ;
                        /*^quasiblock*/


                        /*epilog*/

                        /*^clear*/
                        /*clear*/ /*_#MELT_NEED_DBG__L16*/
                        meltfnum[12] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_._IF___V41*/
                        meltfptr[36] = 0 ;
                    }

#else /*MELT_HAVE_DEBUG*/
                    /*^cppif.else*/
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*void*/(void)0;
                        }
                        ;
                        /*epilog*/
                    }

#endif /*MELT_HAVE_DEBUG*/
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5871:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] = /*_.RES__V33*/ meltfptr[30];;

                    {
                        MELT_LOCATION("warmelt-macro.melt:5871:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    /*_.LET___V32*/
                    meltfptr[26] = /*_.RETURN___V43*/ meltfptr[39];;

                    MELT_LOCATION("warmelt-macro.melt:5857:/ clear");
                    /*clear*/ /*_#miI__L11*/
                    meltfnum[7] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.RES__V33*/
                    meltfptr[30] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_#IX__L12*/
                    meltfnum[11] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.FOREVER___V34*/
                    meltfptr[33] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.RETURN___V43*/
                    meltfptr[39] = 0 ;
                    /*_._IFELSE___V29*/
                    meltfptr[27] = /*_.LET___V32*/ meltfptr[26];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5853:/ clear");
                    /*clear*/ /*_.LET___V32*/
                    meltfptr[26] = 0 ;
                }
                ;
            }
        ;
        /*_.LET___V19*/
        meltfptr[17] = /*_._IFELSE___V29*/ meltfptr[27];;

        MELT_LOCATION("warmelt-macro.melt:5840:/ clear");
        /*clear*/ /*_.CONT__V20*/
        meltfptr[16] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LAMBDA___V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CXTUP__V26*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NBCOMP__L7*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_#ltI__L10*/
        meltfnum[8] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IFELSE___V29*/
        meltfptr[27] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5834:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V19*/ meltfptr[17];;

        {
            MELT_LOCATION("warmelt-macro.melt:5834:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NULL__L5*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V16*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V19*/
        meltfptr[17] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_AND", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_100_WARMELTmiMACRO_MEXPAND_AND_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_100_WARMELTmiMACRO_MEXPAND_AND*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_101_WARMELTmiMACRO_LAMBDA_cl19(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_101_WARMELTmiMACRO_LAMBDA_cl19_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_101_WARMELTmiMACRO_LAMBDA_cl19 fromline 1718 */

    /** start of frame for meltrout_101_WARMELTmiMACRO_LAMBDA_cl19 of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_101_WARMELTmiMACRO_LAMBDA_cl19// fromline 1534
        : public Melt_CallFrameWithValues<3>
    {
    public: /* fromline 1538*/
// no classy longs
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_101_WARMELTmiMACRO_LAMBDA_cl19(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<3> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_101_WARMELTmiMACRO_LAMBDA_cl19), clos) {};
        MeltFrame_meltrout_101_WARMELTmiMACRO_LAMBDA_cl19() //the constructor fromline 1608
            : Melt_CallFrameWithValues<3> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_101_WARMELTmiMACRO_LAMBDA_cl19)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_101_WARMELTmiMACRO_LAMBDA_cl19(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<3> (fil,lin, sizeof(MeltFrame_meltrout_101_WARMELTmiMACRO_LAMBDA_cl19)) {};
        MeltFrame_meltrout_101_WARMELTmiMACRO_LAMBDA_cl19(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<3> (fil,lin, sizeof(MeltFrame_meltrout_101_WARMELTmiMACRO_LAMBDA_cl19), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_101_WARMELTmiMACRO_LAMBDA_cl19


    /** end of frame for meltrout_101_WARMELTmiMACRO_LAMBDA_cl19 fromline 1663**/

    /* end of frame for routine meltrout_101_WARMELTmiMACRO_LAMBDA_cl19 fromline 1722 */

    /* classy proc frame meltrout_101_WARMELTmiMACRO_LAMBDA_cl19 */
    MeltFrame_meltrout_101_WARMELTmiMACRO_LAMBDA_cl19
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_101_WARMELTmiMACRO_LAMBDA_cl19 fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("LAMBDA_cl19", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5847:/ getarg");
    /*_.C__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5848:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &(/*~ENV*/ meltfclos->tabval[1]);
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &(/*~MEXPANDER*/ meltfclos->tabval[0]);
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &(/*~MODCTX*/ meltfclos->tabval[2]);
            /*_.MEXPANDER__V3*/
            meltfptr[2] =  melt_apply ((meltclosure_ptr_t)((/*~MEXPANDER*/ meltfclos->tabval[0])), (melt_ptr_t)(/*_.C__V2*/ meltfptr[1]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        MELT_LOCATION("warmelt-macro.melt:5847:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.MEXPANDER__V3*/ meltfptr[2];;

        {
            MELT_LOCATION("warmelt-macro.melt:5847:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.MEXPANDER__V3*/
        meltfptr[2] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("LAMBDA_cl19", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_101_WARMELTmiMACRO_LAMBDA_cl19_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_101_WARMELTmiMACRO_LAMBDA_cl19*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_102_WARMELTmiMACRO_PATEXPAND_AS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_102_WARMELTmiMACRO_PATEXPAND_AS_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_102_WARMELTmiMACRO_PATEXPAND_AS fromline 1718 */

    /** start of frame for meltrout_102_WARMELTmiMACRO_PATEXPAND_AS of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_102_WARMELTmiMACRO_PATEXPAND_AS// fromline 1534
        : public Melt_CallFrameWithValues<43>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[13];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_102_WARMELTmiMACRO_PATEXPAND_AS(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<43> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_102_WARMELTmiMACRO_PATEXPAND_AS), clos) {};
        MeltFrame_meltrout_102_WARMELTmiMACRO_PATEXPAND_AS() //the constructor fromline 1608
            : Melt_CallFrameWithValues<43> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_102_WARMELTmiMACRO_PATEXPAND_AS)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_102_WARMELTmiMACRO_PATEXPAND_AS(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<43> (fil,lin, sizeof(MeltFrame_meltrout_102_WARMELTmiMACRO_PATEXPAND_AS)) {};
        MeltFrame_meltrout_102_WARMELTmiMACRO_PATEXPAND_AS(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<43> (fil,lin, sizeof(MeltFrame_meltrout_102_WARMELTmiMACRO_PATEXPAND_AS), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_102_WARMELTmiMACRO_PATEXPAND_AS


    /** end of frame for meltrout_102_WARMELTmiMACRO_PATEXPAND_AS fromline 1663**/

    /* end of frame for routine meltrout_102_WARMELTmiMACRO_PATEXPAND_AS fromline 1722 */

    /* classy proc frame meltrout_102_WARMELTmiMACRO_PATEXPAND_AS */
    MeltFrame_meltrout_102_WARMELTmiMACRO_PATEXPAND_AS
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_102_WARMELTmiMACRO_PATEXPAND_AS fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("PATEXPAND_AS", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5875:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.PCTX__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.PCTX__V4*/ meltfptr[3])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5876:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L1*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
            MELT_LOCATION("warmelt-macro.melt:5876:/ cond");
            /*cond*/
            if (/*_#IS_A__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V6*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5876:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5876;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V6*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5876:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V5*/
            meltfptr[4] = /*_._IFELSE___V6*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5876:/ clear");
            /*clear*/ /*_#IS_A__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V5*/ meltfptr[4] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5877:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L2*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[2])));;
            MELT_LOCATION("warmelt-macro.melt:5877:/ cond");
            /*cond*/
            if (/*_#IS_A__L2*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5877:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5877;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5877:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5877:/ clear");
            /*clear*/ /*_#IS_A__L2*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5878:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.PCTX__V4*/ meltfptr[3]), (melt_ptr_t)((/*!CLASS_PATTERN_EXPANSION_CONTEXT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:5878:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5878:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check pctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5878;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.PCTX__V4*/ meltfptr[3];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5878:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5878:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5879:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L4*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5879:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L5*/ meltfnum[4] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5879:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L5*/ meltfnum[4];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5879;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "patexpand_as sexpr";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V15*/
                            meltfptr[5] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[4])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V14*/
                        meltfptr[12] = /*_.MELT_DEBUG_FUN__V15*/ meltfptr[5];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5879:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L5*/
                        meltfnum[4] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V15*/
                        meltfptr[5] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V14*/ meltfptr[12] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5879:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V14*/
            meltfptr[12] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5880:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:5881:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V17*/
            meltfptr[12] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5882:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V18*/
            meltfptr[17] = slot;
        };
        ;
        /*_.LIST_FIRST__V19*/
        meltfptr[18] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V17*/ meltfptr[12])));;
        /*^compute*/
        /*_.CURPAIR__V20*/
        meltfptr[19] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V19*/ meltfptr[18])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5884:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.PCTX__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.LOC__V18*/ meltfptr[17];
            /*_.ARGSP__V21*/
            meltfptr[20] =  melt_apply ((meltclosure_ptr_t)((/*!PATTERNEXPAND_PAIRLIST_AS_TUPLE*/ meltfrout->tabval[5])), (melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#MULTIPLE_LENGTH__L6*/
        meltfnum[4] =
            (melt_multiple_length((melt_ptr_t)(/*_.ARGSP__V21*/ meltfptr[20])));;
        /*^compute*/
        /*_#exeqI__L7*/
        meltfnum[0] =
            ((/*_#MULTIPLE_LENGTH__L6*/ meltfnum[4]) != (2));;
        MELT_LOCATION("warmelt-macro.melt:5886:/ cond");
        /*cond*/
        if (/*_#exeqI__L7*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5888:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V18*/ meltfptr[17]), ( "AS pattern expects two arguments: ?patvar subpattern"), (melt_ptr_t)0);
                    }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5889:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-macro.melt:5889:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:5887:/ quasiblock");


                    /*_.PROGN___V24*/
                    meltfptr[23] = /*_.RETURN___V23*/ meltfptr[22];;
                    /*^compute*/
                    /*_._IF___V22*/
                    meltfptr[21] = /*_.PROGN___V24*/ meltfptr[23];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5886:/ clear");
                    /*clear*/ /*_.RETURN___V23*/
                    meltfptr[22] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V24*/
                    meltfptr[23] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V22*/ meltfptr[21] =  /*reallynil*/ NULL ;;
            }
        ;
        MELT_LOCATION("warmelt-macro.melt:5890:/ quasiblock");


        /*_.ARGVAR__V26*/
        meltfptr[23] =
            (melt_multiple_nth((melt_ptr_t)(/*_.ARGSP__V21*/ meltfptr[20]), (0)));;
        /*^compute*/
        /*_.ARGSUB__V27*/
        meltfptr[26] =
            (melt_multiple_nth((melt_ptr_t)(/*_.ARGSP__V21*/ meltfptr[20]), (1)));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#IS_A__L8*/
        meltfnum[7] =
            melt_is_instance_of((melt_ptr_t)(/*_.ARGVAR__V26*/ meltfptr[23]), (melt_ptr_t)((/*!CLASS_SOURCE_PATTERN_JOKER_VARIABLE*/ meltfrout->tabval[6])));;
        MELT_LOCATION("warmelt-macro.melt:5893:/ cond");
        /*cond*/
        if (/*_#IS_A__L8*/ meltfnum[7]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5895:/ locexp");
                        melt_warning_str(0, (melt_ptr_t)(/*_.LOC__V18*/ meltfptr[17]), ( "AS pattern with useless joker"), (melt_ptr_t)0);
                    }
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5896:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] = /*_.ARGSUB__V27*/ meltfptr[26];;

                    {
                        MELT_LOCATION("warmelt-macro.melt:5896:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:5894:/ quasiblock");


                    /*_.PROGN___V30*/
                    meltfptr[29] = /*_.RETURN___V29*/ meltfptr[28];;
                    /*^compute*/
                    /*_._IF___V28*/
                    meltfptr[27] = /*_.PROGN___V30*/ meltfptr[29];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5893:/ clear");
                    /*clear*/ /*_.RETURN___V29*/
                    meltfptr[28] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V30*/
                    meltfptr[29] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V28*/ meltfptr[27] =  /*reallynil*/ NULL ;;
            }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#IS_NOT_A__L9*/
        meltfnum[8] =
            !melt_is_instance_of((melt_ptr_t)(/*_.ARGVAR__V26*/ meltfptr[23]), (melt_ptr_t)((/*!CLASS_SOURCE_PATTERN_VARIABLE*/ meltfrout->tabval[7])));;
        MELT_LOCATION("warmelt-macro.melt:5897:/ cond");
        /*cond*/
        if (/*_#IS_NOT_A__L9*/ meltfnum[8]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:5899:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V18*/ meltfptr[17]), ( "AS pattern needs a pattern variable as first argument"), (melt_ptr_t)0);
                    }
                    ;
                    MELT_LOCATION("warmelt-macro.melt:5900:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-macro.melt:5900:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:5898:/ quasiblock");


                    /*_.PROGN___V33*/
                    meltfptr[32] = /*_.RETURN___V32*/ meltfptr[29];;
                    /*^compute*/
                    /*_._IF___V31*/
                    meltfptr[28] = /*_.PROGN___V33*/ meltfptr[32];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5897:/ clear");
                    /*clear*/ /*_.RETURN___V32*/
                    meltfptr[29] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V33*/
                    meltfptr[32] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V31*/ meltfptr[28] =  /*reallynil*/ NULL ;;
            }
        ;

        {
            MELT_LOCATION("warmelt-macro.melt:5901:/ locexp");
            melt_warning_str(0, (melt_ptr_t)(/*_.LOC__V18*/ meltfptr[17]), ( "deprecated AS pattern - use AND pattern instead"), (melt_ptr_t)0);
        }
        ;
        MELT_LOCATION("warmelt-macro.melt:5902:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:5903:/ cond");
        /*cond*/
        if (
            /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.ARGSUB__V27*/ meltfptr[26]),
                                          (melt_ptr_t)((/*!CLASS_SOURCE_PATTERN*/ meltfrout->tabval[8])))
        ) /*then*/
            {
                /*^cond.then*/
                /*^getslot*/
                {
                    melt_ptr_t slot=NULL, obj=NULL;
                    obj = (melt_ptr_t)(/*_.ARGSUB__V27*/ meltfptr[26]) /*=obj*/;
                    melt_object_get_field(slot,obj, 2, "PAT_WEIGHT");
                    /*_.PAT_WEIGHT__V35*/
                    meltfptr[32] = slot;
                };
                ;
            }
        else    /*^cond.else*/
            {

                /*_.PAT_WEIGHT__V35*/ meltfptr[32] =  /*reallynil*/ NULL ;;
            }
        ;
        /*^compute*/
        /*_#SUBW__L10*/
        meltfnum[9] =
            (melt_get_int((melt_ptr_t)(/*_.PAT_WEIGHT__V35*/ meltfptr[32])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#plI__L11*/
        meltfnum[10] =
            ((2) + (/*_#SUBW__L10*/ meltfnum[9]));;
        /*^compute*/
        /*_.MAKE_INTEGERBOX__V36*/
        meltfptr[35] =
            (meltgc_new_int((meltobject_ptr_t)((/*!DISCR_CONSTANT_INTEGER*/ meltfrout->tabval[10])), (/*_#plI__L11*/ meltfnum[10])));;
        MELT_LOCATION("warmelt-macro.melt:5907:/ blockmultialloc");
        /*multiallocblock*/
        {
            struct meltletrec_1_st
            {
                struct MELT_MULTIPLE_STRUCT(2) rtup_0__TUPLREC__x5;
                long meltletrec_1_endgap;
            } *meltletrec_1_ptr = 0;
            meltletrec_1_ptr = (struct meltletrec_1_st *) meltgc_allocate (sizeof (struct meltletrec_1_st), 0);
            /*^blockmultialloc.initfill*/
            /*inimult rtup_0__TUPLREC__x5*/
            /*_.TUPLREC___V38*/
            meltfptr[37] = (melt_ptr_t) &meltletrec_1_ptr->rtup_0__TUPLREC__x5;
            meltletrec_1_ptr->rtup_0__TUPLREC__x5.discr = (meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_MULTIPLE))));
            meltletrec_1_ptr->rtup_0__TUPLREC__x5.nbval = 2;


            /*^putuple*/
            /*putupl#7*/
            melt_assertmsg("putupl [:5907] #7 checktup", melt_magic_discr((melt_ptr_t)(/*_.TUPLREC___V38*/ meltfptr[37]))== MELTOBMAG_MULTIPLE);
            melt_assertmsg("putupl [:5907] #7 checkoff", (0>=0 && 0< melt_multiple_length((melt_ptr_t)(/*_.TUPLREC___V38*/ meltfptr[37]))));
            ((meltmultiple_ptr_t)(/*_.TUPLREC___V38*/ meltfptr[37]))->tabval[0] = (melt_ptr_t)(/*_.ARGVAR__V26*/ meltfptr[23]);
            ;
            /*^putuple*/
            /*putupl#8*/
            melt_assertmsg("putupl [:5907] #8 checktup", melt_magic_discr((melt_ptr_t)(/*_.TUPLREC___V38*/ meltfptr[37]))== MELTOBMAG_MULTIPLE);
            melt_assertmsg("putupl [:5907] #8 checkoff", (1>=0 && 1< melt_multiple_length((melt_ptr_t)(/*_.TUPLREC___V38*/ meltfptr[37]))));
            ((meltmultiple_ptr_t)(/*_.TUPLREC___V38*/ meltfptr[37]))->tabval[1] = (melt_ptr_t)(/*_.ARGSUB__V27*/ meltfptr[26]);
            ;
            /*^touch*/
            meltgc_touch(/*_.TUPLREC___V38*/ meltfptr[37]);
            ;
            /*_.TUPLE___V37*/
            meltfptr[36] = /*_.TUPLREC___V38*/ meltfptr[37];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5907:/ clear");
            /*clear*/ /*_.TUPLREC___V38*/
            meltfptr[37] = 0 ;
            /*^clear*/
            /*clear*/ /*_.TUPLREC___V38*/
            meltfptr[37] = 0 ;
        } /*end multiallocblock*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5904:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_PATTERN_AND*/ meltfrout->tabval[9])), (4), "CLASS_SOURCE_PATTERN_AND");
            /*_.INST__V40*/
            meltfptr[39] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V40*/ meltfptr[39])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V40*/ meltfptr[39]), (1), (/*_.LOC__V18*/ meltfptr[17]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @PAT_WEIGHT", melt_magic_discr((melt_ptr_t)(/*_.INST__V40*/ meltfptr[39])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V40*/ meltfptr[39]), (2), (/*_.MAKE_INTEGERBOX__V36*/ meltfptr[35]), "PAT_WEIGHT");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @ANDPAT_CONJ", melt_magic_discr((melt_ptr_t)(/*_.INST__V40*/ meltfptr[39])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V40*/ meltfptr[39]), (3), (/*_.TUPLE___V37*/ meltfptr[36]), "ANDPAT_CONJ");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V40*/ meltfptr[39], "newly made instance");
        ;
        /*_.RES__V39*/
        meltfptr[37] = /*_.INST__V40*/ meltfptr[39];;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5909:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L12*/
            meltfnum[11] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5909:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L12*/ meltfnum[11]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L13*/ meltfnum[12] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5909:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L13*/ meltfnum[12];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5909;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "patexpand_as returns res";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RES__V39*/ meltfptr[37];
                            /*_.MELT_DEBUG_FUN__V42*/
                            meltfptr[41] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[4])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V41*/
                        meltfptr[40] = /*_.MELT_DEBUG_FUN__V42*/ meltfptr[41];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5909:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L13*/
                        meltfnum[12] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V42*/
                        meltfptr[41] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V41*/ meltfptr[40] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5909:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L12*/
            meltfnum[11] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V41*/
            meltfptr[40] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5910:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.RES__V39*/ meltfptr[37];;

        {
            MELT_LOCATION("warmelt-macro.melt:5910:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V34*/
        meltfptr[29] = /*_.RETURN___V43*/ meltfptr[41];;

        MELT_LOCATION("warmelt-macro.melt:5902:/ clear");
        /*clear*/ /*_.PAT_WEIGHT__V35*/
        meltfptr[32] = 0 ;
        /*^clear*/
        /*clear*/ /*_#SUBW__L10*/
        meltfnum[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_#plI__L11*/
        meltfnum[10] = 0 ;
        /*^clear*/
        /*clear*/ /*_.MAKE_INTEGERBOX__V36*/
        meltfptr[35] = 0 ;
        /*^clear*/
        /*clear*/ /*_.TUPLE___V37*/
        meltfptr[36] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RES__V39*/
        meltfptr[37] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V43*/
        meltfptr[41] = 0 ;
        /*_.LET___V25*/
        meltfptr[22] = /*_.LET___V34*/ meltfptr[29];;

        MELT_LOCATION("warmelt-macro.melt:5890:/ clear");
        /*clear*/ /*_.ARGVAR__V26*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.ARGSUB__V27*/
        meltfptr[26] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_A__L8*/
        meltfnum[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V28*/
        meltfptr[27] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_NOT_A__L9*/
        meltfnum[8] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V31*/
        meltfptr[28] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V34*/
        meltfptr[29] = 0 ;
        /*_.LET___V16*/
        meltfptr[5] = /*_.LET___V25*/ meltfptr[22];;

        MELT_LOCATION("warmelt-macro.melt:5880:/ clear");
        /*clear*/ /*_.CONT__V17*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V18*/
        meltfptr[17] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.ARGSP__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_#MULTIPLE_LENGTH__L6*/
        meltfnum[4] = 0 ;
        /*^clear*/
        /*clear*/ /*_#exeqI__L7*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V25*/
        meltfptr[22] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5875:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V16*/ meltfptr[5];;

        {
            MELT_LOCATION("warmelt-macro.melt:5875:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V5*/
        meltfptr[4] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V16*/
        meltfptr[5] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("PATEXPAND_AS", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_102_WARMELTmiMACRO_PATEXPAND_AS_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_102_WARMELTmiMACRO_PATEXPAND_AS*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_103_WARMELTmiMACRO_MEXPAND_AS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                       const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_103_WARMELTmiMACRO_MEXPAND_AS_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_103_WARMELTmiMACRO_MEXPAND_AS fromline 1718 */

    /** start of frame for meltrout_103_WARMELTmiMACRO_MEXPAND_AS of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_103_WARMELTmiMACRO_MEXPAND_AS// fromline 1534
        : public Melt_CallFrameWithValues<16>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[4];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_103_WARMELTmiMACRO_MEXPAND_AS(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<16> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_103_WARMELTmiMACRO_MEXPAND_AS), clos) {};
        MeltFrame_meltrout_103_WARMELTmiMACRO_MEXPAND_AS() //the constructor fromline 1608
            : Melt_CallFrameWithValues<16> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_103_WARMELTmiMACRO_MEXPAND_AS)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_103_WARMELTmiMACRO_MEXPAND_AS(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<16> (fil,lin, sizeof(MeltFrame_meltrout_103_WARMELTmiMACRO_MEXPAND_AS)) {};
        MeltFrame_meltrout_103_WARMELTmiMACRO_MEXPAND_AS(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<16> (fil,lin, sizeof(MeltFrame_meltrout_103_WARMELTmiMACRO_MEXPAND_AS), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_103_WARMELTmiMACRO_MEXPAND_AS


    /** end of frame for meltrout_103_WARMELTmiMACRO_MEXPAND_AS fromline 1663**/

    /* end of frame for routine meltrout_103_WARMELTmiMACRO_MEXPAND_AS fromline 1722 */

    /* classy proc frame meltrout_103_WARMELTmiMACRO_MEXPAND_AS */
    MeltFrame_meltrout_103_WARMELTmiMACRO_MEXPAND_AS
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_103_WARMELTmiMACRO_MEXPAND_AS fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_AS", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5913:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5914:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L1*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
            MELT_LOCATION("warmelt-macro.melt:5914:/ cond");
            /*cond*/
            if (/*_#IS_A__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V7*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5914:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5914;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                            meltfptr[7] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V7*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V8*/ meltfptr[7];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5914:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V8*/
                        meltfptr[7] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V6*/
            meltfptr[5] = /*_._IFELSE___V7*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5914:/ clear");
            /*clear*/ /*_#IS_A__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V7*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V6*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5915:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L2*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[2])));;
            MELT_LOCATION("warmelt-macro.melt:5915:/ cond");
            /*cond*/
            if (/*_#IS_A__L2*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V10*/ meltfptr[6] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5915:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5915;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                            meltfptr[10] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V10*/
                        meltfptr[6] = /*_.MELT_ASSERT_FAILURE_FUN__V11*/ meltfptr[10];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5915:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V11*/
                        meltfptr[10] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V9*/
            meltfptr[7] = /*_._IFELSE___V10*/ meltfptr[6];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5915:/ clear");
            /*clear*/ /*_#IS_A__L2*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V10*/
            meltfptr[6] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V9*/ meltfptr[7] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5916:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L3*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5916:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L3*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L4*/ meltfnum[3] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5916:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L4*/ meltfnum[3];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5916;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_as sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V13*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V12*/
                        meltfptr[10] = /*_.MELT_DEBUG_FUN__V13*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5916:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L4*/
                        meltfnum[3] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V13*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V12*/ meltfptr[10] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5916:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L3*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V12*/
            meltfptr[10] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5917:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:5918:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V15*/
            meltfptr[10] = slot;
        };
        ;

        {
            MELT_LOCATION("warmelt-macro.melt:5920:/ locexp");
            /* error_plain */
            melt_error_str((melt_ptr_t)(/*_.LOC__V15*/ meltfptr[10]), ( "AS cannot be macro-expanded in expression context"), (melt_ptr_t)0);
        }
        ;
        MELT_LOCATION("warmelt-macro.melt:5921:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] =  /*reallynil*/ NULL ;;

        {
            MELT_LOCATION("warmelt-macro.melt:5921:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V14*/
        meltfptr[6] = /*_.RETURN___V16*/ meltfptr[15];;

        MELT_LOCATION("warmelt-macro.melt:5917:/ clear");
        /*clear*/ /*_.LOC__V15*/
        meltfptr[10] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V16*/
        meltfptr[15] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5913:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V14*/ meltfptr[6];;

        {
            MELT_LOCATION("warmelt-macro.melt:5913:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V6*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V9*/
        meltfptr[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V14*/
        meltfptr[6] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_AS", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_103_WARMELTmiMACRO_MEXPAND_AS_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_103_WARMELTmiMACRO_MEXPAND_AS*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN fromline 1718 */

    /** start of frame for meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN// fromline 1534
        : public Melt_CallFrameWithValues<22>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[5];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<22> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN), clos) {};
        MeltFrame_meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN() //the constructor fromline 1608
            : Melt_CallFrameWithValues<22> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<22> (fil,lin, sizeof(MeltFrame_meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN)) {};
        MeltFrame_meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<22> (fil,lin, sizeof(MeltFrame_meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN


    /** end of frame for meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN fromline 1663**/

    /* end of frame for routine meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN fromline 1722 */

    /* classy proc frame meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN */
    MeltFrame_meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("PATEXPAND_WHEN", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5927:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.PCTX__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.PCTX__V4*/ meltfptr[3])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5928:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5928:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5928:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5928;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "patexpand_when sexpr";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V6*/
                            meltfptr[5] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V5*/
                        meltfptr[4] = /*_.MELT_DEBUG_FUN__V6*/ meltfptr[5];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5928:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V6*/
                        meltfptr[5] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V5*/ meltfptr[4] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5928:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V5*/
            meltfptr[4] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5929:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:5929:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V8*/ meltfptr[4] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5929:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5929;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V9*/
                            meltfptr[8] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V8*/
                        meltfptr[4] = /*_.MELT_ASSERT_FAILURE_FUN__V9*/ meltfptr[8];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5929:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V9*/
                        meltfptr[8] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V7*/
            meltfptr[5] = /*_._IFELSE___V8*/ meltfptr[4];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5929:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V8*/
            meltfptr[4] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V7*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5930:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:5930:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V11*/ meltfptr[4] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5930:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5930;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V12*/
                            meltfptr[11] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V11*/
                        meltfptr[4] = /*_.MELT_ASSERT_FAILURE_FUN__V12*/ meltfptr[11];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5930:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V12*/
                        meltfptr[11] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V10*/
            meltfptr[8] = /*_._IFELSE___V11*/ meltfptr[4];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5930:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V11*/
            meltfptr[4] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V10*/ meltfptr[8] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5931:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L5*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.PCTX__V4*/ meltfptr[3]), (melt_ptr_t)((/*!CLASS_PATTERN_EXPANSION_CONTEXT*/ meltfrout->tabval[4])));;
            MELT_LOCATION("warmelt-macro.melt:5931:/ cond");
            /*cond*/
            if (/*_#IS_A__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V14*/ meltfptr[4] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5931:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check pctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5931;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.PCTX__V4*/ meltfptr[3];
                            /*_.MELT_ASSERT_FAILURE_FUN__V15*/
                            meltfptr[14] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V14*/
                        meltfptr[4] = /*_.MELT_ASSERT_FAILURE_FUN__V15*/ meltfptr[14];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5931:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V15*/
                        meltfptr[14] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V13*/
            meltfptr[11] = /*_._IFELSE___V14*/ meltfptr[4];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5931:/ clear");
            /*clear*/ /*_#IS_A__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V14*/
            meltfptr[4] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V13*/ meltfptr[11] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5932:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:5933:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V17*/
            meltfptr[4] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5934:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V18*/
            meltfptr[17] = slot;
        };
        ;

        {
            MELT_LOCATION("warmelt-macro.melt:5937:/ locexp");
            /* error_plain */
            melt_error_str((melt_ptr_t)(/*_.LOC__V18*/ meltfptr[17]), ( "WHEN is not yet implemented in patterns"), (melt_ptr_t)0);
        }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5938:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*^cond*/
            /*cond*/
            if ((/*nil*/NULL)) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V20*/ meltfptr[19] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5938:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "@$@ unimplemented patexpand_when";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5938;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V21*/
                            meltfptr[20] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V20*/
                        meltfptr[19] = /*_.MELT_ASSERT_FAILURE_FUN__V21*/ meltfptr[20];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5938:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V21*/
                        meltfptr[20] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V19*/
            meltfptr[18] = /*_._IFELSE___V20*/ meltfptr[19];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5938:/ clear");
            /*clear*/ /*_._IFELSE___V20*/
            meltfptr[19] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V19*/ meltfptr[18] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5939:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] =  /*reallynil*/ NULL ;;

        {
            MELT_LOCATION("warmelt-macro.melt:5939:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V16*/
        meltfptr[14] = /*_.RETURN___V22*/ meltfptr[20];;

        MELT_LOCATION("warmelt-macro.melt:5932:/ clear");
        /*clear*/ /*_.CONT__V17*/
        meltfptr[4] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V18*/
        meltfptr[17] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V22*/
        meltfptr[20] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5927:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V16*/ meltfptr[14];;

        {
            MELT_LOCATION("warmelt-macro.melt:5927:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V7*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V10*/
        meltfptr[8] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V13*/
        meltfptr[11] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V16*/
        meltfptr[14] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("PATEXPAND_WHEN", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_104_WARMELTmiMACRO_PATEXPAND_WHEN*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_105_WARMELTmiMACRO_PATEXPAND_AND(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_105_WARMELTmiMACRO_PATEXPAND_AND_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_105_WARMELTmiMACRO_PATEXPAND_AND fromline 1718 */

    /** start of frame for meltrout_105_WARMELTmiMACRO_PATEXPAND_AND of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_105_WARMELTmiMACRO_PATEXPAND_AND// fromline 1534
        : public Melt_CallFrameWithValues<28>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[12];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_105_WARMELTmiMACRO_PATEXPAND_AND(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<28> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_105_WARMELTmiMACRO_PATEXPAND_AND), clos) {};
        MeltFrame_meltrout_105_WARMELTmiMACRO_PATEXPAND_AND() //the constructor fromline 1608
            : Melt_CallFrameWithValues<28> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_105_WARMELTmiMACRO_PATEXPAND_AND)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_105_WARMELTmiMACRO_PATEXPAND_AND(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<28> (fil,lin, sizeof(MeltFrame_meltrout_105_WARMELTmiMACRO_PATEXPAND_AND)) {};
        MeltFrame_meltrout_105_WARMELTmiMACRO_PATEXPAND_AND(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<28> (fil,lin, sizeof(MeltFrame_meltrout_105_WARMELTmiMACRO_PATEXPAND_AND), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_105_WARMELTmiMACRO_PATEXPAND_AND


    /** end of frame for meltrout_105_WARMELTmiMACRO_PATEXPAND_AND fromline 1663**/

    /* end of frame for routine meltrout_105_WARMELTmiMACRO_PATEXPAND_AND fromline 1722 */

    /* classy proc frame meltrout_105_WARMELTmiMACRO_PATEXPAND_AND */
    MeltFrame_meltrout_105_WARMELTmiMACRO_PATEXPAND_AND
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_105_WARMELTmiMACRO_PATEXPAND_AND fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("PATEXPAND_AND", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5947:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.PCTX__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.PCTX__V4*/ meltfptr[3])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5948:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L1*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[0])));;
            MELT_LOCATION("warmelt-macro.melt:5948:/ cond");
            /*cond*/
            if (/*_#IS_A__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V6*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5948:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5948;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V6*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5948:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V5*/
            meltfptr[4] = /*_._IFELSE___V6*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5948:/ clear");
            /*clear*/ /*_#IS_A__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V5*/ meltfptr[4] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5949:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L2*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[2])));;
            MELT_LOCATION("warmelt-macro.melt:5949:/ cond");
            /*cond*/
            if (/*_#IS_A__L2*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5949:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5949;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5949:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5949:/ clear");
            /*clear*/ /*_#IS_A__L2*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5950:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.PCTX__V4*/ meltfptr[3]), (melt_ptr_t)((/*!CLASS_PATTERN_EXPANSION_CONTEXT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:5950:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5950:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check pctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5950;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.PCTX__V4*/ meltfptr[3];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5950:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5950:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5951:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L4*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5951:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L5*/ meltfnum[4] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5951:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L5*/ meltfnum[4];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5951;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "patexpand_and sexpr";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V15*/
                            meltfptr[5] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[4])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V14*/
                        meltfptr[12] = /*_.MELT_DEBUG_FUN__V15*/ meltfptr[5];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5951:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L5*/
                        meltfnum[4] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V15*/
                        meltfptr[5] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V14*/ meltfptr[12] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5951:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V14*/
            meltfptr[12] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5952:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:5953:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V17*/
            meltfptr[12] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5954:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V18*/
            meltfptr[17] = slot;
        };
        ;
        /*_.LIST_FIRST__V19*/
        meltfptr[18] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V17*/ meltfptr[12])));;
        /*^compute*/
        /*_.CURPAIR__V20*/
        meltfptr[19] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V19*/ meltfptr[18])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5956:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.PCTX__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.LOC__V18*/ meltfptr[17];
            /*_.ARGSP__V21*/
            meltfptr[20] =  melt_apply ((meltclosure_ptr_t)((/*!PATTERNEXPAND_PAIRLIST_AS_TUPLE*/ meltfrout->tabval[5])), (melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5957:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_PATTERN_AND*/ meltfrout->tabval[6])), (4), "CLASS_SOURCE_PATTERN_AND");
            /*_.INST__V23*/
            meltfptr[22] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V23*/ meltfptr[22])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V23*/ meltfptr[22]), (1), (/*_.LOC__V18*/ meltfptr[17]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @ANDPAT_CONJ", melt_magic_discr((melt_ptr_t)(/*_.INST__V23*/ meltfptr[22])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V23*/ meltfptr[22]), (3), (/*_.ARGSP__V21*/ meltfptr[20]), "ANDPAT_CONJ");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V23*/ meltfptr[22], "newly made instance");
        ;
        /*_.RES__V22*/
        meltfptr[21] = /*_.INST__V23*/ meltfptr[22];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5961:/ quasiblock");


        /*^multiapply*/
        /*multiapply 1args, 3x.res*/
        {

            union meltparam_un restab[3];
            memset(&restab, 0, sizeof(restab));
            /*^multiapply.xres*/
            restab[0].meltbp_longptr =  & /*_#IMAX__L6*/ meltfnum[4];
            /*^multiapply.xres*/
            restab[1].meltbp_longptr =  & /*_#IMIN__L7*/ meltfnum[0];
            /*^multiapply.xres*/
            restab[2].meltbp_longptr =  & /*_#ISUM__L8*/ meltfnum[7];
            /*^multiapply.appl*/
            /*_.SUBPATW__V24*/
            meltfptr[23] =  melt_apply ((meltclosure_ptr_t)((/*!PATTERN_WEIGHT_TUPLE*/ meltfrout->tabval[7])), (melt_ptr_t)(/*_.ARGSP__V21*/ meltfptr[20]), (""), (union meltparam_un*)0, (MELTBPARSTR_LONG MELTBPARSTR_LONG MELTBPARSTR_LONG ""), restab);
        }
        ;
        /*^quasiblock*/



        MELT_CHECK_SIGNAL();
        ;
        /*_#plI__L9*/
        meltfnum[8] =
            ((1) + (/*_#IMAX__L6*/ meltfnum[4]));;
        /*^compute*/
        /*_#plI__L10*/
        meltfnum[9] =
            ((/*_#plI__L9*/ meltfnum[8]) + (/*_#ISUM__L8*/ meltfnum[7]));;
        /*^compute*/
        /*_.MAKE_INTEGERBOX__V25*/
        meltfptr[24] =
            (meltgc_new_int((meltobject_ptr_t)((/*!DISCR_CONSTANT_INTEGER*/ meltfrout->tabval[8])), (/*_#plI__L10*/ meltfnum[9])));;
        MELT_LOCATION("warmelt-macro.melt:5964:/ quasiblock");


        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @PAT_WEIGHT", melt_magic_discr((melt_ptr_t)(/*_.RES__V22*/ meltfptr[21])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.RES__V22*/ meltfptr[21]), (2), (/*_.MAKE_INTEGERBOX__V25*/ meltfptr[24]), "PAT_WEIGHT");
        ;
        /*^touch*/
        meltgc_touch(/*_.RES__V22*/ meltfptr[21]);
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.RES__V22*/ meltfptr[21], "put-fields");
        ;


        MELT_LOCATION("warmelt-macro.melt:5961:/ clear");
        /*clear*/ /*_#plI__L9*/
        meltfnum[8] = 0 ;
        /*^clear*/
        /*clear*/ /*_#plI__L10*/
        meltfnum[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.MAKE_INTEGERBOX__V25*/
        meltfptr[24] = 0 ;

        /*^clear*/
        /*clear*/ /*_#IMAX__L6*/
        meltfnum[4] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IMIN__L7*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_#ISUM__L8*/
        meltfnum[7] = 0 ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5967:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L11*/
            meltfnum[8] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5967:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L11*/ meltfnum[8]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L12*/ meltfnum[9] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5967:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L12*/ meltfnum[9];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5967;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "patexpand_and res";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RES__V22*/ meltfptr[21];
                            /*_.MELT_DEBUG_FUN__V27*/
                            meltfptr[23] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[4])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V26*/
                        meltfptr[24] = /*_.MELT_DEBUG_FUN__V27*/ meltfptr[23];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5967:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L12*/
                        meltfnum[9] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V27*/
                        meltfptr[23] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V26*/ meltfptr[24] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5967:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L11*/
            meltfnum[8] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V26*/
            meltfptr[24] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5968:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.RES__V22*/ meltfptr[21];;

        {
            MELT_LOCATION("warmelt-macro.melt:5968:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*_.LET___V16*/
        meltfptr[5] = /*_.RETURN___V28*/ meltfptr[23];;

        MELT_LOCATION("warmelt-macro.melt:5952:/ clear");
        /*clear*/ /*_.CONT__V17*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V18*/
        meltfptr[17] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.ARGSP__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RES__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V28*/
        meltfptr[23] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5947:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V16*/ meltfptr[5];;

        {
            MELT_LOCATION("warmelt-macro.melt:5947:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V5*/
        meltfptr[4] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V16*/
        meltfptr[5] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("PATEXPAND_AND", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_105_WARMELTmiMACRO_PATEXPAND_AND_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_105_WARMELTmiMACRO_PATEXPAND_AND*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_106_WARMELTmiMACRO_MEXPAND_OR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                       const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_106_WARMELTmiMACRO_MEXPAND_OR_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_106_WARMELTmiMACRO_MEXPAND_OR fromline 1718 */

    /** start of frame for meltrout_106_WARMELTmiMACRO_MEXPAND_OR of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_106_WARMELTmiMACRO_MEXPAND_OR// fromline 1534
        : public Melt_CallFrameWithValues<35>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[10];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_106_WARMELTmiMACRO_MEXPAND_OR(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<35> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_106_WARMELTmiMACRO_MEXPAND_OR), clos) {};
        MeltFrame_meltrout_106_WARMELTmiMACRO_MEXPAND_OR() //the constructor fromline 1608
            : Melt_CallFrameWithValues<35> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_106_WARMELTmiMACRO_MEXPAND_OR)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_106_WARMELTmiMACRO_MEXPAND_OR(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<35> (fil,lin, sizeof(MeltFrame_meltrout_106_WARMELTmiMACRO_MEXPAND_OR)) {};
        MeltFrame_meltrout_106_WARMELTmiMACRO_MEXPAND_OR(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<35> (fil,lin, sizeof(MeltFrame_meltrout_106_WARMELTmiMACRO_MEXPAND_OR), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_106_WARMELTmiMACRO_MEXPAND_OR


    /** end of frame for meltrout_106_WARMELTmiMACRO_MEXPAND_OR fromline 1663**/

    /* end of frame for routine meltrout_106_WARMELTmiMACRO_MEXPAND_OR fromline 1722 */

    /* classy proc frame meltrout_106_WARMELTmiMACRO_MEXPAND_OR */
    MeltFrame_meltrout_106_WARMELTmiMACRO_MEXPAND_OR
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_106_WARMELTmiMACRO_MEXPAND_OR fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MEXPAND_OR", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5983:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MEXPANDER__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3])) != NULL);


    /*getarg#3*/
    /*^getarg*/
    if (meltxargdescr_[2] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.MODCTX__V5*/
    meltfptr[4] = (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5984:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:5984:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:5984:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5984;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "mexpand_or sexpr";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V7*/
                            meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V6*/
                        meltfptr[5] = /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5984:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V7*/
                        meltfptr[6] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V6*/ meltfptr[5] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:5984:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V6*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5985:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:5985:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V9*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5985:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5985;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                            meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V9*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5985:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V10*/
                        meltfptr[9] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V8*/
            meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5985:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V9*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V8*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5986:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:5986:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V12*/ meltfptr[5] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5986:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5986;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                            meltfptr[12] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V12*/
                        meltfptr[5] = /*_.MELT_ASSERT_FAILURE_FUN__V13*/ meltfptr[12];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5986:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V13*/
                        meltfptr[12] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V11*/
            meltfptr[9] = /*_._IFELSE___V12*/ meltfptr[5];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5986:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V12*/
            meltfptr[5] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V11*/ meltfptr[9] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#NULL__L5*/
        meltfnum[1] =
            ((/*_.MEXPANDER__V4*/ meltfptr[3]) == NULL);;
        MELT_LOCATION("warmelt-macro.melt:5987:/ cond");
        /*cond*/
        if (/*_#NULL__L5*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*^compute*/
                    /*_.MEXPANDER__V4*/ meltfptr[3] = /*_.SETQ___V15*/ meltfptr[5] = (/*!MACROEXPAND_1*/ meltfrout->tabval[4]);;
                    /*_._IF___V14*/
                    meltfptr[12] = /*_.SETQ___V15*/ meltfptr[5];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:5987:/ clear");
                    /*clear*/ /*_.SETQ___V15*/
                    meltfptr[5] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V14*/ meltfptr[12] =  /*reallynil*/ NULL ;;
            }
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:5988:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_OBJECT__L6*/
            meltfnum[0] =
                (melt_magic_discr((melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4])) == MELTOBMAG_OBJECT);;
            MELT_LOCATION("warmelt-macro.melt:5988:/ cond");
            /*cond*/
            if (/*_#IS_OBJECT__L6*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V17*/ meltfptr[16] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:5988:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check modctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 5988;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.MODCTX__V5*/ meltfptr[4];
                            /*_.MELT_ASSERT_FAILURE_FUN__V18*/
                            meltfptr[17] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V17*/
                        meltfptr[16] = /*_.MELT_ASSERT_FAILURE_FUN__V18*/ meltfptr[17];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:5988:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V18*/
                        meltfptr[17] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V16*/
            meltfptr[5] = /*_._IFELSE___V17*/ meltfptr[16];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:5988:/ clear");
            /*clear*/ /*_#IS_OBJECT__L6*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V17*/
            meltfptr[16] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V16*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:5989:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:5990:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V20*/
            meltfptr[16] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:5991:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V21*/
            meltfptr[20] = slot;
        };
        ;
        /*_.LIST_FIRST__V22*/
        meltfptr[21] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V20*/ meltfptr[16])));;
        /*^compute*/
        /*_.PAIR_TAIL__V23*/
        meltfptr[22] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V22*/ meltfptr[21])));;
        MELT_LOCATION("warmelt-macro.melt:5995:/ quasiblock");


        /*^newclosure*/
        /*newclosure*/ /*_.LAMBDA___V25*/
        meltfptr[24] =
            (melt_ptr_t) meltgc_new_closure((meltobject_ptr_t)(((melt_ptr_t)(MELT_PREDEF(DISCR_CLOSURE)))), (meltroutine_ptr_t)((/*!konst_7*/ meltfrout->tabval[7])), (3));
        ;
        /*^putclosedv*/
        /*putclosv*/
        melt_assertmsg("putclosv checkclo", melt_magic_discr((melt_ptr_t)(/*_.LAMBDA___V25*/ meltfptr[24])) == MELTOBMAG_CLOSURE);
        melt_assertmsg("putclosv checkoff", 0>= 0 && 0< melt_closure_size((melt_ptr_t) (/*_.LAMBDA___V25*/ meltfptr[24])));
        ((meltclosure_ptr_t)/*_.LAMBDA___V25*/ meltfptr[24])->tabval[0] = (melt_ptr_t)(/*_.MEXPANDER__V4*/ meltfptr[3]);
        ;
        /*^putclosedv*/
        /*putclosv*/
        melt_assertmsg("putclosv checkclo", melt_magic_discr((melt_ptr_t)(/*_.LAMBDA___V25*/ meltfptr[24])) == MELTOBMAG_CLOSURE);
        melt_assertmsg("putclosv checkoff", 1>= 0 && 1< melt_closure_size((melt_ptr_t) (/*_.LAMBDA___V25*/ meltfptr[24])));
        ((meltclosure_ptr_t)/*_.LAMBDA___V25*/ meltfptr[24])->tabval[1] = (melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]);
        ;
        /*^putclosedv*/
        /*putclosv*/
        melt_assertmsg("putclosv checkclo", melt_magic_discr((melt_ptr_t)(/*_.LAMBDA___V25*/ meltfptr[24])) == MELTOBMAG_CLOSURE);
        melt_assertmsg("putclosv checkoff", 2>= 0 && 2< melt_closure_size((melt_ptr_t) (/*_.LAMBDA___V25*/ meltfptr[24])));
        ((meltclosure_ptr_t)/*_.LAMBDA___V25*/ meltfptr[24])->tabval[2] = (melt_ptr_t)(/*_.MODCTX__V5*/ meltfptr[4]);
        ;
        /*_.LAMBDA___V24*/
        meltfptr[23] = /*_.LAMBDA___V25*/ meltfptr[24];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5992:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[2];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &(/*!DISCR_MULTIPLE*/ meltfrout->tabval[6]);
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.LAMBDA___V24*/ meltfptr[23];
            /*_.CXTUP__V26*/
            meltfptr[25] =  melt_apply ((meltclosure_ptr_t)((/*!PAIRLIST_TO_MULTIPLE*/ meltfrout->tabval[5])), (melt_ptr_t)(/*_.PAIR_TAIL__V23*/ meltfptr[22]), (MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        /*_#NBCOMP__L7*/
        meltfnum[0] =
            (melt_multiple_length((melt_ptr_t)(/*_.CXTUP__V26*/ meltfptr[25])));;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#ltI__L8*/
        meltfnum[7] =
            ((/*_#NBCOMP__L7*/ meltfnum[0]) < (1));;
        MELT_LOCATION("warmelt-macro.melt:6000:/ cond");
        /*cond*/
        if (/*_#ltI__L8*/ meltfnum[7]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-macro.melt:6002:/ locexp");
                        /* error_plain */
                        melt_error_str((melt_ptr_t)(/*_.LOC__V21*/ meltfptr[20]), ( "OR without sons"), (melt_ptr_t)0);
                    }
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:6003:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] = (/*nil*/NULL);;

                    {
                        MELT_LOCATION("warmelt-macro.melt:6003:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-macro.melt:6001:/ quasiblock");


                    /*_.PROGN___V29*/
                    meltfptr[28] = /*_.RETURN___V28*/ meltfptr[27];;
                    /*^compute*/
                    /*_._IFELSE___V27*/
                    meltfptr[26] = /*_.PROGN___V29*/ meltfptr[28];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:6000:/ clear");
                    /*clear*/ /*_.RETURN___V28*/
                    meltfptr[27] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V29*/
                    meltfptr[28] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*^block*/
                /*anyblock*/
                {

                    MELT_LOCATION("warmelt-macro.melt:6004:/ quasiblock");



                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:6005:/ quasiblock");


                    /*^rawallocobj*/
                    /*rawallocobj*/
                    {
                        melt_ptr_t newobj = 0;
                        melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_OR*/ meltfrout->tabval[8])), (3), "CLASS_SOURCE_OR");
                        /*_.INST__V32*/
                        meltfptr[31] =
                            newobj;
                    };
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V32*/ meltfptr[31])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V32*/ meltfptr[31]), (1), (/*_.LOC__V21*/ meltfptr[20]), "LOCA_LOCATION");
                    ;
                    /*^putslot*/
                    /*putslot*/
                    melt_assertmsg("checkobj putslot  _ @SOR_DISJ", melt_magic_discr((melt_ptr_t)(/*_.INST__V32*/ meltfptr[31])) == MELTOBMAG_OBJECT);
                    melt_putfield_object((/*_.INST__V32*/ meltfptr[31]), (2), (/*_.CXTUP__V26*/ meltfptr[25]), "SOR_DISJ");
                    ;
                    /*^touchobj*/

                    melt_dbgtrace_written_object (/*_.INST__V32*/ meltfptr[31], "newly made instance");
                    ;
                    /*_.RES__V31*/
                    meltfptr[28] = /*_.INST__V32*/ meltfptr[31];;

#if MELT_HAVE_DEBUG
                    MELT_LOCATION("warmelt-macro.melt:6008:/ cppif.then");
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                            melt_dbgcounter++;
#endif
                            ;
                        }
                        ;

                        MELT_CHECK_SIGNAL();
                        ;
                        /*_#MELT_NEED_DBG__L9*/
                        meltfnum[8] =
                            /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                            (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                            0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                            ;;
                        MELT_LOCATION("warmelt-macro.melt:6008:/ cond");
                        /*cond*/
                        if (/*_#MELT_NEED_DBG__L9*/ meltfnum[8]) /*then*/
                            {
                                /*^cond.then*/
                                /*^block*/
                                /*anyblock*/
                                {

                                    /*_#MELT_CALLCOUNT__L10*/ meltfnum[9] =
                                        /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                        meltcallcount  /* melt_callcount debugging */
#else
                                        0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                        ;;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-macro.melt:6008:/ apply");
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[5];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L10*/ meltfnum[9];
                                        /*^apply.arg*/
                                        argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                                        /*^apply.arg*/
                                        argtab[2].meltbp_long = 6008;
                                        /*^apply.arg*/
                                        argtab[3].meltbp_cstring =  "mexpand_or res";
                                        /*^apply.arg*/
                                        argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RES__V31*/ meltfptr[28];
                                        /*_.MELT_DEBUG_FUN__V34*/
                                        meltfptr[33] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;
                                    /*_._IF___V33*/
                                    meltfptr[32] = /*_.MELT_DEBUG_FUN__V34*/ meltfptr[33];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-macro.melt:6008:/ clear");
                                    /*clear*/ /*_#MELT_CALLCOUNT__L10*/
                                    meltfnum[9] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.MELT_DEBUG_FUN__V34*/
                                    meltfptr[33] = 0 ;
                                }
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*_._IF___V33*/ meltfptr[32] =  /*reallynil*/ NULL ;;
                            }
                        ;

                        {
                            MELT_LOCATION("warmelt-macro.melt:6008:/ locexp");
                            /*void*/
                            (void)0;
                        }
                        ;
                        /*^quasiblock*/


                        /*epilog*/

                        /*^clear*/
                        /*clear*/ /*_#MELT_NEED_DBG__L9*/
                        meltfnum[8] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_._IF___V33*/
                        meltfptr[32] = 0 ;
                    }

#else /*MELT_HAVE_DEBUG*/
                    /*^cppif.else*/
                    /*^block*/
                    /*anyblock*/
                    {


                        {
                            /*^locexp*/
                            /*void*/(void)0;
                        }
                        ;
                        /*epilog*/
                    }

#endif /*MELT_HAVE_DEBUG*/
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-macro.melt:6009:/ quasiblock");


                    /*_._RETVAL___V1*/
                    meltfptr[0] = /*_.RES__V31*/ meltfptr[28];;

                    {
                        MELT_LOCATION("warmelt-macro.melt:6009:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/
                    goto meltlabend_rout ;
                    /*_.LET___V30*/
                    meltfptr[27] = /*_.RETURN___V35*/ meltfptr[33];;

                    MELT_LOCATION("warmelt-macro.melt:6004:/ clear");
                    /*clear*/ /*_.RES__V31*/
                    meltfptr[28] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.RETURN___V35*/
                    meltfptr[33] = 0 ;
                    /*_._IFELSE___V27*/
                    meltfptr[26] = /*_.LET___V30*/ meltfptr[27];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-macro.melt:6000:/ clear");
                    /*clear*/ /*_.LET___V30*/
                    meltfptr[27] = 0 ;
                }
                ;
            }
        ;
        /*_.LET___V19*/
        meltfptr[17] = /*_._IFELSE___V27*/ meltfptr[26];;

        MELT_LOCATION("warmelt-macro.melt:5989:/ clear");
        /*clear*/ /*_.CONT__V20*/
        meltfptr[16] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.PAIR_TAIL__V23*/
        meltfptr[22] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LAMBDA___V24*/
        meltfptr[23] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CXTUP__V26*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NBCOMP__L7*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_#ltI__L8*/
        meltfnum[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IFELSE___V27*/
        meltfptr[26] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5983:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V19*/ meltfptr[17];;

        {
            MELT_LOCATION("warmelt-macro.melt:5983:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V8*/
        meltfptr[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V11*/
        meltfptr[9] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NULL__L5*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V14*/
        meltfptr[12] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V16*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V19*/
        meltfptr[17] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MEXPAND_OR", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_106_WARMELTmiMACRO_MEXPAND_OR_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_106_WARMELTmiMACRO_MEXPAND_OR*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_107_WARMELTmiMACRO_LAMBDA_cl20(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_107_WARMELTmiMACRO_LAMBDA_cl20_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_107_WARMELTmiMACRO_LAMBDA_cl20 fromline 1718 */

    /** start of frame for meltrout_107_WARMELTmiMACRO_LAMBDA_cl20 of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_107_WARMELTmiMACRO_LAMBDA_cl20// fromline 1534
        : public Melt_CallFrameWithValues<3>
    {
    public: /* fromline 1538*/
// no classy longs
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_107_WARMELTmiMACRO_LAMBDA_cl20(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<3> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_107_WARMELTmiMACRO_LAMBDA_cl20), clos) {};
        MeltFrame_meltrout_107_WARMELTmiMACRO_LAMBDA_cl20() //the constructor fromline 1608
            : Melt_CallFrameWithValues<3> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_107_WARMELTmiMACRO_LAMBDA_cl20)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_107_WARMELTmiMACRO_LAMBDA_cl20(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<3> (fil,lin, sizeof(MeltFrame_meltrout_107_WARMELTmiMACRO_LAMBDA_cl20)) {};
        MeltFrame_meltrout_107_WARMELTmiMACRO_LAMBDA_cl20(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<3> (fil,lin, sizeof(MeltFrame_meltrout_107_WARMELTmiMACRO_LAMBDA_cl20), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_107_WARMELTmiMACRO_LAMBDA_cl20


    /** end of frame for meltrout_107_WARMELTmiMACRO_LAMBDA_cl20 fromline 1663**/

    /* end of frame for routine meltrout_107_WARMELTmiMACRO_LAMBDA_cl20 fromline 1722 */

    /* classy proc frame meltrout_107_WARMELTmiMACRO_LAMBDA_cl20 */
    MeltFrame_meltrout_107_WARMELTmiMACRO_LAMBDA_cl20
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_107_WARMELTmiMACRO_LAMBDA_cl20 fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("LAMBDA_cl20", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:5995:/ getarg");
    /*_.C__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:5996:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &(/*~ENV*/ meltfclos->tabval[1]);
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &(/*~MEXPANDER*/ meltfclos->tabval[0]);
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &(/*~MODCTX*/ meltfclos->tabval[2]);
            /*_.MEXPANDER__V3*/
            meltfptr[2] =  melt_apply ((meltclosure_ptr_t)((/*~MEXPANDER*/ meltfclos->tabval[0])), (melt_ptr_t)(/*_.C__V2*/ meltfptr[1]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;
        MELT_LOCATION("warmelt-macro.melt:5995:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.MEXPANDER__V3*/ meltfptr[2];;

        {
            MELT_LOCATION("warmelt-macro.melt:5995:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.MEXPANDER__V3*/
        meltfptr[2] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("LAMBDA_cl20", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_107_WARMELTmiMACRO_LAMBDA_cl20_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_107_WARMELTmiMACRO_LAMBDA_cl20*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_108_WARMELTmiMACRO_PATEXPAND_OR(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_108_WARMELTmiMACRO_PATEXPAND_OR_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1504

    /* start of frame for routine meltrout_108_WARMELTmiMACRO_PATEXPAND_OR fromline 1718 */

    /** start of frame for meltrout_108_WARMELTmiMACRO_PATEXPAND_OR of CLASS_PROCROUTINEOBJ from 1521**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_108_WARMELTmiMACRO_PATEXPAND_OR// fromline 1534
        : public Melt_CallFrameWithValues<29>
    {
    public: /* fromline 1538*/
        long mcfr_varnum[11];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_108_WARMELTmiMACRO_PATEXPAND_OR(meltclosure_ptr_t clos) //the closure constructor fromline 1596
            : Melt_CallFrameWithValues<29> (
#if ENABLE_CHECKING /*fromline 1600*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1604*/
                sizeof(MeltFrame_meltrout_108_WARMELTmiMACRO_PATEXPAND_OR), clos) {};
        MeltFrame_meltrout_108_WARMELTmiMACRO_PATEXPAND_OR() //the constructor fromline 1608
            : Melt_CallFrameWithValues<29> (
#if ENABLE_CHECKING /*fromline 1612*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1616*/
                sizeof(MeltFrame_meltrout_108_WARMELTmiMACRO_PATEXPAND_OR)) {};
#if ENABLE_CHECKING /*fromline 1620*/
        MeltFrame_meltrout_108_WARMELTmiMACRO_PATEXPAND_OR(const char*fil, int lin) //the constructor fromline 1622
            : Melt_CallFrameWithValues<29> (fil,lin, sizeof(MeltFrame_meltrout_108_WARMELTmiMACRO_PATEXPAND_OR)) {};
        MeltFrame_meltrout_108_WARMELTmiMACRO_PATEXPAND_OR(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1627
            : Melt_CallFrameWithValues<29> (fil,lin, sizeof(MeltFrame_meltrout_108_WARMELTmiMACRO_PATEXPAND_OR), clos) {};
#endif /* ENABLE_CHECKING fromline 1632*/

    }; // end  class MeltFrame_meltrout_108_WARMELTmiMACRO_PATEXPAND_OR


    /** end of frame for meltrout_108_WARMELTmiMACRO_PATEXPAND_OR fromline 1663**/

    /* end of frame for routine meltrout_108_WARMELTmiMACRO_PATEXPAND_OR fromline 1722 */

    /* classy proc frame meltrout_108_WARMELTmiMACRO_PATEXPAND_OR */
    MeltFrame_meltrout_108_WARMELTmiMACRO_PATEXPAND_OR
    meltfram__ /*declfrastruct fromline 1746*/
    /*classyprocarg meltrout_108_WARMELTmiMACRO_PATEXPAND_OR fromline 1751*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1755*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1759*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("PATEXPAND_OR", meltcallcount);
    /*use arguments*/
    (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-macro.melt:6013:/ getarg");
    /*_.SEXPR__V2*/
    meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.ENV__V3*/
    meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.PCTX__V4*/
    meltfptr[3] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.PCTX__V4*/ meltfptr[3])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:6014:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:6014:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:6014:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 6014;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "patexpand_or sexpr=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V6*/
                            meltfptr[5] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V5*/
                        meltfptr[4] = /*_.MELT_DEBUG_FUN__V6*/ meltfptr[5];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:6014:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/
                        meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V6*/
                        meltfptr[5] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V5*/ meltfptr[4] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:6014:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V5*/
            meltfptr[4] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:6015:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L3*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_SEXPR*/ meltfrout->tabval[1])));;
            MELT_LOCATION("warmelt-macro.melt:6015:/ cond");
            /*cond*/
            if (/*_#IS_A__L3*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V8*/ meltfptr[4] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:6015:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check sexpr";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 6015;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.SEXPR__V2*/ meltfptr[1];
                            /*_.MELT_ASSERT_FAILURE_FUN__V9*/
                            meltfptr[8] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V8*/
                        meltfptr[4] = /*_.MELT_ASSERT_FAILURE_FUN__V9*/ meltfptr[8];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:6015:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V9*/
                        meltfptr[8] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V7*/
            meltfptr[5] = /*_._IFELSE___V8*/ meltfptr[4];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:6015:/ clear");
            /*clear*/ /*_#IS_A__L3*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V8*/
            meltfptr[4] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V7*/ meltfptr[5] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:6016:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L4*/
            meltfnum[0] =
                melt_is_instance_of((melt_ptr_t)(/*_.ENV__V3*/ meltfptr[2]), (melt_ptr_t)((/*!CLASS_ENVIRONMENT*/ meltfrout->tabval[3])));;
            MELT_LOCATION("warmelt-macro.melt:6016:/ cond");
            /*cond*/
            if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V11*/ meltfptr[4] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:6016:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check env";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 6016;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
                            /*_.MELT_ASSERT_FAILURE_FUN__V12*/
                            meltfptr[11] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V11*/
                        meltfptr[4] = /*_.MELT_ASSERT_FAILURE_FUN__V12*/ meltfptr[11];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:6016:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V12*/
                        meltfptr[11] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V10*/
            meltfptr[8] = /*_._IFELSE___V11*/ meltfptr[4];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:6016:/ clear");
            /*clear*/ /*_#IS_A__L4*/
            meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V11*/
            meltfptr[4] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V10*/ meltfptr[8] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:6017:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*_#IS_A__L5*/
            meltfnum[1] =
                melt_is_instance_of((melt_ptr_t)(/*_.PCTX__V4*/ meltfptr[3]), (melt_ptr_t)((/*!CLASS_PATTERN_EXPANSION_CONTEXT*/ meltfrout->tabval[4])));;
            MELT_LOCATION("warmelt-macro.melt:6017:/ cond");
            /*cond*/
            if (/*_#IS_A__L5*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V14*/ meltfptr[4] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-macro.melt:6017:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[4];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "check pctx";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 6017;
                            /*^apply.arg*/
                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.PCTX__V4*/ meltfptr[3];
                            /*_.MELT_ASSERT_FAILURE_FUN__V15*/
                            meltfptr[14] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V14*/
                        meltfptr[4] = /*_.MELT_ASSERT_FAILURE_FUN__V15*/ meltfptr[14];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:6017:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V15*/
                        meltfptr[14] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V13*/
            meltfptr[11] = /*_._IFELSE___V14*/ meltfptr[4];;
            /*epilog*/

            MELT_LOCATION("warmelt-macro.melt:6017:/ clear");
            /*clear*/ /*_#IS_A__L5*/
            meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V14*/
            meltfptr[4] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V13*/ meltfptr[11] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-macro.melt:6018:/ quasiblock");


        MELT_LOCATION("warmelt-macro.melt:6019:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 2, "SEXP_CONTENTS");
            /*_.CONT__V17*/
            meltfptr[4] = slot;
        };
        ;
        MELT_LOCATION("warmelt-macro.melt:6020:/ getslot");
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)(/*_.SEXPR__V2*/ meltfptr[1]) /*=obj*/;
            melt_object_get_field(slot,obj, 1, "LOCA_LOCATION");
            /*_.LOC__V18*/
            meltfptr[17] = slot;
        };
        ;
        /*_.LIST_FIRST__V19*/
        meltfptr[18] =
            (melt_list_first((melt_ptr_t)(/*_.CONT__V17*/ meltfptr[4])));;
        /*^compute*/
        /*_.CURPAIR__V20*/
        meltfptr[19] =
            (melt_pair_tail((melt_ptr_t)(/*_.LIST_FIRST__V19*/ meltfptr[18])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:6022:/ apply");
        /*apply*/
        {
            union meltparam_un argtab[3];
            memset(&argtab, 0, sizeof(argtab));
            /*^apply.arg*/
            argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.ENV__V3*/ meltfptr[2];
            /*^apply.arg*/
            argtab[1].meltbp_aptr = (melt_ptr_t*) &/*_.PCTX__V4*/ meltfptr[3];
            /*^apply.arg*/
            argtab[2].meltbp_aptr = (melt_ptr_t*) &/*_.LOC__V18*/ meltfptr[17];
            /*_.ARGSP__V21*/
            meltfptr[20] =  melt_apply ((meltclosure_ptr_t)((/*!PATTERNEXPAND_PAIRLIST_AS_TUPLE*/ meltfrout->tabval[5])), (melt_ptr_t)(/*_.CURPAIR__V20*/ meltfptr[19]), (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:6023:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_SOURCE_PATTERN_OR*/ meltfrout->tabval[6])), (4), "CLASS_SOURCE_PATTERN_OR");
            /*_.INST__V23*/
            meltfptr[22] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @LOCA_LOCATION", melt_magic_discr((melt_ptr_t)(/*_.INST__V23*/ meltfptr[22])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V23*/ meltfptr[22]), (1), (/*_.LOC__V18*/ meltfptr[17]), "LOCA_LOCATION");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @ORPAT_DISJ", melt_magic_discr((melt_ptr_t)(/*_.INST__V23*/ meltfptr[22])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V23*/ meltfptr[22]), (3), (/*_.ARGSP__V21*/ meltfptr[20]), "ORPAT_DISJ");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V23*/ meltfptr[22], "newly made instance");
        ;
        /*_.RES__V22*/
        meltfptr[21] = /*_.INST__V23*/ meltfptr[22];;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:6027:/ quasiblock");


        /*^multiapply*/
        /*multiapply 1args, 3x.res*/
        {

            union meltparam_un restab[3];
            memset(&restab, 0, sizeof(restab));
            /*^multiapply.xres*/
            restab[0].meltbp_longptr =  & /*_#IMAX__L6*/ meltfnum[0];
            /*^multiapply.xres*/
            restab[1].meltbp_longptr =  & /*_#IMIN__L7*/ meltfnum[1];
            /*^multiapply.xres*/
            restab[2].meltbp_longptr =  & /*_#ISUM__L8*/ meltfnum[7];
            /*^multiapply.appl*/
            /*_.SUBPATW__V25*/
            meltfptr[24] =  melt_apply ((meltclosure_ptr_t)((/*!PATTERN_WEIGHT_TUPLE*/ meltfrout->tabval[7])), (melt_ptr_t)(/*_.ARGSP__V21*/ meltfptr[20]), (""), (union meltparam_un*)0, (MELTBPARSTR_LONG MELTBPARSTR_LONG MELTBPARSTR_LONG ""), restab);
        }
        ;
        /*^quasiblock*/



        MELT_CHECK_SIGNAL();
        ;
        /*_#plI__L9*/
        meltfnum[8] =
            ((1) + (/*_#IMIN__L7*/ meltfnum[1]));;
        /*^compute*/
        /*_.MAKE_INTEGERBOX__V26*/
        meltfptr[25] =
            (meltgc_new_int((meltobject_ptr_t)((/*!DISCR_CONSTANT_INTEGER*/ meltfrout->tabval[8])), (/*_#plI__L9*/ meltfnum[8])));;
        MELT_LOCATION("warmelt-macro.melt:6030:/ quasiblock");


        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @PAT_WEIGHT", melt_magic_discr((melt_ptr_t)(/*_.RES__V22*/ meltfptr[21])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.RES__V22*/ meltfptr[21]), (2), (/*_.MAKE_INTEGERBOX__V26*/ meltfptr[25]), "PAT_WEIGHT");
        ;
        /*^touch*/
        meltgc_touch(/*_.RES__V22*/ meltfptr[21]);
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.RES__V22*/ meltfptr[21], "put-fields");
        ;


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-macro.melt:6033:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L10*/
            meltfnum[9] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-macro.melt:6033:/ cond");
            /*cond*/
            if (/*_#MELT_NEED_DBG__L10*/ meltfnum[9]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L11*/ meltfnum[10] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-macro.melt:6033:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L11*/ meltfnum[10];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-macro.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 6033;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "patexpand_or res";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.RES__V22*/ meltfptr[21];
                            /*_.MELT_DEBUG_FUN__V28*/
                            meltfptr[27] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V27*/
                        meltfptr[26] = /*_.MELT_DEBUG_FUN__V28*/ meltfptr[27];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-macro.melt:6033:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L11*/
                        meltfnum[10] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V28*/
                        meltfptr[27] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V27*/ meltfptr[26] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-macro.melt:6033:/ locexp");
                /*void*/
                (void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L10*/
            meltfnum[9] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V27*/
            meltfptr[26] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:6034:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.RES__V22*/ meltfptr[21];;

        {
            MELT_LOCATION("warmelt-macro.melt:6034:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;

        MELT_CHECK_SIGNAL();
        ;
        /*_.MULTI___V24*/
        meltfptr[23] = /*_.RETURN___V29*/ meltfptr[27];;

        MELT_LOCATION("warmelt-macro.melt:6027:/ clear");
        /*clear*/ /*_#plI__L9*/
        meltfnum[8] = 0 ;
        /*^clear*/
        /*clear*/ /*_.MAKE_INTEGERBOX__V26*/
        meltfptr[25] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V29*/
        meltfptr[27] = 0 ;

        /*^clear*/
        /*clear*/ /*_#IMAX__L6*/
        meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IMIN__L7*/
        meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_#ISUM__L8*/
        meltfnum[7] = 0 ;
        /*_.LET___V16*/
        meltfptr[14] = /*_.MULTI___V24*/ meltfptr[23];;

        MELT_LOCATION("warmelt-macro.melt:6018:/ clear");
        /*clear*/ /*_.CONT__V17*/
        meltfptr[4] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LOC__V18*/
        meltfptr[17] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LIST_FIRST__V19*/
        meltfptr[18] = 0 ;
        /*^clear*/
        /*clear*/ /*_.CURPAIR__V20*/
        meltfptr[19] = 0 ;
        /*^clear*/
        /*clear*/ /*_.ARGSP__V21*/
        meltfptr[20] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RES__V22*/
        meltfptr[21] = 0 ;
        /*^clear*/
        /*clear*/ /*_.MULTI___V24*/
        meltfptr[23] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-macro.melt:6013:/ quasiblock");


        /*_._RETVAL___V1*/
        meltfptr[0] = /*_.LET___V16*/ meltfptr[14];;

        {
            MELT_LOCATION("warmelt-macro.melt:6013:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/
        goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V7*/
        meltfptr[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V10*/
        meltfptr[8] = 0 ;
        /*^clear*/
        /*clear*/ /*_.IFCPP___V13*/
        meltfptr[11] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LET___V16*/
        meltfptr[14] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("PATEXPAND_OR", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_108_WARMELTmiMACRO_PATEXPAND_OR_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_108_WARMELTmiMACRO_PATEXPAND_OR*/



/**** end of warmelt-macro+04.cc ****/
