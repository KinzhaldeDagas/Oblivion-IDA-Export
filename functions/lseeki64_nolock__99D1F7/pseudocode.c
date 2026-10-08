__int64 __cdecl _lseeki64_nolock(int a1, LONG a2, int a3, DWORD dwMoveMethod)
{
  void *osfhandle; // eax
  DWORD LastError; // eax
  _BYTE *v7; // eax
  __int64 lDistanceToMove; // [esp+8h] [ebp-8h] BYREF

  HIDWORD(lDistanceToMove) = a3; /*0x99d20b*/
  osfhandle = (void *)_get_osfhandle(a1); /*0x99d20e*/
  if ( osfhandle == (void *)0xFFFFFFFF ) /*0x99d219*/
  {
    *_errno() = 9; /*0x99d220*/
    return 0xFFFFFFFFFFFFFFFFuLL; /*0x99d22a*/
  }
  LODWORD(lDistanceToMove) = SetFilePointer(osfhandle, a2, (PLONG)&lDistanceToMove + 1, dwMoveMethod); /*0x99d23f*/
  if ( (_DWORD)lDistanceToMove == 0xFFFFFFFF ) /*0x99d242*/
  {
    LastError = GetLastError(); /*0x99d244*/
    if ( LastError ) /*0x99d24c*/
    {
      _dosmaperr(LastError); /*0x99d24f*/
      return 0xFFFFFFFFFFFFFFFFuLL; /*0x99d255*/
    }
  }
  v7 = (_BYTE *)(unk_BAAAC0[a1 >> 5] + 0x28 * (a1 & 0x1F) + 4); /*0x99d269*/
  *v7 &= ~2u; /*0x99d26d*/
  return lDistanceToMove; /*0x99d276*/
}
