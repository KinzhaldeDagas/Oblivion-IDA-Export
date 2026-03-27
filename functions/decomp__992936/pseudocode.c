// local variable allocation has failed, the output may be wrong!
double __cdecl _decomp(double a1, int *a2)
{
  double result; // st7
  int v3; // edx
  unsigned int v4; // edx
  BOOL v5; // eax

  result = 0.0;
  if ( 0.0 == a1 )
  {
    v3 = 0;
  }
  else if ( (HIWORD(a1) & 0x7FF0) == 0 && ((HIDWORD(a1) & 0xFFFFF) != 0 || LODWORD(a1)) )
  {
    v4 = 0xFFFFFC03;
    v5 = a1 < 0.0;
    while ( (BYTE6(a1) & 0x10) == 0 )
    {
      HIDWORD(a1) *= 2;
      if ( SLODWORD(a1) < 0 )
        HIDWORD(a1) |= 1u;
      LODWORD(a1) *= 2;
      --v4;
    }
    HIWORD(a1) &= ~0x10u;
    if ( v5 )
      HIWORD(a1) |= 0x8000u;
    result = _set_exp(a1, 0);
  }
  else
  {
    result = _set_exp(a1, 0);
    v3 = ((*(_DWORD *)((char *)&a1 + 6) >> 4) & 0x7FF) - 0x3FE;
  }
  *a2 = v3;
  return result;
}
