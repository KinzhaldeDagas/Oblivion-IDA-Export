double __usercall start_15@<st0>(__m128d a1@<xmm0>, double a2)
{
  __m128d v2; // xmm0
  int v3; // eax
  __m128i v4; // xmm7
  __m128d v5; // xmm1
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  __m128d v9; // xmm0
  __m128d v10; // xmm2
  __m128d v11; // xmm4
  __m128d v12; // xmm0
  __m128d v13; // xmm0
  __m128i v14; // xmm2
  __m128i v15; // xmm0
  double result; // st7

  v2 = _mm_unpacklo_pd(a1, a1); /*0x996bde*/
  v3 = _mm_extract_epi16((__m128i)v2, 3) & 0x7FFF; /*0x996c07*/
  if ( ((v3 - 0x3C90) | (unsigned int)(0x408F - v3)) >= 0x80000000 ) /*0x996c20*/
    return start_15_::RETURN_ONE_0(a2); /*0x996c20*/
  v4 = (__m128i)_mm_add_pd(_mm_mul_pd((__m128d)xmmword_AAE3C0, v2), (__m128d)xmmword_AAE3A0); /*0x996c2e*/
  v5 = _mm_sub_pd((__m128d)v4, (__m128d)xmmword_AAE3A0); /*0x996c32*/
  v6 = _mm_cvtsi128_si32(v4); /*0x996c52*/
  v7 = 0x10 * (v6 & 0x3F); /*0x996c5b*/
  v8 = v6 >> 6; /*0x996c5e*/
  v9 = _mm_sub_pd(_mm_sub_pd(v2, _mm_mul_pd((__m128d)xmmword_AAE3D0, v5)), _mm_mul_pd((__m128d)xmmword_AAE3E0, v5)); /*0x996c63*/
  v10 = *(__m128d *)(v7 + 0xAAE410); /*0x996c67*/
  v11 = _mm_mul_pd((__m128d)xmmword_AAE3F0, v9); /*0x996c6f*/
  v5.m128d_f64[0] = v9.m128d_f64[0]; /*0x996c73*/
  v12 = _mm_mul_pd(v9, v9); /*0x996c77*/
  v12.m128d_f64[0] = v12.m128d_f64[0] * v12.m128d_f64[0]; /*0x996c7f*/
  v13 = _mm_mul_pd(v12, _mm_add_pd((__m128d)xmmword_AAE400, v11)); /*0x996ca8*/
  v5.m128d_f64[0] = v5.m128d_f64[0] + v10.m128d_f64[0] + v13.m128d_f64[0]; /*0x996cac*/
  v14 = (__m128i)_mm_or_pd( /*0x996cb0*/
                   _mm_unpackhi_pd(v10, v10),
                   (__m128d)_mm_slli_epi64(
                              _mm_add_epi64(
                                _mm_and_si128(v4, _mm_load_si128((const __m128i *)&xmmword_AAE380)),
                                _mm_load_si128((const __m128i *)&xmmword_AAE390)),
                              0x2Eu));
  v15 = (__m128i)_mm_unpackhi_pd(v13, v13); /*0x996cb4*/
  *(double *)v15.m128i_i64 = *(double *)v15.m128i_i64 + v5.m128d_f64[0]; /*0x996cb8*/
  if ( (unsigned int)(v8 + 0x37E) <= 0x77C ) /*0x996cc8*/
    return *(double *)v15.m128i_i64 * *(double *)v14.m128i_i64 + *(double *)v14.m128i_i64; /*0x996cdb*/
  start_15_::ADJUST(v8, v15, v14); /*0x996cc8*/
  return result; /*0x996ce2*/
}
