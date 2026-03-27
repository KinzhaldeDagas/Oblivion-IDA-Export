int __cdecl _ungetc_nolock(int Ch, FILE *File)
{
  _DWORD *v2; // edi
  _BYTE *v3; // eax
  _DWORD *v4; // edi
  char *v5; // eax
  int flag; // eax
  char *v8; // eax
  int v9; // eax

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
        ? (v5 = (char *)&aA_1)
        : (v4 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0), v5 = (char *)(*v4 + 0x28 * (_fileno(File) & 0x1F))),
          v5[0x24] < 0) )
    {
      *_errno() = 0x16;
      _invalid_parameter((int)&aA_1, 0, (int)File);
      return 0xFFFFFFFF;
    }
  }
  if ( Ch == 0xFFFFFFFF )
    return 0xFFFFFFFF;
  flag = File->_flag;
  if ( (flag & 1) == 0 && ((char)flag >= 0 || (flag & 2) != 0) )
    return 0xFFFFFFFF;
  if ( !File->_base )
    _getbuf(File);
  if ( File->_ptr == File->_base )
  {
    if ( File->_cnt )
      return 0xFFFFFFFF;
    ++File->_ptr;
  }
  v8 = --File->_ptr;
  if ( (File->_flag & 0x40) != 0 )
  {
    if ( *v8 != (_BYTE)Ch )
    {
      File->_ptr = v8 + 1;
      return 0xFFFFFFFF;
    }
  }
  else
  {
    *v8 = Ch;
  }
  v9 = File->_flag;
  ++File->_cnt;
  File->_flag = v9 & 0xFFFFFFEE | 1;
  return (unsigned __int8)Ch;
}
