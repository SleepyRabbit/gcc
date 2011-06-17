/* { dg-do compile } */
/* { dg-options "-mavx2 -O0" } */
/* { dg-final { scan-assembler "vpsrld\[ \\t\]+\[^\n\]*%ymm\[0-9\]" } } */

#include <immintrin.h>

__m256i x;
__m128i y;

void extern
avx2_test (void)
{
  x = _mm256_srl_epi32 (x, y);
}
