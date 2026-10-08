void __cdecl __noreturn sub_42FAD0(int a1)
{
  int v1; // eax
  volatile LONG *v2; // esi

  v1 = a1; /*0x42fad0*/
  v2 = (volatile LONG *)(a1 + 0x38); /*0x42fae4*/
  while ( 1 ) /*0x42faf0*/
  {
    if ( WaitForSingleObject(*(HANDLE *)(v1 + 0x28), 0xFFFFFFFF) != 0x102 ) /*0x42fb04*/
      InterlockedDecrement((volatile LONG *)(a1 + 0x20)); /*0x42fb0e*/
    if ( WaitForSingleObject(*(HANDLE *)(a1 + 0x40), 0xFFFFFFFF) != 0x102 ) /*0x42fb25*/
      InterlockedDecrement(v2); /*0x42fb28*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x1C) + 4))(*(_DWORD *)(a1 + 0x1C)); /*0x42fb3a*/
    InterlockedIncrement(v2); /*0x42fb3d*/
    ReleaseSemaphore(*(HANDLE *)(a1 + 0x40), 1, 0); /*0x42fb47*/
    InterlockedIncrement((volatile LONG *)(a1 + 0x2C)); /*0x42fb4c*/
    ReleaseSemaphore(*(HANDLE *)(a1 + 0x34), 1, 0); /*0x42fb56*/
    v1 = a1; /*0x42fb5a*/
  }
}
