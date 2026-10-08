int __cdecl _fseek_nolock(FILE *File, int Offset, int Origin)
{
  int flag; // eax
  int v5; // eax
  int v6; // eax

  flag = File->_flag; /*0x984781*/
  if ( (flag & 0x83) != 0 ) /*0x984786*/
  {
    File->_flag = flag & 0xFFFFFFEF; /*0x98479f*/
    if ( Origin == 1 ) /*0x9847a2*/
    {
      Offset += _ftell_nolock(File); /*0x9847aa*/
      Origin = 0; /*0x9847ad*/
    }
    _flush(File); /*0x9847b3*/
    v5 = File->_flag; /*0x9847b8*/
    if ( (char)v5 >= 0 ) /*0x9847be*/
    {
      if ( (v5 & 1) != 0 && (v5 & 8) != 0 && (v5 & 0x400) == 0 ) /*0x9847d4*/
        File->_bufsiz = 0x200; /*0x9847d6*/
    }
    else
    {
      File->_flag = v5 & 0xFFFFFFFC; /*0x9847c3*/
    }
    v6 = _fileno(File); /*0x9847e4*/
    return (_lseek(v6, Offset, Origin) != 0xFFFFFFFF) - 1; /*0x9847fc*/
  }
  else
  {
    *_errno() = 0x16; /*0x98478d*/
    return 0xFFFFFFFF; /*0x984793*/
  }
}
