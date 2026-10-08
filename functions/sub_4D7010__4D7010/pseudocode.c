// Verified local operation: sets/clears TESObjectREFR flags +0x08 bit 0x80000. Probable semantic name SetTemp3DFlag; the bit is toggled around reference NiNode attachment/removal and matches Fallout's named SetHasTemp3D usage.
unsigned int __thiscall TESObjectREFR_SetTemp3DFlag(TESObjectREFR *this, bool enabled)
{
  TESForm::FormFlags flags; // eax
  unsigned int result; // eax

  flags = this->member.super.flags; /*0x4d7015*/
  if ( enabled ) /*0x4d7018*/
    result = flags | 0x80000; /*0x4d701a*/
  else
    result = flags & 0xFFF7FFFF; /*0x4d7025*/
  this->member.super.flags = result; /*0x4d701f*/
  return result; /*0x4d7022*/
}
