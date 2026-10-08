// TESClass_IsPlayable reads classFlags at +0x60 bit 0.
char __thiscall TESClass_IsPlayable(_BYTE *this)
{
  return *(this + 0x60) & 1; /*0x51bec5*/
}
