void __stdcall __noreturn ThrowException__(DWORD a1, _BYTE *a2)
{
  DWORD dwExceptionCode[8]; // [esp+8h] [ebp-20h] BYREF

  qmemcpy(dwExceptionCode, &unk_AA3F14, sizeof(dwExceptionCode));
  dwExceptionCode[6] = a1;
  dwExceptionCode[7] = (DWORD)a2;
  if ( a2 )
  {
    if ( (*a2 & 8) != 0 )
      dwExceptionCode[5] = 0x1994000;
  }
  RaiseException(dwExceptionCode[0], dwExceptionCode[1], dwExceptionCode[4], (const ULONG_PTR *)&dwExceptionCode[5]);
}
