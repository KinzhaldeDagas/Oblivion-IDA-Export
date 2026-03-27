DWORD __cdecl _lseek_nolock(int a1, LONG lDistanceToMove, DWORD dwMoveMethod)
{
  void *osfhandle; // eax
  DWORD v5; // edi
  DWORD LastError; // eax
  _BYTE *v7; // eax

  osfhandle = (void *)_get_osfhandle(a1);
  if ( osfhandle == (void *)0xFFFFFFFF )
  {
    *_errno() = 9;
    return 0xFFFFFFFF;
  }
  else
  {
    v5 = SetFilePointer(osfhandle, lDistanceToMove, 0, dwMoveMethod);
    if ( v5 == 0xFFFFFFFF )
      LastError = GetLastError();
    else
      LastError = 0;
    if ( LastError )
    {
      _dosmaperr(LastError);
      return 0xFFFFFFFF;
    }
    else
    {
      v7 = (_BYTE *)(dword_BAAAC0[a1 >> 5] + 0x28 * (a1 & 0x1F) + 4);
      *v7 &= ~2u;
      return v5;
    }
  }
}
