_DWORD *__thiscall sub_411F60(_DWORD *this, char a2, char a3)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *((_BYTE *)this + 0x24) = a2;
  *this = &IntSeenData::`vftable';
  *((_BYTE *)this + 0x25) = a3;
  *(this + 0xA) = 0;
  return this;
}
