LONG __thiscall sub_431F50(volatile LONG *this)
{
  volatile LONG *v2; // esi
  LONG result; // eax

  v2 = this + 3; /*0x431f59*/
  if ( !*((_DWORD *)this + 3) ) /*0x431f54*/
  {
    InterlockedIncrement(this + 3); /*0x431f5f*/
    ReleaseSemaphore(*((HANDLE *)v2 + 2), 1, 0); /*0x431f6d*/
  }
  result = WaitForSingleObject(*((HANDLE *)this + 8), 0xFFFFFFFF); /*0x431f7e*/
  if ( result != 0x102 ) /*0x431f89*/
    return InterlockedDecrement(this + 6); /*0x431f8c*/
  return result; /*0x431f92*/
}
