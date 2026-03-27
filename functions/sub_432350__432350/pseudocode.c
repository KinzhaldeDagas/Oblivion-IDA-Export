char __thiscall sub_432350(volatile LONG *this)
{
  unsigned int i; // edi
  int v3; // ebp

  if ( !*((_DWORD *)this + 8) || InterlockedDecrement(this + 8) )
    return 0;
  while ( *((_DWORD *)this + 7) != *((_DWORD *)this + 9) )
    Sleep(1u);
  for ( i = 0; i < *((_DWORD *)this + 9); ++i )
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 0xA) + 4 * i);
    if ( !*(_DWORD *)(v3 + 0xC) )
    {
      InterlockedIncrement((volatile LONG *)(v3 + 0xC));
      ReleaseSemaphore(*(HANDLE *)(v3 + 0x14), 1, 0);
    }
    InterlockedIncrement((volatile LONG *)(v3 + 0x18));
    ReleaseSemaphore(*(HANDLE *)(v3 + 0x20), 1, 0);
    InterlockedDecrement(this + 7);
  }
  return 1;
}
