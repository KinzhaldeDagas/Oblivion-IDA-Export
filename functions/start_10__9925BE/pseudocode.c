double __usercall start_10@<st0>(__m128i a1@<xmm0>)
{
  __m128d v1; // xmm0
  __m128d v2; // xmm1
  int v3; // edx
  __m128d v4; // xmm1
  __m128d v5; // xmm4
  __m128d v6; // xmm0
  double v7; // xmm5_8
  __m128d v8; // xmm2
  __m128d v9; // xmm0
  double v10; // xmm3_8
  __m128d *v11; // eax
  __m128d v12; // xmm2
  __m128d v13; // xmm0
  __m128d v14; // xmm7
  __m128d v15; // xmm2
  __m128d v16; // xmm1
  __m128d v17; // xmm4
  __m128d v18; // xmm3
  __m128d v19; // xmm0
  __m128d v20; // xmm7
  __m128d v21; // xmm1
  __m128d v22; // xmm0
  __m128d v23; // xmm4
  __m128d v24; // xmm1
  __m128d v25; // xmm4
  __m128d v26; // xmm7
  double result; // st7

  if ( (unsigned __int16)((_mm_extract_epi16(a1, 3) & 0x7FFF) - 0x3820) > 0x8A8u )
  {
    start_10_::special();
  }
  else
  {
    v1 = _mm_unpacklo_pd((__m128d)a1, (__m128d)a1);
    v2 = _mm_mul_pd((__m128d)xmmword_AA6700, v1);
    v3 = (int)v2.m128d_f64[0];
    v4 = _mm_sub_pd(_mm_add_pd(v2, (__m128d)xmmword_AA6710), (__m128d)xmmword_AA6710);
    v5 = _mm_mul_pd((__m128d)xmmword_AA6730, v4);
    v6 = _mm_sub_pd(v1, _mm_mul_pd((__m128d)xmmword_AA6720, v4));
    v7 = 6.716466596857464e-14 * v4.m128d_f64[0] + v6.m128d_f64[0];
    v8 = v6;
    v9 = _mm_sub_pd(v6, v5);
    *(_QWORD *)&v7 &= 0xFFFFFFFFFFFC0000uLL;
    v10 = v9.m128d_f64[0];
    v11 = (__m128d *)((char *)&unk_AA5100 + 0xB0 * (v3 & 0x1F));
    v12 = _mm_sub_pd(v8, v9);
    v13 = _mm_unpackhi_pd(v9, v9);
    v14 = _mm_mul_pd(v11[1], v13);
    v15 = _mm_sub_pd(_mm_sub_pd(v12, v5), _mm_mul_pd(v4, (__m128d)xmmword_AA6740));
    v16 = _mm_mul_pd(v11[3], v13);
    v17 = _mm_mul_pd(v11[6], v13);
    v15.m128d_f64[0] = v15.m128d_f64[0] + v10 - v7;
    v18 = v13;
    v19 = _mm_mul_pd(v13, v13);
    v20 = _mm_add_pd(_mm_add_pd(v14, *v11), _mm_mul_pd(_mm_add_pd(v16, v11[2]), v19));
    v21 = _mm_mul_pd(v11[7], v19);
    v22 = _mm_mul_pd(v19, v19);
    v23 = _mm_add_pd(_mm_add_pd(v17, v11[5]), v21);
    v24 = _mm_mul_pd(v18, v11[9]);
    v25 = _mm_mul_pd(v23, _mm_mul_pd(v18, v22));
    v18.m128d_f64[0] = v24.m128d_f64[0];
    v26 = _mm_add_pd(_mm_add_pd(v20, _mm_mul_pd(v11[4], v22)), v25);
    v25.m128d_f64[0] = v24.m128d_f64[0];
    v24.m128d_f64[0] = _mm_unpackhi_pd(v24, v24).m128d_f64[0];
    v18.m128d_f64[0] = v18.m128d_f64[0] + v24.m128d_f64[0];
    v24.m128d_f64[0] = v24.m128d_f64[0] + v25.m128d_f64[0] - v18.m128d_f64[0];
    v25.m128d_f64[0] = v15.m128d_f64[0];
    v22.m128d_f64[0] = v22.m128d_f64[0] * v22.m128d_f64[0] * v26.m128d_f64[0]
                     + _mm_unpackhi_pd(v26, v26).m128d_f64[0]
                     + (v11[9].m128d_f64[0] + v11[9].m128d_f64[1]) * _mm_unpackhi_pd(v15, v15).m128d_f64[0]
                     + v11[8].m128d_f64[1]
                     + v24.m128d_f64[0];
    *(_QWORD *)&v15.m128d_f64[0] = COERCE_UNSIGNED_INT64(v11[0xA].m128d_f64[1]) & COERCE_UNSIGNED_INT64(1.0 / v7);
    return v22.m128d_f64[0]
         + v18.m128d_f64[0]
         - (v15.m128d_f64[0]
          - v11[8].m128d_f64[0]
          + v18.m128d_f64[0]
          - (v15.m128d_f64[0]
           - v11[8].m128d_f64[0]))
         - (1.0 - v7 * v15.m128d_f64[0] - v25.m128d_f64[0] * (1.0 / v7)) * (1.0 / v7 * v11[0xA].m128d_f64[0])
         + v18.m128d_f64[0]
         - (v15.m128d_f64[0]
          - v11[8].m128d_f64[0]);
  }
  return result;
}
