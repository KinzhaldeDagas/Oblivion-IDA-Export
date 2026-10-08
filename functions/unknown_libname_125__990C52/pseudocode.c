double __usercall unknown_libname_125@<st0>(int a1@<ebp>, double a2@<st0>)
{
  double result; // st7

  *(double *)(a1 - 0x9E) = a2; /*0x990c52*/
  result = *(double *)(a1 - 0x9E); /*0x990c58*/
  if ( (*(_BYTE *)(a1 - 0x97) & 0x40) != 0 ) /*0x990c65*/
  {
    *(_BYTE *)(a1 - 0x90) = 7; /*0x990c67*/
  }
  else
  {
    *(_BYTE *)(a1 - 0x90) = 1; /*0x990c6f*/
    return result + dbl_B319C4; /*0x990c76*/
  }
  return result; /*0x990c6e*/
}
