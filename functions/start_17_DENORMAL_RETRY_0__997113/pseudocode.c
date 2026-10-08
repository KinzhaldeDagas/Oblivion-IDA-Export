double __usercall start_17_::DENORMAL_RETRY_0@<st0>(int a1@<edx>, __m128i a2@<xmm0>, double a3)
{
  __m128d v4; // xmm0
  int v5; // eax
  __m128d v6; // xmm4
  __m128d v7; // xmm6
  __m128d v8; // xmm0
  __m128d v9; // xmm6
  __m128d v10; // xmm7
  __m128d v11; // xmm4
  __m128d v12; // xmm0
  unsigned int v13; // ecx
  int v14; // ecx
  __m128d v15; // xmm6
  int v16; // edx
  __m128d v17; // xmm3
  __m128d v18; // xmm7
  double v19; // xmm2_8
  __m128d v20; // xmm0
  double result; // st7

  v4 = _mm_or_pd( /*0x997151*/
         _mm_and_pd(_mm_unpacklo_pd((__m128d)a2, (__m128d)a2), (__m128d)xmmword_AAF160),
         (__m128d)xmmword_AAF1D0);
  v5 = _mm_extract_epi16((__m128i)_mm_add_pd((__m128d)xmmword_AAF180, v4), 0) & 0x7F0; /*0x99715e*/
  v6 = *(__m128d *)(v5 + 0xAAF670); /*0x997163*/
  v10 = *(__m128d *)(v5 + 0xAAF260); /*0x99716b*/
  v7 = _mm_and_pd((__m128d)xmmword_AAF190, v4); /*0x997173*/
  v8 = _mm_sub_pd(v4, v7); /*0x997177*/
  v9 = _mm_sub_pd(_mm_mul_pd(v7, v6), (__m128d)xmmword_AAF170); /*0x99717f*/
  v10.m128d_f64[0] = v10.m128d_f64[0] + v9.m128d_f64[0]; /*0x997183*/
  v11 = _mm_mul_pd(v8, v6); /*0x99718b*/
  v12 = _mm_add_pd(v11, v9); /*0x99718f*/
  v13 = (_mm_extract_epi16(_mm_srli_epi64(a2, 0x34u), 0) & 0xFFF) - 1; /*0x997199*/
  if ( v13 > 0x7FD ) /*0x9971a2*/
  {
    start_17_::SPECIAL_CASES_1(v13, v12, a3); /*0x9971a2*/
  }
  else
  {
    v14 = a1 + v13 - 0x3FE; /*0x9971ae*/
    v9.m128d_f64[0] = (double)v14; /*0x9971b0*/
    v15 = _mm_unpacklo_pd(v9, v9); /*0x9971b4*/
    v16 = 0; /*0x9971c2*/
    if ( !((v14 << 0xA) + v5) ) /*0x9971bb*/
      v16 = 0x10; /*0x9971ca*/
    v17 = _mm_mul_pd(v12, v12); /*0x9971e5*/
    v18 = _mm_add_pd( /*0x997215*/
            _mm_add_pd(v10, _mm_mul_pd(v15, (__m128d)xmmword_AAF1A0)),
            _mm_and_pd(v11, *(__m128d *)(v16 + 0xAAF1B0)));
    v17.m128d_f64[0] = v17.m128d_f64[0] * v17.m128d_f64[0] * v12.m128d_f64[0]; /*0x99721d*/
    v19 = 0.001616102407499711 * v12.m128d_f64[0]; /*0x99722d*/
    v20 = _mm_mul_pd( /*0x997240*/
            _mm_add_pd(
              _mm_mul_pd(_mm_add_pd(_mm_mul_pd((__m128d)xmmword_AAF220, v12), (__m128d)xmmword_AAF230), v12),
              (__m128d)xmmword_AAF240),
            v17);
    return _mm_unpackhi_pd(v20, v20).m128d_f64[0] /*0x99725e*/
         + v20.m128d_f64[0]
         + v19
         + _mm_unpackhi_pd(v18, v18).m128d_f64[0]
         + v18.m128d_f64[0];
  }
  return result; /*0x997265*/
}
