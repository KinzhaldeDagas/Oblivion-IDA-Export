// Verified local operation: returns whether TESForm flags at +0x08 contain bit 0x8000. Probable role: visible-distant flag, corroborated by the identical local bit check in Fallout's named TESObjectREFR::GetVisibleDistant and by Oblivion's distant model queue callers. Divergence: Fallout also falls back to the base form's bit when the reference bit is clear; this Oblivion helper checks only the reference's own flags.
bool __thiscall TESObjectREFR_HasVisibleDistantFlag(TESObjectREFR *this)
{
  return (this->member.super.flags & 0x8000) != 0; /*0x4d6fd8*/
}
