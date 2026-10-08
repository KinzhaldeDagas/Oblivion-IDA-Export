double __usercall _pow_pentium4_::RET_INVALID@<st0>(
        __m128d a1@<xmm0>,
        __m128i a2@<xmm2>,
        __m128i a3@<xmm3>,
        __m128d a4@<xmm4>,
        __m128d a5@<xmm7>,
        double a6,
        double a7)
{
  int v7; // eax
  __m128i v8; // xmm2

  *(double *)a2.m128i_i64 = a6; /*0x9945b1*/
  v7 = _mm_cvtsi128_si32(a2); /*0x9945b7*/
  v8 = _mm_srli_epi64(a2, 0x20u); /*0x9945bb*/
  if ( _mm_cvtsi128_si32(v8) & 0x7FFFFFFF | v7 ) /*0x9945ca*/
    return _pow_pentium4_::CALL_LIBM_ERROR_0(0x1C, NAN, *(float *)&a6, *((float *)&a6 + 1), a7); /*0x9945f3*/
  else
    return _pow_pentium4_::ZERO_X(0, a1, (__m128d)v8, a3, a4, a5, 0, a6, a7); /*0x9945d4*/
}
