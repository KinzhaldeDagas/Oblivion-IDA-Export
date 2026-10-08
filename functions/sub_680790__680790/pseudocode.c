// Verified endpoint filter: rejects references with deleted bit 0x20; disabled bit 0x800 is rejected unless the verified allow-disabled-doors policy is set. The independent CalcLowPathToPoint diagnostic names 0x800 '-Disabled'.
bool __thiscall TravelPathSpaceDoorLink_IsEligibleInSpace(TravelPathSpaceDoorLink *this, TESForm *space)
{
  TESObjectREFR *referenceA; // esi

  if ( !space ) /*0x680799*/
    return 0; /*0x6807da*/
  if ( this->spaceA == space ) /*0x68079f*/
  {
    referenceA = this->referenceA; /*0x6807a1*/
    return referenceA /*0x6807ce*/
        && ((referenceA->member.super.flags & 0x800) == 0 || TravelPath_GetAllowDisabledDoors())
        && (referenceA->member.super.flags & 0x20) == 0;
  }
  if ( this->spaceB == space ) /*0x6807a9*/
  {
    referenceA = this->referenceB; /*0x6807ab*/
    return referenceA /*0x6807ab*/
        && ((referenceA->member.super.flags & 0x800) == 0 || TravelPath_GetAllowDisabledDoors())
        && (referenceA->member.super.flags & 0x20) == 0;
  }
  return 0; /*0x6807d3*/
}
