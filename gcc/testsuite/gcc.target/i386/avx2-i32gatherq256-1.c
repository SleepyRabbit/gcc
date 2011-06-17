/* { dg-do compile } */
/* { dg-options "-mavx2 -O0" } */
/* { dg-final { scan-assembler "vpgatherdq\[ \\t\]+\[^\n\]*%ymm\[0-9\]" } } */

#include <immintrin.h>

__m256i x;
int *base;
__m128i idx;

void extern
avx2_test (void)
{
  x = _mm256_i32gather_epi64 (base, idx, 1);
}
