int __cdecl fsetpos(FILE *File, const fpos_t *Pos)
{
  int v2; // ebx
  int v3; // edi

  if ( File && Pos ) /*0x9889d5*/
    return _fseeki64(File, *Pos, 0); /*0x9889e1*/
  *_errno() = 0x16; /*0x9889bc*/
  _invalid_parameter(v2, v3, 0); /*0x9889c2*/
  return 0xFFFFFFFF; /*0x9889cd*/
}
