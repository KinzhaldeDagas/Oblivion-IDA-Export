void __thiscall TESRace::DoPostFixup(TESRace *ArgList)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax
  TESRace *v4; // eax
  const char *v5; // eax
  Data *v6; // eax
  TESForm *v7; // eax
  TESRace *v8; // eax
  const char *v9; // eax
  Data *v10; // eax
  TESForm *v11; // eax
  TESHair *v12; // eax
  const char *v13; // eax
  Data *v14; // eax
  TESForm *v15; // eax
  TESHair *v16; // eax
  const char *v17; // eax
  int v18; // [esp+8h] [ebp-Ch]
  int v19; // [esp+8h] [ebp-Ch]
  int v20; // [esp+8h] [ebp-Ch]
  int v21; // [esp+8h] [ebp-Ch]
  char ArgLista[4]; // [esp+10h] [ebp-4h] BYREF

  if ( (ArgList->super.flags & 8) == 0 ) /*0x52ba3c*/
  {
    if ( ArgList->voiceRaces[0] ) /*0x52ba42*/
    {
      *(_DWORD *)ArgLista = ArgList->voiceRaces[0]; /*0x52ba4e*/
      OverrideFile = TESForm_GetOverrideFile((TESForm *)ArgList, 0xFFFFFFFF); /*0x52ba52*/
      TESForm_ResolveFormID((UInt32 *)ArgLista, OverrideFile); /*0x52ba5d*/
      v3 = TESForm_LookupByFormID(*(UInt32 *)ArgLista); /*0x52ba78*/
      v4 = (TESRace *)OblivionDynamicCast( /*0x52ba81*/
                        v3,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESRace `RTTI Type Descriptor',
                        0);
      ArgList->voiceRaces[0] = v4; /*0x52ba8b*/
      if ( !v4 ) /*0x52ba91*/
      {
        v5 = (const char *)((int (__thiscall *)(TESRace *, UInt32))ArgList->vtbl->GetEditorName)( /*0x52baa1*/
                             ArgList,
                             ArgList->super.refID);
        PrintError("Could not find male voice race (%08X) for race '%s' (%08X).", *(_DWORD *)ArgLista, v5, v18); /*0x52baae*/
      }
    }
    if ( ArgList->voiceRaces[1] ) /*0x52bab6*/
    {
      *(_DWORD *)ArgLista = ArgList->voiceRaces[1]; /*0x52bac4*/
      v6 = TESForm_GetOverrideFile((TESForm *)ArgList, 0xFFFFFFFF); /*0x52bac8*/
      TESForm_ResolveFormID((UInt32 *)ArgLista, v6); /*0x52bad3*/
      v7 = TESForm_LookupByFormID(*(UInt32 *)ArgLista); /*0x52baee*/
      v8 = (TESRace *)OblivionDynamicCast( /*0x52baf7*/
                        v7,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESRace `RTTI Type Descriptor',
                        0);
      ArgList->voiceRaces[1] = v8; /*0x52bb01*/
      if ( !v8 ) /*0x52bb07*/
      {
        v9 = (const char *)((int (__thiscall *)(TESRace *, UInt32))ArgList->vtbl->GetEditorName)( /*0x52bb17*/
                             ArgList,
                             ArgList->super.refID);
        PrintError("Couldnot find female voice race (%08X) for race '%s' (%08X).", *(_DWORD *)ArgLista, v9, v19); /*0x52bb24*/
      }
    }
    if ( ArgList->defaultHair[0] ) /*0x52bb2c*/
    {
      *(_DWORD *)ArgLista = ArgList->defaultHair[0]; /*0x52bb3a*/
      v10 = TESForm_GetOverrideFile((TESForm *)ArgList, 0xFFFFFFFF); /*0x52bb3e*/
      TESForm_ResolveFormID((UInt32 *)ArgLista, v10); /*0x52bb49*/
      v11 = TESForm_LookupByFormID(*(UInt32 *)ArgLista); /*0x52bb64*/
      v12 = (TESHair *)OblivionDynamicCast( /*0x52bb6d*/
                         v11,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         &TESHair `RTTI Type Descriptor',
                         0);
      ArgList->defaultHair[0] = v12; /*0x52bb77*/
      if ( !v12 ) /*0x52bb7d*/
      {
        v13 = (const char *)((int (__thiscall *)(TESRace *, UInt32))ArgList->vtbl->GetEditorName)( /*0x52bb8d*/
                              ArgList,
                              ArgList->super.refID);
        PrintError("Could not find male default hair (%08X) for race '%s' (%08X).", *(_DWORD *)ArgLista, v13, v20); /*0x52bb9a*/
      }
    }
    if ( ArgList->defaultHair[1] ) /*0x52bba2*/
    {
      *(_DWORD *)ArgLista = ArgList->defaultHair[1]; /*0x52bbb0*/
      v14 = TESForm_GetOverrideFile((TESForm *)ArgList, 0xFFFFFFFF); /*0x52bbb4*/
      TESForm_ResolveFormID((UInt32 *)ArgLista, v14); /*0x52bbbf*/
      v15 = TESForm_LookupByFormID(*(UInt32 *)ArgLista); /*0x52bbda*/
      v16 = (TESHair *)OblivionDynamicCast( /*0x52bbe3*/
                         v15,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         &TESHair `RTTI Type Descriptor',
                         0);
      ArgList->defaultHair[1] = v16; /*0x52bbed*/
      if ( !v16 ) /*0x52bbf3*/
      {
        v17 = (const char *)((int (__thiscall *)(TESRace *, UInt32))ArgList->vtbl->GetEditorName)( /*0x52bc03*/
                              ArgList,
                              ArgList->super.refID);
        PrintError("Could not find female default hair (%08X) for race '%s' (%08X).", *(_DWORD *)ArgLista, v17, v21); /*0x52bc10*/
      }
    }
    TESSpellList_LinkComponent(&ArgList->spells, (TESForm *)ArgList); /*0x52bc1c*/
    sub_46E6B0((char *)&ArgList->reaction, (TESForm *)ArgList); /*0x52bc25*/
    if ( !unk_B3630C ) /*0x52bc2a*/
      sub_52B6A0(); /*0x52bc33*/
    TESForm_SetIsLinked((TESForm *)ArgList, 1); /*0x52bc3c*/
  }
}
