double __usercall start_14@<st0>(__m128i a1@<xmm0>, __m128d a2@<xmm1>, __int64 a3)
{
  unsigned __int16 v3; // ax
  double v4; // xmm3_8
  __m128d v5; // xmm1
  double v6; // xmm4_8
  double *v7; // eax
  __m128d v8; // xmm2
  __m128d v9; // xmm0
  double v10; // xmm3_8
  double v11; // xmm4_8
  __m128d v12; // xmm5
  __m128d v13; // xmm0
  double v14; // xmm7_8
  __m128d v15; // xmm5
  __m128d v16; // xmm0
  double v17; // xmm3_8
  __m128d v18; // xmm2
  double v19; // xmm3_8
  double v20; // xmm7_8
  __m128d v21; // xmm6
  __m128d v22; // xmm2
  __m128d v23; // xmm5
  double v24; // xmm3_8
  __m128d v25; // xmm6

  v3 = (_mm_extract_epi16(a1, 3) & 0x7FFF) - 0x3030; /*0x9969a7*/
  if ( v3 > 0x10C5u ) /*0x9969af*/
    return start_14_::special_1( /*0x9969af*/
             v3 == 0x10C5,
             (__int16)(v3 - 0x10C5) < 0,
             __OFSUB__(v3, 0x10C5),
             v3,
             *(double *)a1.m128i_i64,
             a3);
  a2.m128d_f64[0] = 10.1859163578813 * *(double *)a1.m128i_i64 + 6.755399441055744e15 - 6.755399441055744e15; /*0x9969d9*/
  v4 = 0.09817477042088285 * a2.m128d_f64[0]; /*0x9969e5*/
  v5 = _mm_unpacklo_pd(a2, a2); /*0x9969e9*/
  v6 = *(double *)a1.m128i_i64; /*0x9969f3*/
  v7 = (double *)((char *)&unk_AADAC0 + 0x20 * ((int)(10.1859163578813 * *(double *)a1.m128i_i64) & 0x3F)); /*0x996a0b*/
  v8 = _mm_mul_pd((__m128d)xmmword_AAE310, v5); /*0x996a0d*/
  *(double *)a1.m128i_i64 = *(double *)a1.m128i_i64 - v4; /*0x996a11*/
  v9 = _mm_unpacklo_pd((__m128d)a1, (__m128d)a1); /*0x996a26*/
  v10 = v6 - v4; /*0x996a2a*/
  v11 = v10 - v8.m128d_f64[0]; /*0x996a2e*/
  v12 = _mm_mul_pd((__m128d)xmmword_AAE2F0, v9); /*0x996a32*/
  v13 = _mm_sub_pd(v9, v8); /*0x996a36*/
  v14 = v7[1] * (v10 - v8.m128d_f64[0]); /*0x996a42*/
  v15 = _mm_mul_pd(v12, v13); /*0x996a4a*/
  v16 = _mm_mul_pd(v13, v13); /*0x996a4e*/
  v17 = v10 - (v10 - v8.m128d_f64[0]) - v8.m128d_f64[0]; /*0x996a52*/
  v18 = *(__m128d *)v7; /*0x996a56*/
  v5.m128d_f64[0] = v5.m128d_f64[0] * 1.263916405497469e-22 - v17; /*0x996a5a*/
  v19 = v7[3]; /*0x996a5e*/
  v18.m128d_f64[0] = *v7 + v19; /*0x996a63*/
  v20 = v14 - v18.m128d_f64[0]; /*0x996a67*/
  v18.m128d_f64[0] = v18.m128d_f64[0] * v11; /*0x996a6b*/
  v21 = _mm_mul_pd((__m128d)xmmword_AAE2D0, v16); /*0x996a6f*/
  v22 = _mm_mul_pd(v18, v16); /*0x996a77*/
  v23 = _mm_mul_pd(_mm_add_pd(v15, (__m128d)xmmword_AAE2E0), _mm_mul_pd(v16, v16)); /*0x996a93*/
  v16.m128d_f64[0] = v19 * v11; /*0x996a97*/
  v24 = v16.m128d_f64[0] + v7[1]; /*0x996a9b*/
  v25 = _mm_mul_pd(_mm_add_pd(_mm_add_pd(v21, (__m128d)xmmword_AAE2C0), v23), v22); /*0x996ac2*/
  return v11 * *v7 /*0x996af6*/
       + v24
       + v5.m128d_f64[0] * v20
       + v7[2]
       + v7[1]
       - v24
       + v16.m128d_f64[0]
       + v24
       - (v11 * *v7
        + v24)
       + v11 * *v7
       + v25.m128d_f64[0]
       + _mm_unpackhi_pd(v25, v25).m128d_f64[0];
}
