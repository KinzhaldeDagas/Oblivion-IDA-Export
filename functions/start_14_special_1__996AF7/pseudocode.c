double __usercall start_14_::special_1@<st0>(
        char a1@<zf>,
        char a2@<sf>,
        char a3@<of>,
        unsigned __int16 a4@<ax>,
        double a5@<xmm0>,
        __int64 a6)
{
  double result; // st7

  if ( a2 ^ a3 | a1 )
  {
    if ( a4 >> 4 == 0xCFD )
      return a5 * 0.9999999999999999;
    else
      start_14_::smallnorm_0(a6);
  }
  else
  {
    start_14_::large_1();
  }
  return result;
}
