int __usercall _pow_pentium4@<eax>(
        __m128i a1@<xmm4>,
        __m128i a2@<xmm0>,
        __m128i a3@<xmm1>,
        __m128d a4@<xmm2>,
        __m128i a5@<xmm3>,
        __m128d a6@<xmm7>,
        double a7,
        __int64 a8)
{
  __m128d v8; // xmm7
  __m128i v9; // xmm0
  int epi16; // ecx
  int v11; // eax
  __m128i v12; // xmm7
  __m128d v13; // xmm6

  *(double *)a2.m128i_i64 = a7; /*0x993f39*/
  a6.m128d_f64[0] = COERCE_DOUBLE(0xFFFFFFFFFFFFFLL); /*0x993f3f*/
  a4.m128d_f64[0] = 1.0; /*0x993f47*/
  v8 = _mm_and_pd(a6, (__m128d)a2); /*0x993f4f*/
  *(double *)a1.m128i_i64 = a7; /*0x993f53*/
  v9 = _mm_srli_epi64(a2, 0x2Cu); /*0x993f57*/
  v12 = (__m128i)_mm_or_pd(v8, a4); /*0x993f61*/
  epi16 = _mm_extract_epi16(a1, 3); /*0x993f65*/
  v11 = ((unsigned __int8)_mm_extract_epi16(v9, 0) + 1) & 0x1FE; /*0x993f72*/
  *(double *)v12.m128i_i64 = *(double *)v12.m128i_i64 * *(double *)((char *)&qword_AA80B0 + 4 * v11); /*0x993f77*/
  v13 = *(__m128d *)((char *)&xmmword_AA84C0 + 8 * v11); /*0x993f8b*/
  if ( ((0x7FEF - epi16) | (unsigned int)(epi16 - 0x10)) >= 0x80000000 ) /*0x993fa6*/
    return _pow_pentium4_::SPECIAL_X(0x7FEF - epi16, v9, a3, a4, a5, (__m128d)a1, v13, v12, *(__int64 *)&a7, a8); /*0x993fa6*/
  else
    return _pow_pentium4_::BACK_MAIN(0x3FE7Fu, v9, a5, (__m128d)a1, v13, v12, *(__int64 *)&a7, *(double *)&a8); /*0x993fb2*/
}
