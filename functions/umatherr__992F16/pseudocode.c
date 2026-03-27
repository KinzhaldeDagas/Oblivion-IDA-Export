double __cdecl _umatherr(int a1, int a2, int a3, int a4, int a5, int a6, double a7, int a8)
{
  int v8; // eax
  _UNKNOWN **v9; // eax

  v8 = 0;
  while ( dword_B31B68[2 * v8] != a2 )
  {
    if ( ++v8 >= 0x1D )
    {
      v9 = 0;
      goto LABEL_5;
    }
  }
  v9 = (&off_B31B6C)[2 * v8];
LABEL_5:
  if ( v9 )
  {
    _ctrlfp(a8, 0xFFFF);
    if ( !sub_98A318() )
      unknown_libname_166(a1);
    return a7;
  }
  else
  {
    _ctrlfp(a8, 0xFFFF);
    unknown_libname_166(a1);
    return a7;
  }
}
