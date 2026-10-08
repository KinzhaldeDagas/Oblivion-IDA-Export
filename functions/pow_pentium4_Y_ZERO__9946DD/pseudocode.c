double __usercall _pow_pentium4_::Y_ZERO@<st0>(__m128i a1@<xmm4>, float a2, float a3, double a4)
{
  int v4; // eax
  __m128i v5; // xmm4
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // eax

  v4 = _mm_cvtsi128_si32(a1); /*0x9946dd*/
  v5 = _mm_srli_epi64(a1, 0x20u); /*0x9946e1*/
  v6 = v4; /*0x9946f0*/
  v7 = 0x1A; /*0x9946fc*/
  if ( !(_mm_cvtsi128_si32(v5) & 0x7FFFFFFF | v4) ) /*0x9946f2*/
    return _pow_pentium4_::CALL_LIBM_ERROR_0(v7, 1.0, a2, a3, a4); /*0x9946f2*/
  v7 = 0x1D; /*0x99470a*/
  v8 = _mm_cvtsi128_si32(v5) & 0x7FFFFFFF; /*0x99470f*/
  if ( v8 > 0x7FF00000 || v8 >= 0x7FF00000 && v6 ) /*0x994720*/
    return _pow_pentium4_::CALL_LIBM_ERROR_0(v7, 1.0, a2, a3, a4); /*0x994704*/
  else
    return _pow_pentium4_::Y_ZERO_RET(1.0); /*0x994721*/
}
