_BYTE *__thiscall sub_42AB50(_BYTE *this, char a2)
{
  *(this + 4) = 0x5A;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraHasNoRumors::`vftable';
  *(this + 0xC) = a2;
  return this;
}
