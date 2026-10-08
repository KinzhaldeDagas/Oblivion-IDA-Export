char *__usercall _mbsrchr_l@<eax>(int a1@<edi>, char *Str, int a3, struct localeinfo_struct *a4)
{
  int v4; // esi
  char *result; // eax
  char *v6; // ecx
  unsigned __int8 v7; // dl
  int v8; // eax
  bool v9; // zf
  _BYTE v10[4]; // [esp+8h] [ebp-14h] BYREF
  int v11; // [esp+Ch] [ebp-10h]
  int v12; // [esp+10h] [ebp-Ch]
  char v13; // [esp+14h] [ebp-8h]
  char *v14; // [esp+18h] [ebp-4h]

  v14 = 0; /*0x99e57a*/
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v10, a4); /*0x99e57d*/
  v4 = v11; /*0x99e582*/
  if ( !*(_DWORD *)(v11 + 8) ) /*0x99e585*/
  {
    result = strrchr(Str, a3); /*0x99e590*/
    if ( v13 ) /*0x99e59a*/
      *(_DWORD *)(v12 + 0x70) &= ~2u; /*0x99e5a3*/
    return result; /*0x99e5a7*/
  }
  v6 = Str; /*0x99e5a9*/
  if ( !Str ) /*0x99e5ae*/
  {
    *_errno() = 0x16; /*0x99e5ba*/
    _invalid_parameter(0, a1, v4); /*0x99e5c0*/
    if ( v13 ) /*0x99e5cb*/
      *(_DWORD *)(v12 + 0x70) &= ~2u; /*0x99e5d0*/
    return 0; /*0x99e5d6*/
  }
  do /*0x99e614*/
  {
    v7 = *v6; /*0x99e5d9*/
    v8 = (unsigned __int8)*v6; /*0x99e5db*/
    if ( (*(_BYTE *)((unsigned __int8)v8 + v11 + 0x1D) & 4) != 0 ) /*0x99e5e6*/
    {
      v7 = *++v6; /*0x99e5e9*/
      if ( *v6 ) /*0x99e5e9*/
      {
        if ( a3 == (v7 | (v8 << 8)) ) /*0x99e5fa*/
          v14 = v6 + 0xFFFFFFFF; /*0x99e5ff*/
        goto LABEL_16; /*0x99e602*/
      }
      v9 = v14 == 0; /*0x99e604*/
    }
    else
    {
      v9 = a3 == v8; /*0x99e609*/
    }
    if ( v9 ) /*0x99e60c*/
      v14 = v6; /*0x99e60e*/
LABEL_16:
    ++v6; /*0x99e611*/
  }
  while ( v7 ); /*0x99e614*/
  if ( v13 ) /*0x99e61a*/
    *(_DWORD *)(v12 + 0x70) &= ~2u; /*0x99e61f*/
  return v14; /*0x99e626*/
}
