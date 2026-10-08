// [Verified] SaveGame serializes DECAL_DATA.fadeProgress_40 at +0x40 along with its other persistent fields. Both fallback and generated-geometry update routines write the same elapsed/duration ratio there.
void __thiscall BSTempEffectDecal_SaveGame(BSTempEffectDecalLayout_t *this)
{
  bool v1; // zf
  TESSaveLoadGame_SerializationView *v3; // ecx
  unsigned __int8 *bufferCursor; // eax
  TESSaveLoadGame_SerializationView *v5; // ecx
  TESSaveLoadGame_SerializationView *v6; // ecx
  DECAL_DATA *decalData_18; // ecx
  char *unk034; // eax
  UInt32 targetReferenceFormID_3C; // eax
  PlayerCharacter *v10; // ebx
  TESForm *v11; // eax
  const char **niNode; // edi
  int v13; // ebp
  UInt32 refID; // esi
  const char *v15; // eax
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v17; // esi
  TESForm *v18; // eax
  const char *v19; // eax
  unsigned __int8 *v20; // edi
  unsigned __int8 *v21; // esi
  int v22; // [esp-Ch] [ebp-3Ch]
  int v23; // [esp-8h] [ebp-38h]
  const char *v24; // [esp-4h] [ebp-34h]
  unsigned int v25; // [esp+8h] [ebp-28h] BYREF
  unsigned __int8 *v26; // [esp+Ch] [ebp-24h]
  int Src; // [esp+10h] [ebp-20h] BYREF
  unsigned __int8 *v28; // [esp+14h] [ebp-1Ch]
  int source; // [esp+18h] [ebp-18h] BYREF
  signed int v30; // [esp+1Ch] [ebp-14h] BYREF
  float v31[4]; // [esp+20h] [ebp-10h] BYREF

  v1 = Global_DebugSaveBuffer == 0; /*0x56c1d7*/
  v3 = g_TESSaveLoadGame; /*0x56c1e0*/
  source = 0; /*0x56c1e6*/
  bufferCursor = v3->bufferCursor; /*0x56c1ea*/
  v28 = 0; /*0x56c1ed*/
  v26 = bufferCursor; /*0x56c1f1*/
  if ( !v1 ) /*0x56c1f5*/
    v26 = bufferCursor; /*0x56c1f7*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x56c1fb*/
  {
    v5 = g_TESSaveLoadGame; /*0x56c204*/
    Src = 0x4B4F4C42; /*0x56c211*/
    SaveLoad_SaveData(v5, &Src, 4u); /*0x56c219*/
    v6 = g_TESSaveLoadGame; /*0x56c21e*/
    v28 = g_TESSaveLoadGame->bufferCursor; /*0x56c22e*/
    SaveLoad_SaveData(v6, &source, 2u); /*0x56c232*/
  }
  BSTempEffect_SaveGame(&this->base);           // BloodOnDeath decode 2026-05-30: fallback decal save serializes base duration, elapsed, and owning cell before decal data. /*0x56c239*/
  decalData_18 = this->decalData_18; /*0x56c23e*/
  if ( decalData_18->sourceTexture_00 ) /*0x56c241*/
    unk034 = (char *)decalData_18->sourceTexture_00->members.unk034; /*0x56c247*/
  else
    unk034 = 0; /*0x56c24c*/
  sub_45E940(g_TESSaveLoadGame, unk034); /*0x56c256*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &this->decalData_18->unk_04, 4u); /*0x56c26a*/
  sub_7150F0(v31, this->decalData_18->rotationMatrix33_08); /*0x56c27a*/
  SaveLoad_SaveData(g_TESSaveLoadGame, v31, 0x10u); /*0x56c28c*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this->decalData_18->unkVector_2C, 0xCu); /*0x56c2a0*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &this->decalData_18->unk_38, 4u); /*0x56c2b4*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &this->decalData_18->targetReferenceFormID_3C, 4u);// BloodOnDeath decode 2026-05-30: fallback decal saves optional target reference FormID; zero target is allowed for world/cell decals. /*0x56c2c8*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &this->decalData_18->fadeProgress_40, 4u); /*0x56c2dc*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &this->decalData_18->unk_44, 1u); /*0x56c2f0*/
  targetReferenceFormID_3C = this->decalData_18->targetReferenceFormID_3C; /*0x56c2f8*/
  v10 = 0; /*0x56c2fb*/
  if ( targetReferenceFormID_3C ) /*0x56c2ff*/
  {
    v11 = TESForm_LookupByFormID(targetReferenceFormID_3C); /*0x56c30e*/
    v10 = (PlayerCharacter *)OblivionDynamicCast( /*0x56c31f*/
                               v11,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
  }
  LOBYTE(Src) = 0; /*0x56c323*/
  if ( v10 ) /*0x56c328*/
  {
    niNode = (const char **)v10->super.super.super.super.niNode; /*0x56c32a*/
  }
  else
  {
    niNode = (const char **)GetObjectPointerAt_054(this->base.parentCell); /*0x56c337*/
    LOBYTE(Src) = 1; /*0x56c339*/
  }
  v13 = Src; /*0x56c345*/
  v25 = sub_481210((int)this, niNode, this->decalData_18->targetShaderProperty_48, 1, Src);// BloodOnDeath decode 2026-05-30: fallback decal saves shader-property/geometry index needed to reattach after load. /*0x56c359*/
  if ( v25 == 0xFFFFFFFF && v10 == reference ) /*0x56c367*/
  {
    niNode = (const char **)PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x56c370*/
    v25 = sub_481210((int)this, niNode, this->decalData_18->targetShaderProperty_48, 1, v13); /*0x56c385*/
  }
  v30 = sub_480F00(niNode, 1, v13); /*0x56c39a*/
  if ( v25 == 0xFFFFFFFF ) /*0x56c39f*/
  {
    if ( v10 ) /*0x56c3a3*/
    {
      refID = v10->super.super.super.super.super.refID; /*0x56c3ad*/
      v15 = v10->vtbl->super.super.super.super.GetEditorName((TESForm *)v10); /*0x56c3b2*/
      PrintError("Could not find geometry index for reference %08X %s", refID, v15); /*0x56c3bb*/
    }
    else
    {
      PrintError("Could not find geometry index for UNKNOWN reference"); /*0x56c3ca*/
    }
  }
  SaveLoad_SaveData(g_TESSaveLoadGame, &v30, 4u); /*0x56c3df*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &v25, 4u); /*0x56c3f1*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x56c405*/
    v17 = g_TESSaveLoadGame->bufferCursor; /*0x56c40d*/
    if ( currentlySavingFormHeader )
    {
      v18 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x56c415*/
      v19 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v18->vtbl->GetEditorName)( /*0x56c435*/
                            v18,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0xD2,
                            "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v17 - v26,
        *currentlySavingFormHeader,
        v19,
        v22,
        v23,
        v24);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v17 - v26,
        0xD2,
        "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x56c471*/
  {
    v20 = v28; /*0x56c480*/
    v21 = g_TESSaveLoadGame->bufferCursor; /*0x56c484*/
    if ( v21 > v28 + 0xFFFF ) /*0x56c48f*/
      PrintError( /*0x56c4a0*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",
        0xD2);
    *(_WORD *)v20 = (_WORD)v21 - (_WORD)v20; /*0x56c4aa*/
  }
}
