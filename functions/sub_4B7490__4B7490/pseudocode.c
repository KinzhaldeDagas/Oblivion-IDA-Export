// Verified door access helper: handles linked-cell ownership, door ownership, guards, trespass, effective ExtraLockData, TESKey inventory, and lockpick tools. In the trespass branch, an interior linked cell passes the cell check when TESObjectCELL_HasPublicFlag20 (flags0 bit 0x20) is set. If no key matches, Lockpick/Skeleton Key with effective level <100 sets mustLockpickOut=1.
bool __cdecl TESObjectDOOR_CheckActorAccess(TESObjectREFR *doorReference, Actor *actor, UInt8 *mustLockpickOut)
{
  TESObjectCELL *v4; // ebp
  TeleportData *TeleportData; // ebx
  ExtraDataList *DwordAtOffset40; // eax
  int v7; // eax
  ExtraDataList *v8; // eax
  int v9; // eax
  bool HasPublicFlag20; // al
  ExtraLockData *EffectiveDoorLock; // eax
  ExtraLockData *v12; // edi
  unsigned __int8 *key; // eax
  bool v15; // [esp+Bh] [ebp-5h]
  signed int v16; // [esp+Ch] [ebp-4h] BYREF
  ExtraLockData *effectiveLock; // [esp+14h] [ebp+4h]

  v4 = 0; /*0x4b749d*/
  v15 = 0; /*0x4b74a1*/
  v16 = 0; /*0x4b74a6*/
  *mustLockpickOut = 0; /*0x4b74aa*/
  if ( !doorReference || doorReference->vtbl->GetBaseForm(doorReference)->member.type != kFormType_Door || !actor ) /*0x4b74d0*/
    return v15; /*0x4b74d0*/
  TeleportData = TESObjectREFR_GetTeleportData(doorReference); /*0x4b74e0*/
  effectiveLock = TESObjectREFR_GetEffectiveDoorLock(doorReference); /*0x4b74e9*/
  if ( !effectiveLock ) /*0x4b74ed*/
    return 1; /*0x4b74ed*/
  if ( TeleportData ) /*0x4b74f5*/
  {
    v4 = sub_42B460(&TeleportData->linkedDoor); /*0x4b7504*/
    if ( actor != (Actor *)reference ) /*0x4b7506*/
    {
      if ( Shared_GetDwordAtOffset40(actor) ) /*0x4b750a*/
      {
        DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(actor); /*0x4b7515*/
        TESObjectCELL_GetOwner(DwordAtOffset40); /*0x4b751c*/
        if ( v7 ) /*0x4b7523*/
        {
          v8 = (ExtraDataList *)Shared_GetDwordAtOffset40(actor); /*0x4b7528*/
          if ( sub_4CAAC0(v8, actor) ) /*0x4b752f*/
          {
            if ( !v4 ) /*0x4b753a*/
              return 1; /*0x4b753a*/
            TESObjectCELL_GetOwner((ExtraDataList *)v4); /*0x4b7542*/
            if ( !v9 ) /*0x4b7549*/
              return 1; /*0x4b7549*/
            HasPublicFlag20 = sub_4CAAC0((ExtraDataList *)v4, actor); /*0x4b7552*/
LABEL_26:
            if ( !HasPublicFlag20 ) /*0x4b75fb*/
              goto LABEL_27; /*0x4b75fb*/
            return 1; /*0x4b7683*/
          }
        }
      }
    }
  }
  if ( TESOBjectREFR_IsOwnedBy(doorReference, (TESObjectREFR *)actor, 1) /*0x4b757b*/
    || Actor_IsGuardClass(actor) && sub_5E6BA0(actor) )
  {
    return 1; /*0x4b7582*/
  }
  if ( actor == (Actor *)reference && reference->vtbl->super.IsTresspassing((Actor *)reference) ) /*0x4b759a*/
  {
    if ( TeleportData && effectiveLock->level != 0x64 ) /*0x4b75ab*/
    {
      if ( !v4 || !TESObjectCELL_IsInterior(v4) ) /*0x4b75b7*/
        return 1; /*0x4b75be*/
      HasPublicFlag20 = TESObjectCELL_HasPublicFlag20(v4); /*0x4b75c6*/
      goto LABEL_26; /*0x4b75cb*/
    }
  }
  else if ( sub_5E3220(actor) /*0x4b75eb*/
         && (PlayerCharacter *)actor->members.super.process->GetUnk02C(actor->members.super.process) == reference )
  {
    HasPublicFlag20 = actor->vtbl->IsTresspassing(actor); /*0x4b75f7*/
    goto LABEL_26; /*0x4b75f7*/
  }
LABEL_27:
  EffectiveDoorLock = TESObjectREFR_GetEffectiveDoorLock(doorReference); /*0x4b7601*/
  v12 = EffectiveDoorLock; /*0x4b7608*/
  if ( !EffectiveDoorLock ) /*0x4b760c*/
    return 1; /*0x4b760c*/
  if ( !ExtraLockData_IsLocked(EffectiveDoorLock) ) /*0x4b7610*/
    return 1; /*0x4b7610*/
  key = (unsigned __int8 *)v12->key;            // Verified field use: reads ExtraLockData.key, now typed TESKey* from the XLOC post-load RTTI resolver; passes it to the actor inventory query before testing lockpick tools. /*0x4b7619*/
  if ( key ) /*0x4b761e*/
  {
    if ( sub_5E4A00((int)actor, key, 0, 1, 0, &v16) ) /*0x4b762e*/
      return 1; /*0x4b7635*/
  }
  if ( ExtraLockData_GetPlayerScaledLockLevel(v12) < 0x64 /*0x4b7673*/
    && (sub_5E4A00((int)actor, (unsigned __int8 *)MEMORY[0xB35EC8], 0, 1, 0, &v16)
     || sub_5E4A00((int)actor, (unsigned __int8 *)MEMORY[0xB35ECC], 0, 1, 0, &v16)) )// Verified mustLockpickOut condition: after a lock-specific key fails, an effective lock level below 100 plus inventory presence of TESDataHandler_g_Lockpick or TESDataHandler_g_SkeletonKey returns accessible and sets mustLockpickOut=1.
  {
    *mustLockpickOut = 1; /*0x4b7680*/
    return 1; /*0x4b7680*/
  }
  return v15; /*0x4b768e*/
}
