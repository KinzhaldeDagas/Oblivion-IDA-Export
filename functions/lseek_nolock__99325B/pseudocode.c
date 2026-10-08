DWORD __cdecl _lseek_nolock(int a1, LONG lDistanceToMove, DWORD dwMoveMethod)
{
  void *osfhandle; // eax
  DWORD v5; // edi
  DWORD LastError; // eax
  _BYTE *v7; // eax

  osfhandle = (void *)_get_osfhandle(a1); /*0x993261*/
  if ( osfhandle == (void *)0xFFFFFFFF ) /*0x99326a*/
  {
    *_errno() = 9; /*0x993271*/
    return 0xFFFFFFFF; /*0x993277*/
  }
  else
  {
    v5 = SetFilePointer(osfhandle, lDistanceToMove, 0, dwMoveMethod); /*0x99328e*/
    if ( v5 == 0xFFFFFFFF ) /*0x993293*/
      LastError = GetLastError(); /*0x993295*/
    else
      LastError = 0; /*0x99329d*/
    if ( LastError ) /*0x9932a1*/
    {
      _dosmaperr(LastError); /*0x9932a4*/
      return 0xFFFFFFFF; /*0x9932aa*/
    }
    else
    {
      v7 = (_BYTE *)(unk_BAAAC0[a1 >> 5] + 0x28 * (a1 & 0x1F) + 4); /*0x9932c1*/
      *v7 &= ~2u; /*0x9932c5*/
      return v5; /*0x9932c8*/
    }
  }
}
