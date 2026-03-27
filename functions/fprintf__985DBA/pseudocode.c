int fprintf(FILE *File, const char *Format, ...)
{
  _DWORD *v2; // edi
  _BYTE *v3; // eax
  char *v4; // eax
  int v5; // edi
  unsigned int v7; // [esp+10h] [ebp-1Ch]
  va_list va; // [esp+3Ch] [ebp+10h] BYREF

  va_start(va, Format);
  v7 = 0;
  if ( !File || !Format )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, (int)v2, (int)File);
    JUMPOUT(0x985EF9);
  }
  _lock_file(File);
  if ( (File->_flag & 0x40) == 0 )
  {
    if ( _fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE )
    {
      v3 = &aA_1;
    }
    else
    {
      v2 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0);
      v3 = (_BYTE *)(*v2 + 0x28 * (_fileno(File) & 0x1F));
    }
    if ( (v3[0x24] & 0x7F) != 0
      || (_fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE
        ? (v4 = (char *)&aA_1)
        : (v2 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0), v4 = (char *)(*v2 + 0x28 * (_fileno(File) & 0x1F))),
          v4[0x24] < 0) )
    {
      *_errno() = 0x16;
      _invalid_parameter(0, (int)v2, (int)File);
      v7 = 0xFFFFFFFF;
    }
  }
  if ( !v7 )
  {
    v5 = _stbuf(File);
    _output_l((int)File, (int)Format, 0, (int)va);
    _ftbuf(v5, File);
  }
  _unlock_file();
  return fprintf_::_LN19();
}
