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

  if ( (ArgList->super.flags & 8) == 0 )
  {
    if ( ArgList->voiceRaces[0] )
    {
      *(_DWORD *)ArgLista = ArgList->voiceRaces[0];
      OverrideFile = TESForm_GetOverrideFile((TESForm *)ArgList, 0xFFFFFFFF);
      TESForm_ResolveFormID((UInt32 *)ArgLista, OverrideFile);
      v3 = TESForm_LookupByFormID(*(UInt32 *)ArgLista);
      v4 = (TESRace *)OblivionDynamicCast(
                        v3,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESRace `RTTI Type Descriptor',
                        0);
      ArgList->voiceRaces[0] = v4;
      if ( !v4 )
      {
        v5 = (const char *)((int (__thiscall *)(TESRace *, UInt32))ArgList->vtbl->GetEditorName)(
                             ArgList,
                             ArgList->super.refID);
        PrintError("Could not find male voice race (%08X) for race '%s' (%08X).", *(_DWORD *)ArgLista, v5, v18);
      }
    }
    if ( ArgList->voiceRaces[1] )
    {
      *(_DWORD *)ArgLista = ArgList->voiceRaces[1];
      v6 = TESForm_GetOverrideFile((TESForm *)ArgList, 0xFFFFFFFF);
      TESForm_ResolveFormID((UInt32 *)ArgLista, v6);
      v7 = TESForm_LookupByFormID(*(UInt32 *)ArgLista);
      v8 = (TESRace *)OblivionDynamicCast(
                        v7,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESRace `RTTI Type Descriptor',
                        0);
      ArgList->voiceRaces[1] = v8;
      if ( !v8 )
      {
        v9 = (const char *)((int (__thiscall *)(TESRace *, UInt32))ArgList->vtbl->GetEditorName)(
                             ArgList,
                             ArgList->super.refID);
        PrintError("Couldnot find female voice race (%08X) for race '%s' (%08X).", *(_DWORD *)ArgLista, v9, v19);
      }
    }
    if ( ArgList->defaultHair[0] )
    {
      *(_DWORD *)ArgLista = ArgList->defaultHair[0];
      v10 = TESForm_GetOverrideFile((TESForm *)ArgList, 0xFFFFFFFF);
      TESForm_ResolveFormID((UInt32 *)ArgLista, v10);
      v11 = TESForm_LookupByFormID(*(UInt32 *)ArgLista);
      v12 = (TESHair *)OblivionDynamicCast(
                         v11,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         &TESHair `RTTI Type Descriptor',
                         0);
      ArgList->defaultHair[0] = v12;
      if ( !v12 )
      {
        v13 = (const char *)((int (__thiscall *)(TESRace *, UInt32))ArgList->vtbl->GetEditorName)(
                              ArgList,
                              ArgList->super.refID);
        PrintError("Could not find male default hair (%08X) for race '%s' (%08X).", *(_DWORD *)ArgLista, v13, v20);
      }
    }
    if ( ArgList->defaultHair[1] )
    {
      *(_DWORD *)ArgLista = ArgList->defaultHair[1];
      v14 = TESForm_GetOverrideFile((TESForm *)ArgList, 0xFFFFFFFF);
      TESForm_ResolveFormID((UInt32 *)ArgLista, v14);
      v15 = TESForm_LookupByFormID(*(UInt32 *)ArgLista);
      v16 = (TESHair *)OblivionDynamicCast(
                         v15,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         &TESHair `RTTI Type Descriptor',
                         0);
      ArgList->defaultHair[1] = v16;
      if ( !v16 )
      {
        v17 = (const char *)((int (__thiscall *)(TESRace *, UInt32))ArgList->vtbl->GetEditorName)(
                              ArgList,
                              ArgList->super.refID);
        PrintError("Could not find female default hair (%08X) for race '%s' (%08X).", *(_DWORD *)ArgLista, v17, v21);
      }
    }
    TESSpellList_LinkComponent(&ArgList->spells, (TESForm *)ArgList);
    sub_46E6B0((char *)&ArgList->reaction, (TESForm *)ArgList);
    if ( !byte_B3630C )
      sub_52B6A0();
    TESForm_SetIsLinked((TESForm *)ArgList, 1);
  }
}
