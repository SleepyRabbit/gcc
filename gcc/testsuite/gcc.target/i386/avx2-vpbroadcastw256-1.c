/* { dg-do compile } */
/* { dg-options "-mavx2 -O0" } */
/* { dg-final { scan-assembler "vpbroadcastw\[ \\t\]+\[^\n\]*%ymm\[0-9\]" } } */

#include <immintrin.h>

__m128i x;
__m256i y;

void static
avx2_test (void)
{
  y = _mm256_broadcastw_epi16 (x);
}
