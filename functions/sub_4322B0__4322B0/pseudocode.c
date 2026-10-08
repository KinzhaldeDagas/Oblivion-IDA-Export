char __thiscall sub_4322B0(volatile LONG *this)
{
  unsigned int i; // ebx
  int v3; // edi

  if ( InterlockedIncrement(this + 8) != 1 ) /*0x4322c0*/
    return 0; /*0x432341*/
  while ( *((_DWORD *)this + 7) ) /*0x4322c2*/
    Sleep(1u); /*0x4322d3*/
  for ( i = 0; i < *((_DWORD *)this + 9); ++i ) /*0x4322de*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 0xA) + 4 * i); /*0x4322e7*/
    if ( !*(_DWORD *)(v3 + 0xC) ) /*0x4322ea*/
    {
      InterlockedIncrement((volatile LONG *)(v3 + 0xC)); /*0x4322f5*/
      ReleaseSemaphore(*(HANDLE *)(v3 + 0x14), 1, 0); /*0x432303*/
    }
    if ( WaitForSingleObject(*(HANDLE *)(v3 + 0x20), 0xFFFFFFFF) != 0x102 ) /*0x43231f*/
      InterlockedDecrement((volatile LONG *)(v3 + 0x18)); /*0x432322*/
    InterlockedIncrement(this + 7); /*0x43232c*/
  }
  return 1; /*0x43233f*/
}
