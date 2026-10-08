// local variable allocation has failed, the output may be wrong!
double __cdecl _decomp(double a1, int *a2)
{
  double result; // st7
  int v3; // edx
  unsigned int v4; // edx
  BOOL v5; // eax

  result = 0.0; /*0x992939*/
  if ( 0.0 == a1 ) /*0x992943*/
  {
    v3 = 0; /*0x992945*/
  }
  else if ( (HIWORD(a1) & 0x7FF0) == 0 && ((HIDWORD(a1) & 0xFFFFF) != 0 || LODWORD(a1)) ) /*0x992962*/
  {
    v4 = 0xFFFFFC03; /*0x992967*/
    v5 = a1 < 0.0; /*0x992971*/
    while ( (BYTE6(a1) & 0x10) == 0 ) /*0x992994*/
    {
      HIDWORD(a1) *= 2; /*0x99297c*/
      if ( SLODWORD(a1) < 0 ) /*0x992986*/
        HIDWORD(a1) |= 1u; /*0x992988*/
      LODWORD(a1) *= 2; /*0x99298c*/
      --v4; /*0x99298f*/
    }
    HIWORD(a1) &= ~0x10u; /*0x992996*/
    if ( v5 ) /*0x99299e*/
      HIWORD(a1) |= 0x8000u; /*0x9929a0*/
    result = _set_exp(a1, 0); /*0x9929af*/
  }
  else
  {
    result = _set_exp(a1, 0); /*0x9929c4*/
    v3 = ((*(_DWORD *)((char *)&a1 + 6) >> 4) & 0x7FF) - 0x3FE; /*0x9929d8*/
  }
  *a2 = v3; /*0x9929e1*/
  return result; /*0x9929e3*/
}
