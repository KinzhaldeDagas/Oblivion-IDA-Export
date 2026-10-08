// Verified geometry-decal SaveGame serializes decalCreationData values/path, base lifetime/cell, the persistent targetGeometry scene index, generated mesh vertex/UV/index arrays and skin-partition bone/weight data. This lets LoadGame reconstruct the generated NiTriShape from saved geometry without the transient live-initialization references.
void __thiscall BSTempEffectGeometryDecal_SaveGame(BSTempEffectGeometryDecalLayout_t *this)
{
  bool v1; // zf
  TESSaveLoadGame_SerializationView *v3; // ecx
  unsigned __int8 *bufferCursor; // eax
  TESSaveLoadGame_SerializationView *v5; // ecx
  TESSaveLoadGame_SerializationView *v6; // ecx
  DECAL_DATA *decalCreationData_18; // ecx
  char *unk034; // eax
  TESForm *v9; // eax
  PlayerCharacter *v10; // eax
  const char **targetGeometry_20; // ebx
  PlayerCharacter *v12; // ebp
  const char **niNode; // edi
  PlayerCharacterVtbl *vtbl; // edx
  const char *v15; // eax
  UInt32 refID; // edi
  const char *v17; // eax
  NiAVObject *generatedGeometry_1C; // esi
  const char *m_pcName; // edi
  NiInterpController *m_controller; // esi
  int v21; // ebp
  int v22; // ebx
  int v23; // edi
  TESSaveLoadGame_SerializationView *v24; // ecx
  unsigned int i; // esi
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v27; // esi
  TESForm *v28; // eax
  const char *v29; // eax
  unsigned __int8 *v30; // edi
  unsigned __int8 *v31; // esi
  int v32; // [esp-Ch] [ebp-48h]
  int v33; // [esp-8h] [ebp-44h]
  const char *v34; // [esp-4h] [ebp-40h]
  unsigned int v35; // [esp+8h] [ebp-34h] BYREF
  int v36; // [esp+Ch] [ebp-30h] BYREF
  int Src; // [esp+10h] [ebp-2Ch] BYREF
  int v38; // [esp+14h] [ebp-28h] BYREF
  unsigned __int8 *v39; // [esp+18h] [ebp-24h]
  int v40; // [esp+1Ch] [ebp-20h] BYREF
  unsigned __int8 *v41; // [esp+20h] [ebp-1Ch]
  int source; // [esp+24h] [ebp-18h] BYREF
  signed int v43; // [esp+28h] [ebp-14h] BYREF
  float v44[4]; // [esp+2Ch] [ebp-10h] BYREF

  v1 = Global_DebugSaveBuffer == 0; /*0x56d5f7*/
  v3 = g_TESSaveLoadGame; /*0x56d600*/
  source = 0; /*0x56d606*/
  bufferCursor = v3->bufferCursor; /*0x56d60a*/
  v41 = 0; /*0x56d60d*/
  v39 = bufferCursor; /*0x56d611*/
  if ( !v1 ) /*0x56d615*/
    v39 = bufferCursor; /*0x56d617*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x56d61b*/
  {
    v5 = g_TESSaveLoadGame; /*0x56d624*/
    Src = 0x4B4F4C42; /*0x56d631*/
    SaveLoad_SaveData(v5, &Src, 4u); /*0x56d639*/
    v6 = g_TESSaveLoadGame; /*0x56d63e*/
    v41 = g_TESSaveLoadGame->bufferCursor; /*0x56d64e*/
    SaveLoad_SaveData(v6, &source, 2u); /*0x56d652*/
  }
  BSTempEffect_SaveGame(&this->base);           // BloodOnDeath decode 2026-05-30: geometry decal save serializes base duration, elapsed, and owning cell before generated decal payload. /*0x56d659*/
  decalCreationData_18 = this->decalCreationData_18; /*0x56d65e*/
  if ( decalCreationData_18->sourceTexture_00 ) /*0x56d661*/
    unk034 = (char *)decalCreationData_18->sourceTexture_00->members.unk034; /*0x56d667*/
  else
    unk034 = 0; /*0x56d66c*/
  sub_45E940(g_TESSaveLoadGame, unk034); /*0x56d677*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &this->decalCreationData_18->unk_04, 4u); /*0x56d68b*/
  sub_7150F0(v44, this->decalCreationData_18->rotationMatrix33_08); /*0x56d69b*/
  SaveLoad_SaveData(g_TESSaveLoadGame, v44, 0x10u); /*0x56d6ad*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this->decalCreationData_18->unkVector_2C, 0xCu); /*0x56d6c1*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &this->decalCreationData_18->unk_38, 4u); /*0x56d6d5*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &this->decalCreationData_18->targetReferenceFormID_3C, 4u); /*0x56d6e9*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &this->decalCreationData_18->fadeProgress_40, 4u); /*0x56d6fd*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &this->decalCreationData_18->unk_44, 1u); /*0x56d711*/
  v9 = TESForm_LookupByFormID(this->decalCreationData_18->targetReferenceFormID_3C); /*0x56d729*/
  v10 = (PlayerCharacter *)OblivionDynamicCast( /*0x56d732*/
                             v9,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                             0);
  targetGeometry_20 = (const char **)this->targetGeometry_20; /*0x56d737*/
  v12 = v10; /*0x56d73f*/
  niNode = (const char **)v10->super.super.super.super.niNode; /*0x56d741*/
  if ( !targetGeometry_20 ) /*0x56d744*/
  {
    vtbl = v10->vtbl; /*0x56d749*/
    Src = v10->super.super.super.super.super.refID; /*0x56d74c*/
    v15 = vtbl->super.super.super.super.GetEditorName((TESForm *)v10); /*0x56d758*/
    PrintError("Could not find attached geometry for decal on reference  %08X %s", Src, v15); /*0x56d765*/
  }
  v35 = sub_4810A0((int)v12, niNode, targetGeometry_20, 1, 0);// BloodOnDeath decode 2026-05-30: geometry decal save stores attached geometry index; geometry-count changes can invalidate saved trail decals. /*0x56d77e*/
  if ( v35 == 0xFFFFFFFF && v12 == reference ) /*0x56d78c*/
  {
    niNode = (const char **)PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x56d799*/
    v35 = sub_4810A0((int)v12, niNode, targetGeometry_20, 1, 0); /*0x56d7a5*/
  }
  v43 = sub_480F00(niNode, 1, 0); /*0x56d7bb*/
  if ( v35 == 0xFFFFFFFF ) /*0x56d7bf*/
  {
    refID = v12->super.super.super.super.super.refID; /*0x56d7ca*/
    v17 = v12->vtbl->super.super.super.super.GetEditorName((TESForm *)v12); /*0x56d7cf*/
    PrintError("Could not find geometry index for reference %08X %s", refID, v17); /*0x56d7d8*/
  }
  SaveLoad_SaveData(g_TESSaveLoadGame, &v43, 4u); /*0x56d7ed*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &v35, 4u); /*0x56d7ff*/
  generatedGeometry_1C = this->generatedGeometry_1C; /*0x56d804*/
  m_pcName = generatedGeometry_1C[1].members.super.m_pcName; /*0x56d807*/
  m_controller = generatedGeometry_1C[1].members.super.m_controller; /*0x56d80d*/
  v21 = *(_DWORD *)(*(_DWORD *)&m_controller->member.flags + 0x44); /*0x56d81a*/
  v36 = *((unsigned __int16 *)m_pcName + 4); /*0x56d81d*/
  v40 = *((unsigned __int16 *)m_pcName + 0x22); /*0x56d825*/
  v38 = *(unsigned __int16 *)(*(_DWORD *)&m_controller->member.flags + 0x40); /*0x56d836*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &v36, 2u); /*0x56d841*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &v40, 2u); /*0x56d853*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &v38, 2u); /*0x56d865*/
  SaveLoad_SaveData(g_TESSaveLoadGame, *((const void **)m_pcName + 7), 0xC * (unsigned __int16)v36);// BloodOnDeath decode 2026-05-30: geometry decal serializes generated vertex/UV/index payload, so save size grows with more trail decals. /*0x56d881*/
  SaveLoad_SaveData(g_TESSaveLoadGame, *((const void **)m_pcName + 8), 0xC * (unsigned __int16)v36); /*0x56d89d*/
  SaveLoad_SaveData(g_TESSaveLoadGame, *((const void **)m_pcName + 0x12), 2 * (unsigned __int16)v40); /*0x56d8b4*/
  v22 = 0; /*0x56d8b9*/
  if ( (_WORD)v38 ) /*0x56d8c0*/
  {
    v23 = v21 + 0x44; /*0x56d8c2*/
    do /*0x56d91f*/
    {
      v24 = g_TESSaveLoadGame; /*0x56d8d4*/
      Src = *(unsigned __int16 *)(v23 + 4); /*0x56d8e1*/
      SaveLoad_SaveData(v24, &Src, 2u); /*0x56d8e5*/
      for ( i = 0; /*0x56d8ea*/
            i < (unsigned __int16)Src;
            SaveLoad_SaveData(g_TESSaveLoadGame, (const void *)(*(_DWORD *)v23 + 8 * i++), 8u) )
      {
        ; /*0x56d901*/
      }
      ++v22; /*0x56d917*/
      v23 += 0x4C; /*0x56d91a*/
    }
    while ( v22 < (unsigned __int16)v38 ); /*0x56d91f*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x56d931*/
    v27 = g_TESSaveLoadGame->bufferCursor; /*0x56d939*/
    if ( currentlySavingFormHeader )
    {
      v28 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x56d941*/
      v29 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v28->vtbl->GetEditorName)( /*0x56d961*/
                            v28,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x580,
                            "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v27 - v39,
        *currentlySavingFormHeader,
        v29,
        v32,
        v33,
        v34);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v27 - v39,
        0x580,
        "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x56d99d*/
  {
    v30 = v41; /*0x56d9ac*/
    v31 = g_TESSaveLoadGame->bufferCursor; /*0x56d9b0*/
    if ( v31 > v41 + 0xFFFF ) /*0x56d9bb*/
      PrintError( /*0x56d9cc*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",
        0x580);
    *(_WORD *)v30 = (_WORD)v31 - (_WORD)v30; /*0x56d9d6*/
  }
}
