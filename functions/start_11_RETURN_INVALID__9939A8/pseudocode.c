int __usercall start_11_::RETURN_INVALID@<eax>(int a1@<eax>, __m128i a2@<xmm0>, __int64 a3)
{
  if ( (unsigned int)(a1 + 0x3FEFE) < 0x3FF00 )
    return start_11_::RETURN_X(a3);
  if ( _mm_cvtsi128_si32(a2) | (0x3FF00000 - (_mm_cvtsi128_si32(_mm_srli_epi64(a2, 0x20u)) & 0x7FFFFFFF)) )
    JUMPOUT(0x9939DD);
  return start_11_::RETURN_PI_BY_2();
}
