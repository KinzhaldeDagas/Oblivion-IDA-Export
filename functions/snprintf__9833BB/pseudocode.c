int _snprintf(char *Dest, size_t Count, const char *Format, ...)
{
  int v3; // edi
  int v4; // esi
  int result; // eax
  int v6; // edi
  FILE File; // [esp+4h] [ebp-20h] BYREF

  if ( HIDWORD(Count) ) /*0x9833c7*/
  {
    if ( !(_DWORD)Count || Dest ) /*0x9833f3*/
    {
      File._cnt = 0x7FFFFFFF; /*0x983419*/
      if ( (unsigned int)Count <= 0x7FFFFFFF ) /*0x98341c*/
        File._cnt = Count; /*0x98341e*/
      File._flag = 0x42; /*0x98342e*/
      File._base = Dest; /*0x983435*/
      File._ptr = Dest; /*0x983438*/
      result = _output_l(&File, (unsigned __int8 *)HIDWORD(Count), 0, &Format); /*0x98343b*/
      v6 = result; /*0x983445*/
      if ( Dest ) /*0x983447*/
      {
        if ( --File._cnt < 0 ) /*0x98344c*/
          _flsbuf(0, &File); /*0x98345a*/
        else
          *File._ptr = 0; /*0x983451*/
        return v6; /*0x983461*/
      }
    }
    else
    {
      *_errno() = 0x16; /*0x9833ff*/
      _invalid_parameter(0, v3, 0); /*0x983405*/
      return 0xFFFFFFFF; /*0x98340d*/
    }
  }
  else
  {
    *_errno() = 0x16; /*0x9833d3*/
    _invalid_parameter(0, v3, v4); /*0x9833d9*/
    return 0xFFFFFFFF; /*0x9833e1*/
  }
  return result; /*0x983465*/
}
