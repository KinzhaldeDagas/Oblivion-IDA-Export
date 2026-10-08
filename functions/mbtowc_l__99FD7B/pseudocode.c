int __cdecl _mbtowc_l(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes, _locale_t Locale)
{
  int result; // eax
  pthreadlocinfo locinfo; // eax
  int mb_cur_max; // ecx
  bool v7; // zf
  struct localeinfo_struct v8; // [esp+8h] [ebp-10h] BYREF
  int v9; // [esp+10h] [ebp-8h]
  char v10; // [esp+14h] [ebp-4h]

  if ( !SrcCh || !(_DWORD)SrcSizeInBytes ) /*0x99fd8f*/
    return 0; /*0x99fd8f*/
  if ( !*SrcCh ) /*0x99fd91*/
  {
    if ( DstCh ) /*0x99fd9a*/
      *DstCh = 0; /*0x99fd9c*/
    return 0; /*0x99fd9f*/
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v8, (struct localeinfo_struct *)HIDWORD(SrcSizeInBytes)); /*0x99fdab*/
  if ( !v8.locinfo->lc_handle[2] ) /*0x99fdb3*/
  {
    if ( DstCh ) /*0x99fdbd*/
      *DstCh = *(unsigned __int8 *)SrcCh; /*0x99fdc3*/
    goto LABEL_11; /*0x99fdc3*/
  }
  if ( _isleadbyte_l(*(unsigned __int8 *)SrcCh, (_locale_t)&v8) ) /*0x99fddf*/
  {
    locinfo = v8.locinfo; /*0x99fdea*/
    mb_cur_max = v8.locinfo->mb_cur_max; /*0x99fded*/
    if ( mb_cur_max > 1 /*0x99fe28*/
      && (int)SrcSizeInBytes >= mb_cur_max
      && (v7 = MultiByteToWideChar(v8.locinfo->lc_codepage, 9u, SrcCh, mb_cur_max, DstCh, DstCh != 0) == 0,
          locinfo = v8.locinfo,
          !v7)
      || (unsigned int)SrcSizeInBytes >= locinfo->mb_cur_max && SrcCh[1] )
    {
      result = locinfo->mb_cur_max; /*0x99fe30*/
      if ( v10 ) /*0x99fe36*/
        *(_DWORD *)(v9 + 0x70) &= ~2u; /*0x99fe3f*/
      return result; /*0x99fe43*/
    }
  }
  else if ( MultiByteToWideChar(v8.locinfo->lc_codepage, 9u, SrcCh, 1, DstCh, DstCh != 0) ) /*0x99fe7e*/
  {
LABEL_11:
    if ( v10 ) /*0x99fdc9*/
      *(_DWORD *)(v9 + 0x70) &= ~2u; /*0x99fdce*/
    return 1; /*0x99fdd5*/
  }
  *_errno() = 0x2A; /*0x99fe4d*/
  if ( v10 ) /*0x99fe56*/
    *(_DWORD *)(v9 + 0x70) &= ~2u; /*0x99fe5b*/
  return 0xFFFFFFFF; /*0x99fda1*/
}
