double __usercall _pow_pentium4_::X_INF@<st0>(__m128i a1@<xmm1>, int a2, int a3, double a4)
{
  *(double *)a1.m128i_i64 = a4; /*0x994583*/
  if ( (_mm_extract_epi16(a1, 3) & 0x8000) != 0 ) /*0x994596*/
    return 0.0; /*0x99459c*/
  else
    return _pow_pentium4_::RET_INF(); /*0x994596*/
}
