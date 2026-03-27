// This seems to only handle Sleep
char __stdcall TESFurniture::ActivateSleepActionForPlayer(TESObjectREFR *a5, TESObjectREFR *a6, int a7, int a8, int a9)
{
  char v5; // bp
  double v6; // st5
  double v7; // st6
  double v8; // st7
  TESObjectREFR *v9; // edi
  PlayerCharacter *v10; // esi
  TESObjectREFRVtbl *v12; // edx
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  float *v14; // eax
  bool IsJailed; // al
  PlayerCharacter *v16; // ecx
  int v17; // ecx
  char v18; // al
  PlayerCharacterVtbl *vtbl; // edx
  float v20; // [esp+0h] [ebp-18h]
  char v21[12]; // [esp+8h] [ebp-10h] BYREF
  __int16 v22; // [esp+14h] [ebp-4h]
  char v23; // [esp+16h] [ebp-2h]

  v9 = a6;
  v10 = (PlayerCharacter *)OblivionDynamicCast(
                             a6,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &PlayerCharacter `RTTI Type Descriptor',
                             0);
  if ( !v10 )
    return 0;
  if ( v10->vtbl->super.super.super.GetSleepState((TESObjectREFR *)v10) )
  {
    RestoreCamera(v10);
    vtbl = v10->vtbl;
    v10->unk61C = 0.0;
    vtbl->super.AddPackageWakeUp((Actor *)v10);
  }
  else
  {
    v12 = v9->vtbl;
    a6 = 0;
    v22 = 0;
    GetPos = v12->GetPos;
    v23 = 255;
    v14 = GetPos(v9);
    if ( !sub_4DBAE0(a5, v14, 1, 1, (NiPoint3 *)v21, &a6) )
      return 0;
    if ( (unsigned __int8)v23 >= 10u )
    {
      if ( !TESObjectREFR_GetOwner(a5) || TESOBjectREFR_IsOwnedBy(a5, v10, 1) )
      {
        RestoreCamera(v10);
        v10->unk61C = 0.0;
        sub_660760(v10, v6, v7, 0.0, (int)a5);
        return 1;
      }
      if ( v10 == TESDataHandler_g_PlayerRef )
      {
        ShowUIMessageBox(dword_B38AB0, v5, v6, v7, v8, (const char *)dword_B38AB0, 0, 1, (const char *)sOk, 0);
        return 1;
      }
    }
    else
    {
      IsJailed = PlayerCharacter::IsJailed(v10);
      v16 = TESDataHandler_g_PlayerRef;
      if ( IsJailed && !v16->unk610 )
      {
        ShowUIMessageBox(
          MessageButtonTextNo,
          v5,
          v6,
          v7,
          v8,
          (const char *)MessageBoxServeSentenceText,
          (int)MsgBox_ServeSentenceCallback,
          1,
          (const char *)MessageButtonTextYes,
          MessageButtonTextNo);
        return 1;
      }
      if ( v16->vtbl->super.IsTresspassing((Actor *)v16) )
      {
        ShowUIMessageBox(sOk, v5, v6, v7, v8, (const char *)dword_B38AA0, 0, 1, (const char *)sOk, 0);
        return 1;
      }
      if ( PlayerCharacter_IsPlayerInCombat(TESDataHandler_g_PlayerRef, 0) )
      {
        ShowUIMessageBox(v17, v5, v6, v7, v8, (const char *)dword_B38AB8, 0, 1, (const char *)sOk, 0);
        return 1;
      }
      v18 = sub_4D8B90((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      if ( ActorProcessManager::AreHostilesNEarby((int)&ActorProcessManager_ptr, (signed int)a5, v18, v20) )
      {
        ShowUIMessageBox(dword_B38AC0, v5, v6, v7, v8, (const char *)dword_B38AC0, 0, 1, (const char *)sOk, 0);
        return 1;
      }
      if ( !TESObjectREFR_GetOwner(a5) || TESOBjectREFR_IsOwnedBy(a5, v10, 1) )
      {
        sub_676EE0((int)&ActorProcessManager_ptr);
        ShowSleepWaitMenu(1);
        return 1;
      }
      if ( v10 == TESDataHandler_g_PlayerRef )
      {
        ShowUIMessageBox(sOk, v5, v6, v7, v8, (const char *)dword_B38AA8, 0, 1, (const char *)sOk, 0);
        return 1;
      }
    }
  }
  return 1;
}
