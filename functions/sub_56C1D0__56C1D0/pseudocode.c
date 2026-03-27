void __usercall sub_56C1D0(int a1@<ecx>, int a2@<ebx>)
{
  bool v3; // zf
  TESSaveLoad *v5; // ecx
  UInt32 v6; // eax
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  int v9; // ecx
  char *v10; // eax
  UInt32 v11; // eax
  PlayerCharacter *v12; // ebx
  TESForm *v13; // eax
  const char **niNode; // edi
  int v15; // ebp
  UInt32 refID; // esi
  const char *v17; // eax
  UInt32 *v18; // edi
  UInt32 v19; // esi
  TESForm *v20; // eax
  const char *v21; // eax
  _WORD *v22; // edi
  unsigned int v23; // esi
  int v24; // [esp-Ch] [ebp-3Ch]
  size_t v25; // [esp-8h] [ebp-38h]
  size_t v26; // [esp-8h] [ebp-38h]
  size_t v27; // [esp-8h] [ebp-38h]
  size_t v28; // [esp-8h] [ebp-38h]
  size_t v29; // [esp-8h] [ebp-38h]
  size_t v30; // [esp-8h] [ebp-38h]
  size_t v31; // [esp-8h] [ebp-38h]
  size_t v32; // [esp-8h] [ebp-38h]
  int v33; // [esp-8h] [ebp-38h]
  size_t v34; // [esp-4h] [ebp-34h]
  size_t v35; // [esp-4h] [ebp-34h]
  const char *v36; // [esp-4h] [ebp-34h]
  unsigned int v37; // [esp+8h] [ebp-28h] BYREF
  UInt32 v38; // [esp+Ch] [ebp-24h]
  int Src; // [esp+10h] [ebp-20h] BYREF
  UInt32 v40; // [esp+14h] [ebp-1Ch]
  int v41; // [esp+18h] [ebp-18h] BYREF
  signed int v42; // [esp+1Ch] [ebp-14h] BYREF
  float v43[4]; // [esp+20h] [ebp-10h] BYREF

  v3 = Global_DebugSaveBuffer == 0;
  v5 = SaveLoad_CurrentSavegame;
  v41 = 0;
  v6 = v5->unk000[5];
  v40 = 0;
  v38 = v6;
  if ( !v3 )
    v38 = v6;
  if ( sub_45A170() )
  {
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v34) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v7, &Src, v34);
    v8 = SaveLoad_CurrentSavegame;
    LODWORD(v35) = 2;
    v40 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v8, &v41, v35);
  }
  sub_56BD80((_DWORD *)a1);
  v9 = *(_DWORD *)(a1 + 0x18);
  if ( *(_DWORD *)v9 )
    v10 = *(char **)(*(_DWORD *)v9 + 0x34);
  else
    v10 = 0;
  HIDWORD(v25) = a2;
  sub_45E940(SaveLoad_CurrentSavegame, v10);
  LODWORD(v25) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(*(_DWORD *)(a1 + 0x18) + 4), v25);
  sub_7150F0(v43, (float *)(*(_DWORD *)(a1 + 0x18) + 8));
  LODWORD(v26) = 0x10;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v43, v26);
  LODWORD(v27) = 0xC;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(*(_DWORD *)(a1 + 0x18) + 0x2C), v27);
  LODWORD(v28) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(*(_DWORD *)(a1 + 0x18) + 0x38), v28);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, *(_DWORD *)(a1 + 0x18) + 0x3C, 4u);
  LODWORD(v29) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(*(_DWORD *)(a1 + 0x18) + 0x40), v29);
  LODWORD(v30) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(*(_DWORD *)(a1 + 0x18) + 0x44), v30);
  v11 = *(_DWORD *)(*(_DWORD *)(a1 + 0x18) + 0x3C);
  v12 = 0;
  if ( v11 )
  {
    v13 = TESForm_LookupByFormID(v11);
    v12 = (PlayerCharacter *)OblivionDynamicCast(
                               v13,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
  }
  LOBYTE(Src) = 0;
  if ( v12 )
  {
    niNode = (const char **)v12->super.super.super.super.niNode;
  }
  else
  {
    niNode = (const char **)TESObjectCELL_GetNiNode_(*(TESObjectCELL **)(a1 + 0xC));
    LOBYTE(Src) = 1;
  }
  v15 = Src;
  v37 = sub_481210(a1, niNode, *(NiProperty **)(*(_DWORD *)(a1 + 0x18) + 0x48), 1, Src);
  if ( v37 == 0xFFFFFFFF && v12 == TESDataHandler_g_PlayerRef )
  {
    niNode = (const char **)PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
    v37 = sub_481210(a1, niNode, *(NiProperty **)(*(_DWORD *)(a1 + 0x18) + 0x48), 1, v15);
  }
  v42 = sub_480F00(niNode, 1, v15);
  if ( v37 == 0xFFFFFFFF )
  {
    if ( v12 )
    {
      refID = v12->super.super.super.super.super.refID;
      v17 = v12->vtbl->super.super.super.super.GetEditorName((TESForm *)v12);
      PrintError("Could not find geometry index for reference %08X %s", refID, v17);
    }
    else
    {
      PrintError("Could not find geometry index for UNKNOWN reference");
    }
  }
  LODWORD(v31) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v42, v31);
  LODWORD(v32) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v37, v32);
  if ( Global_DebugSaveBuffer )
  {
    v18 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v19 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v18 )
    {
      v20 = TESForm_LookupByFormID(*v18);
      v21 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v20->vtbl->GetEditorName)(
                            v20,
                            *(UInt32 *)((char *)v18 + 5),
                            0xD2,
                            "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v19 - v38,
        *v18,
        v21,
        v24,
        v33,
        v36);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v19 - v38,
        0xD2,
        "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v22 = (_WORD *)v40;
    v23 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v23 > v40 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",
        0xD2);
    *v22 = v23 - (_WORD)v22;
  }
}
