_DWORD *__thiscall sub_919D90(_WORD *this, _DWORD *a2)
{
  sub_9491F0(this, a2);
  *((_DWORD *)this + 0xA) = &hkEntityListener::`vftable';
  *((_DWORD *)this + 0xB) = &off_A9D2B4;
  *(_DWORD *)this = &off_A9D370;
  *((_DWORD *)this + 2) = &off_A9D358;
  *((_DWORD *)this + 8) = off_A9D350;
  *((_DWORD *)this + 0xA) = off_A9D33C;
  *((_DWORD *)this + 0xB) = &off_A9D330;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0x80000000;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0x80000000;
  return this;
}
