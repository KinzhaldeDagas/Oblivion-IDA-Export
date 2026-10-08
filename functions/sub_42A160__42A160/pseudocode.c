_BYTE *__thiscall sub_42A160(_BYTE *this, char a2)
{
  *(this + 4) = 0x38; /*0x42a166*/
  *((_DWORD *)this + 2) = 0; /*0x42a16a*/
  *(_DWORD *)this = &ExtraSeed::`vftable'; /*0x42a171*/
  *(this + 0xC) = a2; /*0x42a177*/
  return this; /*0x42a17a*/
}
