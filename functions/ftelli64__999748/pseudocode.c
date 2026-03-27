__int64 __cdecl _ftelli64(FILE *File)
{
  _lock_file((_RTL_CRITICAL_SECTION_0 *)File);
  _ftelli64_nolock(File);
  _unlock_file((_RTL_CRITICAL_SECTION_0 *)File);
  return _ftelli64_::_LN8_8();
}
