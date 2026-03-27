_WORD *__thiscall sub_8CB220(_WORD *this)
{
  *(this + 3) = 1;
  *((_DWORD *)this + 2) = &off_A99B70;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 4) = this + 0xE;
  *((_DWORD *)this + 6) = 0x80000004;
  *((_DWORD *)this + 0xD) = 0x80000004;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xB) = this + 0x1C;
  *((_DWORD *)this + 0x12) = &off_A99B50;
  *((_DWORD *)this + 0x13) = &hkEntityListener::`vftable';
  *((_DWORD *)this + 0x14) = &hkPhantomListener::`vftable';
  *((_DWORD *)this + 0x15) = &off_A99B58;
  *((_DWORD *)this + 0x16) = &off_A99B58;
  *(_DWORD *)this = &off_A99BD0;
  *((_DWORD *)this + 2) = &off_A99BC4;
  *((_DWORD *)this + 0x12) = off_A99BBC;
  *((_DWORD *)this + 0x13) = off_A99BA8;
  *((_DWORD *)this + 0x14) = off_A99B94;
  *((_DWORD *)this + 0x15) = off_A99B88;
  *((_DWORD *)this + 0x16) = off_A99B7C;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0;
  *((_DWORD *)this + 0x19) = 0x80000000;
  *((_DWORD *)this + 0x1A) = 0;
  *((_DWORD *)this + 0x1B) = 0;
  *((_DWORD *)this + 0x1C) = 0x80000000;
  return this;
}
