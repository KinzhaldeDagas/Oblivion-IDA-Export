int __cdecl rename(const char *OldFilename, const char *NewFilename)
{
  DWORD LastError; // eax

  if ( MoveFileA(OldFilename, NewFilename) )
    LastError = 0;
  else
    LastError = GetLastError();
  if ( !LastError )
    return 0;
  _dosmaperr(LastError);
  return 0xFFFFFFFF;
}
