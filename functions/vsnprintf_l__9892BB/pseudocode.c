int __cdecl _vsnprintf_l(char *DstBuf, size_t MaxCount, const char *Format, _locale_t Locale, va_list ArgList)
{
  int v5; // edi
  int v6; // esi
  int result; // eax
  int v8; // edi
  FILE File; // [esp+4h] [ebp-20h] BYREF

  if ( HIDWORD(MaxCount) )
  {
    if ( !(_DWORD)MaxCount || DstBuf )
    {
      File._cnt = 0x7FFFFFFF;
      if ( (unsigned int)MaxCount <= 0x7FFFFFFF )
        File._cnt = MaxCount;
      File._flag = 0x42;
      File._base = DstBuf;
      File._ptr = DstBuf;
      result = _output_l((int)&File, SHIDWORD(MaxCount), (struct localeinfo_struct *)Format, (int)Locale);
      v8 = result;
      if ( DstBuf )
      {
        if ( --File._cnt < 0 )
          _flsbuf(0, &File);
        else
          *File._ptr = 0;
        return v8;
      }
    }
    else
    {
      *_errno() = 0x16;
      _invalid_parameter(0, v5, 0);
      return 0xFFFFFFFF;
    }
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, v5, v6);
    return 0xFFFFFFFF;
  }
  return result;
}
