int __usercall _pow_pentium4_::DENORMAL_X@<eax>(__m128i a1@<xmm4>, __int64 a2, int a3, int a4)
{
  if ( _mm_cvtsi128_si32(a1) )
    return _pow_pentium4_::BACK_DEN();
  else
    return _pow_pentium4_::ZERO_X(a2, a3, a4);
}
