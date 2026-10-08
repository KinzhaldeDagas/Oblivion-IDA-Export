// local variable allocation has failed, the output may be wrong!
double __usercall start_13_::VERY_LARGE_0@<st0>(int a1@<eax>, __m128i a2@<xmm0>, __m128i a3@<xmm4>, double a4@<xmm7>)
{
  unsigned int v4; // eax
  __m128i v5; // xmm7
  __m128d v6; // xmm1
  __m128d v7; // xmm5
  unsigned __int16 epi16; // ax
  __m128d v9; // xmm7
  __m128d v10; // xmm2
  __m128i v11; // xmm0
  __m128d v12; // xmm2
  __m128i v13; // xmm3
  double v14; // xmm4_8
  double v15; // xmm4_8
  __m128d v16; // xmm3
  __m128d v17; // xmm3
  __m128i v18; // xmm2
  double result; // st7

  v4 = a1 - 0x3BFC; /*0x995a71*/
  if ( v4 >= 4 ) /*0x995a79*/
  {
    start_13_::RETURN_INVALID_0(v4, *(__m128i *)&a4); /*0x995a79*/
  }
  else
  {
    *(double *)a3.m128i_i64 = 0.5 - fabs(a4) * 0.5; /*0x995aa7*/
    v5 = _mm_shuffle_epi32(a3, 0x44); /*0x995ab3*/
    *(double *)a3.m128i_i64 = sqrt(*(double *)a3.m128i_i64); /*0x995ab8*/
    v6 = _mm_mul_pd((__m128d)xmmword_AADA30, (__m128d)v5); /*0x995abc*/
    v7 = (__m128d)_mm_shuffle_epi32(v5, 0x44); /*0x995ac0*/
    epi16 = _mm_extract_epi16(a2, 3); /*0x995ac5*/
    v9 = _mm_mul_pd((__m128d)v5, (__m128d)v5); /*0x995aca*/
    v10 = _mm_add_pd(_mm_add_pd((__m128d)xmmword_AADA40, v6), _mm_mul_pd((__m128d)xmmword_AADA50, v9)); /*0x995ae7*/
    v10.m128d_f64[0] = v10.m128d_f64[0] * (v9.m128d_f64[0] * v7.m128d_f64[0]); /*0x995af0*/
    v11 = (__m128i)_mm_and_pd( /*0x995af4*/
                     (__m128d)_mm_shuffle_epi32((__m128i)_mm_cmplt_sd((__m128d)a2, (__m128d)0LL), 0x44),
                     (__m128d)xmmword_AAD9C0);
    v12 = _mm_mul_pd(v10, v7); /*0x995afc*/
    *(_QWORD *)&v6.m128d_f64[0] = COERCE_UNSIGNED_INT64(NAN) & a3.m128i_i64[0]; /*0x995b00*/
    v13 = _mm_shuffle_epi32(a3, 0x44); /*0x995b04*/
    v14 = *(double *)a3.m128i_i64 - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(NAN) & a3.m128i_i64[0]); /*0x995b09*/
    *(double *)v13.m128i_i64 = *(double *)v13.m128i_i64 + *(double *)v13.m128i_i64 - v14; /*0x995b15*/
    v15 = v14 * *(double *)v13.m128i_i64; /*0x995b1d*/
    v16 = (__m128d)_mm_shuffle_epi32(v13, 0xEE); /*0x995b21*/
    v7.m128d_f64[0] = (v7.m128d_f64[0] - v6.m128d_f64[0] * v6.m128d_f64[0] - v15) / v16.m128d_f64[0]; /*0x995b2a*/
    v17 = _mm_add_pd(v16, v16); /*0x995b31*/
    v18 = (__m128i)_mm_mul_pd(v12, v17); /*0x995b35*/
    *(_QWORD *)&result = COERCE_UNSIGNED_INT64( /*0x995b6b*/
                           *(double *)_mm_shuffle_epi32(v11, 0xEE).m128i_i64
                         + *(double *)v18.m128i_i64
                         + *(double *)v11.m128i_i64
                         + *(double *)_mm_shuffle_epi32(v18, 0xEE).m128i_i64
                         + v7.m128d_f64[0]
                         + v17.m128d_f64[0])
                       ^ _mm_insert_epi16((__m128i)0LL, epi16 & 0x8000, 3).m128i_u64[0];
  }
  return result; /*0x995b72*/
}
