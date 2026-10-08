double __fastcall unknown_libname_160(int a1, _DWORD *a2)
{
  double result; // st7

  if ( (a2[1] & 0x7FF00000) != 0x7FF00000 ) /*0x991b52*/
    return *(double *)a2; /*0x991b54*/
  *(_QWORD *)&result = *(_QWORD *)a2 << 0xB; /*0x991b79*/
  return result; /*0x991b56*/
}
