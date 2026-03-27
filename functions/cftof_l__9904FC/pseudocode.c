int __cdecl _cftof_l(_DWORD *a1, char *a2, int a3, int a4, struct localeinfo_struct *a5)
{
  int result; // eax
  int v6; // eax
  rsize_t v7; // [esp-4h] [ebp-3Ch]
  int v8[4]; // [esp+Ch] [ebp-2Ch] BYREF
  int v9[6]; // [esp+1Ch] [ebp-1Ch] BYREF

  LODWORD(v7) = 0x16;
  _fltout2(*a1, a1[1], (int)v8, (int)v9, v7);
  if ( a2 && (v6 = a3) != 0 )
  {
    if ( a3 != 0xFFFFFFFF )
      v6 = a3 - (v8[0] == 0x2D);
    result = _fptostr(&a2[v8[0] == 0x2D], v6, a4 + v8[1], v8);
    if ( result )
      *a2 = 0;
    else
      return _cftof2_l(v8, a2, a3, a4, 0, a5);
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, (int)a2, 0x16);
    return 0x16;
  }
  return result;
}
