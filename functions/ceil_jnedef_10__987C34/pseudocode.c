// positive sp value has been detected, the output may be wrong!
double __usercall ceil_::jnedef_10@<st0>(char a1@<zf>, const __m128i a2@<xmm0>, double a3)
{
  if ( a1 ) /*0x987c38*/
    return ceil_::__ceil_pentium4(a2); /*0x987c3e*/
  else
    return _floor_default_0(a3); /*0x987c38*/
}
