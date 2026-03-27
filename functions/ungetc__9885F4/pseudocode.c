int __cdecl ungetc(int Ch, FILE *File)
{
  int v2; // ebx
  int v3; // edi

  if ( !File )
  {
    *_errno() = 0x16;
    _invalid_parameter(v2, v3, 0);
    JUMPOUT(0x988656);
  }
  _lock_file(File);
  _ungetc_nolock(Ch, File);
  _unlock_file();
  return ungetc_::_LN9_4();
}
