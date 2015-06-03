/* Test the `vpaddlu32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vpaddlu32 (void)
{
  uint64x1_t out_uint64x1_t;
  uint32x2_t arg0_uint32x2_t;

  out_uint64x1_t = vpaddl_u32 (arg0_uint32x2_t);
}

/* { dg-final { scan-assembler "vpaddl\.u32\[ 	\]+\[dD\]\[0-9\]+, \[dD\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
