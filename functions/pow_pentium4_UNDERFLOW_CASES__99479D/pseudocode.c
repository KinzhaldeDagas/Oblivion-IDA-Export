double __usercall _pow_pentium4_::UNDERFLOW_CASES@<st0>(
        signed int a1@<eax>,
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
        double a12)
{
  if ( a1 <= (int)0xFFFC0200 ) /*0x9947a2*/
    return _pow_pentium4_::RET_ZERO_UF(a10, a11, a12); /*0x9947a2*/
  else
    return _pow_pentium4_::OF_CONT( /*0x9947bf*/
             a1 & 0x7F,
             (a1 & 0xFFFFFF80) + 0x3FE80,
             a2 + 0x80,
             0,
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
