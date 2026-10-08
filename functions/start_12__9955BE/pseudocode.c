double __usercall start_12@<st0>(__m128i a1@<xmm0>, __m128d a2@<xmm1>)
{
  unsigned __int16 v2; // ax
  double v3; // xmm3_8
  __m128d v4; // xmm1
  double v5; // xmm4_8
  double *v6; // eax
  __m128d v7; // xmm2
  __m128d v8; // xmm0
  double v9; // xmm3_8
  double v10; // xmm4_8
  __m128d v11; // xmm5
  __m128d v12; // xmm0
  double v13; // xmm7_8
  __m128d v14; // xmm5
  __m128d v15; // xmm0
  double v16; // xmm3_8
  __m128d v17; // xmm2
  double v18; // xmm3_8
  double v19; // xmm7_8
  __m128d v20; // xmm6
  __m128d v21; // xmm2
  __m128d v22; // xmm5
  double v23; // xmm3_8
  __m128d v24; // xmm6

  v2 = (_mm_extract_epi16(a1, 3) & 0x7FFF) - 0x3030; /*0x9955c7*/
  if ( v2 > 0x10C5u ) /*0x9955cf*/
    return start_12_::special_0(v2 == 0x10C5, (__int16)(v2 - 0x10C5) < 0, __OFSUB__(v2, 0x10C5), a1); /*0x9955cf*/
  a2.m128d_f64[0] = 10.1859163578813 * *(double *)a1.m128i_i64 + 6.755399441055744e15 - 6.755399441055744e15; /*0x9955f9*/
  v3 = 0.09817477042088285 * a2.m128d_f64[0]; /*0x995605*/
  v4 = _mm_unpacklo_pd(a2, a2); /*0x995609*/
  v5 = *(double *)a1.m128i_i64; /*0x995613*/
  v6 = (double *)((char *)&unk_AAB9F0 /*0x99562b*/
                + 0x20 * (((unsigned __int8)(int)(10.1859163578813 * *(double *)a1.m128i_i64) + 0x10) & 0x3F));
  v7 = _mm_mul_pd((__m128d)xmmword_AAC240, v4); /*0x99562d*/
  *(double *)a1.m128i_i64 = *(double *)a1.m128i_i64 - v3; /*0x995631*/
  v8 = _mm_unpacklo_pd((__m128d)a1, (__m128d)a1); /*0x995646*/
  v9 = v5 - v3; /*0x99564a*/
  v10 = v9 - v7.m128d_f64[0]; /*0x99564e*/
  v11 = _mm_mul_pd((__m128d)xmmword_AAC220, v8); /*0x995652*/
  v12 = _mm_sub_pd(v8, v7); /*0x995656*/
  v13 = v6[1] * (v9 - v7.m128d_f64[0]); /*0x995662*/
  v14 = _mm_mul_pd(v11, v12); /*0x99566a*/
  v15 = _mm_mul_pd(v12, v12); /*0x99566e*/
  v16 = v9 - (v9 - v7.m128d_f64[0]) - v7.m128d_f64[0]; /*0x995672*/
  v17 = *(__m128d *)v6; /*0x995676*/
  v4.m128d_f64[0] = v4.m128d_f64[0] * 1.263916405497469e-22 - v16; /*0x99567a*/
  v18 = v6[3]; /*0x99567e*/
  v17.m128d_f64[0] = *v6 + v18; /*0x995683*/
  v19 = v13 - v17.m128d_f64[0]; /*0x995687*/
  v17.m128d_f64[0] = v17.m128d_f64[0] * v10; /*0x99568b*/
  v20 = _mm_mul_pd((__m128d)xmmword_AAC200, v15); /*0x99568f*/
  v21 = _mm_mul_pd(v17, v15); /*0x995697*/
  v22 = _mm_mul_pd(_mm_add_pd(v14, (__m128d)xmmword_AAC210), _mm_mul_pd(v15, v15)); /*0x9956b3*/
  v15.m128d_f64[0] = v18 * v10; /*0x9956b7*/
  v23 = v15.m128d_f64[0] + v6[1]; /*0x9956bb*/
  v24 = _mm_mul_pd(_mm_add_pd(_mm_add_pd(v20, (__m128d)xmmword_AAC1F0), v22), v21); /*0x9956e2*/
  return v10 * *v6 /*0x995716*/
       + v23
       + v4.m128d_f64[0] * v19
       + v6[2]
       + v6[1]
       - v23
       + v15.m128d_f64[0]
       + v23
       - (v10 * *v6
        + v23)
       + v10 * *v6
       + v24.m128d_f64[0]
       + _mm_unpackhi_pd(v24, v24).m128d_f64[0];
}
