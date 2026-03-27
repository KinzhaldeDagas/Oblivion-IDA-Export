double __usercall start_13_::VERY_SMALL_OR_LARGE_0@<st0>(
        int a1@<eax>,
        __m128d a2@<xmm0>,
        __m128d a3@<xmm1>,
        double a4@<xmm7>)
{
  __m128d v4; // xmm0
  __m128d v5; // xmm1
  __m128d v6; // xmm0
  __m128d v7; // xmm1
  __m128d v8; // xmm6
  __m128i v9; // xmm1
  double result; // st7

  if ( (unsigned int)(a1 + 0x3BBB) >= 0x3800 )
  {
    start_13_::VERY_LARGE_0();
  }
  else
  {
    v4 = _mm_unpacklo_pd(a2, a2);
    v5 = _mm_unpacklo_pd(a3, v4);
    v6 = _mm_mul_pd(v4, v4);
    v7 = _mm_mul_pd(v5, v6);
    v7.m128d_f64[0] = v7.m128d_f64[0] * v7.m128d_f64[0] * v7.m128d_f64[0];
    v8 = _mm_add_pd(
           _mm_add_pd(_mm_mul_pd((__m128d)xmmword_AADA30, v6), (__m128d)xmmword_AADA40),
           _mm_mul_pd((__m128d)xmmword_AADA50, _mm_mul_pd(v6, v6)));
    v6.m128d_f64[0] = *(double *)_mm_shuffle_epi32((__m128i)xmmword_AAD9B0, 0xEE).m128i_i64;
    v9 = (__m128i)_mm_mul_pd(v7, v8);
    return v6.m128d_f64[0]
         - a4
         + 6.123233995736766e-17
         - *(double *)v9.m128i_i64
         - *(double *)_mm_shuffle_epi32(v9, 0xEE).m128i_i64
         - (a4
          - (v6.m128d_f64[0]
           - (v6.m128d_f64[0]
            - a4)));
  }
  return result;
}
