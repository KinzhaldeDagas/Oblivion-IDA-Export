__m128 *__thiscall sub_889470(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm0
  __m128 v5; // xmm1
  __m128 v6; // xmm3
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm0
  double v10; // st7

  v3 = *a3; /*0x889487*/
  v5 = *a2; /*0x88948f*/
  v6 = _mm_shuffle_ps(v5, v5, 0xFF); /*0x8894d4*/
  v7 = _mm_add_ps( /*0x8894df*/
         _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), *a3),
         _mm_sub_ps(
           _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0xD2), _mm_shuffle_ps(v5, v5, 0xC9)),
           _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0xC9), _mm_shuffle_ps(v5, v5, 0xD2))));
  v8 = _mm_shuffle_ps(v3, v3, 0xFF); /*0x8894e5*/
  v9 = _mm_mul_ps(*a3, *a2); /*0x8894e9*/
  v10 = a2->m128_f32[3] * a3->m128_f32[3] /*0x889508*/
      - (float)(_mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]));
  *this = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), *a2), v7); /*0x889519*/
  this->m128_f32[3] = v10; /*0x88951c*/
  return this; /*0x88951f*/
}
