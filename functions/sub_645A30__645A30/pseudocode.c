// Verified body: rejects null/dead actor refs and non-door forms; applies only when the door is owned by the actor (using worldspace-sensitive ownership when applicable) and has an effective lock; sets locked bit on this/linked door and marks linked owner cells as not unlocked. Probable role: callback used by actor package/cell spatial queries; callers include EvaluatePackage and process movement paths.
char __cdecl TESObjectREFR_SetOwnedDoorLockedForActor(TESObjectREFR *door, TESObjectREFR *actor)
{
  TeleportData *TeleportData; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  TeleportData *v5; // eax
  char v7; // [esp+Ch] [ebp+8h]

  if ( actor ) /*0x645a37*/
  {
    if ( !actor->vtbl->IsDead(actor, 0) ) /*0x645a49*/
    {
      if ( door ) /*0x645a5a*/
      {
        if ( door->vtbl->GetBaseForm(door)->member.type == kFormType_Door ) /*0x645a70*/
        {
          v7 = 0; /*0x645a74*/
          TeleportData = TESObjectREFR_GetTeleportData(door); /*0x645a79*/
          if ( TeleportData ) /*0x645a80*/
          {
            if ( TeleportData_GetLinkedDoorWorldspace(&TeleportData->linkedDoor) /*0x645aa1*/
              || !Shared_GetDwordAtOffset40(actor)
              || (DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(actor),
                  !TESObjectCELL_IsInterior(DwordAtOffset40)) )
            {
              v7 = 1; /*0x645aaa*/
            }
          }
          if ( TESOBjectREFR_IsOwnedBy(door, actor, v7) ) /*0x645ab7*/
          {
            if ( TESObjectREFR_GetEffectiveDoorLock(door) ) /*0x645ac2*/
            {
              TESObjectREFR_SetLockedFlagOnSelfOrLinkedDoor(door); /*0x645acd*/
              v5 = TESObjectREFR_GetTeleportData(door); /*0x645ad4*/
              if ( v5 ) /*0x645adb*/
                TESObjectREFR_PropagateLockStateToLinkedDoorCells(&v5->linkedDoor, door, 0);// Verified crime/security path: after setting the door's locked bit, updates the linked-door owner cells with unlocked=false. /*0x645ae2*/
            }
          }
        }
      }
    }
  }
  return 0; /*0x645aea*/
}
