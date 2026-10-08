_DWORD *__thiscall sub_91B4B0(_WORD *this, _DWORD *a2)
{
  sub_9491F0(this, a2); /*0x91b4b8*/
  *((_DWORD *)this + 0xA) = &hkEntityListener::`vftable'; /*0x91b4bd*/
  *((_DWORD *)this + 0xB) = &off_A9D2B4; /*0x91b4c4*/
  *(_DWORD *)this = &off_A9D528; /*0x91b4cb*/
  *((_DWORD *)this + 2) = &off_A9D510; /*0x91b4d1*/
  *((_DWORD *)this + 8) = off_A9D508; /*0x91b4d8*/
  *((_DWORD *)this + 0xA) = off_A9D4F4; /*0x91b4df*/
  *((_DWORD *)this + 0xB) = &off_A9D4E8; /*0x91b4e6*/
  *((_DWORD *)this + 0xC) = 0; /*0x91b4ef*/
  *((_DWORD *)this + 0xD) = 0; /*0x91b4f2*/
  *((_DWORD *)this + 0xE) = 0x80000000; /*0x91b4f5*/
  return this; /*0x91b4fe*/
}
