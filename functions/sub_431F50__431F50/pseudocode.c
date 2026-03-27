LONG __thiscall sub_431F50(volatile LONG *this)
{
  volatile LONG *v2; // esi
  LONG result; // eax

  v2 = this + 3;
  if ( !*((_DWORD *)this + 3) )
  {
    InterlockedIncrement(this + 3);
    ReleaseSemaphore(*((HANDLE *)v2 + 2), 1, 0);
  }
  result = WaitForSingleObject(*((HANDLE *)this + 8), 0xFFFFFFFF);
  if ( result != 0x102 )
    return InterlockedDecrement(this + 6);
  return result;
}
