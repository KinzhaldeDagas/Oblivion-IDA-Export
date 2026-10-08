// Verified Oblivion path: for each available endpoint cell with an owner, writes its bit-0x40 temp-public state to the unlocked argument; Lock callers pass false and Unlock callers true. Fallout homolog DoorTeleportData::SetConnectedCellsPublic likewise applies TESObjectCELL::SetTempPublic to the linked and local endpoint cells when owned. Divergence: Oblivion exposes this as a standalone linked-door lock-state helper, while Fallout places it on DoorTeleportData and names the boolean public state.
void __thiscall TESObjectREFR_PropagateLockStateToLinkedDoorCells(
        TESObjectREFR **linkedDoorSlot,
        TESObjectREFR *otherEndpoint,
        bool unlocked)
{
  TESObjectREFR *v3; // ecx
  ExtraDataList *DwordAtOffset40; // eax
  TESObjectCELL *v5; // esi
  int v6; // eax
  ExtraDataList *v7; // eax
  TESObjectCELL *v8; // esi
  int v9; // eax

  if ( otherEndpoint ) /*0x42b5f7*/
  {
    v3 = *linkedDoorSlot; /*0x42b5f9*/
    if ( v3 ) /*0x42b603*/
    {
      DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(v3); /*0x42b605*/
      v5 = (TESObjectCELL *)DwordAtOffset40; /*0x42b60a*/
      if ( DwordAtOffset40 ) /*0x42b60e*/
      {
        TESObjectCELL_GetOwner(DwordAtOffset40); /*0x42b612*/
        if ( v6 ) /*0x42b619*/
          TESObjectCELL_SetTempPublic(v5, unlocked); /*0x42b61e*/
      }
    }
    v7 = (ExtraDataList *)Shared_GetDwordAtOffset40(otherEndpoint); /*0x42b625*/
    v8 = (TESObjectCELL *)v7; /*0x42b62a*/
    if ( v7 ) /*0x42b62e*/
    {
      TESObjectCELL_GetOwner(v7); /*0x42b632*/
      if ( v9 ) /*0x42b639*/
        TESObjectCELL_SetTempPublic(v8, unlocked); /*0x42b63e*/
    }
  }
}
