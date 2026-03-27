_BYTE *__thiscall ExtraUses_constr(_BYTE *this, char a2)
{
  *(this + 4) = 0x2C;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraUses::`vftable';
  *(this + 0xC) = a2;
  return this;
}
