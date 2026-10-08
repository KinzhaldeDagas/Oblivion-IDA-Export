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
    if ( _fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE ) /*0x988505*/
    {
      v3 = &aA_1; /*0x988529*/
    }
    else
    {
      v2 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0); /*0x988511*/
      v3 = (_BYTE *)(*v2 + 0x28 * (_fileno(File) & 0x1F)); /*0x988523*/
    }
    if ( (v3[0x24] & 0x7F) != 0
      || (_fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE
        ? (v5 = (char *)&aA_1)
        : (v4 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0), v5 = (char *)(*v4 + 0x28 * (_fileno(File) & 0x1F))),
          v5[0x24] < 0) )
    {
      *_errno() = 0x16; /*0x98857e*/
      _invalid_parameter((int)&aA_1, 0, (int)File); /*0x988584*/
      return 0xFFFFFFFF; /*0x988592*/
    }
  }
  if ( Ch == 0xFFFFFFFF ) /*0x988599*/
    return 0xFFFFFFFF; /*0x988599*/
  flag = File->_flag; /*0x98859b*/
  if ( (flag & 1) == 0 && ((char)flag >= 0 || (flag & 2) != 0) ) /*0x9885a8*/
    return 0xFFFFFFFF; /*0x9885a8*/
  if ( !File->_base ) /*0x9885ac*/
    _getbuf(File); /*0x9885b2*/
  if ( File->_ptr == File->_base ) /*0x9885bd*/
  {
    if ( File->_cnt ) /*0x9885bf*/
      return 0xFFFFFFFF; /*0x9885c2*/
    ++File->_ptr; /*0x9885c5*/
  }
  v8 = --File->_ptr; /*0x9885cd*/
  if ( (File->_flag & 0x40) != 0 ) /*0x9885cf*/
  {
    if ( *v8 != (_BYTE)Ch ) /*0x9885d3*/
    {
      File->_ptr = v8 + 1; /*0x9885d6*/
      return 0xFFFFFFFF; /*0x9885d8*/
    }
  }
  else
  {
    *v8 = Ch; /*0x9885da*/
  }
  v9 = File->_flag; /*0x9885dc*/
  ++File->_cnt; /*0x9885df*/
  File->_flag = v9 & 0xFFFFFFEE | 1; /*0x9885e8*/
  return (unsigned __int8)Ch; /*0x98858e*/
}
