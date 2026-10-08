// Verified restore path rebuilds the saved generated NiTriShape via BSTempEffectGeometryDecal_BuildGeneratedGeometry; it does not dispatch Initialize (+0x4C) or set base.initializeCallbackDone. A successfully restored effect can therefore own generated geometry while the callback guard remains false. This refines the field's meaning: it records Initialize callback completion, not general output existence.
bool __thiscall BSTempEffectGeometryDecal_LoadGame(BSTempEffectGeometryDecalLayout_t *this)
{
  UInt32 *currentlyLoadingFormHeader; // esi
  TESForm *v3; // eax
  const char *v4; // eax
  TESSaveLoadGame_SerializationView *v5; // ecx
  DECAL_DATA *v6; // eax
  int *SourceTexture_010201A0; // eax
  int *decalCreationData_18; // ecx
  NiSourceTexture *v9; // esi
  DECAL_DATA *v10; // eax
  unsigned __int16 *v11; // eax
  int v12; // edi
  void *v13; // eax
  int v14; // esi
  TESSaveLoadGame_SerializationView *v15; // ecx
  UInt32 targetReferenceFormID_3C; // eax
  TESForm *v17; // eax
  void *v18; // eax
  PlayerCharacter *v19; // esi
  const char **NodeByPerspective; // ebp
  signed int v21; // edi
  unsigned __int8 *v22; // eax
  PlayerCharacterVtbl *vtbl; // edx
  const char *v24; // eax
  const char **v25; // eax
  UInt32 refID; // edi
  Ni2DBuffer *v27; // eax
  UInt32 v28; // edi
  UInt32 v29; // edi
  NiGeometry *sourceGeometry_2C; // eax
  void (__thiscall *Unk_11)(NiObject *); // ecx
  NiObject *skinData; // edx
  int v33; // ebp
  int v34; // edi
  int v35; // eax
  bool v36; // sf
  int v37; // edi
  _WORD *v38; // esi
  TESSaveLoadGame_SerializationView *v39; // ecx
  bool v40; // cf
  unsigned int i; // esi
  DECAL_DATA *v42; // esi
  NiProperty *targetShaderProperty_48; // edi
  NiProperty **p_targetShaderProperty_48; // esi
  NiAVObject *generatedGeometry_1C; // esi
  unsigned int v46; // esi
  unsigned int *v47; // edi
  TESSaveLoadGame_SerializationView *v48; // ecx
  UInt32 *v49; // edi
  unsigned __int8 *v50; // esi
  TESForm *v51; // eax
  int v52; // ebx
  unsigned int v53; // ecx
  const char *v54; // eax
  const char *v55; // eax
  unsigned int v56; // edi
  int v58; // [esp-14h] [ebp-194h]
  int v59; // [esp-14h] [ebp-194h]
  int v60; // [esp-14h] [ebp-194h]
  int v61; // [esp-10h] [ebp-190h]
  int v62; // [esp-10h] [ebp-190h]
  int v63; // [esp-10h] [ebp-190h]
  int v64; // [esp-10h] [ebp-190h]
  int v65; // [esp-10h] [ebp-190h]
  int v66; // [esp-10h] [ebp-190h]
  int v67; // [esp-8h] [ebp-188h]
  int v68; // [esp-4h] [ebp-184h]
  unsigned __int16 v69; // [esp+8h] [ebp-178h]
  bool v70; // [esp+Bh] [ebp-175h]
  unsigned __int16 v71; // [esp+Ch] [ebp-174h] BYREF
  unsigned __int16 v72; // [esp+10h] [ebp-170h] BYREF
  char v73; // [esp+13h] [ebp-16Dh]
  __int16 a3[2]; // [esp+14h] [ebp-16Ch] BYREF
  unsigned __int16 v75; // [esp+18h] [ebp-168h]
  int a8; // [esp+1Ch] [ebp-164h]
  char v77[4]; // [esp+20h] [ebp-160h] BYREF
  char destination[4]; // [esp+24h] [ebp-15Ch] BYREF
  void *v79; // [esp+28h] [ebp-158h]
  unsigned __int16 *a7; // [esp+2Ch] [ebp-154h]
  char ArgList[4]; // [esp+30h] [ebp-150h]
  void *v82; // [esp+34h] [ebp-14Ch]
  void *v83; // [esp+38h] [ebp-148h] BYREF
  unsigned __int8 *bufferCursor; // [esp+3Ch] [ebp-144h] BYREF
  void *v85; // [esp+40h] [ebp-140h]
  int v86; // [esp+4Ch] [ebp-134h]
  int Dst; // [esp+50h] [ebp-130h] BYREF
  NiSourceTexture *outTexture; // [esp+54h] [ebp-12Ch] BYREF
  NiTransform v89[5]; // [esp+58h] [ebp-128h] BYREF
  int v90; // [esp+170h] [ebp-10h]
  unsigned int v91; // [esp+17Ch] [ebp-4h]

  *(_DWORD *)destination = 0; /*0x56fc45*/
  bufferCursor = 0; /*0x56fc49*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x56fc67*/
    if ( Dst != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x56fc7b*/
      if ( currentlyLoadingFormHeader )
      {
        v3 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x56fc88*/
        v4 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v3->vtbl->GetEditorName)( /*0x56fca3*/
                             v3,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",
          0x589,
          *currentlyLoadingFormHeader,
          v4,
          v67,
          v68);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",
          0x589,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    v5 = g_TESSaveLoadGame; /*0x56fcde*/
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x56fcee*/
    SaveLoad_LoadData(v5, destination, 2u); /*0x56fcf2*/
  }
  HIBYTE(a3[1]) = BSTempEffect_LoadGame(&this->base);// BloodOnDeath decode 2026-05-30: geometry decal load starts by restoring base duration/elapsed/cell; fails when cell 3D is unavailable. /*0x56fd00*/
  v6 = (DECAL_DATA *)FormHeapAlloc(0x4Cu); /*0x56fd04*/
  if ( v6 ) /*0x56fd0e*/
  {
    v6->sourceTexture_00 = 0; /*0x56fd10*/
    v6->targetShaderProperty_48 = 0; /*0x56fd12*/
  }
  else
  {
    v6 = 0; /*0x56fd17*/
  }
  this->decalCreationData_18 = v6; /*0x56fd19*/
  if ( sub_45A290((unsigned __int8 **)g_TESSaveLoadGame, &v89[0].rot.data[1][2]) ) /*0x56fd27*/
  {
    SourceTexture_010201A0 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0( /*0x56fd42*/
                                      &outTexture,
                                      (char *)&v89[0].rot.data[1][2],
                                      0,
                                      0);
    decalCreationData_18 = (int *)this->decalCreationData_18; /*0x56fd47*/
    v91 = 0; /*0x56fd4b*/
    OB_NiSmartPointer_Assign_010201A0(decalCreationData_18, SourceTexture_010201A0); /*0x56fd52*/
    v91 = 0xFFFFFFFF; /*0x56fd5d*/
    if ( outTexture ) /*0x56fd68*/
    {
      v9 = outTexture; /*0x56fd6a*/
      if ( !InterlockedDecrement((volatile LONG *)&outTexture->members) ) /*0x56fd70*/
        v9->vtbl->super.super.super.Destructor((NiRefObject *)v9, 1); /*0x56fd86*/
    }
  }
  v10 = this->decalCreationData_18; /*0x56fd88*/
  if ( !v10->sourceTexture_00 ) /*0x56fd8b*/
    v73 = 0; /*0x56fd8f*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v10->unk_04, 4u); /*0x56fda0*/
  SaveLoad_LoadData(g_TESSaveLoadGame, v89, 0x10u); /*0x56fdb2*/
  sub_47C600(v89, (NiTransform *)this->decalCreationData_18->rotationMatrix33_08); /*0x56fdc2*/
  SaveLoad_LoadData(g_TESSaveLoadGame, this->decalCreationData_18->unkVector_2C, 0xCu); /*0x56fdd6*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &this->decalCreationData_18->unk_38, 4u); /*0x56fdea*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &this->decalCreationData_18->targetReferenceFormID_3C, 4u); /*0x56fdfe*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &this->decalCreationData_18->fadeProgress_40, 4u); /*0x56fe12*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &this->decalCreationData_18->unk_44, 1u); /*0x56fe26*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &bufferCursor, 4u); /*0x56fe38*/
  SaveLoad_LoadData(g_TESSaveLoadGame, v77, 4u); /*0x56fe4a*/
  SaveLoad_LoadData(g_TESSaveLoadGame, a3, 2u); /*0x56fe5c*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v83, 2u); /*0x56fe6e*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v72, 2u); /*0x56fe80*/
  v79 = (void *)FormHeapAlloc(
                  (0xC * (unsigned __int64)(unsigned __int16)a3[0]) >> 0x20 != 0
                ? 0xFFFFFFFF
                : 0xC * (unsigned __int16)a3[0]);
  v82 = (void *)FormHeapAlloc(
                  (0xC * (unsigned __int64)(unsigned __int16)a3[0]) >> 0x20 != 0
                ? 0xFFFFFFFF
                : 0xC * (unsigned __int16)a3[0]);
  v11 = (unsigned __int16 *)FormHeapAlloc(
                              (unsigned __int64)(unsigned __int16)v83 >> 0x1F != 0
                            ? 0xFFFFFFFF
                            : 2 * (unsigned __int16)v83);
  v12 = v72; /*0x56fee2*/
  a7 = v11; /*0x56fee7*/
  v13 = (void *)FormHeapAlloc((0x4C * (unsigned __int64)v72) >> 0x20 != 0 ? 0xFFFFFFFF : 0x4C * v72);
  v14 = (int)v13; /*0x56ff03*/
  v85 = v13; /*0x56ff08*/
  v90 = 1; /*0x56ff0e*/
  if ( v13 ) /*0x56ff19*/
  {
    sub_401080(v13, 0x4C, v12, (void *(__thiscall *)(void *))sub_72EF90); /*0x56ff24*/
    a8 = v14; /*0x56ff29*/
  }
  else
  {
    a8 = 0; /*0x56ff2f*/
  }
  v15 = g_TESSaveLoadGame; /*0x56ff49*/
  v90 = 0xFFFFFFFF; /*0x56ff4f*/
  SaveLoad_LoadData(v15, v79, 0xC * (unsigned __int16)a3[0]); /*0x56ff5a*/
  SaveLoad_LoadData(g_TESSaveLoadGame, v82, 0xC * (unsigned __int16)a3[0]); /*0x56ff77*/
  SaveLoad_LoadData(g_TESSaveLoadGame, a7, 2 * (unsigned __int16)v83); /*0x56ff8f*/
  targetReferenceFormID_3C = this->decalCreationData_18->targetReferenceFormID_3C; /*0x56ff97*/
  if ( !targetReferenceFormID_3C ) /*0x56ff9c*/
    goto LABEL_33; /*0x56ff9c*/
  v17 = TESForm_LookupByFormID(targetReferenceFormID_3C); /*0x56ffb1*/
  v18 = OblivionDynamicCast( /*0x56ffba*/
          v17,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
          0);
  v19 = (PlayerCharacter *)v18; /*0x56ffbf*/
  if ( !v18 ) /*0x56ffc6*/
    goto LABEL_33; /*0x56ffc6*/
  NodeByPerspective = *((const char ***)v18 + 0xF); /*0x56ffcc*/
  if ( !NodeByPerspective ) /*0x56ffd1*/
    goto LABEL_33; /*0x56ffd1*/
  v21 = sub_480F00(NodeByPerspective, 1, 0); /*0x56ffe1*/
  v22 = bufferCursor; /*0x56ffe3*/
  if ( bufferCursor == (unsigned __int8 *)v21 ) /*0x56ffec*/
    goto LABEL_27; /*0x56ffec*/
  if ( v19 == reference ) /*0x56fff6*/
  {
    NodeByPerspective = (const char **)PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x570001*/
    v21 = sub_480F00(NodeByPerspective, 1, 0); /*0x57000b*/
    v22 = bufferCursor; /*0x57000d*/
  }
  if ( v22 == (unsigned __int8 *)v21 /*0x570049*/
    || (vtbl = v19->vtbl,
        *(_DWORD *)destination = v19->super.super.super.super.super.refID,
        v24 = (const char *)((int (__thiscall *)(PlayerCharacter *, unsigned __int8 *, signed int))vtbl->super.super.super.super.GetEditorName)(
                              v19,
                              v22,
                              v21),
        PrintError(
          "Geometry count has changed on reference %08X %s.  Original count was %i, current count is %i",
          *(_DWORD *)destination,
          v24,
          v58,
          v61),
        v70 = 0,
        bufferCursor == (unsigned __int8 *)v21) )
  {
LABEL_27:
    v25 = sub_481320((int)NodeByPerspective, NodeByPerspective, *(int *)v77, 1, 0); /*0x570059*/
    if ( !v25 ) /*0x570063*/
    {
      refID = v19->super.super.super.super.super.refID; /*0x57006d*/
      v62 = (int)v19->vtbl->super.super.super.super.GetEditorName((TESForm *)v19); /*0x570074*/
      PrintError("Could not find geometry with index %i on reference %08X %s", *(_DWORD *)v77, refID, v62); /*0x570080*/
LABEL_33:
      v70 = 0; /*0x5700ef*/
      goto LABEL_34; /*0x5700ef*/
    }
    v27 = (Ni2DBuffer *)(*((int (__thiscall **)(const char **))*v25 + 4))(v25); /*0x57008c*/
    NiSmartPointer_Set__((Ni2DBuffer **)&this->sourceGeometry_2C, v27); /*0x570091*/
    if ( !this->sourceGeometry_2C ) /*0x570096*/
    {
      v28 = v19->super.super.super.super.super.refID; /*0x5700a4*/
      v63 = (int)v19->vtbl->super.super.super.super.GetEditorName((TESForm *)v19); /*0x5700af*/
      PrintError("Found geometry with index %i on reference %08X %s is not a TriShape", *(_DWORD *)v77, v28, v63); /*0x5700b7*/
      goto LABEL_33; /*0x5700b7*/
    }
    NiSmartPointer_Set__( /*0x5700c2*/
      (Ni2DBuffer **)&this->sourceParentNode_30,
      (Ni2DBuffer *)this->sourceGeometry_2C->member.super.m_parent);
    if ( !this->sourceParentNode_30 ) /*0x5700c7*/
    {
      v29 = v19->super.super.super.super.super.refID; /*0x5700d4*/
      v64 = (int)v19->vtbl->super.super.super.super.GetEditorName((TESForm *)v19); /*0x5700df*/
      PrintError("Found geometry with index %i on reference %08X %s has no parent", *(_DWORD *)v77, v29, v64); /*0x5700e7*/
      goto LABEL_33; /*0x5700e7*/
    }
  }
LABEL_34:
  sourceGeometry_2C = this->sourceGeometry_2C; /*0x5700f4*/
  Unk_11 = 0; /*0x5700f7*/
  if ( !sourceGeometry_2C /*0x570127*/
    || !sourceGeometry_2C->member.skinData
    || (skinData = sourceGeometry_2C->member.skinData, !skinData[1].__vftable)
    || (Unk_11 = skinData[1].__vftable->Unk_11, skinData[1].__vftable->Unk_10 != (void (__thiscall *)(NiObject *))v72) )
  {
    v70 = 0;                                    // BloodOnDeath decode 2026-05-30: saved geometry decal is invalidated if current geometry payload counts do not match saved counts. /*0x570129*/
  }
  *(_DWORD *)destination = 0; /*0x570134*/
  if ( v72 )
  {
    v33 = a8; /*0x570142*/
    v85 = (char *)Unk_11 - a8; /*0x570148*/
    do
    {
      SaveLoad_LoadData(g_TESSaveLoadGame, &v71, 2u); /*0x57015d*/
      if ( v70 )
      {
        *(_WORD *)(v33 + 0x48) = v71; /*0x570172*/
        v34 = v71; /*0x570176*/
        v35 = FormHeapAlloc((unsigned __int64)v71 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v71);
        v86 = v35; /*0x570196*/
        v90 = 2; /*0x57019c*/
        if ( v35 ) /*0x5701a7*/
        {
          v36 = v34 - 1 < 0; /*0x5701a9*/
          v37 = v34 - 1; /*0x5701a9*/
          v38 = (_WORD *)v35; /*0x5701ac*/
          if ( !v36 ) /*0x5701ae*/
          {
            do /*0x5701bd*/
            {
              sub_72EFA0(v38); /*0x5701b2*/
              v38 += 4; /*0x5701b7*/
              --v37; /*0x5701ba*/
            }
            while ( v37 >= 0 ); /*0x5701bd*/
            v35 = v86; /*0x5701bf*/
          }
        }
        else
        {
          v35 = 0; /*0x5701c5*/
        }
        *(_DWORD *)(v33 + 0x44) = v35; /*0x5701c7*/
        v39 = g_TESSaveLoadGame; /*0x5701ca*/
        v40 = g_TESSaveLoadGame->currentVersion < 0x67u; /*0x5701d0*/
        v90 = 0xFFFFFFFF; /*0x5701d4*/
        if ( v40 ) /*0x5701df*/
          goto LABEL_51; /*0x5701df*/
        for ( i = 0; i < v71; ++i ) /*0x5701e8*/
        {
          SaveLoad_LoadData(v39, (void *)(*(_DWORD *)(v33 + 0x44) + 8 * i), 8u); /*0x5701f9*/
          v39 = g_TESSaveLoadGame; /*0x570203*/
        }
        if ( v39->currentVersion < 0x67u ) /*0x570214*/
LABEL_51:
          SaveLoad_LoadData(v39, *(void **)(v33 + 0x44), 8 * v71); /*0x570226*/
        qmemcpy((void *)v33, (char *)v85 + v33, 0x34u); /*0x570239*/
      }
      else
      {
        SaveLoad_AdvanceBufferOffset(g_TESSaveLoadGame, 8 * v71); /*0x57024f*/
      }
      v33 += 0x4C; /*0x570260*/
      ++*(_DWORD *)destination; /*0x570265*/
    }
    while ( *(int *)destination < v72 );
  }
  if ( v70 ) /*0x570274*/
  {
    BSTempEffectGeometryDecal_BuildGeneratedGeometry( /*0x57029a*/
      this,
      (int)this->sourceGeometry_2C,
      a3[0],
      (unsigned __int16)v83,
      (int)v79,
      (int)v82,
      a7,
      a8);                                      // BloodOnDeath decode 2026-05-30: successful geometry decal load rebuilds the generated decal payload on resolved geometry.
  }
  else
  {
    v42 = this->decalCreationData_18; /*0x5702a4*/
    targetShaderProperty_48 = v42->targetShaderProperty_48; /*0x5702a7*/
    p_targetShaderProperty_48 = &v42->targetShaderProperty_48; /*0x5702aa*/
    if ( targetShaderProperty_48 ) /*0x5702af*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&targetShaderProperty_48->members) ) /*0x5702b5*/
        (*(void (__thiscall **)(NiProperty *, int))targetShaderProperty_48->vtbl)(targetShaderProperty_48, 1); /*0x5702cb*/
      *p_targetShaderProperty_48 = 0; /*0x5702cd*/
    }
    generatedGeometry_1C = this->generatedGeometry_1C; /*0x5702d3*/
    if ( generatedGeometry_1C ) /*0x5702d8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&generatedGeometry_1C->members) ) /*0x5702de*/
        generatedGeometry_1C->vtbl->super.super.Destructor((NiRefObject *)generatedGeometry_1C, 1); /*0x5702f4*/
      this->generatedGeometry_1C = 0; /*0x5702f6*/
    }
    v46 = 0; /*0x5702fd*/
    if ( v69 ) /*0x570304*/
    {
      v47 = (unsigned int *)(*(_DWORD *)a3 + 0x44); /*0x57030a*/
      do /*0x570329*/
      {
        if ( *v47 ) /*0x57030d*/
          FormHeapFree(*v47); /*0x570314*/
        ++v46; /*0x570321*/
        v47 += 0x13; /*0x570324*/
      }
      while ( v46 < v69 ); /*0x570329*/
    }
    FormHeapFree(*(unsigned int *)a3); /*0x570330*/
    FormHeapFree(*(unsigned int *)v77); /*0x57033a*/
    FormHeapFree((unsigned int)a7); /*0x570344*/
    FormHeapFree(*(unsigned int *)destination); /*0x57034e*/
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x57035c*/
  {
    v48 = g_TESSaveLoadGame; /*0x570369*/
    v49 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x57036f*/
    v50 = g_TESSaveLoadGame->bufferCursor; /*0x570377*/
    if ( v49 ) /*0x57037a*/
    {
      v51 = TESForm_LookupByFormID(*v49); /*0x570383*/
      v52 = *(_DWORD *)ArgList; /*0x57038d*/
      v53 = *(_DWORD *)ArgList + v75; /*0x570391*/
      if ( (unsigned int)v50 <= v53 ) /*0x570398*/
      {
        if ( (unsigned int)v50 < v53 ) /*0x5703d9*/
        {
          v55 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v51->vtbl->GetEditorName)( /*0x5703f2*/
                                v51,
                                *((unsigned __int8 *)v49 + 9),
                                *(UInt32 *)((char *)v49 + 5));
          PrintError( /*0x570411*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v52 + v75 - (_DWORD)v50,
            "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",
            0x643,
            *v49,
            v55,
            v60,
            v66);
        }
      }
      else
      {
        v54 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v51->vtbl->GetEditorName)( /*0x5703ad*/
                              v51,
                              *((unsigned __int8 *)v49 + 9),
                              *(UInt32 *)((char *)v49 + 5));
        PrintError( /*0x5703cc*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v50[-v75 - v52],
          "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",
          0x643,
          *v49,
          v54,
          v59,
          v65);
      }
    }
    else
    {
      v56 = v75 + *(_DWORD *)ArgList; /*0x570424*/
      if ( (unsigned int)v50 <= v56 ) /*0x570429*/
      {
        if ( (unsigned int)v50 < v56 ) /*0x570446*/
          PrintError( /*0x570461*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            *(_DWORD *)ArgList + v75 - (_DWORD)v50,
            "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",
            0x643,
            v48->currentVersion);
      }
      else
      {
        PrintError( /*0x570444*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v50[-v75 - *(_DWORD *)ArgList],
          "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",
          0x643,
          v48->currentVersion);
      }
    }
  }
  return v70; /*0x57046d*/
}
