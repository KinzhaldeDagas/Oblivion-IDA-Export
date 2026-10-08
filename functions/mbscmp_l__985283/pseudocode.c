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

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v13, a5); /*0x985290*/
  if ( Str1 )
  {
    v6 = Str2; /*0x9852cb*/
    if ( Str2 )
    {
      if ( *(_DWORD *)(v14 + 8) )
      {
        do
        {
          v7 = (unsigned __int8)*Str1; /*0x98531d*/
          v8 = ++Str1; /*0x985323*/
          if ( (*(_BYTE *)((unsigned __int8)v7 + v14 + 0x1D) & 4) != 0 ) /*0x98532c*/
          {
            v9 = *v8; /*0x98532e*/
            if ( v9 ) /*0x985332*/
            {
              ++Str1; /*0x98533a*/
              HIBYTE(v10) = v7; /*0x98533d*/
              LOBYTE(v10) = v9; /*0x98533f*/
              v7 = v10; /*0x985341*/
            }
            else
            {
              v7 = 0; /*0x985334*/
            }
          }
          v11 = (unsigned __int8)*v6++; /*0x985348*/
          if ( (*(_BYTE *)((unsigned __int8)v11 + v14 + 0x1D) & 4) != 0 ) /*0x985354*/
          {
            v17 = *v6; /*0x98535a*/
            if ( v17 ) /*0x98535d*/
            {
              HIBYTE(v12) = v11; /*0x985365*/
              ++v6; /*0x985367*/
              LOBYTE(v12) = v17; /*0x985368*/
              v11 = v12; /*0x98536b*/
            }
            else
            {
              v11 = 0; /*0x98535f*/
            }
          }
          if ( v11 != v7 )
          {
            result = v11 < v7 ? 1 : 0xFFFFFFFF;
            goto LABEL_26; /*0x985390*/
          }
        }
        while ( v7 );
        if ( v16 ) /*0x98537b*/
          *(_DWORD *)(v15 + 0x70) &= ~2u; /*0x985380*/
        return 0; /*0x985384*/
      }
      else
      {
        result = strcmp(Str1, Str2); /*0x98530d*/
LABEL_26:
        if ( v16 ) /*0x985394*/
          *(_DWORD *)(v15 + 0x70) &= ~2u; /*0x985399*/
      }
    }
    else
    {
      *_errno() = 0x16; /*0x9852dc*/
      _invalid_parameter(0, a1, 0); /*0x9852e2*/
      if ( v16 ) /*0x9852ed*/
        *(_DWORD *)(v15 + 0x70) &= ~2u; /*0x9852f2*/
      return 0x7FFFFFFF; /*0x9852f6*/
    }
  }
  else
  {
    *_errno() = 0x16; /*0x9852a6*/
    _invalid_parameter(0, a1, a2); /*0x9852ac*/
    if ( v16 ) /*0x9852b7*/
      *(_DWORD *)(v15 + 0x70) &= ~2u; /*0x9852bc*/
    return 0x7FFFFFFF; /*0x9852c0*/
  }
  return result; /*0x985388*/
}
