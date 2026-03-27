int __cdecl fgetc(FILE *File)
{
  _DWORD *v1; // edi
  _BYTE *v3; // eax
  char *v4; // eax
  int v6; // eax
  int v7; // [esp+10h] [ebp-1Ch]

  v7 = 0;
  if ( File )
  {
    _lock_file(File);
    if ( (File->_flag & 0x40) == 0 )
    {
      if ( _fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE )
      {
        v3 = &aA_1;
      }
      else
      {
        v1 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0);
        v3 = (_BYTE *)(*v1 + 0x28 * (_fileno(File) & 0x1F));
      }
      if ( (v3[0x24] & 0x7F) != 0
        || (_fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE
          ? (v4 = (char *)&aA_1)
          : (v1 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0), v4 = (char *)(*v1 + 0x28 * (_fileno(File) & 0x1F))),
            v4[0x24] < 0) )
      {
        *_errno() = 0x16;
        _invalid_parameter(0, (int)v1, (int)File);
        v7 = 0xFFFFFFFF;
      }
    }
    if ( !v7 )
    {
      if ( --File->_cnt < 0 )
        v6 = _filbuf(File);
      else
        v6 = *(unsigned __int8 *)File->_ptr++;
      v7 = v6;
    }
    _unlock_file();
    return v7;
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, (int)v1, 0);
    return 0xFFFFFFFF;
  }
}
