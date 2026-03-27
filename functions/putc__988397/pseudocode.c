int __cdecl putc(int Ch, FILE *File)
{
  _DWORD *v2; // edi
  _BYTE *v4; // eax
  char *v5; // eax
  int v7; // eax
  int v8; // [esp+10h] [ebp-1Ch]

  v8 = 0;
  if ( File )
  {
    _lock_file(File);
    if ( (File->_flag & 0x40) == 0 )
    {
      if ( _fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE )
      {
        v4 = &aA_1;
      }
      else
      {
        v2 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0);
        v4 = (_BYTE *)(*v2 + 0x28 * (_fileno(File) & 0x1F));
      }
      if ( (v4[0x24] & 0x7F) != 0
        || (_fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE
          ? (v5 = (char *)&aA_1)
          : (v2 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0), v5 = (char *)(*v2 + 0x28 * (_fileno(File) & 0x1F))),
            v5[0x24] < 0) )
      {
        *_errno() = 0x16;
        _invalid_parameter(0, (int)v2, (int)File);
        v8 = 0xFFFFFFFF;
      }
    }
    if ( !v8 )
    {
      if ( --File->_cnt < 0 )
      {
        v7 = _flsbuf(Ch, File);
      }
      else
      {
        *File->_ptr = Ch;
        v7 = (unsigned __int8)Ch;
        ++File->_ptr;
      }
      v8 = v7;
    }
    _unlock_file();
    return v8;
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, (int)v2, 0);
    return 0xFFFFFFFF;
  }
}
