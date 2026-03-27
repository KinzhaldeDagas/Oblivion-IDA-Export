unsigned __int64 __cdecl _lseeki64_nolock(int a1, LONG a2, int a3, DWORD dwMoveMethod)
{
  void *osfhandle; // eax
  DWORD LastError; // eax
  _BYTE *v7; // eax
  __int64 lDistanceToMove; // [esp+8h] [ebp-8h] BYREF

  HIDWORD(lDistanceToMove) = a3;
  osfhandle = (void *)_get_osfhandle(a1);
  if ( osfhandle == (void *)0xFFFFFFFF )
  {
    *_errno() = 9;
    return 0xFFFFFFFFFFFFFFFFuLL;
  }
  LODWORD(lDistanceToMove) = SetFilePointer(osfhandle, a2, (PLONG)&lDistanceToMove + 1, dwMoveMethod);
  if ( (_DWORD)lDistanceToMove == 0xFFFFFFFF )
  {
    LastError = GetLastError();
    if ( LastError )
    {
      _dosmaperr(LastError);
      return 0xFFFFFFFFFFFFFFFFuLL;
    }
  }
  v7 = (_BYTE *)(dword_BAAAC0[a1 >> 5] + 0x28 * (a1 & 0x1F) + 4);
  *v7 &= ~2u;
  return lDistanceToMove;
}
