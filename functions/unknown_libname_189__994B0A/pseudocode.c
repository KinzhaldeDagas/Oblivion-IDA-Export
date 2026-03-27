long double __usercall unknown_libname_189@<st0>(int a1@<ebp>, long double a2@<st0>)
{
  __int16 v2; // fps
  long double result; // st7
  bool v5; // c0
  char v6; // c2
  bool v7; // c3

  result = 0.6931471805599453094;
  v5 = a2 < 0.0;
  v6 = 0;
  v7 = a2 == 0.0;
  *(_WORD *)(a1 - 0xA0) = v2;
  if ( (*(_BYTE *)(a1 - 0x9F) & 0x41) == 0 )
    return __FYL2X__(a2, 0.6931471805599453094);
  unknown_libname_189_::negYTOXerror(0.6931471805599453094);
  return result;
}
