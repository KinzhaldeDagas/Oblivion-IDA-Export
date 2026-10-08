double __usercall start_10@<st0>(__m128i a1@<xmm0>, __int64 a2)
{
  unsigned __int16 v2; // ax
  __m128d v3; // xmm0
  __m128d v4; // xmm1
  int v5; // edx
  __m128d v6; // xmm1
  __m128d v7; // xmm4
  __m128d v8; // xmm0
  double v9; // xmm5_8
  __m128d v10; // xmm2
  __m128d v11; // xmm0
  double v12; // xmm3_8
  __m128d *v13; // eax
  __m128d v14; // xmm2
  __m128d v15; // xmm0
  __m128d v16; // xmm7
  __m128d v17; // xmm2
  __m128d v18; // xmm1
  __m128d v19; // xmm4
  __m128d v20; // xmm3
  __m128d v21; // xmm0
  __m128d v22; // xmm7
  __m128d v23; // xmm1
  __m128d v24; // xmm0
  __m128d v25; // xmm4
  __m128d v26; // xmm1
  __m128d v27; // xmm4
  __m128d v28; // xmm7
  double result; // st7

  v2 = (_mm_extract_epi16(a1, 3) & 0x7FFF) - 0x3820; /*0x9925c7*/
  if ( v2 > 0x8A8u ) /*0x9925cf*/
  {
    start_10_::special(v2 == 0x8A8, (__int16)(v2 - 0x8A8) < 0, __OFSUB__(v2, 0x8A8), v2, a2); /*0x9925cf*/
  }
  else
  {
    v3 = _mm_unpacklo_pd((__m128d)a1, (__m128d)a1); /*0x9925d5*/
    v4 = _mm_mul_pd((__m128d)xmmword_AA6700, v3); /*0x9925e1*/
    v5 = (int)v4.m128d_f64[0]; /*0x9925e5*/
    v6 = _mm_sub_pd(_mm_add_pd(v4, (__m128d)xmmword_AA6710), (__m128d)xmmword_AA6710); /*0x9925fd*/
    v7 = _mm_mul_pd((__m128d)xmmword_AA6730, v6); /*0x992624*/
    v8 = _mm_sub_pd(v3, _mm_mul_pd((__m128d)xmmword_AA6720, v6)); /*0x99262a*/
    v9 = 6.716466596857464e-14 * v6.m128d_f64[0] + v8.m128d_f64[0]; /*0x99263d*/
    v10 = v8; /*0x992641*/
    v11 = _mm_sub_pd(v8, v7); /*0x992645*/
    *(_QWORD *)&v9 &= 0xFFFFFFFFFFFC0000uLL; /*0x99265a*/
    v12 = v11.m128d_f64[0]; /*0x992662*/
    v13 = (__m128d *)((char *)&unk_AA5100 + 0xB0 * (v5 & 0x1F)); /*0x992666*/
    v14 = _mm_sub_pd(v10, v11); /*0x992668*/
    v15 = _mm_unpackhi_pd(v11, v11); /*0x99266c*/
    v16 = _mm_mul_pd(v13[1], v15); /*0x992681*/
    v17 = _mm_sub_pd(_mm_sub_pd(v14, v7), _mm_mul_pd(v6, (__m128d)xmmword_AA6740)); /*0x992685*/
    v18 = _mm_mul_pd(v13[3], v15); /*0x99268e*/
    v19 = _mm_mul_pd(v13[6], v15); /*0x992697*/
    v17.m128d_f64[0] = v17.m128d_f64[0] + v12 - v9; /*0x99269b*/
    v20 = v15; /*0x99269f*/
    v21 = _mm_mul_pd(v15, v15); /*0x9926a3*/
    v22 = _mm_add_pd(_mm_add_pd(v16, *v13), _mm_mul_pd(_mm_add_pd(v18, v13[2]), v21)); /*0x9926b9*/
    v23 = _mm_mul_pd(v13[7], v21); /*0x9926c2*/
    v24 = _mm_mul_pd(v21, v21); /*0x9926c6*/
    v25 = _mm_add_pd(_mm_add_pd(v19, v13[5]), v23); /*0x9926ca*/
    v26 = _mm_mul_pd(v20, v13[9]); /*0x9926e7*/
    v27 = _mm_mul_pd(v25, _mm_mul_pd(v20, v24)); /*0x9926ef*/
    v20.m128d_f64[0] = v26.m128d_f64[0]; /*0x9926f3*/
    v28 = _mm_add_pd(_mm_add_pd(v22, _mm_mul_pd(v13[4], v24)), v27); /*0x9926f7*/
    v27.m128d_f64[0] = v26.m128d_f64[0]; /*0x9926fb*/
    v26.m128d_f64[0] = _mm_unpackhi_pd(v26, v26).m128d_f64[0]; /*0x99270b*/
    v20.m128d_f64[0] = v20.m128d_f64[0] + v26.m128d_f64[0]; /*0x99270f*/
    v26.m128d_f64[0] = v26.m128d_f64[0] + v27.m128d_f64[0] - v20.m128d_f64[0]; /*0x992717*/
    v27.m128d_f64[0] = v17.m128d_f64[0]; /*0x99271b*/
    v24.m128d_f64[0] = v24.m128d_f64[0] * v24.m128d_f64[0] * v28.m128d_f64[0] /*0x992743*/
                     + _mm_unpackhi_pd(v28, v28).m128d_f64[0]
                     + (v13[9].m128d_f64[0] + v13[9].m128d_f64[1]) * _mm_unpackhi_pd(v17, v17).m128d_f64[0]
                     + v13[8].m128d_f64[1]
                     + v26.m128d_f64[0];
    *(_QWORD *)&v17.m128d_f64[0] = COERCE_UNSIGNED_INT64(v13[0xA].m128d_f64[1]) & COERCE_UNSIGNED_INT64(1.0 / v9); /*0x99275b*/
    return v24.m128d_f64[0] /*0x9927a4*/
         + v20.m128d_f64[0]
         - (v17.m128d_f64[0]
          - v13[8].m128d_f64[0]
          + v20.m128d_f64[0]
          - (v17.m128d_f64[0]
           - v13[8].m128d_f64[0]))
         - (1.0 - v9 * v17.m128d_f64[0] - v27.m128d_f64[0] * (1.0 / v9)) * (1.0 / v9 * v13[0xA].m128d_f64[0])
         + v20.m128d_f64[0]
         - (v17.m128d_f64[0]
          - v13[8].m128d_f64[0]);
  }
  return result; /*0x9927ab*/
}
