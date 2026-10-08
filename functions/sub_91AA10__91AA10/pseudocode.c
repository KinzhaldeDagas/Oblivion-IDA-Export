_DWORD *__thiscall sub_91AA10(_WORD *this, _DWORD *a2)
{
  sub_9491F0(this, a2); /*0x91aa18*/
  *((_DWORD *)this + 0xA) = &hkEntityListener::`vftable'; /*0x91aa1d*/
  *((_DWORD *)this + 0xB) = &off_A9D2B4; /*0x91aa24*/
  *(_DWORD *)this = &off_A9D438; /*0x91aa2b*/
  *((_DWORD *)this + 2) = &off_A9D420; /*0x91aa31*/
  *((_DWORD *)this + 8) = off_A9D418; /*0x91aa38*/
  *((_DWORD *)this + 0xA) = off_A9D404; /*0x91aa3f*/
  *((_DWORD *)this + 0xB) = &off_A9D3F8; /*0x91aa46*/
  *((_DWORD *)this + 0xC) = 0; /*0x91aa4f*/
  *((_DWORD *)this + 0xD) = 0; /*0x91aa52*/
  *((_DWORD *)this + 0xE) = 0x80000000; /*0x91aa55*/
  return this; /*0x91aa5e*/
}
