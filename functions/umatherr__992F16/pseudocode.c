double __cdecl _umatherr(int a1, int a2, int a3, int a4, int a5, int a6, double a7)
{
  int v7; // eax
  int v8; // ecx
  _UNKNOWN **v9; // eax

  v7 = 0; /*0x992f1c*/
  while ( 1 ) /*0x992f1e*/
  {
    v8 = dword_B31B68[2 * v7]; /*0x992f1e*/
    if ( v8 == a2 ) /*0x992f28*/
      break; /*0x992f28*/
    if ( ++v7 >= 0x1D ) /*0x992f2e*/
    {
      v9 = 0; /*0x992f30*/
      goto LABEL_5; /*0x992f30*/
    }
  }
  v9 = (&off_B31B6C)[2 * v7]; /*0x992f8e*/
LABEL_5:
  if ( v9 ) /*0x992f37*/
  {
    _ctrlfp(v8); /*0x992f6c*/
    if ( !sub_98A318() ) /*0x992f75*/
      unknown_libname_166(a1); /*0x992f82*/
    return a7; /*0x992f88*/
  }
  else
  {
    _ctrlfp(v8); /*0x992f9f*/
    unknown_libname_166(a1); /*0x992fa7*/
    return a7; /*0x992fac*/
  }
}
