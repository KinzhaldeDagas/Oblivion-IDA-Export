// This seems to only handle Sleep
char __stdcall TESFurniture::ActivateSleepActionForPlayer(TESObjectREFR *a5, TESObjectREFR *a6, int a7, int a8, int a9)
{
  double v5; // st5
  double v6; // st6
  double v7; // st7
  TESObjectREFR *v8; // edi
  PlayerCharacter *v9; // esi
  TESObjectREFRVtbl *v11; // edx
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  float *v13; // eax
  bool IsJailed; // al
  PlayerCharacter *v15; // ecx
  char *v16; // ecx
  char v17; // al
  PlayerCharacterVtbl *vtbl; // edx
  BOOL v19; // [esp+0h] [ebp-18h]
  char v20[12]; // [esp+8h] [ebp-10h] BYREF
  __int16 v21; // [esp+14h] [ebp-4h]
  char v22; // [esp+16h] [ebp-2h]

  v8 = a6; /*0x4ae8c5*/
  v9 = (PlayerCharacter *)OblivionDynamicCast( /*0x4ae8dd*/
                            a6,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &PlayerCharacter `RTTI Type Descriptor',
                            0);
  if ( !v9 ) /*0x4ae8e4*/
    return 0; /*0x4ae8e4*/
  if ( v9->vtbl->super.super.super.GetSleepState((TESObjectREFR *)v9) ) /*0x4ae8fa*/
  {
    RestoreCamera(v9); /*0x4aeb11*/
    vtbl = v9->vtbl; /*0x4aeb18*/
    v9->unk61C = 0.0; /*0x4aeb1a*/
    vtbl->super.AddPackageWakeUp((Actor *)v9); /*0x4aeb28*/
  }
  else
  {
    v11 = v8->vtbl; /*0x4ae904*/
    a6 = 0; /*0x4ae906*/
    v21 = 0; /*0x4ae90a*/
    GetPos = v11->GetPos; /*0x4ae914*/
    v22 = 255; /*0x4ae925*/
    v13 = GetPos(v8); /*0x4ae92a*/
    if ( !sub_4DBAE0(a5, v13, 1, 1, (NiPoint3 *)v20, &a6) ) /*0x4ae93a*/
      return 0; /*0x4ae8ed*/
    if ( (unsigned __int8)v22 >= 10u ) /*0x4ae941*/
    {
      if ( !TESObjectREFR_GetOwner(a5) || TESObjectREFR_IsOwnedBy(a5, (TESObjectREFR *)v9, 1) ) /*0x4aeab8*/
      {
        RestoreCamera(v9); /*0x4aeaf0*/
        v9->unk61C = 0.0; /*0x4aeaf8*/
        sub_660760(v9, v5, v6, 0.0, (int)a5); /*0x4aeb00*/
        return 1; /*0x4aeb0c*/
      }
      if ( v9 == reference ) /*0x4aeac7*/
      {
        ShowUIMessageBox( /*0x4aeadc*/
          (char *)stru_B38AB0.value,
          v5,
          v6,
          v7,
          (char *)stru_B38AB0.value,
          0,
          1,
          (char *)MEMORY[0xB38CF0].value,
          0);
        return 1; /*0x4aeaeb*/
      }
    }
    else
    {
      IsJailed = PlayerCharacter::IsJailed(v9); /*0x4ae949*/
      v15 = reference; /*0x4ae950*/
      if ( IsJailed && !v15->unk610 ) /*0x4ae958*/
      {
        ShowUIMessageBox( /*0x4ae97e*/
          (char *)MEMORY[0xB38D00].value,
          v5,
          v6,
          v7,
          (char *)MEMORY[0xB38B30].value,
          (int)MsgBox_ServeSentenceCallback,
          1,
          (char *)MEMORY[0xB38CF8].value,
          (char)MEMORY[0xB38D00].value);
        return 1; /*0x4ae98d*/
      }
      if ( v15->vtbl->super.IsTresspassing((Actor *)v15) ) /*0x4ae998*/
      {
        ShowUIMessageBox( /*0x4aea96*/
          (char *)MEMORY[0xB38CF0].value,
          v5,
          v6,
          v7,
          (char *)stru_B38AA0.value,
          0,
          1,
          (char *)MEMORY[0xB38CF0].value,
          0);
        return 1; /*0x4aeaa5*/
      }
      if ( PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0) ) /*0x4ae9aa*/
      {
        ShowUIMessageBox(v16, v5, v6, v7, (char *)stru_B38AB8.value, 0, 1, (char *)MEMORY[0xB38CF0].value, 0); /*0x4aea72*/
        return 1; /*0x4aea81*/
      }
      v17 = sub_4D8B90((TESObjectREFR *)reference); /*0x4ae9bd*/
      if ( ActorProcessManager::AreHostilesNEarby((int)&qword_B3BB2C[0x75], (signed int)a5, v17, v19) ) /*0x4ae9c8*/
      {
        ShowUIMessageBox( /*0x4aea4d*/
          (char *)stru_B38AC0.value,
          v5,
          v6,
          v7,
          (char *)stru_B38AC0.value,
          0,
          1,
          (char *)MEMORY[0xB38CF0].value,
          0);
        return 1; /*0x4aea5c*/
      }
      if ( !TESObjectREFR_GetOwner(a5) || TESObjectREFR_IsOwnedBy(a5, (TESObjectREFR *)v9, 1) ) /*0x4ae9e1*/
      {
        sub_676EE0((int)&qword_B3BB2C[0x75]); /*0x4aea21*/
        ShowSleepWaitMenu(1); /*0x4aea28*/
        return 1; /*0x4aea37*/
      }
      if ( v9 == reference ) /*0x4ae9f0*/
      {
        ShowUIMessageBox( /*0x4aea0a*/
          (char *)MEMORY[0xB38CF0].value,
          v5,
          v6,
          v7,
          (char *)stru_B38AA8.value,
          0,
          1,
          (char *)MEMORY[0xB38CF0].value,
          0);
        return 1; /*0x4aea19*/
      }
    }
  }
  return 1; /*0x4ae8e6*/
}
