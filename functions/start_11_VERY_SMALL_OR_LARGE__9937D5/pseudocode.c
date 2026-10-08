double __usercall start_11_::VERY_SMALL_OR_LARGE@<st0>(
        int a1@<eax>,
        double a2@<xmm0>,
        __m128d a3@<xmm1>,
        __m128d a4@<xmm7>,
        __m128i a5@<xmm3>)
{
  unsigned int v5; // eax
  __m128d v6; // xmm7
  __m128d v7; // xmm1
  __m128d v8; // xmm7
  __m128d v9; // xmm1
  __m128i v10; // xmm1

  v5 = a1 + 0x3BBB; /*0x9937d5*/
  if ( v5 >= 0x3800 ) /*0x9937df*/
    return start_11_::VERY_LARGE(v5, a2, a3.m128d_f64[0], a5, (__m128i)a4); /*0x9937df*/
  v6 = _mm_unpacklo_pd(a4, a4); /*0x9937e1*/
  v7 = _mm_unpacklo_pd(a3, v6); /*0x9937ed*/
  v8 = _mm_mul_pd(v6, v6); /*0x993801*/
  v9 = _mm_mul_pd(v7, v8); /*0x993808*/
  v9.m128d_f64[0] = v9.m128d_f64[0] * v9.m128d_f64[0] * v9.m128d_f64[0]; /*0x993824*/
  v10 = (__m128i)_mm_mul_pd( /*0x99382c*/
                   v9,
                   _mm_add_pd(
                     _mm_add_pd(_mm_mul_pd((__m128d)xmmword_AA7FC0, v8), (__m128d)xmmword_AA7FD0),
                     _mm_mul_pd((__m128d)xmmword_AA7FE0, _mm_mul_pd(v8, v8))));
  return a2 + *(double *)v10.m128i_i64 + *(double *)_mm_shuffle_epi32(v10, 0xEE).m128i_i64; /*0x99384a*/
}
