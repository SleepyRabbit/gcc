/* { dg-do compile } */
/* { dg-options "-mavx2 -O0" } */
/* { dg-final { scan-assembler "vpblendd\[ \\t\]+\[^\n\]*" } } */

#include <immintrin.h>

__m128i x;

void static
avx2_test (void)
{
  x = _mm_blend_epi32 (x, x, 13);
}
