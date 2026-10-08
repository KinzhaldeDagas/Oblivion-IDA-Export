_DWORD *__thiscall sub_4BFD90(_DWORD *this, _DWORD *a2)
{
  int v2; // eax

  v2 = *(this + 0xB); /*0x4bfd91*/
  *a2 = v2; /*0x4bfda3*/
  if ( v2 ) /*0x4bfda5*/
    InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x4bfdab*/
  return a2; /*0x4bfdb3*/
}
