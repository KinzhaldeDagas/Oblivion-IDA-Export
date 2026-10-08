int __cdecl _fseeki64(FILE *File, __int64 Offset, int Origin)
{
  int v3; // ebp

  _lock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x99983a*/
  _fseeki64_nolock(File, Offset, Origin); /*0x999850*/
  _unlock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x999873*/
  return _fseeki64_::_LN8_9(v3);
}
