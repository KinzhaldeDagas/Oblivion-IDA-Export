int __usercall unknown_libname_176@<eax>(int a1@<ebp>, long double a2@<st0>)
{
  double v2; // st7
  __int16 v3; // fps
  double v4; // st6
  bool v5; // c0
  char v6; // c2
  bool v7; // c3
  int result; // eax

  v2 = fabs(a2); /*0x993b2c*/
  v4 = (1.0 - v2) * (v2 + 1.0); /*0x993b3c*/
  v5 = v4 < 0.0; /*0x993b3e*/
  v6 = 0; /*0x993b3e*/
  v7 = v4 == 0.0; /*0x993b3e*/
  *(_WORD *)(a1 - 0xA0) = v3; /*0x993b40*/
  if ( (*(_BYTE *)(a1 - 0x9F) & 1) != 0 ) /*0x993b4f*/
    return unknown_libname_176_::unknown_libname_177(v2); /*0x993b4f*/
  return result; /*0x993b55*/
}
