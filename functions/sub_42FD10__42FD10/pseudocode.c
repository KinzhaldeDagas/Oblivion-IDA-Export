BOOL __thiscall sub_42FD10(_DWORD *this)
{
  int v1; // ecx
  int v2; // esi
  BOOL result; // eax

  if ( !*(this + 2) ) /*0x42fd10*/
    *(this + 2) = 1; /*0x42fd16*/
  v1 = *(this + 3); /*0x42fd1d*/
  if ( v1 ) /*0x42fd22*/
  {
    v2 = v1 + 0x20; /*0x42fd25*/
    InterlockedIncrement((volatile LONG *)(v1 + 0x20)); /*0x42fd29*/
    return ReleaseSemaphore(*(HANDLE *)(v2 + 8), 1, 0); /*0x42fd37*/
  }
  return result; /*0x42fd40*/
}
