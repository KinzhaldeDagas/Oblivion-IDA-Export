_BYTE *__thiscall sub_429FD0(_BYTE *this)
{
  *(this + 4) = 0x25; /*0x429fd2*/
  *((_DWORD *)this + 2) = 0; /*0x429fd6*/
  *(_DWORD *)this = &ExtraGhost::`vftable'; /*0x429fdd*/
  return this; /*0x429fe3*/
}
