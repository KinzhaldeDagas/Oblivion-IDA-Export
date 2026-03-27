__m128 *__cdecl sub_8CDF30(__m128 *a1, __m128 *a2, unsigned int a3, __m128 *a4)
{
  __m128 v4; // xmm0
  __m128 v5; // xmm2
  __m128 v7; // xmm0
  __m128 v8; // xmm1

  v4 = *a2;
  v5 = a1[3];
  v7 = _mm_add_ps(
         _mm_add_ps(
           _mm_and_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), *a1), (__m128)xmmword_A372D0),
           _mm_and_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 0x55), a1[1]), (__m128)xmmword_A372D0)),
         _mm_add_ps(
           _mm_and_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 0xAA), a1[2]), (__m128)xmmword_A372D0),
           _mm_shuffle_ps((__m128)a3, (__m128)a3, 0)));
  v8 = _mm_add_ps(_mm_xor_ps(v7, (__m128)xmmword_A965C0), v5);
  a4[1] = _mm_add_ps(v7, v5);
  *a4 = v8;
  return a4;
}
