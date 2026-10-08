double __usercall start_14_::special_1@<st0>(
        char a1@<zf>,
        char a2@<sf>,
        char a3@<of>,
        unsigned __int16 a4@<ax>,
        double a5@<xmm0>,
        void *a6@<ecx>,
        __int64 a7)
{
  double result; // st7

  if ( a2 ^ a3 | a1 ) /*0x996af7*/
  {
    if ( a4 >> 4 == 0xCFD ) /*0x996b04*/
      return a5 * 0.9999999999999999; /*0x996b14*/
    else
      return start_14_::smallnorm_0(a5); /*0x996b04*/
  }
  else
  {
    start_14_::large_1(a6, a7); /*0x996af8*/
  }
  return result; /*0x996b1b*/
}
