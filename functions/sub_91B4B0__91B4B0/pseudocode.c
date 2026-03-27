_DWORD *__thiscall sub_91B4B0(_WORD *this, _DWORD *a2)
{
  sub_9491F0(this, a2);
  *((_DWORD *)this + 0xA) = &hkEntityListener::`vftable';
  *((_DWORD *)this + 0xB) = &off_A9D2B4;
  *(_DWORD *)this = &off_A9D528;
  *((_DWORD *)this + 2) = &off_A9D510;
  *((_DWORD *)this + 8) = off_A9D508;
  *((_DWORD *)this + 0xA) = off_A9D4F4;
  *((_DWORD *)this + 0xB) = &off_A9D4E8;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0x80000000;
  return this;
}
