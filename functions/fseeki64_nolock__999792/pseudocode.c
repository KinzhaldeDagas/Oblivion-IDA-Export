int __cdecl _fseeki64_nolock(FILE *File, __int64 Offset, int Origin)
{
  int flag; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax

  flag = File->_flag; /*0x999799*/
  if ( (flag & 0x83) != 0 && (v4 = Origin, (unsigned int)Origin <= 2) ) /*0x9997a6*/
  {
    File->_flag = flag & 0xFFFFFFEF; /*0x9997b8*/
    if ( Origin == 1 ) /*0x9997bb*/
    {
      Offset += _ftelli64_nolock(File); /*0x9997c3*/
      v4 = 0; /*0x9997ca*/
    }
    _flush(File); /*0x9997cd*/
    v5 = File->_flag; /*0x9997d2*/
    if ( (char)v5 >= 0 ) /*0x9997d8*/
    {
      if ( (v5 & 1) != 0 && (v5 & 8) != 0 && (v5 & 0x400) == 0 ) /*0x9997ee*/
        File->_bufsiz = 0x200; /*0x9997f0*/
    }
    else
    {
      File->_flag = v5 & 0xFFFFFFFC; /*0x9997dd*/
    }
    v6 = _fileno(File); /*0x9997ff*/
    v7 = _lseeki64(v6, Offset, v4); /*0x999806*/
    if ( (HIDWORD(v7) & (unsigned int)v7) != 0xFFFFFFFF ) /*0x999813*/
      return 0; /*0x999817*/
  }
  else
  {
    *_errno() = 0x16; /*0x99981e*/
  }
  return 0xFFFFFFFF; /*0x999827*/
}
