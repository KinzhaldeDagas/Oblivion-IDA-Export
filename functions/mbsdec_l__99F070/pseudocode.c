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

  if ( !a3 ) /*0x99f07c*/
  {
    *_errno() = 0x16; /*0x99f088*/
    _invalid_parameter(0, a1, a2); /*0x99f08e*/
    return 0; /*0x99f098*/
  }
  if ( !a4 ) /*0x99f0a0*/
  {
    *_errno() = 0x16; /*0x99f0ac*/
    _invalid_parameter(0, a1, 0); /*0x99f0b2*/
    return 0; /*0x99f0c3*/
  }
  if ( a3 >= a4 ) /*0x99f0bf*/
    return 0; /*0x99f0bf*/
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v6, a5); /*0x99f0cb*/
  result = (unsigned __int8 *)(a4 - 1); /*0x99f0d6*/
  if ( *(_DWORD *)(v7 + 8) ) /*0x99f0d3*/
  {
    do /*0x99f0e9*/
      --result; /*0x99f0db*/
    while ( a3 <= (unsigned int)result && (*(_BYTE *)(*result + v7 + 0x1D) & 4) != 0 ); /*0x99f0e9*/
    result = (unsigned __int8 *)(a4 - (((_BYTE)a4 - (_BYTE)result) & 1) - 1); /*0x99f0f5*/
  }
  if ( v9 ) /*0x99f0fa*/
    *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x99f0ff*/
  return result; /*0x99f104*/
}
