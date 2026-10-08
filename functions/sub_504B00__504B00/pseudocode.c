// Verified behavior: script-style wrapper extracts a target reference and optional linked-cell propagation argument, clears ExtraLockData locked bit 0x01 if effective lock data exists, marks the lock modified, optionally propagates unlocked=true to owner cells, marks the form active-file modified, and prints `Unlocked %s` in console mode. Exact command-table name remains Unknown.
char __cdecl TESObjectREFR_UnlockFromScript(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *arg8,
        TESObjectREFR *a4,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  TESObjectREFR *v8; // esi
  ExtraLockData *EffectiveDoorLock; // eax
  TeleportData *TeleportData; // eax
  char *Name; // eax
  TESObjectREFR *v13; // [esp-14h] [ebp-18h]

  v8 = arg8; /*0x504b01*/
  if ( !arg8 ) /*0x504b07*/
    return 0; /*0x504b07*/
  v13 = arg8; /*0x504b2d*/
  arg8 = 0; /*0x504b31*/
  if ( !Script_ExtractArgs(a1, a2, a3, v13, a4, a5, l, &arg8) ) /*0x504b39*/
    return 0; /*0x504b09*/
  EffectiveDoorLock = TESObjectREFR_GetEffectiveDoorLock(v8); /*0x504b47*/
  if ( EffectiveDoorLock ) /*0x504b4e*/
  {
    EffectiveDoorLock->flags &= ~1u; /*0x504b50*/
    TESObjectREFR_MarkLockDataAsModified(v8); /*0x504b56*/
    if ( (int)arg8 > 0 ) /*0x504b60*/
    {
      TeleportData = TESObjectREFR_GetTeleportData(v8); /*0x504b64*/
      if ( TeleportData ) /*0x504b6b*/
        TESObjectREFR_PropagateLockStateToLinkedDoorCells(&TeleportData->linkedDoor, (TESChildCELL *)v8, 1);// Verified: Unlock script wrapper optionally propagates `unlocked=true` to the linked door and both owner cells when its extracted argument is positive. /*0x504b72*/
    }
    v8->vtbl->super.SetFromActiveFile((TESForm *)v8, 1); /*0x504b83*/
  }
  if ( MEMORY[0xB361AC] ) /*0x504b85*/
  {
    Name = TESObjectREFR_GetName(v8); /*0x504b90*/
    Interface_ConsolePrint("Unlocked %s ", Name); /*0x504b9b*/
  }
  return 1; /*0x504b0b*/
}
