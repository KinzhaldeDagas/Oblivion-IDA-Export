int __cdecl _mbtowc_l(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes, _locale_t Locale)
{
  int result; // eax
  pthreadlocinfo locinfo; // eax
  int mb_cur_max; // ecx
  bool v7; // zf
  struct localeinfo_struct v8; // [esp+8h] [ebp-10h] BYREF
  int v9; // [esp+10h] [ebp-8h]
  char v10; // [esp+14h] [ebp-4h]

  if ( !SrcCh || !(_DWORD)SrcSizeInBytes )
    return 0;
  if ( !*SrcCh )
  {
    if ( DstCh )
      *DstCh = 0;
    return 0;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v8, (struct localeinfo_struct *)HIDWORD(SrcSizeInBytes));
  if ( !v8.locinfo->lc_handle[2] )
  {
    if ( DstCh )
      *DstCh = *(unsigned __int8 *)SrcCh;
    goto LABEL_11;
  }
  if ( _isleadbyte_l(*(unsigned __int8 *)SrcCh, (_locale_t)&v8) )
  {
    locinfo = v8.locinfo;
    mb_cur_max = v8.locinfo->mb_cur_max;
    if ( mb_cur_max > 1
      && (int)SrcSizeInBytes >= mb_cur_max
      && (v7 = MultiByteToWideChar(v8.locinfo->lc_codepage, 9u, SrcCh, mb_cur_max, DstCh, DstCh != 0) == 0,
          locinfo = v8.locinfo,
          !v7)
      || (unsigned int)SrcSizeInBytes >= locinfo->mb_cur_max && SrcCh[1] )
    {
      result = locinfo->mb_cur_max;
      if ( v10 )
        *(_DWORD *)(v9 + 0x70) &= ~2u;
      return result;
    }
  }
  else if ( MultiByteToWideChar(v8.locinfo->lc_codepage, 9u, SrcCh, 1, DstCh, DstCh != 0) )
  {
LABEL_11:
    if ( v10 )
      *(_DWORD *)(v9 + 0x70) &= ~2u;
    return 1;
  }
  *_errno() = 0x2A;
  if ( v10 )
    *(_DWORD *)(v9 + 0x70) &= ~2u;
  return 0xFFFFFFFF;
}
