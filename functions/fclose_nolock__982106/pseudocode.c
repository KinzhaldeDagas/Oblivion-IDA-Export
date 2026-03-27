int __cdecl _fclose_nolock(FILE *File)
{
  int v1; // ebx
  int v3; // eax

  v1 = 0xFFFFFFFF;
  if ( File )
  {
    if ( (File->_flag & 0x83) != 0 )
    {
      v1 = _flush(File);
      _freebuf(File);
      v3 = _fileno(File);
      if ( _close(v3) >= 0 )
      {
        if ( File->_tmpfname )
        {
          free(File->_tmpfname);
          File->_tmpfname = 0;
        }
      }
      else
      {
        v1 = 0xFFFFFFFF;
      }
    }
    File->_flag = 0;
    return v1;
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 0xFFFFFFFF;
  }
}
