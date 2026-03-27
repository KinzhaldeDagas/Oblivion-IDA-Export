int __cdecl _fseeki64(FILE *File, __int64 Offset, int Origin)
{
  _lock_file((_RTL_CRITICAL_SECTION_0 *)File);
  _fseeki64_nolock(File, Offset, Origin);
  _unlock_file((_RTL_CRITICAL_SECTION_0 *)File);
  return _fseeki64_::_LN8_9();
}
