int __cdecl _cftoe_l(_DWORD *a1, _BYTE *a2, unsigned int a3, int a4, int a5, struct localeinfo_struct *a6)
{
  int result; // eax
  int v7; // eax
  rsize_t v8; // [esp-4h] [ebp-3Ch]
  int v9[4]; // [esp+Ch] [ebp-2Ch] BYREF
  int v10[6]; // [esp+1Ch] [ebp-1Ch] BYREF

  LODWORD(v8) = 0x16;
  _fltout2(*a1, a1[1], (int)v9, (int)v10, v8);
  if ( a2 && a3 )
  {
    if ( a3 == 0xFFFFFFFF )
      v7 = 0xFFFFFFFF;
    else
      v7 = a3 - (v9[0] == 0x2D) - (a4 > 0);
    result = _fptostr(&a2[(v9[0] == 0x2D) + (a4 > 0)], v7, a4 + 1, v9);
    if ( result )
      *a2 = 0;
    else
      return _cftoe2_l(a2, a3, a4, a5, (int)v9, 0, a6);
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, (int)a2, 0x16);
    return 0x16;
  }
  return result;
}
