void __cdecl __noreturn sub_42FAD0(int a1)
{
  int v1; // eax
  volatile LONG *v2; // esi

  v1 = a1;
  v2 = (volatile LONG *)(a1 + 0x38);
  while ( 1 )
  {
    if ( WaitForSingleObject(*(HANDLE *)(v1 + 0x28), 0xFFFFFFFF) != 0x102 )
      InterlockedDecrement((volatile LONG *)(a1 + 0x20));
    if ( WaitForSingleObject(*(HANDLE *)(a1 + 0x40), 0xFFFFFFFF) != 0x102 )
      InterlockedDecrement(v2);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x1C) + 4))(*(_DWORD *)(a1 + 0x1C));
    InterlockedIncrement(v2);
    ReleaseSemaphore(*(HANDLE *)(a1 + 0x40), 1, 0);
    InterlockedIncrement((volatile LONG *)(a1 + 0x2C));
    ReleaseSemaphore(*(HANDLE *)(a1 + 0x34), 1, 0);
    v1 = a1;
  }
}
