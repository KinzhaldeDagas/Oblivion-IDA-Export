// positive sp value has been detected, the output may be wrong!
double __usercall floor_::jnedef_1@<st0>(char a1@<zf>, const __m128i a2@<xmm0>, double a3)
{
  if ( a1 ) /*0x985a38*/
    return floor_::__floor_pentium4(a2); /*0x985a3e*/
  else
    return _floor_default(a3); /*0x985a38*/
}
