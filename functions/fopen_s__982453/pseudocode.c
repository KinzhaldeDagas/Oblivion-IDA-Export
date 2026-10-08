errno_t __cdecl fopen_s(FILE **File, const char *Filename, const char *Mode)
{
  int v3; // ebx
  FILE *v5; // eax

  if ( File ) /*0x98245d*/
  {
    v5 = _fsopen(Filename, Mode, 0x80); /*0x982487*/
    *File = v5; /*0x982491*/
    if ( v5 ) /*0x982493*/
      return 0; /*0x982495*/
    else
      return *_errno(); /*0x98249e*/
  }
  else
  {
    *_errno() = 0x16; /*0x98246c*/
    _invalid_parameter(v3, 0x16, 0); /*0x98246e*/
    return 0x16; /*0x982476*/
  }
}
