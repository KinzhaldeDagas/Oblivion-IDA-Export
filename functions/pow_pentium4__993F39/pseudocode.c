int __usercall _pow_pentium4@<eax>(__m128i a1@<xmm4>, double a2, __int64 a3)
{
  int epi16; // ecx

  *(double *)a1.m128i_i64 = a2;
  epi16 = _mm_extract_epi16(a1, 3);
  if ( ((0x7FEF - epi16) | (unsigned int)(epi16 - 0x10)) >= 0x80000000 )
    return _pow_pentium4_::SPECIAL_X(LODWORD(a2), HIDWORD(a2), a3);
  else
    return _pow_pentium4_::BACK_MAIN(LODWORD(a2), HIDWORD(a2), a3);
}
