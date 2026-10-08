int __cdecl _read(int a1, void *lpWideCharStr, unsigned int nNumberOfBytesToRead)
{
  int v3; // ebx
  int v4; // esi
  int nolock; // [esp+14h] [ebp-1Ch]

  if ( a1 == 0xFFFFFFFE ) /*0x9993a5*/
  {
    *__doserrno() = 0; /*0x9993ac*/
    *_errno() = 9; /*0x9993b4*/
    return 0xFFFFFFFF; /*0x9993bd*/
  }
  if ( a1 < 0 /*0x99940f*/
    || a1 >= MEMORY[0xBAAAA0]
    || (v3 = 4 * (a1 >> 5) + 0xBAAAC0, v4 = 0x28 * (a1 & 0x1F), (*(_BYTE *)(unk_BAAAC0[a1 >> 5] + v4 + 4) & 1) == 0) )
  {
    *__doserrno() = 0; /*0x9993d5*/
    *_errno() = 9; /*0x9993dc*/
    _invalid_parameter(v3, 0, v4); /*0x9993e7*/
    return 0xFFFFFFFF; /*0x9993ef*/
  }
  __lock_fhandle(a1); /*0x999412*/
  if ( (*(_BYTE *)(unk_BAAAC0[a1 >> 5] + v4 + 4) & 1) != 0 ) /*0x999422*/
  {
    nolock = _read_nolock(v3, a1, (LPWSTR)lpWideCharStr, nNumberOfBytesToRead); /*0x999435*/
  }
  else
  {
    *_errno() = 9; /*0x99943f*/
    *__doserrno() = 0; /*0x99944a*/
    nolock = 0xFFFFFFFF; /*0x99944c*/
  }
  _unlock_fhandle(a1); /*0x999468*/
  return nolock; /*0x99945f*/
}
