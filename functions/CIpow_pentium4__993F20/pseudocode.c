void __usercall _CIpow_pentium4(
        __int64 a1@<st1>,
        double a2@<st0>,
        __m128i a3@<xmm4>,
        __m128i a4@<xmm0>,
        __m128i a5@<xmm1>,
        __m128d a6@<xmm2>,
        __m128i a7@<xmm3>,
        __m128d a8@<xmm7>)
{
  _pow_pentium4(a3, a4, a5, a6, a7, a8, a2, a1); /*0x993f32*/
}
