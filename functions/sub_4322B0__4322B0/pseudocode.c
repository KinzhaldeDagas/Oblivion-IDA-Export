char __thiscall sub_4322B0(volatile LONG *this)
{
  unsigned int i; // ebx
  int v3; // edi

  if ( InterlockedIncrement(this + 8) != 1 )
    return 0;
  while ( *((_DWORD *)this + 7) )
    Sleep(1u);
  for ( i = 0; i < *((_DWORD *)this + 9); ++i )
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 0xA) + 4 * i);
    if ( !*(_DWORD *)(v3 + 0xC) )
    {
      InterlockedIncrement((volatile LONG *)(v3 + 0xC));
      ReleaseSemaphore(*(HANDLE *)(v3 + 0x14), 1, 0);
    }
    if ( WaitForSingleObject(*(HANDLE *)(v3 + 0x20), 0xFFFFFFFF) != 0x102 )
      InterlockedDecrement((volatile LONG *)(v3 + 0x18));
    InterlockedIncrement(this + 7);
  }
  return 1;
}
