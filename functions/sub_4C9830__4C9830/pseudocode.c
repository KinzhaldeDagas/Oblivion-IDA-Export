// Verified getter: returns whether TESObjectCELL flags0 bit 0x20 is set. Its uses include door access/trespass checks and IsOffLimitToThePlayer. Probable semantic identity: Public; Fallout independently names the corresponding bit SetPublic.
bool __thiscall TESObjectCELL_HasPublicFlag20(TESObjectCELL *this)
{
  return (this->members.flags0 & 0x20) != 0; /*0x4c9838*/
}
