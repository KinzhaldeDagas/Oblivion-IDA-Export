bool *__fastcall sub_8F3FA0(_DWORD *a1, bool *a2, _DWORD *a3)
{
  __m128 v3; // xmm2
  __m128 v4; // xmm0
  __m128 v5; // xmm1
  __m128 v6; // xmm0

  v3 = *(__m128 *)(0x10 * *a1 + *a3); /*0x8f3fb4*/
  v4 = _mm_sub_ps(*(__m128 *)(0x10 * a1[1] + *a3), v3); /*0x8f3fc5*/
  v5 = _mm_sub_ps(*(__m128 *)(0x10 * a1[2] + *a3), v3); /*0x8f3fcf*/
  v6 = _mm_mul_ps( /*0x8f3ffa*/
         _mm_sub_ps(
           _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0xC9), _mm_shuffle_ps(v5, v5, 0xD2)),
           _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0xD2), _mm_shuffle_ps(v5, v5, 0xC9))),
         v3);
  *a2 = (float)(_mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0] /*0x8f4039*/
              + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0])) > (double)*(float *)&SrcStr;
  return a2; /*0x8f4032*/
}
