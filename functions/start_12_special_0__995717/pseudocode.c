double __usercall start_12_::special_0@<st0>(
        char a1@<zf>,
        char a2@<sf>,
        char a3@<of>,
        __m128i a4@<xmm0>,
        void *a5@<ecx>,
        int a6,
        int a7)
{
  unsigned int epi16; // eax
  double result; // st7

  if ( a2 ^ a3 | a1 ) /*0x995717*/
  {
    epi16 = _mm_extract_epi16(a4, 3); /*0x995719*/
    LOWORD(epi16) = epi16 & 0x7FFF; /*0x99571e*/
    return 1.0 - *(double *)_mm_insert_epi16(a4, epi16, 3).m128i_i64; /*0x99573c*/
  }
  else
  {
    start_12_::large_0(a5, a6, a7); /*0x995718*/
  }
  return result; /*0x995743*/
}
