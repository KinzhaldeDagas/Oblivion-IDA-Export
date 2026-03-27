int __usercall _pow_pentium4_::BACK_MAIN@<eax>(
        unsigned int a1@<edx>,
        __m128i a2@<xmm0>,
        __m128i a3@<xmm3>,
        __m128d a4@<xmm4>,
        __m128d a5@<xmm6>,
        __m128i a6@<xmm7>,
        __int64 a7,
        double a8)
{
  __m128i v8; // xmm1
  double v9; // xmm0_8
  int v10; // eax
  __m128d v11; // xmm6
  int v12; // eax
  __m128i v13; // xmm6
  __int16 epi16; // dx
  unsigned int v15; // eax

  v8 = _mm_cvtsi32_si128(a1);
  v9 = _mm_cvtepi32_pd(_mm_srli_epi64(_mm_sub_epi64(a2, v8), 8u)).m128d_f64[0];
  *(double *)v8.m128i_i64 = NAN;
  v10 = ((unsigned __int8)_mm_extract_epi16(_mm_srli_epi64(a6, 0x26u), 0) + 1) & 0x1FE;
  *(double *)a3.m128i_i64 = *(double *)a6.m128i_i64 * *(double *)((char *)&qword_AA8CD0 + 4 * v10);
  v11 = _mm_add_pd(a5, *(__m128d *)((char *)&xmmword_AA90E0 + 8 * v10));
  v11.m128d_f64[0] = v11.m128d_f64[0] + v9;
  *(double *)&v8.m128i_i64[1] = _mm_and_pd(
                                  (__m128d)v8,
                                  _mm_or_pd(_mm_and_pd(a4, (__m128d)xmmword_AAB940), (__m128d)xmmword_AAB950)).m128d_f64[1];
  v12 = ((_mm_extract_epi16(_mm_srli_epi64(a3, 0x1Fu), 0) & 0x1FF) + 1) & 0x3FE;
  v13 = (__m128i)_mm_add_pd(v11, *(__m128d *)((char *)&xmmword_AAA100 + 8 * v12));
  *(double *)v13.m128i_i64 = *(double *)v13.m128i_i64
                           + *(double *)a3.m128i_i64 * *(double *)((char *)&qword_AA98F0 + 4 * v12)
                           + -1.442694902420044;
  *(double *)v8.m128i_i64 = a8;
  epi16 = _mm_extract_epi16(v13, 3);
  v15 = _mm_extract_epi16(v8, 3) & 0x7FF0;
  if ( v15 >= 0x7FF0 )
    return _pow_pentium4_::SPECIAL_Y(a7, *(__int64 *)&a8);
  if ( (((epi16 & 0x7FF0) + v15 - 0x3FF0 - 0x3C70) | (0x40A0 - ((epi16 & 0x7FF0) + v15 - 0x3FF0))) >= 0x80000000 )
    return _pow_pentium4_::RETURN_ONE();
  return _pow_pentium4_::BACK_XY_CHECK();
}
