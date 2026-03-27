int __cdecl _vsprintf_l(char *DstBuf, const char *Format, _locale_t a3, va_list ArgList)
{
  FILE File; // [esp+4h] [ebp-20h] BYREF

  if ( Format && DstBuf )
  {
    File._base = DstBuf;
    File._ptr = DstBuf;
    File._cnt = 0x7FFFFFFF;
    File._flag = 0x42;
    _output_l((int)&File, (int)Format, (struct localeinfo_struct *)a3, (int)ArgList);
    if ( --File._cnt < 0 )
      _flsbuf(0, &File);
    else
      *File._ptr = 0;
    return _vsprintf_l_::Done();
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    return _vsprintf_l_::Done();
  }
}
