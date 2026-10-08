char __thiscall sub_432350(volatile LONG *this)
{
  unsigned int i; // edi
  int v3; // ebp

  if ( !*((_DWORD *)this + 8) || InterlockedDecrement(this + 8) ) /*0x432362*/
    return 0; /*0x4323ee*/
  while ( *((_DWORD *)this + 7) != *((_DWORD *)this + 9) ) /*0x432378*/
    Sleep(1u); /*0x432382*/
  for ( i = 0; i < *((_DWORD *)this + 9); ++i ) /*0x43238e*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 0xA) + 4 * i); /*0x432397*/
    if ( !*(_DWORD *)(v3 + 0xC) ) /*0x43239a*/
    {
      InterlockedIncrement((volatile LONG *)(v3 + 0xC)); /*0x4323a5*/
      ReleaseSemaphore(*(HANDLE *)(v3 + 0x14), 1, 0); /*0x4323b3*/
    }
    InterlockedIncrement((volatile LONG *)(v3 + 0x18)); /*0x4323bf*/
    ReleaseSemaphore(*(HANDLE *)(v3 + 0x20), 1, 0); /*0x4323cd*/
    InterlockedDecrement(this + 7); /*0x4323d9*/
  }
  return 1; /*0x4323ec*/
}
