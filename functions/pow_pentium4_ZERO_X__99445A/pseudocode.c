int __usercall _pow_pentium4_::ZERO_X@<eax>(
        int a1@<eax>,
        __m128d a2@<xmm0>,
        __m128d a3@<xmm2>,
        __m128i a4@<xmm3>,
        __m128d a5@<xmm4>,
        __m128d a6@<xmm7>,
        __int64 a7,
        double a8)
{
  if ( (a1 & 0x7FFFFFFF) != 0 )
    return _pow_pentium4_::BACK_DEN(a2, a3, a4, a5, a6, a7, a8);
  if ( a8 >= 0.0 )
    return _pow_pentium4_::ZERO_X_POS_Y();
  return _pow_pentium4_::CALL_LIBM_ERROR_0();
}
