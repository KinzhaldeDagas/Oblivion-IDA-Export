_DWORD *__thiscall sub_91C9D0(_WORD *this, _DWORD *a2)
{
  sub_9491F0(this, a2);
  *((_DWORD *)this + 0xA) = &hkEntityListener::`vftable';
  *((_DWORD *)this + 0xB) = &off_A9D2B4;
  *(_DWORD *)this = &off_A9D6B0;
  *((_DWORD *)this + 2) = &off_A9D698;
  *((_DWORD *)this + 8) = off_A9D350;
  *((_DWORD *)this + 0xA) = off_A9D684;
  *((_DWORD *)this + 0xB) = &off_A9D678;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0x80000000;
  return this;
}
