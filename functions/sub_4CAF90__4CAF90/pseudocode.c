TESClimate *__thiscall TESObjectCELL_GetClimate(TESObjectCELL *this)
{                                               // Verified: exterior-cell branch (TESObjectCELL_IsInterior false) resolves climate from the cell's worldspace parent chain.
  TESClimate *result; // eax

  if ( (this->members.flags0 & 1) == 0 ) /*0x4caf96*/
    return TESWorldSpace_GetClimateFromRoot(this->members.worldSpace); /*0x4cafad*/
  if ( (this->members.flags0 & 0x80) == 0 )     // Verified Oblivion interior climate gate: requires cell flags0 bit 0x80, then reads kExtraData_CellClimate. Fallout divergence: TESObjectCELL::GetClimate uses (cellFlags & 0xFFFFFF80) != 0, accepting any high-byte flag. /*0x4caf9d*/
    return 0; /*0x4caf9f*/
  result = (TESClimate *)BaseExtraList_GetExtraData(&this->members.extraData, kExtraData_CellClimate); /*0x41f9e2*/
  if ( result ) /*0x41f9e9*/
    return (TESClimate *)result->form.member.refID; /*0x41f9ec*/
  return result; /*0x4cafa1*/
}
