int __usercall _vsnprintf_helper@<eax>(
        int a1@<edi>,
        int a2@<esi>,
        int (__cdecl *a3)(FILE *, int, int, int),
        char *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8)
{
  int result; // eax
  bool v9; // sf
  FILE File; // [esp+4h] [ebp-20h] BYREF
  int v11; // [esp+38h] [ebp+14h]

  if ( !a6 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, a1, a2);
    return 0xFFFFFFFF;
  }
  if ( a5 && !a4 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, a5, 0);
    return 0xFFFFFFFF;
  }
  File._cnt = 0x7FFFFFFF;
  if ( a5 <= 0x7FFFFFFF )
    File._cnt = a5;
  File._flag = 0x42;
  File._base = a4;
  File._ptr = a4;
  result = a3(&File, a6, a7, a8);
  v11 = result;
  if ( a4 )
  {
    if ( result >= 0 )
    {
      if ( --File._cnt >= 0 )
      {
        *File._ptr = 0;
        return v11;
      }
      if ( _flsbuf(0, &File) != 0xFFFFFFFF )
        return v11;
    }
    v9 = File._cnt < 0;
    a4[a5 - 1] = 0;
    return !v9 - 2;
  }
  return result;
}
