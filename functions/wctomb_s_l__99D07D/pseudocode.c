// local variable allocation has failed, the output may be wrong!
errno_t __cdecl _wctomb_s_l(int *SizeConverted, char *MbCh, size_t SizeInBytes, wchar_t WCh, _locale_t Locale)
{
  char *v5; // esi
  unsigned int v6; // edi
  errno_t result; // eax
  errno_t v8; // esi
  int v9; // eax
  int v10; // [esp+Ch] [ebp-10h] BYREF
  int v11; // [esp+14h] [ebp-8h]
  char v12; // [esp+18h] [ebp-4h]

  v5 = MbCh; /*0x99d085*/
  v6 = SizeInBytes; /*0x99d08d*/
  if ( !MbCh && (_DWORD)SizeInBytes ) /*0x99d094*/
  {
    if ( SizeConverted ) /*0x99d09b*/
      *SizeConverted = 0; /*0x99d09d*/
    return 0; /*0x99d0a1*/
  }
  if ( SizeConverted ) /*0x99d0a8*/
    *SizeConverted = 0xFFFFFFFF; /*0x99d0aa*/
  if ( v6 > 0x7FFFFFFF ) /*0x99d0b3*/
  {
    v8 = 0x16; /*0x99d0bc*/
    *_errno() = 0x16; /*0x99d0c2*/
    _invalid_parameter(0, v6, 0x16); /*0x99d0c4*/
    return v8; /*0x99d0ce*/
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v10, (struct localeinfo_struct *)WCh); /*0x99d0d6*/
  if ( !*(_DWORD *)(v10 + 0x14) ) /*0x99d0de*/
  {
    if ( WORD2(SizeInBytes) > 0xFFu ) /*0x99d0ef*/
    {
      if ( v5 ) /*0x99d0f3*/
      {
        if ( v6 ) /*0x99d0f7*/
          _memset((int)v5, 0, v6); /*0x99d0fc*/
      }
      goto LABEL_16; /*0x99d0fc*/
    }
    if ( v5 ) /*0x99d129*/
    {
      if ( !v6 ) /*0x99d12d*/
      {
LABEL_21:
        v8 = 0x22; /*0x99d12f*/
        *_errno() = 0x22; /*0x99d13c*/
        _invalid_parameter(0, v6, 0x22); /*0x99d13e*/
        if ( v12 ) /*0x99d149*/
          *(_DWORD *)(v11 + 0x70) &= ~2u; /*0x99d14e*/
        return v8; /*0x99d152*/
      }
      *v5 = BYTE4(SizeInBytes); /*0x99d157*/
    }
    if ( SizeConverted ) /*0x99d15e*/
      *SizeConverted = 1; /*0x99d160*/
LABEL_26:
    if ( v12 ) /*0x99d169*/
      *(_DWORD *)(v11 + 0x70) &= ~2u; /*0x99d172*/
    return 0; /*0x99d176*/
  }
  MbCh = 0; /*0x99d189*/
  v9 = WideCharToMultiByte(*(_DWORD *)(v10 + 4), 0, (LPCWSTR)&SizeInBytes + 2, 1, v5, v6, 0, (LPBOOL)&MbCh); /*0x99d18f*/
  if ( v9 ) /*0x99d197*/
  {
    if ( !MbCh ) /*0x99d19c*/
    {
      if ( SizeConverted ) /*0x99d1a7*/
        *SizeConverted = v9; /*0x99d1a9*/
      goto LABEL_26; /*0x99d1ab*/
    }
  }
  else if ( GetLastError() == 0x7A ) /*0x99d1b6*/
  {
    if ( v5 ) /*0x99d1be*/
    {
      if ( v6 ) /*0x99d1c6*/
        _memset((int)v5, 0, v6); /*0x99d1cf*/
    }
    goto LABEL_21; /*0x99d1d7*/
  }
LABEL_16:
  *_errno() = 0x2A; /*0x99d104*/
  result = *_errno(); /*0x99d117*/
  if ( v12 ) /*0x99d119*/
    *(_DWORD *)(v11 + 0x70) &= ~2u; /*0x99d11e*/
  return result; /*0x99d122*/
}
