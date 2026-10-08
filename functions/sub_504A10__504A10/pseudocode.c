// Verified behavior: script-argument wrapper for setting a reference lock level. It obtains/creates ExtraLockData, writes a nonzero supplied level, sets locked bit 0x01, marks the reference modified, and when its optional second argument is positive propagates unlocked=false to the linked door's owner cells. It marks the form active-file modified and logs `Locked %s with lock level %d` in console mode. Candidate command identity is Lock; registration/name-table evidence remains Unknown.
char __cdecl TESObjectREFR_SetLockFromScript(
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
  char v10; // al
  ExtraLockData *EffectiveDoorLock; // eax
  TeleportData *TeleportData; // eax
  char *Name; // eax
  TESObjectREFR *v14; // [esp-18h] [ebp-20h]
  TESObjectREFR *v15; // [esp-4h] [ebp-Ch]
  int v16; // [esp+4h] [ebp-4h] BYREF

  v8 = arg8; /*0x504a12*/
  if ( !arg8 ) /*0x504a18*/
    return 0; /*0x504a18*/
  v14 = arg8; /*0x504a44*/
  arg8 = 0; /*0x504a48*/
  v16 = 0; /*0x504a50*/
  if ( !Script_ExtractArgs(a1, a2, a3, v14, a4, a5, l, &arg8, &v16) ) /*0x504a58*/
    return 0; /*0x504a1a*/
  sub_4D8260((int)v8, 4); /*0x504a68*/
  if ( v10 ) /*0x504a6f*/
    sub_4DE460(v8, 0.0, 1); /*0x504a77*/
  EffectiveDoorLock = TESObjectREFR_GetEffectiveDoorLock(v8); /*0x504a7e*/
  if ( !EffectiveDoorLock ) /*0x504a85*/
    EffectiveDoorLock = TESObjectREFR_GetOrCreateLockData(v8); /*0x504a89*/
  if ( arg8 ) /*0x504a94*/
    EffectiveDoorLock->level = (unsigned __int8)arg8; /*0x504a96*/
  EffectiveDoorLock->flags |= 1u; /*0x504a98*/
  TESObjectREFR_MarkLockDataAsModified(v8); /*0x504a9e*/
  if ( v16 > 0 ) /*0x504aa8*/
  {
    TeleportData = TESObjectREFR_GetTeleportData(v8); /*0x504aac*/
    if ( TeleportData ) /*0x504ab3*/
      TESObjectREFR_PropagateLockStateToLinkedDoorCells(&TeleportData->linkedDoor, (TESChildCELL *)v8, 0);// Verified: Lock script wrapper optionally propagates `unlocked=false` to the linked door and both owner cells when its second extracted argument is positive. /*0x504aba*/
  }
  v8->vtbl->super.SetFromActiveFile((TESForm *)v8, 1); /*0x504acb*/
  if ( MEMORY[0xB361AC] ) /*0x504acd*/
  {
    v15 = arg8; /*0x504ada*/
    Name = TESObjectREFR_GetName(v8); /*0x504add*/
    Interface_ConsolePrint("Locked %s with lock level %d", Name, v15); /*0x504ae8*/
  }
  return 1; /*0x504a1c*/
}
