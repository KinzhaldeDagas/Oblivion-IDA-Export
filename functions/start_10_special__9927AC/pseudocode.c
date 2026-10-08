double __usercall start_10_::special@<st0>(
        char a1@<zf>,
        char a2@<sf>,
        char a3@<of>,
        unsigned __int16 a4@<ax>,
        void *this@<ecx>,
        double a6@<xmm0>,
        char a7)
{
  double result; // st7

  if ( a2 ^ a3 | a1 ) /*0x9927ac*/
  {
    if ( a4 >> 4 == 0xC7E ) /*0x9927b9*/
      JUMPOUT(0x9927BB); /*0x9927bb*/
    return start_10_::smallnorm(a6); /*0x9927b9*/
  }
  else
  {
    start_10_::large(this, a7); /*0x9927ad*/
  }
  return result;
}
