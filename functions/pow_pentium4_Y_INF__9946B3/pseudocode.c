double __usercall _pow_pentium4_::Y_INF@<st0>(__m128i a1@<xmm4>)
{
  double result; // st7

  if ( (_mm_extract_epi16(a1, 3) & 0x7FF0u) < 0x3FF0 )
    return 0.0;
  _pow_pentium4_::RET_INF();
  return result;
}
