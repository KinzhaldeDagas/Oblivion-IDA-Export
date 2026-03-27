int _snprintf(char *Dest, size_t Count, const char *Format, ...)
{
  int result; // eax
  int v4; // edi
  FILE File; // [esp+4h] [ebp-20h] BYREF

  if ( HIDWORD(Count) )
  {
    if ( !(_DWORD)Count || Dest )
    {
      File._cnt = 0x7FFFFFFF;
      if ( (unsigned int)Count <= 0x7FFFFFFF )
        File._cnt = Count;
      File._flag = 0x42;
      File._base = Dest;
      File._ptr = Dest;
      result = _output_l((int)&File, SHIDWORD(Count), 0, (int)&Format);
      v4 = result;
      if ( Dest )
      {
        if ( --File._cnt < 0 )
          _flsbuf(0, &File);
        else
          *File._ptr = 0;
        return v4;
      }
    }
    else
    {
      *_errno() = 0x16;
      _invalid_parameter(0, 0, 0, 0, 0);
      return 0xFFFFFFFF;
    }
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 0xFFFFFFFF;
  }
  return result;
}
