_BYTE *__thiscall sub_42A160(_BYTE *this, char a2)
{
  *(this + 4) = 0x38;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraSeed::`vftable';
  *(this + 0xC) = a2;
  return this;
}
