int __cdecl fflush(FILE *File)
{
  int v1; // ebp

  if ( !File ) /*0x9887f5*/
  {
    flsall(0); /*0x9887f8*/
    JUMPOUT(0x988827); /*0x988827*/
  }
  _lock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x988803*/
  _fflush_nolock(File); /*0x98880f*/
  _unlock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x988830*/
  return fflush_::_LN9_5(v1);
}
