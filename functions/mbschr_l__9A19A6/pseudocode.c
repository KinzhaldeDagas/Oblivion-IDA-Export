char *__usercall _mbschr_l@<eax>(int a1@<edi>, int a2@<esi>, char *Str, int Val, struct localeinfo_struct *a5)
{
  char *result; // eax
  unsigned __int16 v6; // cx
  _BYTE v7[4]; // [esp+4h] [ebp-10h] BYREF
  int v8; // [esp+8h] [ebp-Ch]
  int v9; // [esp+Ch] [ebp-8h]
  char v10; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v7, a5);
  result = Str;
  if ( Str )
  {
    if ( *(_DWORD *)(v8 + 8) )
    {
      while ( 1 )
      {
        v6 = (unsigned __int8)*result;
        if ( !*result )
          break;
        if ( (*(_BYTE *)((unsigned __int8)v6 + v8 + 0x1D) & 4) != 0 )
        {
          if ( !*++result )
            goto LABEL_17;
          if ( Val == ((unsigned __int8)*result | (v6 << 8)) )
          {
            --result;
            goto LABEL_15;
          }
        }
        else if ( Val == (unsigned __int8)*result )
        {
          break;
        }
        ++result;
      }
      if ( Val == (unsigned __int8)*result )
        goto LABEL_15;
LABEL_17:
      if ( v10 )
        *(_DWORD *)(v9 + 0x70) &= ~2u;
      return 0;
    }
    else
    {
      result = strchr(Str, Val);
LABEL_15:
      if ( v10 )
        *(_DWORD *)(v9 + 0x70) &= ~2u;
    }
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, a1, a2);
    if ( v10 )
      *(_DWORD *)(v9 + 0x70) &= ~2u;
    return 0;
  }
  return result;
}
