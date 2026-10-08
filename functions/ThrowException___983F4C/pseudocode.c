void __stdcall __noreturn ThrowException__(DWORD a1, _BYTE *a2)
{
  DWORD dwExceptionCode[8]; // [esp+8h] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, &unk_AA3F14, sizeof(dwExceptionCode)); /*0x983f62*/
  dwExceptionCode[6] = a1; /*0x983f64*/
  dwExceptionCode[7] = (DWORD)a2; /*0x983f6d*/
  if ( a2 ) /*0x983f71*/
  {
    if ( (*a2 & 8) != 0 ) /*0x983f76*/
      dwExceptionCode[5] = 0x1994000; /*0x983f78*/
  }
  RaiseException(dwExceptionCode[0], dwExceptionCode[1], dwExceptionCode[4], (const ULONG_PTR *)&dwExceptionCode[5]); /*0x983f8c*/
}
