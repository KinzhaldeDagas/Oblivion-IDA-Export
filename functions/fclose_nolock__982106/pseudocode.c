int __cdecl _fclose_nolock(FILE *File)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0xFFFFFFFF; /*0x98210f*/
  if ( File ) /*0x982114*/
  {
    if ( (File->_flag & 0x83) != 0 ) /*0x982137*/
    {
      v1 = _flush(File); /*0x982140*/
      _freebuf((int)File); /*0x982142*/
      v3 = _fileno(File); /*0x982148*/
      if ( _close(v3) >= 0 ) /*0x982158*/
      {
        if ( File->_tmpfname ) /*0x98215f*/
        {
          free(File->_tmpfname); /*0x982167*/
          File->_tmpfname = 0; /*0x98216d*/
        }
      }
      else
      {
        v1 = 0xFFFFFFFF; /*0x98215a*/
      }
    }
    File->_flag = 0; /*0x982170*/
    return v1; /*0x982173*/
  }
  else
  {
    *_errno() = 0x16; /*0x982120*/
    _invalid_parameter(0xFFFFFFFF, 0, 0); /*0x982126*/
    return 0xFFFFFFFF; /*0x98212e*/
  }
}
