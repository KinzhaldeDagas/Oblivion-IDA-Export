double __usercall _pow_pentium4_::Y_INF@<st0>(__m128i a1@<xmm4>)
{
  if ( (_mm_extract_epi16(a1, 3) & 0x7FF0u) >= 0x3FF0 ) /*0x9946c2*/
    return _pow_pentium4_::RET_INF(); /*0x9946c2*/
  else
    return 0.0; /*0x9946c4*/
}
