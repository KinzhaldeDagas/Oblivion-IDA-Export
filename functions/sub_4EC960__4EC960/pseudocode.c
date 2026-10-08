_DWORD *__thiscall sub_4EC960(_DWORD *this, _DWORD *a2)
{
  int v2; // eax

  v2 = *(this + 0xF); /*0x4ec961*/
  *a2 = v2; /*0x4ec973*/
  if ( v2 ) /*0x4ec975*/
    InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x4ec97b*/
  return a2; /*0x4ec983*/
}
