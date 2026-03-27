int __cdecl _fileno(FILE *File)
{
  int v1; // ebx
  int v2; // edi

  if ( File )
    return File->_file;
  *_errno() = 0x16;
  _invalid_parameter(v1, v2, 0);
  return 0xFFFFFFFF;
}
