DWORD __thiscall sub_431FA0(volatile LONG *this)
{
  int v2; // esi
  DWORD result; // eax

  v2 = *((_DWORD *)this + 2); /*0x431fa4*/
  result = GetCurrentThreadId(); /*0x431fa7*/
  if ( v2 != result ) /*0x431faf*/
  {
    if ( !*((_DWORD *)this + 3) ) /*0x431fb1*/
    {
      InterlockedIncrement(this + 3); /*0x431fca*/
      ReleaseSemaphore(*((HANDLE *)this + 5), 1, 0); /*0x431fd4*/
    }
    InterlockedIncrement(this + 6); /*0x431fdc*/
    return ReleaseSemaphore(*((HANDLE *)this + 8), 1, 0); /*0x431fe6*/
  }
  return result; /*0x431fec*/
}
