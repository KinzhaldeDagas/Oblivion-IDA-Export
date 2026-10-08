int __cdecl _vsnprintf_l(char *DstBuf, size_t MaxCount, const char *Format, _locale_t Locale, va_list ArgList)
{
  int v5; // edi
  int v6; // esi
  int result; // eax
  int v8; // edi
  FILE File; // [esp+4h] [ebp-20h] BYREF

  if ( HIDWORD(MaxCount) ) /*0x9892c7*/
  {
    if ( !(_DWORD)MaxCount || DstBuf ) /*0x9892f6*/
    {
      File._cnt = 0x7FFFFFFF; /*0x98931c*/
      if ( (unsigned int)MaxCount <= 0x7FFFFFFF ) /*0x98931f*/
        File._cnt = MaxCount; /*0x989321*/
      File._flag = 0x42; /*0x98932e*/
      File._base = DstBuf; /*0x989338*/
      File._ptr = DstBuf; /*0x98933c*/
      result = _output_l(&File, (unsigned __int8 *)HIDWORD(MaxCount), (struct localeinfo_struct *)Format, Locale); /*0x98933f*/
      v8 = result; /*0x989349*/
      if ( DstBuf ) /*0x98934b*/
      {
        if ( --File._cnt < 0 ) /*0x989350*/
          _flsbuf(0, &File); /*0x98935e*/
        else
          *File._ptr = 0; /*0x989355*/
        return v8; /*0x989365*/
      }
    }
    else
    {
      *_errno() = 0x16; /*0x989302*/
      _invalid_parameter(0, v5, 0); /*0x989308*/
      return 0xFFFFFFFF; /*0x989310*/
    }
  }
  else
  {
    *_errno() = 0x16; /*0x9892d3*/
    _invalid_parameter(0, v5, v6); /*0x9892d9*/
    return 0xFFFFFFFF; /*0x9892e1*/
  }
  return result; /*0x989369*/
}
