__int64 __cdecl _ftelli64(FILE *File)
{
  int v1; // ebp

  _lock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x999757*/
  _ftelli64_nolock(File); /*0x999764*/
  _unlock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x99978b*/
  return _ftelli64_::_LN8_8(v1);
}
