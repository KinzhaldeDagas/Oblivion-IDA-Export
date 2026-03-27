int __cdecl fflush(FILE *File)
{
  if ( !File )
  {
    flsall(0);
    JUMPOUT(0x988827);
  }
  _lock_file(File);
  _fflush_nolock(File);
  _unlock_file();
  return fflush_::_LN9_5();
}
