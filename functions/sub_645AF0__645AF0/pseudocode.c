// Verified body: same door/actor and ownership checks as TESObjectREFR_SetOwnedDoorLockedForActor, then clears the locked bit on this/linked door and marks linked owner cells unlocked. Probable role: inverse callback used by actor package/cell spatial queries; callers include EvaluatePackage and process movement paths.
char __cdecl TESObjectREFR_ClearOwnedDoorLockForActor(TESObjectREFR *door, TESObjectREFR *actor)
{
  TeleportData *TeleportData; // eax
  TESObjectREFR **p_linkedDoor; // edi
  TESObjectCELL *DwordAtOffset40; // eax
  char v7; // [esp+Ch] [ebp+8h]

  if ( !actor || actor->vtbl->IsDead(actor, 0) ) /*0x645b09*/
    return 0; /*0x645bae*/
  if ( !door || door->vtbl->GetBaseForm(door)->member.type != kFormType_Door ) /*0x645b30*/
    return 0; /*0x645baa*/
  v7 = 0; /*0x645b35*/
  TeleportData = TESObjectREFR_GetTeleportData(door); /*0x645b3a*/
  p_linkedDoor = &TeleportData->linkedDoor; /*0x645b3f*/
  if ( TeleportData ) /*0x645b43*/
  {
    if ( TeleportData_GetLinkedDoorWorldspace(&TeleportData->linkedDoor) /*0x645b64*/
      || !Shared_GetDwordAtOffset40(actor)
      || (DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(actor), !TESObjectCELL_IsInterior(DwordAtOffset40)) )
    {
      v7 = 1; /*0x645b6d*/
    }
  }
  if ( TESOBjectREFR_IsOwnedBy(door, actor, v7) ) /*0x645b7a*/
  {
    if ( TESObjectREFR_GetEffectiveDoorLock(door) ) /*0x645b85*/
    {
      TESObjectREFR_ClearLockedFlagOnSelfOrLinkedDoor(door); /*0x645b90*/
      if ( p_linkedDoor ) /*0x645b97*/
        TESObjectREFR_PropagateLockStateToLinkedDoorCells(p_linkedDoor, door, 1);// Verified crime/security path: after clearing the door's locked bit, updates the linked-door owner cells with unlocked=true. /*0x645b9e*/
    }
  }
  return 0; /*0x645ba7*/
}
