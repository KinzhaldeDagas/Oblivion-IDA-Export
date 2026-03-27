int __cdecl fseek(FILE *File, int Offset, int Origin)
{
  if ( !File || (unsigned int)Origin > 2 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    JUMPOUT(0x984876);
  }
  _lock_file(File);
  _fseek_nolock(File, Offset, Origin);
  _unlock_file();
  return fseek_::_LN12_1();
}
