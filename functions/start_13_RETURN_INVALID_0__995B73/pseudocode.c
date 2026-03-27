int __usercall start_13_::RETURN_INVALID_0@<eax>(int a1@<eax>, __m128i a2@<xmm7>)
{
  if ( (unsigned int)(a1 + 0x3FEFC) < 0x3FF00 )
    return start_13_::RETURN_PI_BY_2_0();
  if ( _mm_cvtsi128_si32(a2) | (0x3FF00000 - (_mm_cvtsi128_si32(_mm_srli_epi64(a2, 0x20u)) & 0x7FFFFFFF)) )
    JUMPOUT(0x995BA8);
  return start_13_::RETURN_ZERO_PI();
}
