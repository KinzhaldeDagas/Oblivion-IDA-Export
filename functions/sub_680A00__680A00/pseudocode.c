// Verified factory filter: refuses a TESObjectREFR whose TESFormMembr.flags has deleted bit 0x20, then requires ExtraTeleport and a non-null linked door before allocating the AStarWorldNode.
AStarWorldNode *__cdecl TravelPath_CreateAStarWorldNode(TESObjectREFR *doorReference)
{
  AStarWorldNode *v1; // esi
  TeleportData *TeleportData; // eax
  TeleportData *v3; // edi
  unsigned __int16 SearchStateSlot; // bp
  int v5; // eax
  TESObjectREFR *LinkedDoor; // eax
  TESObjectREFR *referenceA; // ecx
  TESForm *SpatialContainerAtPosition; // eax
  TESObjectREFR *referenceB; // ecx

  v1 = 0; /*0x680a06*/
  if ( !doorReference || (doorReference->member.super.flags & 0x20) != 0 ) /*0x680a18*/
    return 0; /*0x680a97*/
  TeleportData = TESObjectREFR_GetTeleportData(doorReference); /*0x680a1d*/
  v3 = TeleportData; /*0x680a22*/
  if ( !TeleportData || !TeleportData_GetLinkedDoor(TeleportData) ) /*0x680a2a*/
    return 0; /*0x680a92*/
  SearchStateSlot = TravelPath_AllocateSearchStateSlot(0);// Verified the call has no logical argument; PUSH EBP preserves the caller's saved register. The allocator returns the state slot in AX. /*0x680a39*/
  if ( SearchStateSlot != 0xFFFF ) /*0x680a41*/
  {
    v5 = FormHeapAlloc(0x14u); /*0x680a45*/
    if ( v5 ) /*0x680a4f*/
    {
      *(_DWORD *)(v5 + 4) = 0; /*0x680a51*/
      *(_DWORD *)(v5 + 8) = 0; /*0x680a54*/
      *(_DWORD *)(v5 + 0xC) = 0; /*0x680a57*/
      *(_DWORD *)(v5 + 0x10) = 0; /*0x680a5a*/
      *(_WORD *)v5 = 0xFFFF; /*0x680a5d*/
      v1 = (AStarWorldNode *)v5; /*0x680a62*/
    }
    v1->referenceA = doorReference; /*0x680a66*/
    LinkedDoor = TeleportData_GetLinkedDoor(v3); /*0x680a69*/
    referenceA = v1->referenceA; /*0x680a6e*/
    v1->referenceB = LinkedDoor; /*0x680a71*/
    SpatialContainerAtPosition = TESObjectREFR_GetSpatialContainerAtPosition(referenceA); /*0x680a74*/
    referenceB = v1->referenceB; /*0x680a79*/
    v1->spaceA = SpatialContainerAtPosition; /*0x680a7c*/
    v1->spaceB = TESObjectREFR_GetSpatialContainerAtPosition(referenceB); /*0x680a84*/
    v1->searchNodeIndex = SearchStateSlot; /*0x680a87*/
  }
  return v1; /*0x680a8e*/
}
