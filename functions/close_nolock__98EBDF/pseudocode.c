unsigned int __cdecl _close_nolock(int a1)
{
  int osfhandle; // edi
  void *v2; // eax
  DWORD LastError; // edi

  if ( _get_osfhandle(a1) == 0xFFFFFFFF
    || (a1 == 1 && (*(_BYTE *)(dword_BAAAC0[0] + 0x54) & 1) != 0
     || a1 == 2 && (*(_BYTE *)(dword_BAAAC0[0] + 0x2C) & 1) != 0)
    && (osfhandle = _get_osfhandle(2), _get_osfhandle(1) == osfhandle)
    || (v2 = (void *)_get_osfhandle(a1), CloseHandle(v2)) )
  {
    LastError = 0;
  }
  else
  {
    LastError = GetLastError();
  }
  _free_osfhnd(a1);
  *(_BYTE *)(dword_BAAAC0[a1 >> 5] + 0x28 * (a1 & 0x1F) + 4) = 0;
  if ( !LastError )
    return 0;
  _dosmaperr(LastError);
  return 0xFFFFFFFF;
}
