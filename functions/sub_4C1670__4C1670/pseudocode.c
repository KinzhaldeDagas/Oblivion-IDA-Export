_DWORD *__thiscall sub_4C1670(_DWORD *this, _DWORD *a2)
{
  int v2; // eax

  v2 = *(this + 9); /*0x4c1671*/
  *a2 = v2; /*0x4c1683*/
  if ( v2 ) /*0x4c1685*/
    InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x4c168b*/
  return a2; /*0x4c1693*/
}
