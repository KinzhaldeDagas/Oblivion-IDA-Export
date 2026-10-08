unsigned int __cdecl _close_nolock(int a1)
{
  int osfhandle; // edi
  void *v2; // eax
  DWORD LastError; // edi

  if ( _get_osfhandle(a1) == 0xFFFFFFFF /*0x98ec2a*/
    || (a1 == 1 && (*(_BYTE *)(unk_BAAAC0[0] + 0x54) & 1) != 0 || a1 == 2 && (*(_BYTE *)(unk_BAAAC0[0] + 0x2C) & 1) != 0)
    && (osfhandle = _get_osfhandle(2), _get_osfhandle(1) == osfhandle)
    || (v2 = (void *)_get_osfhandle(a1), CloseHandle(v2)) )
  {
    LastError = 0; /*0x98ec3e*/
  }
  else
  {
    LastError = GetLastError(); /*0x98ec3a*/
  }
  _free_osfhnd(a1); /*0x98ec41*/
  *(_BYTE *)(unk_BAAAC0[a1 >> 5] + 0x28 * (a1 & 0x1F) + 4) = 0; /*0x98ec5b*/
  if ( !LastError ) /*0x98ec60*/
    return 0; /*0x98ec6e*/
  _dosmaperr(LastError); /*0x98ec63*/
  return 0xFFFFFFFF; /*0x98ec70*/
}
