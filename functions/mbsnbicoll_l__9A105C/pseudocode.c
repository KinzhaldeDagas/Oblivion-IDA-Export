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

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v7, (struct localeinfo_struct *)HIDWORD(MaxCount));
  if ( !(_DWORD)MaxCount )
  {
    if ( v9 )
      *(_DWORD *)(v8 + 0x70) &= ~2u;
    return 0;
  }
  if ( !Str1 || !Str2 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, a1, (int)a2);
    if ( v9 )
      *(_DWORD *)(v8 + 0x70) &= ~2u;
    return 0x7FFFFFFF;
  }
  if ( (unsigned int)MaxCount > 0x7FFFFFFF )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, a1, 0x7FFFFFFF);
LABEL_15:
    if ( v9 )
      *(_DWORD *)(v8 + 0x70) &= ~2u;
    return 0x7FFFFFFF;
  }
  if ( v7.mbcinfo->ismbcodepage )
  {
    v6 = __crtCompareStringA(
           &v7,
           v7.mbcinfo->mblcid,
           0x1001,
           (int)Str1,
           MaxCount,
           (int)Str2,
           MaxCount,
           v7.mbcinfo->mbcodepage);
    if ( !v6 )
      goto LABEL_15;
    result = v6 - 2;
  }
  else
  {
    result = _strnicoll_l(Str1, Str2, MaxCount, a2);
  }
  if ( v9 )
    *(_DWORD *)(v8 + 0x70) &= ~2u;
  return result;
}
