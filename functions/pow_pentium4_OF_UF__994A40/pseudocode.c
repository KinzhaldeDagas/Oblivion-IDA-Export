double __usercall _pow_pentium4_::OF_UF@<st0>(__m128i xmm1_0@<xmm1>, __m128i a2@<xmm4>, __int64 a1, double a3)
{
  a2.m128i_i64[0] = a1; /*0x994a40*/
  if ( (((unsigned __int16)((_mm_extract_epi16(a2, 3) & 0x7FF0) - 0x3FF0) /*0x994a66*/
       ^ (unsigned __int16)_mm_extract_epi16(xmm1_0, 3))
      & 0x8000) != 0 )
    return _pow_pentium4_::RET_ZERO_UF(*(float *)&a1, *((float *)&a1 + 1), a3); /*0x994a66*/
  else
    return _pow_pentium4_::RET_INF_OF(*(float *)&a1, *((float *)&a1 + 1), a3); /*0x994a6c*/
}
