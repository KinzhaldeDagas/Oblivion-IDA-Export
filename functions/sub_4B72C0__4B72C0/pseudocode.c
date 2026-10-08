// Verified policy byte 1 behavior: when GetEffectiveDoorLock returns null, bypassPolicyWhenNoEffectiveLock=true returns accessible immediately; false continues through ownership, guard, trespass, and linked-cell checks. Current Oblivion callers: TravelPath_ComputeDoorTransitionPenalty passes (unknownPolicyFlag0=0, bypassPolicyWhenNoEffectiveLock=1), while IsOffLimitToThePlayer passes (0,0). unknownPolicyFlag0 is zero at all identified callers and remains Unknown. Fallout has analogous DoorLock policy methods, but the parameter meaning here is established from Oblivion control flow.
bool __cdecl TESObjectDOOR_CheckActorAccessPolicy(
        TESObjectREFR *doorReference,
        Actor *actor,
        UInt8 unknownPolicyFlag0,
        bool bypassPolicyWhenNoEffectiveLock)
{
  TeleportData *TeleportData; // ebx
  TESObjectCELL *v6; // ebp
  bool result; // al
  ExtraDataList *DwordAtOffset40; // eax
  int v9; // eax
  ExtraDataList *v10; // eax
  int v11; // eax
  unsigned __int8 *vtbl; // eax
  bool v13; // zf
  signed int v14; // [esp+14h] [ebp-4h] BYREF
  TESChildCELL *EffectiveDoorLock; // [esp+20h] [ebp+8h]

  if ( !actor || !doorReference ) /*0x4b72de*/
    return 0; /*0x4b72de*/
  TeleportData = TESObjectREFR_GetTeleportData(doorReference); /*0x4b72ed*/
  v6 = 0; /*0x4b72ef*/
  EffectiveDoorLock = (TESChildCELL *)TESObjectREFR_GetEffectiveDoorLock(doorReference); /*0x4b72f8*/
  if ( !EffectiveDoorLock && bypassPolicyWhenNoEffectiveLock ) /*0x4b7302*/
    return 1; /*0x4b730d*/
  if ( TeleportData ) /*0x4b7310*/
  {
    v6 = sub_42B460(&TeleportData->linkedDoor); /*0x4b731f*/
    if ( actor != (Actor *)reference ) /*0x4b7321*/
    {
      if ( Shared_GetDwordAtOffset40(actor) ) /*0x4b7325*/
      {
        DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(actor); /*0x4b7330*/
        TESObjectCELL_GetOwner(DwordAtOffset40); /*0x4b7337*/
        if ( v9 ) /*0x4b733e*/
        {
          v10 = (ExtraDataList *)Shared_GetDwordAtOffset40(actor); /*0x4b7343*/
          if ( sub_4CAAC0(v10, actor) ) /*0x4b734a*/
          {
            if ( v6 ) /*0x4b7355*/
            {
              TESObjectCELL_GetOwner((ExtraDataList *)v6); /*0x4b735d*/
              if ( v11 ) /*0x4b7364*/
                return sub_4CAAC0((ExtraDataList *)v6, actor); /*0x4b7374*/
            }
            return 1; /*0x4b7364*/
          }
        }
      }
    }
  }
  if ( TESOBjectREFR_IsOwnedBy(doorReference, (TESObjectREFR *)actor, 1) ) /*0x4b7390*/
  {
    if ( actor == (Actor *)reference ) /*0x4b73a1*/
    {
      if ( unknownPolicyFlag0 ) /*0x4b73ac*/
      {
        vtbl = (unsigned __int8 *)EffectiveDoorLock[1].vtbl; /*0x4b73b6*/
        if ( vtbl ) /*0x4b73bb*/
        {
          if ( sub_5E4A00((int)reference, vtbl, 0, 1, 0, &v14) ) /*0x4b73c9*/
            return 0; /*0x4b73e2*/
        }
      }
    }
    return 1; /*0x4b73d0*/
  }
  if ( Actor_IsGuardClass(actor) && sub_5E6BA0(actor) ) /*0x4b73f0*/
    return 1; /*0x4b744c*/
  if ( actor == (Actor *)reference && reference->vtbl->super.IsTresspassing((Actor *)reference) ) /*0x4b740b*/
    return TeleportData /*0x4b747f*/
        && EffectiveDoorLock
        && LOBYTE(EffectiveDoorLock->vtbl) != 0x64
        && (!v6 || !TESObjectCELL_IsInterior(v6) || TESObjectCELL_HasPublicFlag20(v6));
  if ( !sub_5E3220(actor) ) /*0x4b744f*/
    return 0; /*0x4b744f*/
  if ( (PlayerCharacter *)actor->members.super.process->GetUnk02C(actor->members.super.process) != reference ) /*0x4b746b*/
    return 0; /*0x4b746b*/
  v13 = !actor->vtbl->IsTresspassing(actor); /*0x4b7479*/
  result = 1; /*0x4b747b*/
  if ( v13 ) /*0x4b747d*/
    return 0; /*0x4b747d*/
  return result; /*0x4b7304*/
}
