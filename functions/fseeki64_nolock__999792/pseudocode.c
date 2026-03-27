int __cdecl _fseeki64_nolock(FILE *File, __int64 Offset, int Origin)
{
  int flag; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax

  flag = File->_flag;
  if ( (flag & 0x83) != 0 && (v4 = Origin, (unsigned int)Origin <= 2) )
  {
    File->_flag = flag & 0xFFFFFFEF;
    if ( Origin == 1 )
    {
      Offset += _ftelli64_nolock(File);
      v4 = 0;
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
    v7 = _lseeki64(v6, Offset, v4);
    if ( (HIDWORD(v7) & (unsigned int)v7) != 0xFFFFFFFF )
      return 0;
  }
  else
  {
    *_errno() = 0x16;
  }
  return 0xFFFFFFFF;
}
