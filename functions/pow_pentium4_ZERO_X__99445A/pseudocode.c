double __usercall _pow_pentium4_::ZERO_X@<st0>(
        int a1@<eax>,
        __m128d a2@<xmm0>,
        __m128d a3@<xmm2>,
        __m128i a4@<xmm3>,
        __m128d a5@<xmm4>,
        __m128d a6@<xmm7>,
        int a7@<ecx>,
        double a8,
        double a9)
{
  if ( (a1 & 0x7FFFFFFF) != 0 ) /*0x994465*/
    return _pow_pentium4_::BACK_DEN(a2, a3, a4, a5, a6, a8, a9); /*0x994465*/
  if ( a9 >= 0.0 ) /*0x994474*/
    return _pow_pentium4_::ZERO_X_POS_Y(a1, a7); /*0x994474*/
  return _pow_pentium4_::CALL_LIBM_ERROR_0(
           0x1B,
           COERCE_DOUBLE(_mm_cvtsi32_si128((a7 << 0xD) & a1 | 0x7FF00000u).m128i_u64[0] << 0x20),
           *(float *)&a8,
           *((float *)&a8 + 1),
           a9);
}
