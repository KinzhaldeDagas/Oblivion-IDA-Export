double __usercall start_13_::RETURN_INVALID_0@<st0>(int a1@<eax>, __m128i a2@<xmm7>)
{
  int v3; // ecx
  __m128i v4; // xmm7

  if ( (unsigned int)(a1 + 0x3FEFC) < 0x3FF00 ) /*0x995b7d*/
    return start_13_::RETURN_PI_BY_2_0(); /*0x995b7d*/
  v3 = _mm_cvtsi128_si32(a2); /*0x995b83*/
  v4 = _mm_srli_epi64(a2, 0x20u); /*0x995b87*/
  if ( v3 | (0x3FF00000 - (_mm_cvtsi128_si32(v4) & 0x7FFFFFFF)) ) /*0x995b9d*/
    JUMPOUT(0x995BA8); /*0x995ba8*/
  return start_13_::RETURN_ZERO_PI(v4);
}
