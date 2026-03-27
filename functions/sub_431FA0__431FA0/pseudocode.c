DWORD __thiscall sub_431FA0(volatile LONG *this)
{
  int v2; // esi
  DWORD result; // eax

  v2 = *((_DWORD *)this + 2);
  result = GetCurrentThreadId();
  if ( v2 != result )
  {
    if ( !*((_DWORD *)this + 3) )
    {
      InterlockedIncrement(this + 3);
      ReleaseSemaphore(*((HANDLE *)this + 5), 1, 0);
    }
    InterlockedIncrement(this + 6);
    return ReleaseSemaphore(*((HANDLE *)this + 8), 1, 0);
  }
  return result;
}
