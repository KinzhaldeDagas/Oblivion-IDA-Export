int __cdecl _fseek_nolock(FILE *File, int Offset, int Origin)
{
  int flag; // eax
  int v5; // eax
  int v6; // eax

  flag = File->_flag;
  if ( (flag & 0x83) != 0 )
  {
    File->_flag = flag & 0xFFFFFFEF;
    if ( Origin == 1 )
    {
      Offset += _ftell_nolock(File);
      Origin = 0;
    }
    _flush(File);
    v5 = File->_flag;
    if ( (char)v5 >= 0 )
    {
      if ( (v5 & 1) != 0 && (v5 & 8) != 0 && (v5 & 0x400) == 0 )
        File->_bufsiz = 0x200;
    }
    else
    {
      File->_flag = v5 & 0xFFFFFFFC;
    }
    v6 = _fileno(File);
    return (_lseek(v6, Offset, Origin) != 0xFFFFFFFF) - 1;
  }
  else
  {
    *_errno() = 0x16;
    return 0xFFFFFFFF;
  }
}
