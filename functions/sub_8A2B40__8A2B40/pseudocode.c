__m128 *__thiscall sub_8A2B40(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 v4; // xmm0
  __m128 v5; // xmm1
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __m128 v8; // xmm1
  __m128 v9; // xmm0

  v4 = _mm_sub_ps( /*0x8a2b81*/
         _mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 0xC9), _mm_shuffle_ps(*a2, *a2, 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 0xD2), _mm_shuffle_ps(*a2, *a2, 0xC9)));
  *this = v4; /*0x8a2b84*/
  v5 = _mm_shuffle_ps(*a2, *a2, 0xFF); /*0x8a2b8a*/
  v6 = _mm_sub_ps(v4, _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), *a3)); /*0x8a2b9b*/
  *this = v6; /*0x8a2b9e*/
  v7 = _mm_shuffle_ps(*a3, *a3, 0xFF); /*0x8a2ba4*/
  *this = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *a2), v6); /*0x8a2bb8*/
  v8 = _mm_mul_ps(*a3, *a2); /*0x8a2bc5*/
  v9 = _mm_add_ps(_mm_shuffle_ps(v8, v8, 0x4E), v8); /*0x8a2bcf*/
  this->m128_f32[3] = _mm_shuffle_ps(v9, v9, 0xB1).m128_f32[0] + v9.m128_f32[0]; /*0x8a2be8*/
  return this; /*0x8a2beb*/
}
