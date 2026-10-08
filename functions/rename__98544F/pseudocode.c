int __cdecl rename(const char *OldFilename, const char *NewFilename)
{
  DWORD LastError; // eax

  if ( MoveFileA(OldFilename, NewFilename) ) /*0x985457*/
    LastError = 0; /*0x985469*/
  else
    LastError = GetLastError(); /*0x985461*/
  if ( !LastError ) /*0x98546d*/
    return 0; /*0x98547a*/
  _dosmaperr(LastError); /*0x985470*/
  return 0xFFFFFFFF; /*0x985479*/
}
