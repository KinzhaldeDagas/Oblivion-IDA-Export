_WORD *__thiscall sub_9193A0(_WORD *this, int a2)
{
  __int16 v3; // dx

  *(_DWORD *)this = &hkReferencedObject::`vftable'; /*0x9193a6*/
  *(this + 2) = *(_WORD *)(a2 + 4); /*0x9193b0*/
  v3 = *(_WORD *)(a2 + 6); /*0x9193b4*/
  *(_DWORD *)this = &off_A9B2F4; /*0x9193b8*/
  *(this + 3) = v3; /*0x9193be*/
  *((_OWORD *)this + 1) = *(_OWORD *)(a2 + 0x10); /*0x9193c6*/
  *((_OWORD *)this + 2) = *(_OWORD *)(a2 + 0x20); /*0x9193ce*/
  *((_OWORD *)this + 3) = *(_OWORD *)(a2 + 0x30); /*0x9193d6*/
  *((_OWORD *)this + 4) = *(_OWORD *)(a2 + 0x40); /*0x9193de*/
  *((_DWORD *)this + 0x14) = *(_DWORD *)(a2 + 0x50); /*0x9193e5*/
  *((_DWORD *)this + 0x15) = *(_DWORD *)(a2 + 0x54); /*0x9193eb*/
  *(_DWORD *)this = &off_A9D2F4; /*0x9193ee*/
  *((_OWORD *)this + 6) = *(_OWORD *)(a2 + 0x60); /*0x9193f8*/
  *((_OWORD *)this + 7) = *(_OWORD *)(a2 + 0x70); /*0x919400*/
  return this; /*0x919404*/
}
