int __cdecl feof(FILE *File)
{
  if ( File )
    return File->_flag & 0x10;
  *_errno() = 0x16;
  _invalid_parameter(0, 0, 0, 0, 0);
  return 0;
}
