/* { dg-do compile } */
/* { dg-options "-mavx2 -O0" } */
/* { dg-final { scan-assembler "vpmovsxdq\[ \\t\]+\[^\n\]*%ymm\[0-9\]" } } */

#include <immintrin.h>

__m128i x;
__m256i res;

void static
avx2_test (void)
{
  res = _mm256_cvtepi32_epi64 (x);
}
