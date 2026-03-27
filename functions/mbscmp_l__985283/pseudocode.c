int __usercall _mbscmp_l@<eax>(int a1@<edi>, int a2@<esi>, char *Str1, char *Str2, struct localeinfo_struct *a5)
{
  int result; // eax
  char *v6; // esi
  unsigned __int16 v7; // cx
  char *v8; // eax
  char v9; // al
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // dx
  _BYTE v13[4]; // [esp+4h] [ebp-14h] BYREF
  int v14; // [esp+8h] [ebp-10h]
  int v15; // [esp+Ch] [ebp-Ch]
  char v16; // [esp+10h] [ebp-8h]
  char v17; // [esp+17h] [ebp-1h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v13, a5);
  if ( Str1 )
  {
    v6 = Str2;
    if ( Str2 )
    {
      if ( *(_DWORD *)(v14 + 8) )
      {
        do
        {
          v7 = (unsigned __int8)*Str1;
          v8 = ++Str1;
          if ( (*(_BYTE *)((unsigned __int8)v7 + v14 + 0x1D) & 4) != 0 )
          {
            v9 = *v8;
            if ( v9 )
            {
              ++Str1;
              HIBYTE(v10) = v7;
              LOBYTE(v10) = v9;
              v7 = v10;
            }
            else
            {
              v7 = 0;
            }
          }
          v11 = (unsigned __int8)*v6++;
          if ( (*(_BYTE *)((unsigned __int8)v11 + v14 + 0x1D) & 4) != 0 )
          {
            v17 = *v6;
            if ( v17 )
            {
              HIBYTE(v12) = v11;
              ++v6;
              LOBYTE(v12) = v17;
              v11 = v12;
            }
            else
            {
              v11 = 0;
            }
          }
          if ( v11 != v7 )
          {
            result = v11 < v7 ? 1 : 0xFFFFFFFF;
            goto LABEL_26;
          }
        }
        while ( v7 );
        if ( v16 )
          *(_DWORD *)(v15 + 0x70) &= ~2u;
        return 0;
      }
      else
      {
        result = strcmp(Str1, Str2);
LABEL_26:
        if ( v16 )
          *(_DWORD *)(v15 + 0x70) &= ~2u;
      }
    }
    else
    {
      *_errno() = 0x16;
      _invalid_parameter(0, a1, 0);
      if ( v16 )
        *(_DWORD *)(v15 + 0x70) &= ~2u;
      return 0x7FFFFFFF;
    }
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, a1, a2);
    if ( v16 )
      *(_DWORD *)(v15 + 0x70) &= ~2u;
    return 0x7FFFFFFF;
  }
  return result;
}
