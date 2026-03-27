double __usercall start_11_::VERY_LARGE@<st0>(
        int a1@<eax>,
        double a2@<xmm0>,
        double a3@<xmm1>,
        __m128i a4@<xmm3>,
        __m128i a5@<xmm7>)
{
  unsigned __int16 epi16; // ax
  __m128i v6; // xmm5
  double v7; // xmm0_8
  double v8; // xmm6_8
  double v9; // xmm3_8
  double v10; // xmm6_8
  double v11; // xmm4_8
  __m128i v12; // xmm3
  __m128i v13; // xmm7
  double v14; // xmm4_8
  __m128d v15; // xmm6
  double v16; // xmm4_8
  __m128i v17; // xmm1
  __m128d v18; // xmm7
  __m128d v19; // xmm2
  __m128i v20; // xmm7
  double result; // st7

  if ( (unsigned int)(a1 - 0x3BFE) >= 2 )
  {
    start_11_::RETURN_INVALID();
  }
  else
  {
    *(double *)a4.m128i_i64 = sqrt(*(double *)a4.m128i_i64 - a3 * a3);
    epi16 = _mm_extract_epi16(a5, 3);
    v6 = _mm_shuffle_epi32(a4, 0x44);
    v7 = a2 - COERCE_DOUBLE(a5.m128i_i64[0] & 0xFFFFFFFFF8000000uLL);
    *(_QWORD *)&v8 = a4.m128i_i64[0] & 0xFFFFFFFFF8000000uLL;
    v9 = v8 * v8;
    v10 = v8 - *(double *)v6.m128i_i64;
    *(double *)v6.m128i_i64 = *(double *)v6.m128i_i64 + *(double *)v6.m128i_i64;
    v11 = 1.0
        - COERCE_DOUBLE(a5.m128i_i64[0] & 0xFFFFFFFFF8000000uLL)
        * COERCE_DOUBLE(a5.m128i_i64[0] & 0xFFFFFFFFF8000000uLL)
        - (COERCE_DOUBLE(a5.m128i_i64[0] & 0xFFFFFFFFF8000000uLL)
         + COERCE_DOUBLE(a5.m128i_i64[0] & 0xFFFFFFFFF8000000uLL))
        * v7
        - v9;
    v12 = _mm_shuffle_epi32(v6, 0xEE);
    v13 = _mm_shuffle_epi32(v12, 0xEE);
    v14 = v11 - v7 * v7 + (*(double *)v6.m128i_i64 + v10) * v10;
    v15 = (__m128d)_mm_shuffle_epi32(v13, 0xEE);
    v16 = v14 / (*(double *)v12.m128i_i64 + *(double *)v12.m128i_i64);
    v17.m128i_i64[1] = 0x3F8C99999999999ALL;
    v18 = _mm_mul_pd((__m128d)v13, (__m128d)v13);
    *(double *)v12.m128i_i64 = v15.m128d_f64[0];
    *(double *)v17.m128i_i64 = 0.01155180089613689 * v18.m128d_f64[0];
    v19 = _mm_mul_pd(v15, v18);
    v15.m128d_f64[0] = v19.m128d_f64[0] * v19.m128d_f64[0];
    v19.m128d_f64[0] = v19.m128d_f64[0] * (v19.m128d_f64[0] * v19.m128d_f64[0]);
    v20 = (__m128i)_mm_mul_pd(
                     _mm_add_pd(
                       _mm_mul_pd(_mm_mul_pd(v18, v18), (__m128d)xmmword_AA7FE0),
                       _mm_add_pd((__m128d)xmmword_AA7FD0, _mm_mul_pd((__m128d)xmmword_AA7FC0, v18))),
                     v19);
    *(double *)v17.m128i_i64 = (*(double *)v17.m128i_i64 + *(double *)_mm_shuffle_epi32(v17, 0xEE).m128i_i64)
                             * (v15.m128d_f64[0]
                              * v19.m128d_f64[0]);
    v15.m128d_f64[0] = *(double *)_mm_shuffle_epi32((__m128i)xmmword_AA7F70, 0xEE).m128i_i64;
    *(_QWORD *)&result = COERCE_UNSIGNED_INT64(
                           *(double *)v17.m128i_i64
                         + 6.123233995736766e-17
                         - (*(double *)v20.m128i_i64
                          + *(double *)_mm_shuffle_epi32(v20, 0xEE).m128i_i64
                          + v16)
                         - (*(double *)v12.m128i_i64
                          - (v15.m128d_f64[0]
                           + *(double *)v12.m128i_i64
                           - v15.m128d_f64[0]))
                         - (*(double *)v12.m128i_i64
                          - v15.m128d_f64[0]))
                       | _mm_insert_epi16((__m128i)0LL, epi16 & 0x8000, 3).m128i_u64[0];
  }
  return result;
}
