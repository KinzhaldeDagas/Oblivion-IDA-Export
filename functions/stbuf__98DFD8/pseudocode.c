int __cdecl _stbuf(FILE *File)
{
  int v1; // eax
  int v2; // eax
  char **v3; // edi
  char *v4; // eax
  char *v5; // edi

  v1 = _fileno(File); /*0x98dfde*/
  if ( !_isatty(v1) ) /*0x98dfed*/
    return 0; /*0x98dfed*/
  if ( File == (FILE *)(sub_98BAF0() + 8) ) /*0x98dff9*/
  {
    v2 = 0; /*0x98dffb*/
  }
  else
  {
    if ( File != (FILE *)(sub_98BAF0() + 0x10) ) /*0x98e009*/
      return 0; /*0x98e06a*/
    v2 = 1; /*0x98e00d*/
  }
  ++dword_BA9E10[1]; /*0x98e00e*/
  if ( (File->_flag & 0x10C) != 0 ) /*0x98e01a*/
    return 0; /*0x98e01a*/
  v3 = (char **)(4 * v2 + 0xBAA5FC); /*0x98e01e*/
  if ( dword_BA9E10[v2 + 0x1FB] || (v4 = (char *)unknown_libname_72(0x1000), (*v3 = v4) != 0) ) /*0x98e03a*/
  {
    v5 = *v3; /*0x98e04f*/
    File->_base = v5; /*0x98e051*/
    File->_ptr = v5; /*0x98e054*/
    File->_bufsiz = 0x1000; /*0x98e056*/
    File->_cnt = 0x1000; /*0x98e059*/
  }
  else
  {
    File->_base = (char *)&File->_charbuf; /*0x98e041*/
    File->_ptr = (char *)&File->_charbuf; /*0x98e044*/
    File->_bufsiz = 2; /*0x98e047*/
    File->_cnt = 2; /*0x98e04a*/
  }
  File->_flag |= 0x1102u; /*0x98e05c*/
  return 1; /*0x98e068*/
}
