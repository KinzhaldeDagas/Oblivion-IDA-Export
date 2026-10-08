double __usercall start_15_::INF_NAN@<st0>(unsigned int a1@<eax>, double a2@<xmm0>, double a3)
{
  double result; // st7

  if ( a1 > 0x7FF00000 || LODWORD(a3) ) /*0x996e29*/
  {
    start_15_::NaN_arg(a2, a3); /*0x996e24*/
  }
  else if ( HIDWORD(a3) == 0x7FF00000 ) /*0x996e34*/
  {
    return INFINITY; /*0x996e36*/
  }
  else
  {
    return start_15_::INF_NEG(); /*0x996e34*/
  }
  return result; /*0x996e3c*/
}
