void __usercall sub_56D5F0(_DWORD *this@<ecx>, int a2@<ebp>)
{
  bool v3; // zf
  TESSaveLoad *v5; // ecx
  UInt32 v6; // eax
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  int v9; // ecx
  char *v10; // eax
  TESForm *v11; // eax
  PlayerCharacter *v12; // eax
  const char **v13; // ebx
  PlayerCharacter *v14; // ebp
  const char **niNode; // edi
  PlayerCharacterVtbl *vtbl; // edx
  const char *v17; // eax
  UInt32 refID; // edi
  const char *v19; // eax
  int v20; // esi
  int v21; // edi
  int v22; // esi
  int v23; // ebp
  int v24; // ebx
  int v25; // edi
  TESSaveLoad *v26; // ecx
  unsigned int i; // esi
  UInt32 *v28; // edi
  UInt32 v29; // esi
  TESForm *v30; // eax
  const char *v31; // eax
  _WORD *v32; // edi
  unsigned int v33; // esi
  size_t v34; // [esp-Ch] [ebp-48h]
  size_t v35; // [esp-Ch] [ebp-48h]
  size_t v36; // [esp-Ch] [ebp-48h]
  size_t v37; // [esp-Ch] [ebp-48h]
  size_t v38; // [esp-Ch] [ebp-48h]
  size_t v39; // [esp-Ch] [ebp-48h]
  size_t v40; // [esp-Ch] [ebp-48h]
  size_t v41; // [esp-Ch] [ebp-48h]
  size_t v42; // [esp-Ch] [ebp-48h]
  size_t v43; // [esp-Ch] [ebp-48h]
  size_t v44; // [esp-Ch] [ebp-48h]
  size_t v45; // [esp-Ch] [ebp-48h]
  size_t v46; // [esp-Ch] [ebp-48h]
  size_t v47; // [esp-Ch] [ebp-48h]
  size_t v48; // [esp-Ch] [ebp-48h]
  int v49; // [esp-Ch] [ebp-48h]
  int v50; // [esp-8h] [ebp-44h]
  size_t v51; // [esp-4h] [ebp-40h]
  size_t v52; // [esp-4h] [ebp-40h]
  const char *v53; // [esp-4h] [ebp-40h]
  unsigned int v54; // [esp+8h] [ebp-34h] BYREF
  int v55; // [esp+Ch] [ebp-30h] BYREF
  int Src; // [esp+10h] [ebp-2Ch] BYREF
  int v57; // [esp+14h] [ebp-28h] BYREF
  UInt32 v58; // [esp+18h] [ebp-24h]
  int v59; // [esp+1Ch] [ebp-20h] BYREF
  UInt32 v60; // [esp+20h] [ebp-1Ch]
  int v61; // [esp+24h] [ebp-18h] BYREF
  signed int v62; // [esp+28h] [ebp-14h] BYREF
  float v63[4]; // [esp+2Ch] [ebp-10h] BYREF

  v3 = Global_DebugSaveBuffer == 0;
  v5 = SaveLoad_CurrentSavegame;
  v61 = 0;
  v6 = v5->unk000[5];
  v60 = 0;
  v58 = v6;
  if ( !v3 )
    v58 = v6;
  if ( sub_45A170() )
  {
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v51) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v7, &Src, v51);
    v8 = SaveLoad_CurrentSavegame;
    LODWORD(v52) = 2;
    v60 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v8, &v61, v52);
  }
  sub_56BD80(this);
  v9 = *(this + 6);
  if ( *(_DWORD *)v9 )
    v10 = *(char **)(*(_DWORD *)v9 + 0x34);
  else
    v10 = 0;
  HIDWORD(v34) = a2;
  sub_45E940(SaveLoad_CurrentSavegame, v10);
  LODWORD(v34) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(*(this + 6) + 4), v34);
  sub_7150F0(v63, (float *)(*(this + 6) + 8));
  LODWORD(v35) = 0x10;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v63, v35);
  LODWORD(v36) = 0xC;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(*(this + 6) + 0x2C), v36);
  LODWORD(v37) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(*(this + 6) + 0x38), v37);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, *(this + 6) + 0x3C, 4u);
  LODWORD(v38) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(*(this + 6) + 0x40), v38);
  LODWORD(v39) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(*(this + 6) + 0x44), v39);
  v11 = TESForm_LookupByFormID(*(_DWORD *)(*(this + 6) + 0x3C));
  v12 = (PlayerCharacter *)OblivionDynamicCast(
                             v11,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                             0);
  v13 = (const char **)*(this + 8);
  v14 = v12;
  niNode = (const char **)v12->super.super.super.super.niNode;
  if ( !v13 )
  {
    vtbl = v12->vtbl;
    Src = v12->super.super.super.super.super.refID;
    v17 = vtbl->super.super.super.super.GetEditorName((TESForm *)v12);
    PrintError("Could not find attached geometry for decal on reference  %08X %s", Src, v17);
  }
  v54 = sub_4810A0((int)v14, niNode, v13, 1, 0);
  if ( v54 == 0xFFFFFFFF && v14 == TESDataHandler_g_PlayerRef )
  {
    niNode = (const char **)PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
    v54 = sub_4810A0((int)v14, niNode, v13, 1, 0);
  }
  v62 = sub_480F00(niNode, 1, 0);
  if ( v54 == 0xFFFFFFFF )
  {
    refID = v14->super.super.super.super.super.refID;
    v19 = v14->vtbl->super.super.super.super.GetEditorName((TESForm *)v14);
    PrintError("Could not find geometry index for reference %08X %s", refID, v19);
  }
  LODWORD(v40) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v62, v40);
  LODWORD(v41) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v54, v41);
  v20 = *(this + 7);
  v21 = *(_DWORD *)(v20 + 0xB4);
  v22 = *(_DWORD *)(v20 + 0xB8);
  v23 = *(_DWORD *)(*(_DWORD *)(v22 + 8) + 0x44);
  v55 = *(unsigned __int16 *)(v21 + 8);
  v59 = *(unsigned __int16 *)(v21 + 0x44);
  LODWORD(v42) = 2;
  v57 = *(unsigned __int16 *)(*(_DWORD *)(v22 + 8) + 0x40);
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v55, v42);
  LODWORD(v43) = 2;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v59, v43);
  LODWORD(v44) = 2;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v57, v44);
  LODWORD(v45) = 0xC * (unsigned __int16)v55;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, *(void **)(v21 + 0x1C), v45);
  LODWORD(v46) = 0xC * (unsigned __int16)v55;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, *(void **)(v21 + 0x20), v46);
  LODWORD(v47) = 2 * (unsigned __int16)v59;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, *(void **)(v21 + 0x48), v47);
  v24 = 0;
  if ( (_WORD)v57 )
  {
    v25 = v23 + 0x44;
    do
    {
      v26 = SaveLoad_CurrentSavegame;
      LODWORD(v48) = 2;
      Src = *(unsigned __int16 *)(v25 + 4);
      SaveLoad_SaveData((int)v26, &Src, v48);
      for ( i = 0;
            i < (unsigned __int16)Src;
            SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(*(_DWORD *)v25 + 8 * i++), v48) )
      {
        LODWORD(v48) = 8;
      }
      ++v24;
      v25 += 0x4C;
    }
    while ( v24 < (unsigned __int16)v57 );
  }
  if ( Global_DebugSaveBuffer )
  {
    v28 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v29 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v28 )
    {
      v30 = TESForm_LookupByFormID(*v28);
      v31 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v30->vtbl->GetEditorName)(
                            v30,
                            *(UInt32 *)((char *)v28 + 5),
                            0x580,
                            "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v29 - v58,
        *v28,
        v31,
        v49,
        v50,
        v53);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v29 - v58,
        0x580,
        "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v32 = (_WORD *)v60;
    v33 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v33 > v60 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",
        0x580);
    *v32 = v33 - (_WORD)v32;
  }
}
