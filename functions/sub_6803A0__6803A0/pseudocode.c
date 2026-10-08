// Verified: chooses the link endpoint reference matching the supplied spatial form, calls its position virtual at vtable offset +0x174, and copies the NiPoint3 to outPosition. Returns false for missing/mismatched endpoints.
bool __thiscall TravelPathSpaceDoorLink_GetPositionInSpace(
        TravelPathSpaceDoorLink *this,
        TESForm *space,
        NiPoint3 *outPosition)
{
  bool result; // al
  TESObjectREFR *referenceA; // ecx

  result = 0; /*0x6803a4*/
  if ( space ) /*0x6803a8*/
  {
    if ( this->spaceA == space ) /*0x6803ad*/
    {
      referenceA = this->referenceA; /*0x6803af*/
    }
    else
    {
      if ( this->spaceB != space ) /*0x6803b7*/
        return result; /*0x6803b7*/
      referenceA = this->referenceB; /*0x6803b9*/
    }
    if ( referenceA ) /*0x6803be*/
    {
      *outPosition = *(NiPoint3 *)referenceA->vtbl->GetPos(referenceA); /*0x6803d0*/
      return 1; /*0x6803de*/
    }
  }
  return result; /*0x6803e0*/
}
