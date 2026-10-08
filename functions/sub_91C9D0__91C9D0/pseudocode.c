_DWORD *__thiscall sub_91C9D0(_WORD *this, _DWORD *a2)
{
  sub_9491F0(this, a2); /*0x91c9d8*/
  *((_DWORD *)this + 0xA) = &hkEntityListener::`vftable'; /*0x91c9dd*/
  *((_DWORD *)this + 0xB) = &off_A9D2B4; /*0x91c9e4*/
  *(_DWORD *)this = &off_A9D6B0; /*0x91c9eb*/
  *((_DWORD *)this + 2) = &off_A9D698; /*0x91c9f1*/
  *((_DWORD *)this + 8) = off_A9D350; /*0x91c9f8*/
  *((_DWORD *)this + 0xA) = off_A9D684; /*0x91c9ff*/
  *((_DWORD *)this + 0xB) = &off_A9D678; /*0x91ca06*/
  *((_DWORD *)this + 0xC) = 0; /*0x91ca0f*/
  *((_DWORD *)this + 0xD) = 0; /*0x91ca12*/
  *((_DWORD *)this + 0xE) = 0x80000000; /*0x91ca15*/
  return this; /*0x91ca1e*/
}
