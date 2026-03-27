int __usercall _mbsbtype_l@<eax>(int a1@<edi>, char *a2, int a3, struct localeinfo_struct *a4)
{
  char *v4; // esi
  int result; // eax
  int v6; // ecx
  struct localeinfo_struct v7; // [esp+8h] [ebp-10h] BYREF
  int v8; // [esp+10h] [ebp-8h]
  char v9; // [esp+14h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v7, a4);
  v4 = a2;
  if ( !a2 )
  {
LABEL_2:
    *_errno() = 0x16;
    _invalid_parameter(0, a1, (int)v4);
LABEL_3:
    if ( v9 )
      *(_DWORD *)(v8 + 0x70) &= ~2u;
    return 0xFFFFFFFF;
  }
  if ( v7.mbcinfo->ismbcodepage )
  {
    result = 0xFFFFFFFF;
    while ( a3 || *v4 )
    {
      if ( !*v4 )
        goto LABEL_2;
      result = _mbbtype_l(*v4, result, &v7);
      v6 = a3;
      ++v4;
      --a3;
      if ( !v6 )
      {
        if ( v9 )
          *(_DWORD *)(v8 + 0x70) &= ~2u;
        return result;
      }
    }
    goto LABEL_3;
  }
  if ( v9 )
    *(_DWORD *)(v8 + 0x70) &= ~2u;
  return 0;
}
