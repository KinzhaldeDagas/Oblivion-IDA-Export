// [Verified] BSTempEffectDecal_LoadGame allocates a 0x4C DECAL_DATA payload, reloads its source texture into +0, restores transform/vector/reference fields, resolves a NiProperty* at +0x48 from the saved geometry/property index, then calls BSShaderLightingProperty_AddDecalData on that property. This is the save-load re-registration path.
bool __thiscall BSTempEffectDecal_LoadGame(BSTempEffectDecalLayout_t *this)
{
  UInt32 *currentlyLoadingFormHeader; // esi
  TESForm *v3; // eax
  const char *v4; // eax
  TESSaveLoadGame_SerializationView *v5; // ecx
  DECAL_DATA *v6; // eax
  int *SourceTexture_010201A0; // eax
  int *decalData_18; // ecx
  float v9; // esi
  DECAL_DATA *v10; // eax
  UInt32 targetReferenceFormID_3C; // eax
  PlayerCharacter *v12; // edi
  TESForm *v13; // eax
  const char **niNode; // ebx
  TESObjectCELL *parentCell; // ecx
  signed int v16; // esi
  int v17; // eax
  PlayerCharacterVtbl *vtbl; // edx
  TESObjectCELL *v19; // ecx
  TESFormVtbl *v20; // eax
  const char **v21; // eax
  UInt32 refID; // esi
  TESObjectCELL *v23; // ecx
  UInt32 v24; // esi
  NiNode *v25; // esi
  NiProperty *v26; // eax
  NiProperty *v27; // eax
  Ni2DBuffer *NiPropertyByID; // eax
  UInt32 v29; // esi
  TESSaveLoadGame_SerializationView *v30; // ecx
  UInt32 *v31; // edi
  unsigned __int8 *v32; // esi
  TESForm *v33; // eax
  int v34; // ebx
  TESForm *v35; // ecx
  unsigned int v36; // eax
  const char *v37; // eax
  const char *v38; // eax
  unsigned int v39; // edi
  DECAL_DATA *v40; // ebp
  NiProperty *targetShaderProperty_48; // esi
  NiProperty **p_targetShaderProperty_48; // ebp
  int v44; // [esp-18h] [ebp-174h]
  int v45; // [esp-18h] [ebp-174h]
  int v46; // [esp-14h] [ebp-170h]
  int v47; // [esp-14h] [ebp-170h]
  int v48; // [esp-14h] [ebp-170h]
  int v49; // [esp-10h] [ebp-16Ch]
  int v50; // [esp-10h] [ebp-16Ch]
  int v51; // [esp-10h] [ebp-16Ch]
  int v52; // [esp-10h] [ebp-16Ch]
  int v53; // [esp-10h] [ebp-16Ch]
  int v54; // [esp-8h] [ebp-164h]
  int v55; // [esp-4h] [ebp-160h]
  bool v56; // [esp+Bh] [ebp-151h]
  unsigned __int16 v57; // [esp+Ch] [ebp-150h]
  int v58; // [esp+10h] [ebp-14Ch] BYREF
  int v59; // [esp+14h] [ebp-148h]
  char destination[4]; // [esp+18h] [ebp-144h] BYREF
  int v61; // [esp+1Ch] [ebp-140h]
  char v62[4]; // [esp+20h] [ebp-13Ch]
  unsigned __int8 *bufferCursor; // [esp+28h] [ebp-134h]
  int Dst; // [esp+30h] [ebp-12Ch] BYREF
  NiTransform outTexture[5]; // [esp+34h] [ebp-128h] BYREF
  unsigned int v66; // [esp+158h] [ebp-4h]

  *(_DWORD *)destination = 0; /*0x56c505*/
  bufferCursor = 0; /*0x56c509*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x56c527*/
    if ( Dst != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x56c53b*/
      if ( currentlyLoadingFormHeader )
      {
        v3 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x56c548*/
        v4 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v3->vtbl->GetEditorName)( /*0x56c563*/
                             v3,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",
          0xDB,
          *currentlyLoadingFormHeader,
          v4,
          v54,
          v55);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",
          0xDB,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    v5 = g_TESSaveLoadGame; /*0x56c59e*/
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x56c5ae*/
    SaveLoad_LoadData(v5, destination, 2u); /*0x56c5b2*/
  }
  HIBYTE(v59) = BSTempEffect_LoadGame(&this->base);// BloodOnDeath decode 2026-05-30: fallback decal load starts with base duration/elapsed/cell; restore fails if owning cell has no loaded NiNode. /*0x56c5c0*/
  v6 = (DECAL_DATA *)FormHeapAlloc(0x4Cu); /*0x56c5c4*/
  if ( v6 ) /*0x56c5ce*/
  {
    v6->sourceTexture_00 = 0; /*0x56c5d0*/
    v6->targetShaderProperty_48 = 0; /*0x56c5d2*/
  }
  else
  {
    v6 = 0; /*0x56c5d7*/
  }
  this->decalData_18 = v6; /*0x56c5d9*/
  if ( sub_45A290((unsigned __int8 **)g_TESSaveLoadGame, &outTexture[0].rot.data[1][2]) ) /*0x56c5e7*/
  {
    SourceTexture_010201A0 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0( /*0x56c602*/
                                      (NiSourceTexture **)outTexture,
                                      (char *)&outTexture[0].rot.data[1][2],
                                      0,
                                      0);
    decalData_18 = (int *)this->decalData_18; /*0x56c607*/
    v66 = 0; /*0x56c60b*/
    OB_NiSmartPointer_Assign_010201A0(decalData_18, SourceTexture_010201A0); /*0x56c612*/
    v66 = 0xFFFFFFFF; /*0x56c61d*/
    if ( LODWORD(outTexture[0].rot.data[0][0]) ) /*0x56c628*/
    {
      v9 = outTexture[0].rot.data[0][0]; /*0x56c62a*/
      if ( !InterlockedDecrement((volatile LONG *)(LODWORD(outTexture[0].rot.data[0][0]) + 4)) ) /*0x56c630*/
        (**(void (__thiscall ***)(float, int))LODWORD(v9))(COERCE_FLOAT(LODWORD(v9)), 1); /*0x56c646*/
    }
  }
  v10 = this->decalData_18; /*0x56c648*/
  if ( !v10->sourceTexture_00 ) /*0x56c64b*/
    HIBYTE(v58) = 0; /*0x56c64f*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v10->unk_04, 4u); /*0x56c660*/
  SaveLoad_LoadData(g_TESSaveLoadGame, outTexture, 0x10u); /*0x56c672*/
  sub_47C600(outTexture, (NiTransform *)this->decalData_18->rotationMatrix33_08); /*0x56c682*/
  SaveLoad_LoadData(g_TESSaveLoadGame, this->decalData_18->unkVector_2C, 0xCu); /*0x56c696*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &this->decalData_18->unk_38, 4u); /*0x56c6aa*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &this->decalData_18->targetReferenceFormID_3C, 4u); /*0x56c6be*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &this->decalData_18->fadeProgress_40, 4u); /*0x56c6d2*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &this->decalData_18->unk_44, 1u); /*0x56c6e6*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v58, 4u); /*0x56c6f8*/
  SaveLoad_LoadData(g_TESSaveLoadGame, destination, 4u); /*0x56c70a*/
  targetReferenceFormID_3C = this->decalData_18->targetReferenceFormID_3C; /*0x56c712*/
  v12 = 0; /*0x56c715*/
  if ( targetReferenceFormID_3C ) /*0x56c719*/
  {
    v13 = TESForm_LookupByFormID(targetReferenceFormID_3C); /*0x56c728*/
    v12 = (PlayerCharacter *)OblivionDynamicCast( /*0x56c739*/
                               v13,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
  }
  LOBYTE(v59) = 0; /*0x56c73d*/
  if ( v12 ) /*0x56c742*/
  {
    niNode = (const char **)v12->super.super.super.super.niNode; /*0x56c744*/
  }
  else
  {
    parentCell = this->base.parentCell; /*0x56c749*/
    if ( !parentCell ) /*0x56c74e*/
    {
LABEL_46:
      v56 = 0; /*0x56c913*/
      goto LABEL_47; /*0x56c913*/
    }
    niNode = (const char **)GetObjectPointerAt_054(parentCell); /*0x56c759*/
    LOBYTE(v59) = 1; /*0x56c75b*/
  }
  if ( !niNode || !v56 ) /*0x56c76d*/
    goto LABEL_46; /*0x56c76d*/
  v16 = sub_480F00(niNode, 1, v59); /*0x56c780*/
  v17 = v58; /*0x56c782*/
  if ( v58 != v16 ) /*0x56c78b*/
  {
    if ( v12 == reference ) /*0x56c799*/
    {
      niNode = (const char **)PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x56c7a7*/
      v16 = sub_480F00(niNode, 1, v59); /*0x56c7b1*/
      v17 = v58; /*0x56c7b3*/
    }
    if ( v17 != v16 ) /*0x56c7bc*/
    {
      if ( v12 ) /*0x56c7c0*/
      {
        vtbl = v12->vtbl; /*0x56c7c5*/
        *(_DWORD *)v62 = v12->super.super.super.super.super.refID; /*0x56c7c8*/
        v44 = ((int (__thiscall *)(PlayerCharacter *, int, signed int))vtbl->super.super.super.super.GetEditorName)( /*0x56c7db*/
                v12,
                v17,
                v16);
        PrintError( /*0x56c7e2*/
          "Geometry count has changed on reference %08X %s.  Original count was %i, current count is %i",
          *(_DWORD *)v62,
          v44);
      }
      else
      {
        v19 = this->base.parentCell; /*0x56c7e4*/
        if ( !v19 ) /*0x56c7e9*/
          goto LABEL_33; /*0x56c7e9*/
        v46 = v17; /*0x56c7ef*/
        v20 = v19->vtbl; /*0x56c7f0*/
        *(_DWORD *)v62 = v19->members.super.refID; /*0x56c7f2*/
        v45 = ((int (__thiscall *)(TESObjectCELL *, int, signed int))v20->GetEditorName)(v19, v46, v16); /*0x56c7fe*/
        PrintError( /*0x56c809*/
          "Geometry count has changed on cell %08X %s's 3D.  Original count was %i, current count is %i",
          *(_DWORD *)v62,
          v45);
      }
      v17 = v58; /*0x56c80e*/
LABEL_33:
      v56 = 0; /*0x56c815*/
      if ( v17 != v16 ) /*0x56c81c*/
        goto LABEL_47; /*0x56c81c*/
    }
  }
  v21 = sub_481320((int)this, niNode, *(int *)destination, 1, v59); /*0x56c822*/
  if ( !v21 ) /*0x56c839*/
  {
    if ( v12 ) /*0x56c83d*/
    {
      refID = v12->super.super.super.super.super.refID; /*0x56c847*/
      v49 = (int)v12->vtbl->super.super.super.super.GetEditorName((TESForm *)v12); /*0x56c84e*/
      PrintError("Could not find geometry with index %i on reference %08X %s", *(_DWORD *)destination, refID, v49); /*0x56c85a*/
    }
    else
    {
      v23 = this->base.parentCell; /*0x56c85f*/
      if ( v23 ) /*0x56c864*/
      {
        v24 = v23->members.super.refID; /*0x56c872*/
        v50 = ((int (*)(void))v23->vtbl->GetEditorName)(); /*0x56c87b*/
        PrintError("Could not find geometry with index %i on cell %08X %s", *(_DWORD *)destination, v24, v50); /*0x56c883*/
      }
    }
    goto LABEL_46; /*0x56c85a*/
  }
  v25 = (NiNode *)(*((int (__thiscall **)(const char **))*v21 + 4))(v21); /*0x56c891*/
  if ( NiNode_GetNiPropertyByID(v25, 4) /*0x56c8cc*/
    && (v26 = NiNode_GetNiPropertyByID(v25, 4), (*((int (__thiscall **)(NiProperty *))v26->vtbl + 0x15))(v26) >= 1)
    && (v27 = NiNode_GetNiPropertyByID(v25, 4), (*((int (__thiscall **)(NiProperty *))v27->vtbl + 0x15))(v27) <= 0xA) )
  {
    NiPropertyByID = (Ni2DBuffer *)NiNode_GetNiPropertyByID(v25, 4); /*0x56c8d2*/
  }
  else
  {
    NiPropertyByID = 0; /*0x56c8d9*/
  }
  NiSmartPointer_Set__((Ni2DBuffer **)&this->decalData_18->targetShaderProperty_48, NiPropertyByID); /*0x56c8e2*/
  if ( !this->decalData_18->targetShaderProperty_48 ) /*0x56c8ea*/
  {
    v29 = v12->super.super.super.super.super.refID; /*0x56c8f8*/
    v51 = (int)v12->vtbl->super.super.super.super.GetEditorName((TESForm *)v12); /*0x56c903*/
    PrintError( /*0x56c90b*/
      "There is no shader property on geometry with index %i on reference %08X %s",
      *(_DWORD *)destination,
      v29,
      v51);
    goto LABEL_46; /*0x56c90b*/
  }
LABEL_47:
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x56c91e*/
  {
    v30 = g_TESSaveLoadGame; /*0x56c92b*/
    v31 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x56c931*/
    v32 = g_TESSaveLoadGame->bufferCursor; /*0x56c939*/
    if ( v31 ) /*0x56c93c*/
    {
      v33 = TESForm_LookupByFormID(*v31); /*0x56c945*/
      v34 = v61; /*0x56c94a*/
      v35 = v33; /*0x56c94e*/
      v36 = v61 + v57; /*0x56c955*/
      if ( (unsigned int)v32 <= v36 ) /*0x56c95c*/
      {
        if ( (unsigned int)v32 < v36 ) /*0x56c99b*/
        {
          v38 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v35->vtbl->GetEditorName)( /*0x56c9b2*/
                                v35,
                                *((unsigned __int8 *)v31 + 9),
                                *(UInt32 *)((char *)v31 + 5));
          PrintError( /*0x56c9d1*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v34 + v57 - (_DWORD)v32,
            "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",
            0x141,
            *v31,
            v38,
            v48,
            v53);
        }
      }
      else
      {
        v37 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v35->vtbl->GetEditorName)( /*0x56c96f*/
                              v35,
                              *((unsigned __int8 *)v31 + 9),
                              *(UInt32 *)((char *)v31 + 5));
        PrintError( /*0x56c98e*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v32[-v57 - v34],
          "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",
          0x141,
          *v31,
          v37,
          v47,
          v52);
      }
    }
    else
    {
      v39 = v57 + v61; /*0x56c9e4*/
      if ( (unsigned int)v32 <= v39 ) /*0x56c9e9*/
      {
        if ( (unsigned int)v32 < v39 ) /*0x56ca06*/
          PrintError( /*0x56ca21*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v61 + v57 - (_DWORD)v32,
            "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",
            0x141,
            v30->currentVersion);
      }
      else
      {
        PrintError( /*0x56ca04*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v32[-v57 - v61],
          "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",
          0x141,
          v30->currentVersion);
      }
    }
  }
  v40 = this->decalData_18; /*0x56ca2f*/
  if ( v56 )                                    // BloodOnDeath decode 2026-05-30: successful fallback decal load reattaches decal data to the resolved shader property; otherwise the property ref is released. /*0x56ca32*/
  {
    BSShaderLightingProperty_AddDecalData((BSShaderLightingPropertyLayout_t *)v40->targetShaderProperty_48, v40); /*0x56ca38*/
  }
  else
  {
    targetShaderProperty_48 = v40->targetShaderProperty_48; /*0x56ca3f*/
    p_targetShaderProperty_48 = &v40->targetShaderProperty_48; /*0x56ca42*/
    if ( targetShaderProperty_48 ) /*0x56ca47*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&targetShaderProperty_48->members) ) /*0x56ca4d*/
        (*(void (__cdecl **)(int))targetShaderProperty_48->vtbl)(1); /*0x56ca63*/
      *p_targetShaderProperty_48 = 0; /*0x56ca65*/
    }
  }
  return v56; /*0x56ca6e*/
}
