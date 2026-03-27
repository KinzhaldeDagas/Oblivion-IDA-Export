int __usercall _pow_pentium4_::Y_ZERO@<eax>(__m128i a1@<xmm4>)
{
  int v1; // eax
  __m128i v2; // xmm4
  int v3; // ecx
  int v4; // edx
  unsigned int v5; // eax

  v1 = _mm_cvtsi128_si32(a1);
  v2 = _mm_srli_epi64(a1, 0x20u);
  v3 = v1;
  v4 = 0x1A;
  if ( !(_mm_cvtsi128_si32(v2) & 0x7FFFFFFF | v1) )
    return _pow_pentium4_::CALL_LIBM_ERROR_0(v3, v4);
  v4 = 0x1D;
  v5 = _mm_cvtsi128_si32(v2) & 0x7FFFFFFF;
  if ( v5 > 0x7FF00000 || v5 >= 0x7FF00000 && v3 )
    return _pow_pentium4_::CALL_LIBM_ERROR_0(v3, v4);
  else
    return _pow_pentium4_::Y_ZERO_RET();
}
