int __usercall _mbsnbicoll_l@<eax>(
        int a1@<edi>,
        localeinfo_struct_0 *a2@<esi>,
        char *Str1,
        char *Str2,
        size_t MaxCount)
{
  int result; // eax
  int v6; // eax
  struct localeinfo_struct v7; // [esp+4h] [ebp-10h] BYREF
  int v8; // [esp+Ch] [ebp-8h]
  char v9; // [esp+10h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v7, (struct localeinfo_struct *)HIDWORD(MaxCount)); /*0x9a1069*/
  if ( !(_DWORD)MaxCount ) /*0x9a1075*/
  {
    if ( v9 ) /*0x9a107a*/
      *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x9a107f*/
    return 0; /*0x9a1085*/
  }
  if ( !Str1 || !Str2 ) /*0x9a10c0*/
  {
    *_errno() = 0x16; /*0x9a1099*/
    _invalid_parameter(0, a1, (int)a2); /*0x9a109f*/
    if ( v9 ) /*0x9a10aa*/
      *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x9a10af*/
    return 0x7FFFFFFF; /*0x9a10b8*/
  }
  if ( (unsigned int)MaxCount > 0x7FFFFFFF ) /*0x9a10ca*/
  {
    *_errno() = 0x16; /*0x9a10d6*/
    _invalid_parameter(0, a1, 0x7FFFFFFF); /*0x9a10dc*/
LABEL_15:
    if ( v9 ) /*0x9a1128*/
      *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x9a112d*/
    return 0x7FFFFFFF; /*0x9a1133*/
  }
  if ( v7.mbcinfo->ismbcodepage ) /*0x9a10e9*/
  {
    v6 = __crtCompareStringA(&v7, v7.mbcinfo->mblcid, 0x1001u, Str1, MaxCount, Str2, MaxCount, v7.mbcinfo->mbcodepage); /*0x9a1119*/
    if ( !v6 ) /*0x9a1123*/
      goto LABEL_15; /*0x9a1123*/
    result = v6 - 2; /*0x9a1135*/
  }
  else
  {
    result = _strnicoll_l(Str1, Str2, MaxCount, a2); /*0x9a10f8*/
  }
  if ( v9 ) /*0x9a113b*/
    *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x9a1140*/
  return result; /*0x9a1145*/
}
