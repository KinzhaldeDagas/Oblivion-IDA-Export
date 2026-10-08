int __cdecl _commit(int a1)
{
  int v1; // edi
  int v2; // esi
  void *osfhandle; // eax
  DWORD LastError; // [esp+14h] [ebp-1Ch]

  if ( a1 == 0xFFFFFFFE ) /*0x9994c5*/
  {
    *_errno() = 9; /*0x9994cc*/
    return 0xFFFFFFFF; /*0x9994d5*/
  }
  if ( a1 < 0 /*0x999520*/
    || a1 >= MEMORY[0xBAAAA0]
    || (v1 = 4 * (a1 >> 5) + 0xBAAAC0, v2 = 0x28 * (a1 & 0x1F), (*(_BYTE *)(v2 + unk_BAAAC0[a1 >> 5] + 4) & 1) == 0) )
  {
    *_errno() = 9; /*0x9994ed*/
    _invalid_parameter(0, v1, v2); /*0x9994f8*/
    return 0xFFFFFFFF; /*0x999500*/
  }
  __lock_fhandle(a1); /*0x999523*/
  if ( (*(_BYTE *)(v2 + unk_BAAAC0[a1 >> 5] + 4) & 1) == 0 ) /*0x999533*/
    goto LABEL_14; /*0x999533*/
  osfhandle = (void *)_get_osfhandle(a1); /*0x999538*/
  if ( FlushFileBuffers(osfhandle) ) /*0x99953f*/
    LastError = 0; /*0x999554*/
  else
    LastError = GetLastError(); /*0x99954f*/
  if ( LastError ) /*0x99955a*/
  {
    *__doserrno() = LastError; /*0x999564*/
LABEL_14:
    *_errno() = 9; /*0x999566*/
    return _commit_::_good_25045(); /*0x999572*/
  }
  return _commit_::_good_25045(); /*0x999584*/
}
