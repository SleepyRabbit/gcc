/* { dg-do compile } */
/* { dg-options "-mavx2 -O0" } */
/* { dg-final { scan-assembler "vphsubw\[ \\t\]+\[^\n\]*%ymm\[0-9\]" } } */

#include <immintrin.h>

__m256i x;

void static
avx2_test (void)
{
  x = _mm256_hsub_epi16(x, x);
}
