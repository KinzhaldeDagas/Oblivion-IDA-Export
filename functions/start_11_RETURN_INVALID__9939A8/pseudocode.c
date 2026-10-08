double __usercall start_11_::RETURN_INVALID@<st0>(int a1@<eax>, __m128i a2@<xmm0>, __int64 a3@<xmm7>, __int64 a4)
{
  double result; // st7

  if ( (unsigned int)(a1 + 0x3FEFE) < 0x3FF00 ) /*0x9939b2*/
  {
    start_11_::RETURN_X(a4); /*0x9939b2*/
  }
  else
  {
    if ( _mm_cvtsi128_si32(a2) | (0x3FF00000 - (_mm_cvtsi128_si32(_mm_srli_epi64(a2, 0x20u)) & 0x7FFFFFFF)) ) /*0x9939d2*/
      JUMPOUT(0x9939DD); /*0x9939dd*/
    return start_11_::RETURN_PI_BY_2(a3); /*0x9939d7*/
  }
  return result;
}
