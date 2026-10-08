char __thiscall sub_432860(volatile LONG *this)
{
  DWORD CurrentThreadId; // eax
  int v2; // esi
  int v3; // edi

  LOBYTE(CurrentThreadId) = sub_4322B0(this); /*0x432860*/
  if ( (_BYTE)CurrentThreadId ) /*0x432867*/
  {
    v2 = *((_DWORD *)MEMORY[0xB33A1C] + 6); /*0x43286f*/
    v3 = *(_DWORD *)(v2 + 8); /*0x432873*/
    CurrentThreadId = GetCurrentThreadId(); /*0x432876*/
    if ( v3 != CurrentThreadId ) /*0x43287f*/
      LOBYTE(CurrentThreadId) = sub_431F50((volatile LONG *)v2); /*0x432884*/
  }
  return CurrentThreadId; /*0x43288a*/
}
