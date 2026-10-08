// Verified local operation: tests TESObjectREFR flags +0x08 for bit 0x80000. Probable semantic name HasTemp3DFlag, corroborated by local set-after-node-attach/clear-after-removal flow and Fallout's named TESObjectREFR::SetHasTemp3D counterpart.
bool __thiscall TESObjectREFR_HasTemp3DFlag(TESObjectREFR *this)
{
  return (this->member.super.flags & 0x80000) != 0; /*0x4d7008*/
}
