__m128 *__cdecl sub_8DD970(__m128 *a1, float *a2, int a3)
{
  double v4; // st7
  __m128 v5; // xmm0

  *(_OWORD *)(a3 + 0x90) = 0; /*0x8dd983*/
  *(_OWORD *)(a3 + 0x60) = *(_OWORD *)a2; /*0x8dd98d*/
  *(_OWORD *)(a3 + 0x70) = *(_OWORD *)a2; /*0x8dd997*/
  hkMatrix3_SetFromQuaternion((float *)a3, a2); /*0x8dd99b*/
  *(__m128 *)(a3 + 0x30) = *a1; /*0x8dd9a6*/
  v4 = *(float *)(a3 + 0x4C); /*0x8dd9aa*/
  v5 = _mm_add_ps( /*0x8dd9e9*/
         *a1,
         _mm_add_ps(
           _mm_add_ps(
             _mm_mul_ps(*(__m128 *)a3, _mm_shuffle_ps(*(__m128 *)(a3 + 0x80), *(__m128 *)(a3 + 0x80), 0)),
             _mm_mul_ps(*(__m128 *)(a3 + 0x10), _mm_shuffle_ps(*(__m128 *)(a3 + 0x80), *(__m128 *)(a3 + 0x80), 0x55))),
           _mm_mul_ps(*(__m128 *)(a3 + 0x20), _mm_shuffle_ps(*(__m128 *)(a3 + 0x80), *(__m128 *)(a3 + 0x80), 0xAA))));
  *(__m128 *)(a3 + 0x40) = v5; /*0x8dd9ec*/
  *(__m128 *)(a3 + 0x50) = v5; /*0x8dd9f0*/
  *(float *)(a3 + 0x4C) = v4; /*0x8dd9f4*/
  *(_DWORD *)(a3 + 0x5C) = 0; /*0x8dd9f7*/
  return a1; /*0x8dd9fe*/
}
