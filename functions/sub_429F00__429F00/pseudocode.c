_BYTE *__thiscall sub_429F00(_BYTE *this, char a2)
{
  *(this + 4) = 0x2F;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraSoul::`vftable';
  *(this + 0xC) = a2;
  return this;
}
