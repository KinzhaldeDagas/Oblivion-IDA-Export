// local variable allocation has failed, the output may be wrong!
double __usercall start_11_::VERY_LARGE@<st0>(
        int a1@<eax>,
        double a2@<xmm0>,
        double a3@<xmm1>,
        __m128i a4@<xmm3>,
        __m128i a5@<xmm7>,
        __int64 a6)
{
  unsigned int v6; // eax
  unsigned __int16 epi16; // ax
  __m128i v8; // xmm5
  double v9; // xmm0_8
  double v10; // xmm6_8
  double v11; // xmm3_8
  double v12; // xmm6_8
  double v13; // xmm4_8
  __m128i v14; // xmm3
  __m128i v15; // xmm7
  double v16; // xmm4_8
  __m128d v17; // xmm6
  double v18; // xmm4_8
  __m128i v19; // xmm1
  __m128d v20; // xmm7
  __m128d v21; // xmm2
  __m128i v22; // xmm7
  double result; // st7

  v6 = a1 - 0x3BFE; /*0x99384b*/
  if ( v6 >= 2 ) /*0x993853*/
  {
    start_11_::RETURN_INVALID(v6, *(__m128i *)&a2, a6); /*0x993853*/
  }
  else
  {
    *(double *)a4.m128i_i64 = sqrt(*(double *)a4.m128i_i64 - a3 * a3); /*0x993861*/
    epi16 = _mm_extract_epi16(a5, 3); /*0x993865*/
    v8 = _mm_shuffle_epi32(a4, 0x44); /*0x993872*/
    v9 = a2 - COERCE_DOUBLE(a5.m128i_i64[0] & 0xFFFFFFFFF8000000uLL); /*0x99388f*/
    *(_QWORD *)&v10 = a4.m128i_i64[0] & 0xFFFFFFFFF8000000uLL; /*0x9938a3*/
    v11 = v10 * v10; /*0x9938a7*/
    v12 = v10 - *(double *)v8.m128i_i64; /*0x9938b3*/
    *(double *)v8.m128i_i64 = *(double *)v8.m128i_i64 + *(double *)v8.m128i_i64; /*0x9938b7*/
    v13 = 1.0 /*0x9938bb*/
        - COERCE_DOUBLE(a5.m128i_i64[0] & 0xFFFFFFFFF8000000uLL)
        * COERCE_DOUBLE(a5.m128i_i64[0] & 0xFFFFFFFFF8000000uLL)
        - (COERCE_DOUBLE(a5.m128i_i64[0] & 0xFFFFFFFFF8000000uLL)
         + COERCE_DOUBLE(a5.m128i_i64[0] & 0xFFFFFFFFF8000000uLL))
        * v9
        - v11;
    v14 = _mm_shuffle_epi32(v8, 0xEE); /*0x9938c7*/
    v15 = _mm_shuffle_epi32(v14, 0xEE); /*0x9938d4*/
    v16 = v13 - v9 * v9 + (*(double *)v8.m128i_i64 + v12) * v12; /*0x9938e1*/
    v17 = (__m128d)_mm_shuffle_epi32(v15, 0xEE); /*0x9938e5*/
    v18 = v16 / (*(double *)v14.m128i_i64 + *(double *)v14.m128i_i64); /*0x9938ea*/
    v19.m128i_i64[1] = 0x3F8C99999999999ALL; /*0x9938ee*/
    v20 = _mm_mul_pd((__m128d)v15, (__m128d)v15); /*0x993906*/
    *(double *)v14.m128i_i64 = v17.m128d_f64[0]; /*0x99390a*/
    *(double *)v19.m128i_i64 = 0.01155180089613689 * v20.m128d_f64[0]; /*0x99391b*/
    v21 = _mm_mul_pd(v17, v20); /*0x993927*/
    v17.m128d_f64[0] = v21.m128d_f64[0] * v21.m128d_f64[0]; /*0x99392b*/
    v21.m128d_f64[0] = v21.m128d_f64[0] * (v21.m128d_f64[0] * v21.m128d_f64[0]); /*0x99393b*/
    v22 = (__m128i)_mm_mul_pd( /*0x99394f*/
                     _mm_add_pd(
                       _mm_mul_pd(_mm_mul_pd(v20, v20), (__m128d)xmmword_AA7FE0),
                       _mm_add_pd((__m128d)xmmword_AA7FD0, _mm_mul_pd((__m128d)xmmword_AA7FC0, v20))),
                     v21);
    *(double *)v19.m128i_i64 = (*(double *)v19.m128i_i64 + *(double *)_mm_shuffle_epi32(v19, 0xEE).m128i_i64) /*0x993960*/
                             * (v17.m128d_f64[0]
                              * v21.m128d_f64[0]);
    v17.m128d_f64[0] = *(double *)_mm_shuffle_epi32((__m128i)xmmword_AA7F70, 0xEE).m128i_i64; /*0x993964*/
    *(_QWORD *)&result = COERCE_UNSIGNED_INT64( /*0x9939a0*/
                           *(double *)v19.m128i_i64
                         + 6.123233995736766e-17
                         - (*(double *)v22.m128i_i64
                          + *(double *)_mm_shuffle_epi32(v22, 0xEE).m128i_i64
                          + v18)
                         - (*(double *)v14.m128i_i64
                          - (v17.m128d_f64[0]
                           + *(double *)v14.m128i_i64
                           - v17.m128d_f64[0]))
                         - (*(double *)v14.m128i_i64
                          - v17.m128d_f64[0]))
                       | _mm_insert_epi16((__m128i)0LL, epi16 & 0x8000, 3).m128i_u64[0];
  }
  return result; /*0x9939a7*/
}
