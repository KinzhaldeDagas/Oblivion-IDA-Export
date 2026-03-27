double __usercall unknown_libname_125@<st0>(int a1@<ebp>, double a2@<st0>)
{
  double result; // st7

  *(double *)(a1 - 0x9E) = a2;
  result = *(double *)(a1 - 0x9E);
  if ( (*(_BYTE *)(a1 - 0x97) & 0x40) != 0 )
  {
    *(_BYTE *)(a1 - 0x90) = 7;
  }
  else
  {
    *(_BYTE *)(a1 - 0x90) = 1;
    return result + dbl_B319C4;
  }
  return result;
}
