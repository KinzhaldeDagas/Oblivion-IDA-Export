__m128 *__cdecl sub_8F00E0(__m128 *a1, __m128 *a2, __m128 *a3, unsigned int a4, __m128 *a5)
{
  __m128 v5; // xmm0
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  __m128 v11; // xmm2

  v5 = *a2; /*0x8f00ef*/
  v6 = a1[2]; /*0x8f00f2*/
  v7 = a1[1]; /*0x8f0103*/
  v9 = _mm_add_ps( /*0x8f0152*/
         _mm_add_ps(
           _mm_and_ps(_mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), *a1), (__m128)xmmword_A372D0),
           _mm_and_ps(_mm_mul_ps(_mm_shuffle_ps(v5, v5, 0x55), v7), (__m128)xmmword_A372D0)),
         _mm_add_ps(
           _mm_and_ps(_mm_mul_ps(_mm_shuffle_ps(v5, v5, 0xAA), v6), (__m128)xmmword_A372D0),
           _mm_shuffle_ps((__m128)a4, (__m128)a4, 0)));
  v10 = _mm_add_ps( /*0x8f017c*/
          _mm_add_ps(_mm_mul_ps(*a1, _mm_shuffle_ps(*a3, *a3, 0)), _mm_mul_ps(v7, _mm_shuffle_ps(*a3, *a3, 0x55))),
          _mm_add_ps(_mm_mul_ps(v6, _mm_shuffle_ps(*a3, *a3, 0xAA)), a1[3]));
  v11 = _mm_add_ps(_mm_xor_ps(v9, (__m128)xmmword_A965C0), v10); /*0x8f018f*/
  a5[1] = _mm_add_ps(v9, v10); /*0x8f0195*/
  *a5 = v11; /*0x8f0199*/
  return a5; /*0x8f019c*/
}
