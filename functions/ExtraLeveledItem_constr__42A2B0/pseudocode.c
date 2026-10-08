_BYTE *__thiscall ExtraLeveledItem_constr(_BYTE *this, int a2)
{
  *(this + 4) = 0x36; /*0x42a2b6*/
  *((_DWORD *)this + 2) = 0; /*0x42a2ba*/
  *(_DWORD *)this = &ExtraLeveledItem::`vftable'; /*0x42a2c1*/
  *((_DWORD *)this + 3) = a2; /*0x42a2c7*/
  *(this + 0x10) = 1; /*0x42a2ca*/
  return this; /*0x42a2ce*/
}
