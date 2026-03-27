double __usercall start_11_::VERY_SMALL_OR_LARGE@<st0>(
        int a1@<eax>,
        double a2@<xmm0>,
        __m128d a3@<xmm1>,
        __m128d a4@<xmm7>)
{
  __m128d v4; // xmm7
  __m128d v5; // xmm1
  __m128d v6; // xmm7
  __m128d v7; // xmm1
  __m128i v8; // xmm1
  double result; // st7

  if ( (unsigned int)(a1 + 0x3BBB) >= 0x3800 )
  {
    start_11_::VERY_LARGE();
  }
  else
  {
    v4 = _mm_unpacklo_pd(a4, a4);
    v5 = _mm_unpacklo_pd(a3, v4);
    v6 = _mm_mul_pd(v4, v4);
    v7 = _mm_mul_pd(v5, v6);
    v7.m128d_f64[0] = v7.m128d_f64[0] * v7.m128d_f64[0] * v7.m128d_f64[0];
    v8 = (__m128i)_mm_mul_pd(
                    v7,
                    _mm_add_pd(
                      _mm_add_pd(_mm_mul_pd((__m128d)xmmword_AA7FC0, v6), (__m128d)xmmword_AA7FD0),
                      _mm_mul_pd((__m128d)xmmword_AA7FE0, _mm_mul_pd(v6, v6))));
    return a2 + *(double *)v8.m128i_i64 + *(double *)_mm_shuffle_epi32(v8, 0xEE).m128i_i64;
  }
  return result;
}
