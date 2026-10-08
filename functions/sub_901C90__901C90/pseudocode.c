_DWORD *__thiscall sub_901C90(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  const void *v3; // esi

  result = this; /*0x901c90*/
  *this = *(_DWORD *)a2; /*0x901c98*/
  *(this + 0x40C) = *(_DWORD *)(a2 + 0x3034); /*0x901ca0*/
  *((_OWORD *)this + 0x101) = *(_OWORD *)(a2 + 0x10); /*0x901caa*/
  *((_OWORD *)this + 0x102) = *(_OWORD *)(a2 + 0x20); /*0x901cb5*/
  *(this + 0x40D) = *(_DWORD *)(a2 + 0x3030); /*0x901cc3*/
  v3 = *(const void **)(a2 + 0x3040); /*0x901cc9*/
  if ( v3 ) /*0x901cd1*/
    qmemcpy(this + 1, v3, 0x1008u); /*0x901cdc*/
  return result; /*0x901ce0*/
}
