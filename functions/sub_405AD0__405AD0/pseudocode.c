_DWORD *__thiscall sub_405AD0(_DWORD *this, _DWORD *a2)
{
  int v2; // eax

  v2 = *(this + 0x40); /*0x405ad1*/
  *a2 = v2; /*0x405ae6*/
  if ( v2 ) /*0x405ae8*/
    InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x405aee*/
  return a2; /*0x405af6*/
}
