int printf(const char *Format, ...)
{
  void **v2; // eax
  FILE *v3; // eax
  int v4; // edi
  void **v5; // eax
  FILE *v6; // eax
  void **v7; // eax
  int v8; // [esp+10h] [ebp-1Ch]
  va_list va; // [esp+38h] [ebp+Ch] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v2 = sub_98BAF0();
    _lock_file2(1, v2 + 8);
    v3 = (FILE *)sub_98BAF0();
    v4 = _stbuf(v3 + 1);
    v5 = sub_98BAF0();
    v8 = _output_l((int)(v5 + 8), (int)Format, 0, (int)va);
    v6 = (FILE *)sub_98BAF0();
    _ftbuf(v4, v6 + 1);
    v7 = sub_98BAF0();
    _unlock_file2(1, v7 + 8);
    return v8;
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 0xFFFFFFFF;
  }
}
