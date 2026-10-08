// Verified: returns true when flags0 bit 0x20 or 0x40 is set. IsOffLimitToThePlayer uses this combined check for interior-cell access. Probable interpretation is Public or TempPublic state; Fallout GetPublicState uses the same OR of SetPublic 0x20 and SetTempPublic 0x40.
bool __thiscall TESObjectCELL_HasPublicOrTempPublicState(TESObjectCELL *this)
{
  UInt8 flags0; // al

  flags0 = this->members.flags0; /*0x4c9880*/
  return (flags0 & 0x20) != 0 || (flags0 & 0x40) != 0; /*0x4c9889*/
}
