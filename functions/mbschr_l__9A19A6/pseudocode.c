char *__usercall _mbschr_l@<eax>(int a1@<edi>, int a2@<esi>, char *Str, int Val, struct localeinfo_struct *a5)
{
  char *result; // eax
  unsigned __int16 v6; // cx
  _BYTE v7[4]; // [esp+4h] [ebp-10h] BYREF
  int v8; // [esp+8h] [ebp-Ch]
  int v9; // [esp+Ch] [ebp-8h]
  char v10; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v7, a5); /*0x9a19b3*/
  result = Str; /*0x9a19b8*/
  if ( Str ) /*0x9a19bf*/
  {
    if ( *(_DWORD *)(v8 + 8) ) /*0x9a19ed*/
    {
      while ( 1 ) /*0x9a1a30*/
      {
        v6 = (unsigned __int8)*result; /*0x9a1a30*/
        if ( !*result ) /*0x9a1a2c*/
          break; /*0x9a1a2c*/
        if ( (*(_BYTE *)((unsigned __int8)v6 + v8 + 0x1D) & 4) != 0 ) /*0x9a1a07*/
        {
          if ( !*++result ) /*0x9a1a0e*/
            goto LABEL_17; /*0x9a1a0e*/
          if ( Val == ((unsigned __int8)*result | (v6 << 8)) ) /*0x9a1a1e*/
          {
            --result; /*0x9a1a20*/
            goto LABEL_15; /*0x9a1a21*/
          }
        }
        else if ( Val == (unsigned __int8)*result ) /*0x9a1a29*/
        {
          break; /*0x9a1a29*/
        }
        ++result; /*0x9a1a2b*/
      }
      if ( Val == (unsigned __int8)*result ) /*0x9a1a3e*/
        goto LABEL_15; /*0x9a1a3e*/
LABEL_17:
      if ( v10 ) /*0x9a1a51*/
        *(_DWORD *)(v9 + 0x70) &= ~2u; /*0x9a1a56*/
      return 0; /*0x9a1a5a*/
    }
    else
    {
      result = strchr(Str, Val); /*0x9a19f6*/
LABEL_15:
      if ( v10 ) /*0x9a1a43*/
        *(_DWORD *)(v9 + 0x70) &= ~2u; /*0x9a1a48*/
    }
  }
  else
  {
    *_errno() = 0x16; /*0x9a19cb*/
    _invalid_parameter(0, a1, a2); /*0x9a19d1*/
    if ( v10 ) /*0x9a19dc*/
      *(_DWORD *)(v9 + 0x70) &= ~2u; /*0x9a19e1*/
    return 0; /*0x9a19e5*/
  }
  return result; /*0x9a1a5d*/
}
