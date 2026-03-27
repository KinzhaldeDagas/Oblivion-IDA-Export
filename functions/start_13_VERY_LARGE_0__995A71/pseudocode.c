double __usercall start_13_::VERY_LARGE_0@<st0>(int a1@<eax>, __m128i a2@<xmm0>, __m128i a3@<xmm4>, double a4@<xmm7>)
{
  __m128i v4; // xmm7
  __m128d v5; // xmm1
  __m128d v6; // xmm5
  unsigned __int16 epi16; // ax
  __m128d v8; // xmm7
  __m128d v9; // xmm2
  __m128i v10; // xmm0
  __m128d v11; // xmm2
  __m128i v12; // xmm3
  double v13; // xmm4_8
  double v14; // xmm4_8
  __m128d v15; // xmm3
  __m128d v16; // xmm3
  __m128i v17; // xmm2
  double result; // st7

  if ( (unsigned int)(a1 - 0x3BFC) >= 4 )
  {
    start_13_::RETURN_INVALID_0();
  }
  else
  {
    *(double *)a3.m128i_i64 = 0.5 - fabs(a4) * 0.5;
    v4 = _mm_shuffle_epi32(a3, 0x44);
    *(double *)a3.m128i_i64 = sqrt(*(double *)a3.m128i_i64);
    v5 = _mm_mul_pd((__m128d)xmmword_AADA30, (__m128d)v4);
    v6 = (__m128d)_mm_shuffle_epi32(v4, 0x44);
    epi16 = _mm_extract_epi16(a2, 3);
    v8 = _mm_mul_pd((__m128d)v4, (__m128d)v4);
    v9 = _mm_add_pd(_mm_add_pd((__m128d)xmmword_AADA40, v5), _mm_mul_pd((__m128d)xmmword_AADA50, v8));
    v9.m128d_f64[0] = v9.m128d_f64[0] * (v8.m128d_f64[0] * v6.m128d_f64[0]);
    v10 = (__m128i)_mm_and_pd(
                     (__m128d)_mm_shuffle_epi32((__m128i)_mm_cmplt_sd((__m128d)a2, (__m128d)0LL), 0x44),
                     (__m128d)xmmword_AAD9C0);
    v11 = _mm_mul_pd(v9, v6);
    *(_QWORD *)&v5.m128d_f64[0] = COERCE_UNSIGNED_INT64(NAN) & a3.m128i_i64[0];
    v12 = _mm_shuffle_epi32(a3, 0x44);
    v13 = *(double *)a3.m128i_i64 - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(NAN) & a3.m128i_i64[0]);
    *(double *)v12.m128i_i64 = *(double *)v12.m128i_i64 + *(double *)v12.m128i_i64 - v13;
    v14 = v13 * *(double *)v12.m128i_i64;
    v15 = (__m128d)_mm_shuffle_epi32(v12, 0xEE);
    v6.m128d_f64[0] = (v6.m128d_f64[0] - v5.m128d_f64[0] * v5.m128d_f64[0] - v14) / v15.m128d_f64[0];
    v16 = _mm_add_pd(v15, v15);
    v17 = (__m128i)_mm_mul_pd(v11, v16);
    *(_QWORD *)&result = COERCE_UNSIGNED_INT64(
                           *(double *)_mm_shuffle_epi32(v10, 0xEE).m128i_i64
                         + *(double *)v17.m128i_i64
                         + *(double *)v10.m128i_i64
                         + *(double *)_mm_shuffle_epi32(v17, 0xEE).m128i_i64
                         + v6.m128d_f64[0]
                         + v16.m128d_f64[0])
                       ^ _mm_insert_epi16((__m128i)0LL, epi16 & 0x8000, 3).m128i_u64[0];
  }
  return result;
}
