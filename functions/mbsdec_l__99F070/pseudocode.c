unsigned __int8 *__usercall _mbsdec_l@<eax>(
        int a1@<edi>,
        int a2@<esi>,
        unsigned int a3,
        unsigned int a4,
        struct localeinfo_struct *a5)
{
  unsigned __int8 *result; // eax
  _BYTE v6[4]; // [esp+4h] [ebp-10h] BYREF
  int v7; // [esp+8h] [ebp-Ch]
  int v8; // [esp+Ch] [ebp-8h]
  char v9; // [esp+10h] [ebp-4h]

  if ( !a3 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, a1, a2);
    return 0;
  }
  if ( !a4 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, a1, 0);
    return 0;
  }
  if ( a3 >= a4 )
    return 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v6, a5);
  result = (unsigned __int8 *)(a4 - 1);
  if ( *(_DWORD *)(v7 + 8) )
  {
    do
      --result;
    while ( a3 <= (unsigned int)result && (*(_BYTE *)(*result + v7 + 0x1D) & 4) != 0 );
    result = (unsigned __int8 *)(a4 - (((_BYTE)a4 - (_BYTE)result) & 1) - 1);
  }
  if ( v9 )
    *(_DWORD *)(v8 + 0x70) &= ~2u;
  return result;
}
