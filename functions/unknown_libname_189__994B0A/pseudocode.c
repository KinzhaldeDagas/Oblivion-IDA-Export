long double __usercall unknown_libname_189@<st0>(int a1@<ebp>, long double a2@<st0>)
{
  __int16 v2; // fps
  long double result; // st7
  bool v5; // c0
  char v6; // c2
  bool v7; // c3

  result = 0.6931471805599453094; /*0x994b0c*/
  v5 = a2 < 0.0; /*0x994b0e*/
  v6 = 0; /*0x994b0e*/
  v7 = a2 == 0.0; /*0x994b0e*/
  *(_WORD *)(a1 - 0xA0) = v2; /*0x994b10*/
  if ( (*(_BYTE *)(a1 - 0x9F) & 0x41) == 0 ) /*0x994b1f*/
    return __FYL2X__(a2, 0.6931471805599453094); /*0x994b21*/
  unknown_libname_189_::negYTOXerror(a1); /*0x994b1f*/
  return result; /*0x994b23*/
}
