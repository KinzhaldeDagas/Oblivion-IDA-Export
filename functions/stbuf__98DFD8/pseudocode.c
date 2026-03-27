int __cdecl _stbuf(FILE *File)
{
  int v1; // eax
  int v2; // eax
  char **v3; // edi
  int v4; // eax
  char *v5; // edi

  v1 = _fileno(File);
  if ( !_isatty(v1) )
    return 0;
  if ( File == (FILE *)(sub_98BAF0() + 8) )
  {
    v2 = 0;
  }
  else
  {
    if ( File != (FILE *)(sub_98BAF0() + 0x10) )
      return 0;
    v2 = 1;
  }
  ++dword_BA9E14;
  if ( (File->_flag & 0x10C) != 0 )
    return 0;
  v3 = (char **)(4 * v2 + 0xBAA5FC);
  if ( dword_BAA5FC[v2] || (v4 = unknown_libname_72(), (*v3 = (char *)v4) != 0) )
  {
    v5 = *v3;
    File->_base = v5;
    File->_ptr = v5;
    File->_bufsiz = 0x1000;
    File->_cnt = 0x1000;
  }
  else
  {
    File->_base = (char *)&File->_charbuf;
    File->_ptr = (char *)&File->_charbuf;
    File->_bufsiz = 2;
    File->_cnt = 2;
  }
  File->_flag |= 0x1102u;
  return 1;
}
