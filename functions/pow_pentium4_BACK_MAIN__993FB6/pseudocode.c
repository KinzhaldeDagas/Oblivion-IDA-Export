double __usercall _pow_pentium4_::BACK_MAIN@<st0>(
        unsigned int a1@<edx>,
        __m128i a2@<xmm0>,
        __m128i a3@<xmm3>,
        __m128d a4@<xmm4>,
        __m128d a5@<xmm6>,
        __m128i a6@<xmm7>,
        __m128d a7@<xmm2>,
        double a8@<xmm5>,
        double a9,
        double a10)
{
  __m128i v10; // xmm1
  double v11; // xmm0_8
  int v12; // eax
  double v13; // xmm5_8
  __m128d v14; // xmm6
  __m128i v15; // xmm1
  double v16; // xmm2_8
  int v17; // eax
  double v18; // xmm5_8
  double v19; // xmm2_8
  __m128i v20; // xmm6
  double v21; // xmm0_8
  double v22; // xmm5_8
  double v23; // xmm7_8
  double v24; // xmm2_8
  __m128i v25; // xmm3
  __int16 epi16; // dx
  __m128i v27; // xmm4
  double v28; // xmm6_8
  unsigned int v29; // eax
  double result; // st7

  v10 = _mm_cvtsi32_si128(a1); /*0x993fb6*/
  v11 = _mm_cvtepi32_pd(_mm_srli_epi64(_mm_sub_epi64(a2, v10), 8u)).m128d_f64[0]; /*0x993fc3*/
  *(double *)v10.m128i_i64 = NAN; /*0x993fc7*/
  v12 = ((unsigned __int8)_mm_extract_epi16(_mm_srli_epi64(a6, 0x26u), 0) + 1) & 0x1FE; /*0x993fed*/
  *(double *)a3.m128i_i64 = *(double *)a6.m128i_i64 * *(double *)((char *)&qword_AA8CD0 + 4 * v12); /*0x993ff2*/
  v13 = a8 * *(double *)((char *)&qword_AA8CD0 + 4 * v12); /*0x993ffb*/
  v14 = _mm_add_pd(a5, *(__m128d *)((char *)&xmmword_AA90E0 + 8 * v12)); /*0x994006*/
  v27 = (__m128i)_mm_or_pd(_mm_and_pd(a4, (__m128d)xmmword_AAB940), (__m128d)xmmword_AAB950); /*0x99400f*/
  v14.m128d_f64[0] = v14.m128d_f64[0] + v11; /*0x994017*/
  v15 = (__m128i)_mm_and_pd((__m128d)v10, (__m128d)v27); /*0x99401b*/
  v16 = *(double *)a3.m128i_i64; /*0x99401f*/
  v25 = _mm_srli_epi64(a3, 0x1Fu); /*0x994023*/
  *(double *)v27.m128i_i64 = *(double *)v27.m128i_i64 - *(double *)v15.m128i_i64; /*0x994035*/
  v17 = ((_mm_extract_epi16(v25, 0) & 0x1FF) + 1) & 0x3FE; /*0x994049*/
  v18 = v13 * *(double *)((char *)&qword_AA98F0 + 4 * v17); /*0x99404e*/
  v19 = v16 * *(double *)((char *)&qword_AA98F0 + 4 * v17); /*0x994057*/
  v20 = (__m128i)_mm_add_pd(v14, *(__m128d *)((char *)&xmmword_AAA100 + 8 * v17)); /*0x994060*/
  *(_QWORD *)&v21 = COERCE_UNSIGNED_INT64(NAN) & *(_QWORD *)&v18; /*0x994069*/
  v22 = v18 - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(NAN) & *(_QWORD *)&v18); /*0x99406d*/
  v23 = v19 + -1.442694902420044; /*0x994071*/
  v24 = v19 - v21 * *(double *)v15.m128i_i64 - *(double *)v15.m128i_i64 * v22; /*0x994091*/
  *(double *)v20.m128i_i64 = *(double *)v20.m128i_i64 + v23; /*0x994095*/
  *(double *)v15.m128i_i64 = a10; /*0x994099*/
  *(double *)v25.m128i_i64 = NAN; /*0x9940ac*/
  epi16 = _mm_extract_epi16(v20, 3); /*0x9940b4*/
  a7.m128d_f64[0] = v24 - v21 * *(double *)v27.m128i_i64 - *(double *)v27.m128i_i64 * v22; /*0x9940b9*/
  v27.m128i_i64[0] = v20.m128i_i64[0]; /*0x9940bd*/
  v28 = *(double *)v20.m128i_i64 - a7.m128d_f64[0]; /*0x9940c9*/
  v29 = _mm_extract_epi16(v15, 3) & 0x7FF0; /*0x9940d1*/
  if ( v29 >= 0x7FF0 ) /*0x9940db*/
    return _pow_pentium4_::SPECIAL_Y(a7, (__m128d)v25, v27, a9, a10); /*0x9940db*/
  if ( (((epi16 & 0x7FF0) + v29 - 0x3FF0 - 0x3C70) | (0x40A0 - ((epi16 & 0x7FF0) + v29 - 0x3FF0))) >= 0x80000000 ) /*0x994102*/
    _pow_pentium4_::RETURN_ONE(*(__int64 *)&a10, COERCE__INT64(NAN), *(__int64 *)&v28); /*0x994102*/
  else
    _pow_pentium4_::BACK_XY_CHECK(*(__int64 *)&a10, COERCE__INT64(NAN), *(__int64 *)&v28); /*0x994103*/
  return result;
}
