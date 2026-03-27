int __cdecl sub_8DDAC0(__m128 *a1, int a2)
{
  double v3; // st7
  __m128 v4; // xmm0

  *(_OWORD *)(a2 + 0x90) = 0;
  *(__m128 *)(a2 + 0x30) = *a1;
  v3 = *(float *)(a2 + 0x4C);
  v4 = _mm_add_ps(
         *a1,
         _mm_add_ps(
           _mm_add_ps(
             _mm_mul_ps(*(__m128 *)a2, _mm_shuffle_ps(*(__m128 *)(a2 + 0x80), *(__m128 *)(a2 + 0x80), 0)),
             _mm_mul_ps(*(__m128 *)(a2 + 0x10), _mm_shuffle_ps(*(__m128 *)(a2 + 0x80), *(__m128 *)(a2 + 0x80), 0x55))),
           _mm_mul_ps(*(__m128 *)(a2 + 0x20), _mm_shuffle_ps(*(__m128 *)(a2 + 0x80), *(__m128 *)(a2 + 0x80), 0xAA))));
  *(__m128 *)(a2 + 0x40) = v4;
  *(float *)(a2 + 0x4C) = v3;
  *(__m128 *)(a2 + 0x50) = v4;
  *(_OWORD *)(a2 + 0x60) = *(_OWORD *)(a2 + 0x70);
  *(_DWORD *)(a2 + 0x5C) = 0;
  return a2;
}
