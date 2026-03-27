BOOL __thiscall sub_42FD10(_DWORD *this)
{
  int v1; // ecx
  int v2; // esi
  BOOL result; // eax

  if ( !*(this + 2) )
    *(this + 2) = 1;
  v1 = *(this + 3);
  if ( v1 )
  {
    v2 = v1 + 0x20;
    InterlockedIncrement((volatile LONG *)(v1 + 0x20));
    return ReleaseSemaphore(*(HANDLE *)(v2 + 8), 1, 0);
  }
  return result;
}
