double __usercall _pow_pentium4_::UF_OF_CASES@<st0>(
        int a1@<eax>,
        int a2@<ecx>,
        __m128d a3@<xmm0>,
        __m128d a4@<xmm1>,
        __m128d a5@<xmm2>,
        double a6@<xmm3>,
        double a7@<xmm4>,
        double a8@<xmm5>,
        __m128d a9@<xmm7>,
        float a10,
        float a11,
        double a12,
        __int64 a13)
{
  double result; // st7

  if ( a1 <= 0 ) /*0x994773*/
  {
    _pow_pentium4_::UNDERFLOW_CASES(a1, SLODWORD(a10), SLODWORD(a11), SLODWORD(a12), SHIDWORD(a12), a13); /*0x994773*/
  }
  else if ( (unsigned int)a1 >= 0x40000 ) /*0x99477a*/
  {
    return _pow_pentium4_::RET_INF_OF(a10, a11, a12); /*0x99477a*/
  }
  else
  {
    return _pow_pentium4_::OF_CONT( /*0x99479b*/
             a1 & 0x7F,
             (a1 - 0x80) & 0xFFFFFF80,
             a2 + 0x3FF00,
             0x3FF0u,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12);
  }
  return result;
}
