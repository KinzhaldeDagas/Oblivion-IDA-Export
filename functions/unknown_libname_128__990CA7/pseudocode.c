double __usercall unknown_libname_128@<st0>(int a1@<ebp>, double a2@<st1>, double a3@<st0>)
{
  double v3; // st6
  double v4; // rt0
  double v5; // st6

  *(double *)(a1 - 0x9E) = a2;
  v3 = *(double *)(a1 - 0x9E);
  if ( (*(_BYTE *)(a1 - 0x97) & 0x40) != 0
    && (v4 = v3,
        v5 = a3,
        a3 = v4,
        *(double *)(a1 - 0x9E) = v5,
        v3 = *(double *)(a1 - 0x9E),
        (*(_BYTE *)(a1 - 0x97) & 0x40) != 0) )
  {
    *(_BYTE *)(a1 - 0x90) = 7;
  }
  else
  {
    *(_BYTE *)(a1 - 0x90) = 1;
  }
  return a3 + v3;
}
