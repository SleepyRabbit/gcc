/* { dg-do compile } */
/* { dg-options "-mavx2 -O0" } */
/* { dg-final { scan-assembler "vpsrlvd\[ \\t\]+\[^\n\]*%xmm\[0-9\]" } } */

#include <immintrin.h>

__m128i x;

void extern
avx2_test (void)
{
  x = _mm_srlv_epi32 (x, x);
}
