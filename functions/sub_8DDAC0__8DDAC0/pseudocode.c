int __cdecl sub_8DDAC0(__m128 *a1, int a2)
{
  double v3; // st7
  __m128 v4; // xmm0

  *(_OWORD *)(a2 + 0x90) = 0; /*0x8ddacf*/
  *(__m128 *)(a2 + 0x30) = *a1; /*0x8ddad9*/
  v3 = *(float *)(a2 + 0x4C); /*0x8ddadd*/
  v4 = _mm_add_ps( /*0x8ddb1c*/
         *a1,
         _mm_add_ps(
           _mm_add_ps(
             _mm_mul_ps(*(__m128 *)a2, _mm_shuffle_ps(*(__m128 *)(a2 + 0x80), *(__m128 *)(a2 + 0x80), 0)),
             _mm_mul_ps(*(__m128 *)(a2 + 0x10), _mm_shuffle_ps(*(__m128 *)(a2 + 0x80), *(__m128 *)(a2 + 0x80), 0x55))),
           _mm_mul_ps(*(__m128 *)(a2 + 0x20), _mm_shuffle_ps(*(__m128 *)(a2 + 0x80), *(__m128 *)(a2 + 0x80), 0xAA))));
  *(__m128 *)(a2 + 0x40) = v4; /*0x8ddb1f*/
  *(float *)(a2 + 0x4C) = v3; /*0x8ddb23*/
  *(__m128 *)(a2 + 0x50) = v4; /*0x8ddb26*/
  *(_OWORD *)(a2 + 0x60) = *(_OWORD *)(a2 + 0x70); /*0x8ddb2e*/
  *(_DWORD *)(a2 + 0x5C) = 0; /*0x8ddb32*/
  return a2; /*0x8ddb3b*/
}
