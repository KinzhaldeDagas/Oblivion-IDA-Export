int _sprintf(char *a1, const char *a2, ...)
{
  int v3; // eax
  bool v4; // sf
  int v5; // esi
  FILE File; // [esp+4h] [ebp-20h] BYREF
  va_list va; // [esp+34h] [ebp+10h] BYREF

  va_start(va, a2);
  if ( a2 && a1 )
  {
    File._base = a1;
    File._ptr = a1;
    File._cnt = 0x7FFFFFFF;
    File._flag = 0x42;
    v3 = _output_l((int)&File, (int)a2, 0, (int)va);
    v4 = --File._cnt < 0;
    v5 = v3;
    if ( v4 )
      _flsbuf(0, &File);
    else
      *File._ptr = 0;
    return v5;
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 0xFFFFFFFF;
  }
}
