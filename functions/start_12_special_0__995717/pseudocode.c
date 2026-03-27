double __usercall start_12_::special_0@<st0>(char a1@<zf>, char a2@<sf>, char a3@<of>, __m128i a4@<xmm0>)
{
  unsigned int epi16; // eax
  double result; // st7

  if ( a2 ^ a3 | a1 )
  {
    epi16 = _mm_extract_epi16(a4, 3);
    LOWORD(epi16) = epi16 & 0x7FFF;
    return 1.0 - *(double *)_mm_insert_epi16(a4, epi16, 3).m128i_i64;
  }
  else
  {
    start_12_::large_0();
  }
  return result;
}
