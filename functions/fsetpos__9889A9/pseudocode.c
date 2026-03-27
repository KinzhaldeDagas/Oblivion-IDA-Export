int __cdecl fsetpos(FILE *File, const fpos_t *Pos)
{
  int v2; // ebx
  int v3; // edi

  if ( File && Pos )
    return _fseeki64(File, *Pos, 0);
  *_errno() = 0x16;
  _invalid_parameter(v2, v3, 0);
  return 0xFFFFFFFF;
}
