int __cdecl ftell(FILE *File)
{
  if ( !File )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    JUMPOUT(0x984A7C);
  }
  _lock_file(File);
  _ftell_nolock(File);
  _unlock_file();
  return ftell_::_LN9_2();
}
