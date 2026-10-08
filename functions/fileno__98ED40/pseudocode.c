int __cdecl _fileno(FILE *File)
{
  int v1; // ebx
  int v2; // edi

  if ( File ) /*0x98ed49*/
    return File->_file; /*0x98ed68*/
  *_errno() = 0x16; /*0x98ed55*/
  _invalid_parameter(v1, v2, 0); /*0x98ed5b*/
  return 0xFFFFFFFF; /*0x98ed66*/
}
