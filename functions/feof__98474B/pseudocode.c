int __cdecl feof(FILE *File)
{
  int v1; // ebx
  int v2; // edi

  if ( File ) /*0x984754*/
    return File->_flag & 0x10; /*0x984775*/
  *_errno() = 0x16; /*0x984760*/
  _invalid_parameter(v1, v2, 0); /*0x984766*/
  return 0; /*0x984770*/
}
