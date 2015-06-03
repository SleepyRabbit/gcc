/* Test the `vzipu8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vzipu8 (void)
{
  uint8x8x2_t out_uint8x8x2_t;
  uint8x8_t arg0_uint8x8_t;
  uint8x8_t arg1_uint8x8_t;

  out_uint8x8x2_t = vzip_u8 (arg0_uint8x8_t, arg1_uint8x8_t);
}

/* { dg-final { scan-assembler "vzip\.8\[ 	\]+\[dD\]\[0-9\]+, \[dD\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
