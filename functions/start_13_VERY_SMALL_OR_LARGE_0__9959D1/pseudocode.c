double __usercall start_13_::VERY_SMALL_OR_LARGE_0@<st0>(
        int a1@<eax>,
        __m128d a2@<xmm0>,
        __m128d a3@<xmm1>,
        double a4@<xmm7>,
        __m128i a5@<xmm4>)
{
  unsigned int v5; // eax
  __m128d v6; // xmm0
  __m128d v7; // xmm1
  __m128d v8; // xmm0
  __m128d v9; // xmm1
  __m128d v10; // xmm6
  __m128i v11; // xmm1

  v5 = a1 + 0x3BBB; /*0x9959d1*/
  if ( v5 >= 0x3800 ) /*0x9959db*/
    return start_13_::VERY_LARGE_0(v5, (__m128i)a2, a5, a4); /*0x9959db*/
  v6 = _mm_unpacklo_pd(a2, a2); /*0x9959e1*/
  v7 = _mm_unpacklo_pd(a3, v6); /*0x9959ed*/
  v8 = _mm_mul_pd(v6, v6); /*0x995a01*/
  v9 = _mm_mul_pd(v7, v8); /*0x995a10*/
  v9.m128d_f64[0] = v9.m128d_f64[0] * v9.m128d_f64[0] * v9.m128d_f64[0]; /*0x995a2c*/
  v10 = _mm_add_pd( /*0x995a30*/
          _mm_add_pd(_mm_mul_pd((__m128d)xmmword_AADA30, v8), (__m128d)xmmword_AADA40),
          _mm_mul_pd((__m128d)xmmword_AADA50, _mm_mul_pd(v8, v8)));
  v8.m128d_f64[0] = *(double *)_mm_shuffle_epi32((__m128i)xmmword_AAD9B0, 0xEE).m128i_i64; /*0x995a34*/
  v11 = (__m128i)_mm_mul_pd(v9, v10); /*0x995a39*/
  return v8.m128d_f64[0] /*0x995a70*/
       - a4
       + 6.123233995736766e-17
       - *(double *)v11.m128i_i64
       - *(double *)_mm_shuffle_epi32(v11, 0xEE).m128i_i64
       - (a4
        - (v8.m128d_f64[0]
         - (v8.m128d_f64[0]
          - a4)));
}
