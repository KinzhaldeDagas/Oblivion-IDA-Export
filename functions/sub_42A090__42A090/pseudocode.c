_BYTE *__thiscall sub_42A090(_BYTE *this, char a2)
{
  *(this + 4) = 0x55; /*0x42a096*/
  *((_DWORD *)this + 2) = 0; /*0x42a09a*/
  *(_DWORD *)this = &ExtraQuickKey::`vftable'; /*0x42a0a1*/
  *(this + 0xC) = a2; /*0x42a0a7*/
  return this; /*0x42a0aa*/
}
