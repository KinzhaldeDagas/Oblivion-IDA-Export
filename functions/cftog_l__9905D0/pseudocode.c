int __cdecl _cftog_l(_DWORD *a1, char *a2, int a3, int a4, int a5, struct localeinfo_struct *a6)
{
  int result; // eax
  int v7; // ecx
  BOOL v8; // eax
  const char *v9; // edi
  rsize_t v10; // [esp-4h] [ebp-40h]
  int v11; // [esp+Ch] [ebp-30h] BYREF
  int v12; // [esp+10h] [ebp-2Ch]
  int v13; // [esp+1Ch] [ebp-20h]
  int v14[6]; // [esp+20h] [ebp-1Ch] BYREF

  LODWORD(v10) = 0x16;
  _fltout2(*a1, a1[1], (int)&v11, (int)v14, v10);
  if ( a2 && (v7 = a3) != 0 )
  {
    v13 = v12 - 1;
    v8 = v11 == 0x2D;
    v9 = &a2[v8];
    if ( a3 != 0xFFFFFFFF )
      v7 = a3 - v8;
    result = _fptostr(v9, v7, a4, &v11);
    if ( result )
    {
      *a2 = 0;
    }
    else if ( v12 - 1 < (int)0xFFFFFFFC || v12 - 1 >= a4 )
    {
      return _cftoe2_l(a2, a3, a4, a5, (int)&v11, 1, a6);
    }
    else
    {
      if ( v13 < v12 - 1 )
        v9[strlen(v9) - 1] = 0;
      return _cftof2_l(&v11, a2, a3, a4, 1, a6);
    }
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0x16, (int)a2);
    return 0x16;
  }
  return result;
}
