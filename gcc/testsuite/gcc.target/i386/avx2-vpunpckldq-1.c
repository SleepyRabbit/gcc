/* { dg-do compile } */
/* { dg-options "-mavx2 -O0" } */
/* { dg-final { scan-assembler "vpunpckldq\[ \\t\]+\[^\n\]*%ymm\[0-9\]" } } */

#include <immintrin.h>

__m256i x;

void static
avx2_test (void)
{
  x = _mm256_unpacklo_epi32 (x, x);
}
