double __usercall start_12@<st0>(__m128i a1@<xmm0>, __m128d a2@<xmm1>)
{
  double v2; // xmm3_8
  __m128d v3; // xmm1
  double v4; // xmm4_8
  double *v5; // eax
  __m128d v6; // xmm2
  __m128d v7; // xmm0
  double v8; // xmm3_8
  double v9; // xmm4_8
  __m128d v10; // xmm5
  __m128d v11; // xmm0
  double v12; // xmm7_8
  __m128d v13; // xmm5
  __m128d v14; // xmm0
  double v15; // xmm3_8
  __m128d v16; // xmm2
  double v17; // xmm3_8
  double v18; // xmm7_8
  __m128d v19; // xmm6
  __m128d v20; // xmm2
  __m128d v21; // xmm5
  double v22; // xmm3_8
  __m128d v23; // xmm6
  double result; // st7

  if ( (unsigned __int16)((_mm_extract_epi16(a1, 3) & 0x7FFF) - 0x3030) > 0x10C5u )
  {
    start_12_::special_0();
  }
  else
  {
    a2.m128d_f64[0] = 10.1859163578813 * *(double *)a1.m128i_i64 + 6.755399441055744e15 - 6.755399441055744e15;
    v2 = 0.09817477042088285 * a2.m128d_f64[0];
    v3 = _mm_unpacklo_pd(a2, a2);
    v4 = *(double *)a1.m128i_i64;
    v5 = (double *)((char *)&unk_AAB9F0
                  + 0x20 * (((unsigned __int8)(int)(10.1859163578813 * *(double *)a1.m128i_i64) + 0x10) & 0x3F));
    v6 = _mm_mul_pd((__m128d)xmmword_AAC240, v3);
    *(double *)a1.m128i_i64 = *(double *)a1.m128i_i64 - v2;
    v7 = _mm_unpacklo_pd((__m128d)a1, (__m128d)a1);
    v8 = v4 - v2;
    v9 = v8 - v6.m128d_f64[0];
    v10 = _mm_mul_pd((__m128d)xmmword_AAC220, v7);
    v11 = _mm_sub_pd(v7, v6);
    v12 = v5[1] * (v8 - v6.m128d_f64[0]);
    v13 = _mm_mul_pd(v10, v11);
    v14 = _mm_mul_pd(v11, v11);
    v15 = v8 - (v8 - v6.m128d_f64[0]) - v6.m128d_f64[0];
    v16 = *(__m128d *)v5;
    v3.m128d_f64[0] = v3.m128d_f64[0] * 1.263916405497469e-22 - v15;
    v17 = v5[3];
    v16.m128d_f64[0] = *v5 + v17;
    v18 = v12 - v16.m128d_f64[0];
    v16.m128d_f64[0] = v16.m128d_f64[0] * v9;
    v19 = _mm_mul_pd((__m128d)xmmword_AAC200, v14);
    v20 = _mm_mul_pd(v16, v14);
    v21 = _mm_mul_pd(_mm_add_pd(v13, (__m128d)xmmword_AAC210), _mm_mul_pd(v14, v14));
    v14.m128d_f64[0] = v17 * v9;
    v22 = v14.m128d_f64[0] + v5[1];
    v23 = _mm_mul_pd(_mm_add_pd(_mm_add_pd(v19, (__m128d)xmmword_AAC1F0), v21), v20);
    return v9 * *v5
         + v22
         + v3.m128d_f64[0] * v18
         + v5[2]
         + v5[1]
         - v22
         + v14.m128d_f64[0]
         + v22
         - (v9 * *v5
          + v22)
         + v9 * *v5
         + v23.m128d_f64[0]
         + _mm_unpackhi_pd(v23, v23).m128d_f64[0];
  }
  return result;
}
