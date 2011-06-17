/* { dg-do compile } */
/* { dg-options "-mavx2 -O0" } */
/* { dg-final { scan-assembler "vmovntdqa\[ \\t\]+\[^\n\]*%ymm\[0-9\]" } } */

#include <immintrin.h>

__m256i x;
__m256i *y;

void static
avx2_test (void)
{
  x = _mm256_stream_load_si256 (y);
}
