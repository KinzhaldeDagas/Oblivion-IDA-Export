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

  v5 = MbCh;
  v6 = SizeInBytes;
  if ( !MbCh && (_DWORD)SizeInBytes )
  {
    if ( SizeConverted )
      *SizeConverted = 0;
    return 0;
  }
  if ( SizeConverted )
    *SizeConverted = 0xFFFFFFFF;
  if ( v6 > 0x7FFFFFFF )
  {
    v8 = 0x16;
    *_errno() = 0x16;
    _invalid_parameter(0, v6, 0x16);
    return v8;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v10, (struct localeinfo_struct *)WCh);
  if ( !*(_DWORD *)(v10 + 0x14) )
  {
    if ( WORD2(SizeInBytes) > 0xFFu )
    {
      if ( v5 )
      {
        if ( v6 )
          _memset((int)v5, 0, v6);
      }
      goto LABEL_16;
    }
    if ( v5 )
    {
      if ( !v6 )
      {
LABEL_21:
        v8 = 0x22;
        *_errno() = 0x22;
        _invalid_parameter(0, v6, 0x22);
        if ( v12 )
          *(_DWORD *)(v11 + 0x70) &= ~2u;
        return v8;
      }
      *v5 = BYTE4(SizeInBytes);
    }
    if ( SizeConverted )
      *SizeConverted = 1;
LABEL_26:
    if ( v12 )
      *(_DWORD *)(v11 + 0x70) &= ~2u;
    return 0;
  }
  MbCh = 0;
  v9 = WideCharToMultiByte(*(_DWORD *)(v10 + 4), 0, (LPCWSTR)&SizeInBytes + 2, 1, v5, v6, 0, (LPBOOL)&MbCh);
  if ( v9 )
  {
    if ( !MbCh )
    {
      if ( SizeConverted )
        *SizeConverted = v9;
      goto LABEL_26;
    }
  }
  else if ( GetLastError() == 0x7A )
  {
    if ( v5 )
    {
      if ( v6 )
        _memset((int)v5, 0, v6);
    }
    goto LABEL_21;
  }
LABEL_16:
  *_errno() = 0x2A;
  result = *_errno();
  if ( v12 )
    *(_DWORD *)(v11 + 0x70) &= ~2u;
  return result;
}
