int __thiscall TESDataHandler_CreateBuiltinObjects(_DWORD **this)
{
  char v2; // al
  void *v3; // eax
  TESWaterForm *v4; // eax
  TESForm *v5; // eax
  char v6; // al
  TESForm *v7; // eax
  TESWaterForm *v8; // eax
  TESForm *v9; // eax
  char v10; // al
  TESWaterForm *v11; // eax
  TESForm *v12; // eax
  TESWaterForm *v13; // eax
  char v14; // al
  TESForm *v15; // eax
  TESWaterForm *v16; // eax
  TESForm *v17; // eax
  char v18; // al
  void *v19; // eax
  TESWaterForm *v20; // eax
  TESForm *v21; // eax
  char v22; // al
  void *v23; // eax
  TESWaterForm *v24; // eax
  TESForm *v25; // eax
  char v26; // al
  void *v27; // eax
  TESWaterForm *v28; // eax
  TESForm *v29; // eax
  char v30; // al
  void *v31; // eax
  TESWaterForm *v32; // eax
  TESForm *v33; // eax
  char v34; // al
  void *v35; // eax
  TESWaterForm *v36; // eax
  TESForm *v37; // eax
  char v38; // al
  void *v39; // eax
  TESWaterForm *v40; // eax
  TESForm *v41; // eax
  char v42; // al
  void *v43; // eax
  TESWaterForm *v44; // eax
  TESForm *v45; // eax
  char v46; // al
  void *v47; // eax
  TESWaterForm *v48; // eax
  TESForm *v49; // eax
  char v50; // al
  _DWORD *v51; // eax
  int v52; // esi
  TESWaterForm *v53; // eax
  TESForm *v54; // esi
  char v55; // al
  TESForm *v56; // eax
  TESWaterForm *v57; // eax
  TESForm *v58; // eax
  char v59; // al
  void *v60; // eax
  TESWaterForm *v61; // eax
  TESForm *v62; // eax
  char v63; // al
  void *v64; // eax
  TESWaterForm *v65; // eax
  TESForm *v66; // eax
  char v67; // al
  void *v68; // eax
  TESWaterForm *v69; // eax
  TESForm *v70; // eax
  char v71; // al
  void *v72; // eax
  TESWaterForm *v73; // eax
  TESForm *v74; // eax
  char v75; // al
  void *v76; // eax
  TESWaterForm *v77; // eax
  TESForm *v78; // eax
  char v79; // al
  void *v80; // eax
  TESWaterForm *v81; // eax
  TESForm *v82; // eax
  char v83; // al
  void *v84; // eax
  TESWaterForm *v85; // eax
  TESForm *v86; // eax
  char v87; // al
  ScriptRunner *v88; // eax
  TESWaterForm *v89; // eax
  TESForm *v90; // eax
  TESWaterForm *v91; // eax
  TESForm *v92; // esi
  char v93; // al
  TESForm *v94; // eax
  TESWaterForm *v95; // eax
  TESForm *v96; // eax
  char v97; // al
  TESWaterForm *v98; // eax
  TESWaterForm *v99; // eax
  TESForm *v100; // eax
  char v101; // al
  TESWaterForm *v102; // eax
  TESWaterForm *v103; // eax
  TESForm *v104; // eax
  char v105; // al
  TESForm *v106; // eax
  TESWaterForm *v107; // eax
  TESForm *v108; // eax
  char v109; // al
  TESWaterForm *v110; // eax
  TESWaterForm *v111; // eax
  TESForm *v112; // eax
  int i; // ebp
  int v114; // eax
  TESWaterForm *v115; // eax
  TESForm *v116; // esi
  int v117; // ebp
  _DWORD *v118; // esi
  TESObjectSTAT *v119; // eax
  TESForm *v120; // esi
  _DWORD *v121; // esi
  TESGlobal *v122; // eax
  TESGlobal *v123; // esi
  _DWORD *v124; // eax
  _DWORD *v125; // esi
  TESGlobal *v126; // eax
  TESGlobal *v127; // esi
  _DWORD *v128; // eax
  _DWORD *v129; // esi
  TESGlobal *v130; // eax
  TESGlobal *v131; // esi
  _DWORD *v132; // eax
  _DWORD *v133; // esi
  TESGlobal *v134; // eax
  TESGlobal *v135; // esi
  _DWORD *v136; // eax
  _DWORD *v137; // esi
  TESGlobal *v138; // eax
  TESGlobal *v139; // esi
  _DWORD *v140; // eax
  _DWORD *v141; // esi
  TESGlobal *v142; // eax
  TESGlobal *v143; // esi
  _DWORD *v144; // eax
  _DWORD *v145; // esi
  void *v146; // esi
  TESForm *v147; // eax
  TESForm *v148; // esi
  _DWORD *v149; // esi
  TESWeather *v150; // eax
  TESForm *v151; // esi
  _DWORD *v152; // eax
  _DWORD *v153; // esi
  TESClimate *v154; // eax
  TESForm *v155; // esi
  _DWORD *v156; // eax
  Sky *GlobalObject; // eax
  int v159; // [esp+2B0h] [ebp-D0h]
  TESWaterForm *j; // [esp+2CCh] [ebp-B4h] BYREF
  void *v161; // [esp+2D0h] [ebp-B0h]
  int a2[20]; // [esp+2D4h] [ebp-ACh]
  _DWORD v163[20]; // [esp+324h] [ebp-5Ch]
  int v164; // [esp+37Ch] [ebp-4h]

  TESDataHandler_g_DoorMarker = 0;
  TESDataHandler_g_XMarker = 0;
  TESDataHandler_g_XMarkerHeading = 0;
  TESDataHandler_g_MapMarker = 0;
  TESDataHandler_g_NorthMarker = 0;
  TESDataHandler_g_PrisonMarker = 0;
  TESDataHandler_g_TempleMarker = 0;
  TESDataHandler_g_DivineMarker = 0;
  TESDataHandler_g_TravelMarker = 0;
  *(&stru_B36208 + 0x24) = 0;
  TESDataHandler_g_Lockpick = 0;
  TESDataHandler_g_SkeletonKey = 0;
  TESDataHandler_g_RepairHammer = 0;
  TESDataHandler_g_HorseMarker = 0;
  TESDataHandler_g_WelkyndStone = 0;
  TESDataHandler_g_BlackSoulGem = 0;
  TESDataHandler_g_AzuraStone = 0;
  TESDataHandler_g_DefaultWater = 0;
  TESDataHandler_g_VampireRace = 0;
  TESDataHandler_g_VarlaStone = 0;
  TESDataHandler_g_EyeReanimate = 0;
  j = 0;
  v2 = NiTMap_GetAt(&TESForm_FormIDMap, 0x1A, &j);
  v3 = OblivionDynamicCast(
         v2 != 0 ? j : 0,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESEyes `RTTI Type Descriptor',
         0);
  TESDataHandler_g_EyeReanimate = (int)v3;
  if ( !v3 )
  {
    v4 = (TESWaterForm *)FormHeapAlloc(0x34u);
    j = v4;
    v164 = 0;
    if ( v4 )
      v5 = (TESForm *)TESEyes::TESEyes((TESEyes *)v4);
    else
      v5 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_EyeReanimate = (int)v5;
    TESForm_SetFormID(v5, 0x1A, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_EyeReanimate + 0xD8))(
      TESDataHandler_g_EyeReanimate,
      "eyeReanimate");
    BSStringT_Set((BSStringT *)(TESDataHandler_g_EyeReanimate + 0x1C), "Reanimate Eyes", 0);
    BSSimpleList_PushFront(this + 0xF, TESDataHandler_g_EyeReanimate);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_EyeReanimate + 0x90))(
      TESDataHandler_g_EyeReanimate,
      0);
  }
  j = 0;
  v6 = NiTMap_GetAt(&TESForm_FormIDMap, 0x19, &j);
  v7 = (TESForm *)OblivionDynamicCast(
                    v6 != 0 ? j : 0,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESRace `RTTI Type Descriptor',
                    0);
  TESDataHandler_g_VampireRace = v7;
  if ( !v7 )
  {
    v8 = (TESWaterForm *)FormHeapAlloc(0x318u);
    j = v8;
    v164 = 1;
    if ( v8 )
      v9 = (TESForm *)TESRace::TESRace((TESRace *)v8);
    else
      v9 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_VampireRace = v9;
    TESForm_SetFormID(v9, 0x19, 1);
    TESDataHandler_g_VampireRace->vtbl->SetEditorID(TESDataHandler_g_VampireRace, "VampireRace");
    BSSimpleList_PushFront(this + 0x11, (int)TESDataHandler_g_VampireRace);
    TESDataHandler_g_VampireRace->vtbl->SetFromActiveFile(TESDataHandler_g_VampireRace, 0);
  }
  j = 0;
  v10 = NiTMap_GetAt(&TESForm_FormIDMap, 0x18, &j);
  v11 = (TESWaterForm *)OblivionDynamicCast(
                          v10 != 0 ? j : 0,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESWaterForm `RTTI Type Descriptor',
                          0);
  TESDataHandler_g_DefaultWater = v11;
  if ( !v11 )
  {
    v12 = (TESForm *)FormHeapAlloc(0xACu);
    j = (TESWaterForm *)v12;
    v164 = 2;
    if ( v12 )
      v13 = TESWaterForm::TESWaterForm((TESWaterForm *)v12);
    else
      v13 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_DefaultWater = v13;
    TESForm_SetFormID((TESForm *)v13, 0x18, 1);
    TESDataHandler_g_DefaultWater->vtbl->SetEditorID((TESForm *)TESDataHandler_g_DefaultWater, "DefaultWater");
    TESWaterForm::SetTexturePath(TESDataHandler_g_DefaultWater, "Water\\water00.dds");
    BSSimpleList_PushFront(this + 0x29, (int)TESDataHandler_g_DefaultWater);
    TESDataHandler_g_DefaultWater->vtbl->SetFromActiveFile((TESForm *)TESDataHandler_g_DefaultWater, 0);
  }
  j = 0;
  v14 = NiTMap_GetAt(&TESForm_FormIDMap, 0x12, &j);
  v15 = (TESForm *)OblivionDynamicCast(
                     v14 != 0 ? j : 0,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESObjectSTAT `RTTI Type Descriptor',
                     0);
  TESDataHandler_g_HorseMarker = v15;
  if ( !v15 )
  {
    v16 = (TESWaterForm *)FormHeapAlloc(0x3Cu);
    j = v16;
    v164 = 3;
    if ( v16 )
      v17 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v16);
    else
      v17 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_HorseMarker = v17;
    TESForm_SetFormID(v17, 0x12, 1);
    TESDataHandler_g_HorseMarker->vtbl->SetEditorID(TESDataHandler_g_HorseMarker, "HorseMarker");
    (*(void (__thiscall **)(UInt32 *, const char *))(TESDataHandler_g_HorseMarker[1].member.refID + 0x18))(
      &TESDataHandler_g_HorseMarker[1].member.refID,
      "Marker_Horse.nif");
    TESObjectListHead_AddObject(*this, TESDataHandler_g_HorseMarker);
    TESDataHandler_g_HorseMarker->vtbl->SetFromActiveFile(TESDataHandler_g_HorseMarker, 0);
  }
  j = 0;
  v18 = NiTMap_GetAt(&TESForm_FormIDMap, 0x194, &j);
  v19 = OblivionDynamicCast(
          v18 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectMISC `RTTI Type Descriptor',
          0);
  TESDataHandler_g_VarlaStone = (int)v19;
  if ( !v19 )
  {
    v20 = (TESWaterForm *)FormHeapAlloc(0x70u);
    j = v20;
    v164 = 4;
    if ( v20 )
      v21 = (TESForm *)TESObjectMISC::TESObjectMISC((TESObjectMISC *)v20);
    else
      v21 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_VarlaStone = (int)v21;
    TESForm_SetFormID(v21, 0x194, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_VarlaStone + 0xD8))(
      TESDataHandler_g_VarlaStone,
      "VarlaStone");
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_VarlaStone);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_VarlaStone + 0x90))(
      TESDataHandler_g_VarlaStone,
      0);
  }
  j = 0;
  v22 = NiTMap_GetAt(&TESForm_FormIDMap, 0x191, &j);
  v23 = OblivionDynamicCast(
          v22 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectMISC `RTTI Type Descriptor',
          0);
  TESDataHandler_g_WelkyndStone = (int)v23;
  if ( !v23 )
  {
    v24 = (TESWaterForm *)FormHeapAlloc(0x70u);
    j = v24;
    v164 = 5;
    if ( v24 )
      v25 = (TESForm *)TESObjectMISC::TESObjectMISC((TESObjectMISC *)v24);
    else
      v25 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_WelkyndStone = (int)v25;
    TESForm_SetFormID(v25, 0x191, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_WelkyndStone + 0xD8))(
      TESDataHandler_g_WelkyndStone,
      "WelkyndStone");
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_WelkyndStone);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_WelkyndStone + 0x90))(
      TESDataHandler_g_WelkyndStone,
      0);
  }
  j = 0;
  v26 = NiTMap_GetAt(&TESForm_FormIDMap, 0x192, &j);
  v27 = OblivionDynamicCast(
          v26 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSoulGem `RTTI Type Descriptor',
          0);
  TESDataHandler_g_BlackSoulGem = (int)v27;
  if ( !v27 )
  {
    v28 = (TESWaterForm *)FormHeapAlloc(0x74u);
    j = v28;
    v164 = 6;
    if ( v28 )
      v29 = (TESForm *)TESSoulGem::TESSoulGem((TESSoulGem *)v28);
    else
      v29 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_BlackSoulGem = (int)v29;
    TESForm_SetFormID(v29, 0x192, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_BlackSoulGem + 0xD8))(
      TESDataHandler_g_BlackSoulGem,
      "BlackSoulGem");
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_BlackSoulGem);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_BlackSoulGem + 0x90))(
      TESDataHandler_g_BlackSoulGem,
      0);
  }
  j = 0;
  v30 = NiTMap_GetAt(&TESForm_FormIDMap, 0x193, &j);
  v31 = OblivionDynamicCast(
          v30 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSoulGem `RTTI Type Descriptor',
          0);
  TESDataHandler_g_AzuraStone = (int)v31;
  if ( !v31 )
  {
    v32 = (TESWaterForm *)FormHeapAlloc(0x74u);
    j = v32;
    v164 = 7;
    if ( v32 )
      v33 = (TESForm *)TESSoulGem::TESSoulGem((TESSoulGem *)v32);
    else
      v33 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_AzuraStone = (int)v33;
    TESForm_SetFormID(v33, 0x193, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_AzuraStone + 0xD8))(
      TESDataHandler_g_AzuraStone,
      "AzuraStone");
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_AzuraStone);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_AzuraStone + 0x90))(
      TESDataHandler_g_AzuraStone,
      0);
  }
  j = 0;
  v34 = NiTMap_GetAt(&TESForm_FormIDMap, 0xA, &j);
  v35 = OblivionDynamicCast(
          v34 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectMISC `RTTI Type Descriptor',
          0);
  TESDataHandler_g_Lockpick = (int)v35;
  if ( !v35 )
  {
    v36 = (TESWaterForm *)FormHeapAlloc(0x70u);
    j = v36;
    v164 = 8;
    if ( v36 )
      v37 = (TESForm *)TESObjectMISC::TESObjectMISC((TESObjectMISC *)v36);
    else
      v37 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_Lockpick = (int)v37;
    TESForm_SetFormID(v37, 0xA, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_Lockpick + 0xD8))(
      TESDataHandler_g_Lockpick,
      "Lockpick");
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_Lockpick);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_Lockpick + 0x90))(TESDataHandler_g_Lockpick, 0);
  }
  j = 0;
  v38 = NiTMap_GetAt(&TESForm_FormIDMap, 0xB, &j);
  v39 = OblivionDynamicCast(
          v38 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectMISC `RTTI Type Descriptor',
          0);
  TESDataHandler_g_SkeletonKey = (int)v39;
  if ( !v39 )
  {
    v40 = (TESWaterForm *)FormHeapAlloc(0x70u);
    j = v40;
    v164 = 9;
    if ( v40 )
      v41 = (TESForm *)TESObjectMISC::TESObjectMISC((TESObjectMISC *)v40);
    else
      v41 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_SkeletonKey = (int)v41;
    TESForm_SetFormID(v41, 0xB, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_SkeletonKey + 0xD8))(
      TESDataHandler_g_SkeletonKey,
      "SkeletonKey");
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_SkeletonKey);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_SkeletonKey + 0x90))(
      TESDataHandler_g_SkeletonKey,
      0);
  }
  j = 0;
  v42 = NiTMap_GetAt(&TESForm_FormIDMap, 0xC, &j);
  v43 = OblivionDynamicCast(
          v42 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectMISC `RTTI Type Descriptor',
          0);
  TESDataHandler_g_RepairHammer = (int)v43;
  if ( !v43 )
  {
    v44 = (TESWaterForm *)FormHeapAlloc(0x70u);
    j = v44;
    v164 = 0xA;
    if ( v44 )
      v45 = (TESForm *)TESObjectMISC::TESObjectMISC((TESObjectMISC *)v44);
    else
      v45 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_RepairHammer = (int)v45;
    TESForm_SetFormID(v45, 0xC, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_RepairHammer + 0xD8))(
      TESDataHandler_g_RepairHammer,
      "RepairHammer");
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_RepairHammer);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_RepairHammer + 0x90))(
      TESDataHandler_g_RepairHammer,
      0);
  }
  j = 0;
  v46 = NiTMap_GetAt(&TESForm_FormIDMap, 1, &j);
  v47 = OblivionDynamicCast(
          v46 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectSTAT `RTTI Type Descriptor',
          0);
  TESDataHandler_g_DoorMarker = (int)v47;
  if ( !v47 )
  {
    v48 = (TESWaterForm *)FormHeapAlloc(0x3Cu);
    j = v48;
    v164 = 0xB;
    if ( v48 )
      v49 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v48);
    else
      v49 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_DoorMarker = (int)v49;
    TESForm_SetFormID(v49, 1, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_DoorMarker + 0xD8))(
      TESDataHandler_g_DoorMarker,
      "DoorMarker");
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(TESDataHandler_g_DoorMarker + 0x24) + 0x18))(
      TESDataHandler_g_DoorMarker + 0x24,
      "MarkerTeleport.nif");
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_DoorMarker);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_DoorMarker + 0x90))(
      TESDataHandler_g_DoorMarker,
      0);
  }
  j = 0;
  v50 = NiTMap_GetAt(&TESForm_FormIDMap, 0x3C, &j);
  v51 = OblivionDynamicCast(
          v50 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESWorldSpace `RTTI Type Descriptor',
          0);
  v52 = (int)v51;
  if ( v51 )
  {
    if ( *(this + 3) != v51 )
    {
      BSSimpleList_Remove(this + 3, (int)v51);
      BSSimpleList_PushFront(this + 3, v52);
    }
  }
  else
  {
    v53 = (TESWaterForm *)FormHeapAlloc(0xE0u);
    j = v53;
    v164 = 0xC;
    if ( v53 )
      v54 = (TESForm *)TESWorldSpace::TESWorldSpace((TESWorldSpace *)v53);
    else
      v54 = 0;
    v164 = 0xFFFFFFFF;
    TESForm_SetFormID(v54, 0x3C, 1);
    v54->vtbl->SetEditorID(v54, "Tamriel");
    v54->vtbl->SetFromActiveFile(v54, 0);
    BSSimpleList_PushFront(this + 3, (int)v54);
    sub_412D30(&off_B06164, (int)"Tamriel", v54);
  }
  j = 0;
  v55 = NiTMap_GetAt(&TESForm_FormIDMap, 0x3B, &j);
  v56 = (TESForm *)OblivionDynamicCast(
                     v55 != 0 ? j : 0,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESObjectSTAT `RTTI Type Descriptor',
                     0);
  TESDataHandler_g_XMarker = v56;
  if ( !v56 )
  {
    v57 = (TESWaterForm *)FormHeapAlloc(0x3Cu);
    j = v57;
    v164 = 0xD;
    if ( v57 )
      v58 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v57);
    else
      v58 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_XMarker = v58;
    TESForm_SetFormID(v58, 0x3B, 1);
    TESDataHandler_g_XMarker->vtbl->SetEditorID(TESDataHandler_g_XMarker, "XMarker");
    (*(void (__thiscall **)(UInt32 *, const char *))(TESDataHandler_g_XMarker[1].member.refID + 0x18))(
      &TESDataHandler_g_XMarker[1].member.refID,
      "MarkerX.nif");
    TESObjectListHead_AddObject(*this, TESDataHandler_g_XMarker);
    TESDataHandler_g_XMarker->vtbl->SetFromActiveFile(TESDataHandler_g_XMarker, 0);
  }
  j = 0;
  v59 = NiTMap_GetAt(&TESForm_FormIDMap, 0x34, &j);
  v60 = OblivionDynamicCast(
          v59 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectSTAT `RTTI Type Descriptor',
          0);
  TESDataHandler_g_XMarkerHeading = (int)v60;
  if ( !v60 )
  {
    v61 = (TESWaterForm *)FormHeapAlloc(0x3Cu);
    j = v61;
    v164 = 0xE;
    if ( v61 )
      v62 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v61);
    else
      v62 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_XMarkerHeading = (int)v62;
    TESForm_SetFormID(v62, 0x34, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_XMarkerHeading + 0xD8))(
      TESDataHandler_g_XMarkerHeading,
      "XMarkerHeading");
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(TESDataHandler_g_XMarkerHeading + 0x24) + 0x18))(
      TESDataHandler_g_XMarkerHeading + 0x24,
      "MarkerXHeading.nif");
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_XMarkerHeading);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_XMarkerHeading + 0x90))(
      TESDataHandler_g_XMarkerHeading,
      0);
  }
  j = 0;
  v63 = NiTMap_GetAt(&TESForm_FormIDMap, 0x10, &j);
  v64 = OblivionDynamicCast(
          v63 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectSTAT `RTTI Type Descriptor',
          0);
  TESDataHandler_g_MapMarker = (int)v64;
  if ( !v64 )
  {
    v65 = (TESWaterForm *)FormHeapAlloc(0x3Cu);
    j = v65;
    v164 = 0xF;
    if ( v65 )
      v66 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v65);
    else
      v66 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_MapMarker = (int)v66;
    TESForm_SetFormID(v66, 0x10, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_MapMarker + 0xD8))(
      TESDataHandler_g_MapMarker,
      "MapMarker");
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(TESDataHandler_g_MapMarker + 0x24) + 0x18))(
      TESDataHandler_g_MapMarker + 0x24,
      "Marker_Map.NIF");
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_MapMarker);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_MapMarker + 0x90))(TESDataHandler_g_MapMarker, 0);
  }
  j = 0;
  v67 = NiTMap_GetAt(&TESForm_FormIDMap, 2, &j);
  v68 = OblivionDynamicCast(
          v67 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectSTAT `RTTI Type Descriptor',
          0);
  TESDataHandler_g_TravelMarker = (int)v68;
  if ( !v68 )
  {
    v69 = (TESWaterForm *)FormHeapAlloc(0x3Cu);
    j = v69;
    v164 = 0x10;
    if ( v69 )
      v70 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v69);
    else
      v70 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_TravelMarker = (int)v70;
    TESForm_SetFormID(v70, 2, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_TravelMarker + 0xD8))(
      TESDataHandler_g_TravelMarker,
      "TravelMarker");
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(TESDataHandler_g_TravelMarker + 0x24) + 0x18))(
      TESDataHandler_g_TravelMarker + 0x24,
      "Marker_Travel.nif");
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_TravelMarker);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_TravelMarker + 0x90))(
      TESDataHandler_g_TravelMarker,
      0);
  }
  j = 0;
  v71 = NiTMap_GetAt(&TESForm_FormIDMap, 3, &j);
  v72 = OblivionDynamicCast(
          v71 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectSTAT `RTTI Type Descriptor',
          0);
  TESDataHandler_g_NorthMarker = (int)v72;
  if ( !v72 )
  {
    v73 = (TESWaterForm *)FormHeapAlloc(0x3Cu);
    j = v73;
    v164 = 0x11;
    if ( v73 )
      v74 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v73);
    else
      v74 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_NorthMarker = (int)v74;
    TESForm_SetFormID(v74, 3, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_NorthMarker + 0xD8))(
      TESDataHandler_g_NorthMarker,
      "NorthMarker");
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(TESDataHandler_g_NorthMarker + 0x24) + 0x18))(
      TESDataHandler_g_NorthMarker + 0x24,
      "Marker_North.nif");
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_NorthMarker);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_NorthMarker + 0x90))(
      TESDataHandler_g_NorthMarker,
      0);
  }
  j = 0;
  v75 = NiTMap_GetAt(&TESForm_FormIDMap, 4, &j);
  v76 = OblivionDynamicCast(
          v75 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectDOOR `RTTI Type Descriptor',
          0);
  TESDataHandler_g_PrisonMarker = (int)v76;
  if ( !v76 )
  {
    v77 = (TESWaterForm *)FormHeapAlloc(0x70u);
    j = v77;
    v164 = 0x12;
    if ( v77 )
      v78 = (TESForm *)TESObjectDOOR::TESObjectDOOR((TESObjectDOOR *)v77);
    else
      v78 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_PrisonMarker = (int)v78;
    TESForm_SetFormID(v78, 4, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_PrisonMarker + 0xD8))(
      TESDataHandler_g_PrisonMarker,
      "PrisonMarker");
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(TESDataHandler_g_PrisonMarker + 0x30) + 0x18))(
      TESDataHandler_g_PrisonMarker + 0x30,
      "Marker_Prison.nif");
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_PrisonMarker);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_PrisonMarker + 0x90))(
      TESDataHandler_g_PrisonMarker,
      0);
  }
  j = 0;
  v79 = NiTMap_GetAt(&TESForm_FormIDMap, 6, &j);
  v80 = OblivionDynamicCast(
          v79 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectSTAT `RTTI Type Descriptor',
          0);
  TESDataHandler_g_TempleMarker = (int)v80;
  if ( !v80 )
  {
    v81 = (TESWaterForm *)FormHeapAlloc(0x3Cu);
    j = v81;
    v164 = 0x13;
    if ( v81 )
      v82 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v81);
    else
      v82 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_TempleMarker = (int)v82;
    TESForm_SetFormID(v82, 6, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_TempleMarker + 0xD8))(
      TESDataHandler_g_TempleMarker,
      "TempleMarker");
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(TESDataHandler_g_TempleMarker + 0x24) + 0x18))(
      TESDataHandler_g_TempleMarker + 0x24,
      "Marker_Temple.nif");
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_TempleMarker);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_TempleMarker + 0x90))(
      TESDataHandler_g_TempleMarker,
      0);
  }
  j = 0;
  v83 = NiTMap_GetAt(&TESForm_FormIDMap, 5, &j);
  v84 = OblivionDynamicCast(
          v83 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectSTAT `RTTI Type Descriptor',
          0);
  TESDataHandler_g_DivineMarker = (int)v84;
  if ( !v84 )
  {
    v85 = (TESWaterForm *)FormHeapAlloc(0x3Cu);
    j = v85;
    v164 = 0x14;
    if ( v85 )
      v86 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v85);
    else
      v86 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_DivineMarker = (int)v86;
    TESForm_SetFormID(v86, 5, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_DivineMarker + 0xD8))(
      TESDataHandler_g_DivineMarker,
      "DivineMarker");
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(TESDataHandler_g_DivineMarker + 0x24) + 0x18))(
      TESDataHandler_g_DivineMarker + 0x24,
      "Marker_Divine.nif");
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_DivineMarker);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_DivineMarker + 0x90))(
      TESDataHandler_g_DivineMarker,
      0);
  }
  j = 0;
  v87 = NiTMap_GetAt(&TESForm_FormIDMap, 0x13, &j);
  v88 = (ScriptRunner *)OblivionDynamicCast(
                          v87 != 0 ? j : 0,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESFaction `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0x24) = v88;
  if ( !v88 )
  {
    v89 = (TESWaterForm *)FormHeapAlloc(0x44u);
    j = v89;
    v164 = 0x15;
    if ( v89 )
      v90 = sub_51F820((TESForm *)v89);
    else
      v90 = 0;
    v164 = 0xFFFFFFFF;
    *(&stru_B36208 + 0x24) = (ScriptRunner *)v90;
    TESForm_SetFormID(v90, 0x13, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0x24))->unk00 + 0xD8))(
      *(&stru_B36208 + 0x24),
      "CreatureFaction");
    BSSimpleList_PushFront(this + 0x17, (int)*(&stru_B36208 + 0x24));
    sub_46E900((char *)&(*(&stru_B36208 + 0x24))->unk18[3], (int)*(&stru_B36208 + 0x24), 0x64);
    sub_51F760((char *)*(&stru_B36208 + 0x24));
    TESForm_SetIsLinked((TESForm *)*(&stru_B36208 + 0x24), 1);
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0x24))->unk00 + 0x90))(*(&stru_B36208 + 0x24), 0);
  }
  j = 0;
  if ( !NiTMap_GetAt(&TESForm_FormIDMap, 0xF, &j) || !j )
  {
    v91 = (TESWaterForm *)FormHeapAlloc(0x70u);
    j = v91;
    v164 = 0x16;
    if ( v91 )
      v92 = (TESForm *)TESObjectMISC::TESObjectMISC((TESObjectMISC *)v91);
    else
      v92 = 0;
    v164 = 0xFFFFFFFF;
    TESForm_SetFormID(v92, 0xF, 1);
    v92->vtbl->SetEditorID(v92, "Gold001");
    TESObjectListHead_AddObject(*this, v92);
    v92->vtbl->SetFromActiveFile(v92, 0);
  }
  j = 0;
  v93 = NiTMap_GetAt(&TESForm_FormIDMap, 0xE, &j);
  v94 = v93 != 0 ? (TESForm *)j : 0;
  TESDataHandler_g_LootBag = v94;
  if ( !v94 )
  {
    v95 = (TESWaterForm *)FormHeapAlloc(0x7Cu);
    j = v95;
    v164 = 0x17;
    if ( v95 )
      v96 = (TESForm *)TESObjectCONT::TESObjectCONT((TESObjectCONT *)v95);
    else
      v96 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_LootBag = v96;
    TESForm_SetFormID(v96, 0xE, 1);
    TESDataHandler_g_LootBag->vtbl->SetEditorID(TESDataHandler_g_LootBag, "LootBag");
    if ( !((int (__thiscall *)(TESForm::ModReferenceList *))TESDataHandler_g_LootBag[2].member.modlist.data->unkFile014)(&TESDataHandler_g_LootBag[2].member.modlist)
      || !strlen((const char *)((int (__thiscall *)(TESForm::ModReferenceList *))TESDataHandler_g_LootBag[2].member.modlist.data->unkFile014)(&TESDataHandler_g_LootBag[2].member.modlist)) )
    {
      ((void (__thiscall *)(TESForm::ModReferenceList *, const char *))TESDataHandler_g_LootBag[2].member.modlist.data->unkFile018)(
        &TESDataHandler_g_LootBag[2].member.modlist,
        "Clutter\\Sack01.NIF");
    }
    TESObjectListHead_AddObject(*this, TESDataHandler_g_LootBag);
    TESDataHandler_g_LootBag->vtbl->SetFromActiveFile(TESDataHandler_g_LootBag, 0);
  }
  j = 0;
  v97 = NiTMap_GetAt(&TESForm_FormIDMap, 0x11, &j);
  v98 = v97 != 0 ? j : 0;
  TESDataHandler_g_StolenGoods = (int)v98;
  if ( !v98 )
  {
    v99 = (TESWaterForm *)FormHeapAlloc(0x7Cu);
    j = v99;
    v164 = 0x18;
    if ( v99 )
      v100 = (TESForm *)TESObjectCONT::TESObjectCONT((TESObjectCONT *)v99);
    else
      v100 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_StolenGoods = (int)v100;
    TESForm_SetFormID(v100, 0x11, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_StolenGoods + 0xD8))(
      TESDataHandler_g_StolenGoods,
      "StolenGoods");
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_StolenGoods);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_StolenGoods + 0x90))(
      TESDataHandler_g_StolenGoods,
      0);
  }
  j = 0;
  v101 = NiTMap_GetAt(&TESForm_FormIDMap, 0x17, &j);
  v102 = v101 != 0 ? j : 0;
  TESDataHandler_g_JailShirt = (int)v102;
  if ( !v102 )
  {
    v103 = (TESWaterForm *)FormHeapAlloc(0xDCu);
    j = v103;
    v164 = 0x19;
    if ( v103 )
      v104 = (TESForm *)TESObjectCLOT::TESObjectCLOT((TESObjectCLOT *)v103);
    else
      v104 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_JailShirt = (int)v104;
    TESForm_SetFormID(v104, 0x17, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_JailShirt + 0xD8))(
      TESDataHandler_g_JailShirt,
      "JailShirt");
    TESBipedModelForm_SetWorldModelPath(
      (_DWORD *)(TESDataHandler_g_JailShirt + 0x5C),
      0,
      (int)"Clothes\\LowerClass\\05\\M\\Shirt_gnd.NIF");
    TESBipedModelForm_SetWorldModelPath(
      (_DWORD *)(TESDataHandler_g_JailShirt + 0x5C),
      1,
      (int)"Clothes\\LowerClass\\05\\F\\Shirt_gnd.NIF");
    TESBipedModelForm_SetModelPath(
      (_DWORD *)(TESDataHandler_g_JailShirt + 0x5C),
      0,
      (int)"Clothes\\LowerClass\\05\\M\\Shirt.NIF");
    TESBipedModelForm_SetModelPath(
      (_DWORD *)(TESDataHandler_g_JailShirt + 0x5C),
      1,
      (int)"Clothes\\LowerClass\\05\\F\\Shirt.NIF");
    TESBipedModelForm_SetCoversBipedSlot((_WORD *)(TESDataHandler_g_JailShirt + 0x5C), 2, 1);
    TESBipedModelForm_SetCoversBipedSlot((_WORD *)(TESDataHandler_g_JailShirt + 0x5C), 3, 0);
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_JailShirt);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_JailShirt + 0x90))(TESDataHandler_g_JailShirt, 0);
  }
  j = 0;
  v105 = NiTMap_GetAt(&TESForm_FormIDMap, 0x15, &j);
  v106 = v105 != 0 ? (TESForm *)j : 0;
  TESDataHandler_g_JailPants = v106;
  if ( !v106 )
  {
    v107 = (TESWaterForm *)FormHeapAlloc(0xDCu);
    j = v107;
    v164 = 0x1A;
    if ( v107 )
      v108 = (TESForm *)TESObjectCLOT::TESObjectCLOT((TESObjectCLOT *)v107);
    else
      v108 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_JailPants = v108;
    TESForm_SetFormID(v108, 0x15, 1);
    TESDataHandler_g_JailPants->vtbl->SetEditorID(TESDataHandler_g_JailPants, "JailPants");
    TESBipedModelForm_SetWorldModelPath(
      &TESDataHandler_g_JailPants[3].member.modlist.next,
      0,
      (int)"Clothes\\LowerClass\\05\\M\\Pants_gnd.NIF");
    TESBipedModelForm_SetWorldModelPath(
      &TESDataHandler_g_JailPants[3].member.modlist.next,
      1,
      (int)"Clothes\\LowerClass\\05\\F\\Pants_gnd.NIF");
    TESBipedModelForm_SetModelPath(
      &TESDataHandler_g_JailPants[3].member.modlist.next,
      0,
      (int)"Clothes\\LowerClass\\05\\M\\Pants.NIF");
    TESBipedModelForm_SetModelPath(
      &TESDataHandler_g_JailPants[3].member.modlist.next,
      1,
      (int)"Clothes\\LowerClass\\05\\F\\Pants.NIF");
    TESBipedModelForm_SetCoversBipedSlot(&TESDataHandler_g_JailPants[3].member.modlist.next, 2, 0);
    TESBipedModelForm_SetCoversBipedSlot(&TESDataHandler_g_JailPants[3].member.modlist.next, 3, 1);
    TESObjectListHead_AddObject(*this, TESDataHandler_g_JailPants);
    TESDataHandler_g_JailPants->vtbl->SetFromActiveFile(TESDataHandler_g_JailPants, 0);
  }
  j = 0;
  v109 = NiTMap_GetAt(&TESForm_FormIDMap, 0x16, &j);
  v110 = v109 != 0 ? j : 0;
  TESDataHandler_g_JailShoes = (int)v110;
  if ( !v110 )
  {
    v111 = (TESWaterForm *)FormHeapAlloc(0xDCu);
    j = v111;
    v164 = 0x1B;
    if ( v111 )
      v112 = (TESForm *)TESObjectCLOT::TESObjectCLOT((TESObjectCLOT *)v111);
    else
      v112 = 0;
    v164 = 0xFFFFFFFF;
    TESDataHandler_g_JailShoes = (int)v112;
    TESForm_SetFormID(v112, 0x16, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_JailShoes + 0xD8))(
      TESDataHandler_g_JailShoes,
      "JailShoes");
    TESBipedModelForm_SetWorldModelPath(
      (_DWORD *)(TESDataHandler_g_JailShoes + 0x5C),
      0,
      (int)"Clothes\\LowerClass\\05\\M\\Shoes_gnd.NIF");
    TESBipedModelForm_SetWorldModelPath(
      (_DWORD *)(TESDataHandler_g_JailShoes + 0x5C),
      1,
      (int)"Clothes\\LowerClass\\05\\F\\Shoes_gnd.NIF");
    TESBipedModelForm_SetModelPath(
      (_DWORD *)(TESDataHandler_g_JailShoes + 0x5C),
      0,
      (int)"Clothes\\LowerClass\\05\\M\\Shoes.NIF");
    TESBipedModelForm_SetModelPath(
      (_DWORD *)(TESDataHandler_g_JailShoes + 0x5C),
      1,
      (int)"Clothes\\LowerClass\\05\\F\\Shoes.NIF");
    TESBipedModelForm_SetCoversBipedSlot((_WORD *)(TESDataHandler_g_JailShoes + 0x5C), 2, 0);
    TESBipedModelForm_SetCoversBipedSlot((_WORD *)(TESDataHandler_g_JailShoes + 0x5C), 3, 0);
    TESBipedModelForm_SetCoversBipedSlot((_WORD *)(TESDataHandler_g_JailShoes + 0x5C), 5, 1);
    TESObjectListHead_AddObject(*this, (_DWORD *)TESDataHandler_g_JailShoes);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_JailShoes + 0x90))(TESDataHandler_g_JailShoes, 0);
  }
  for ( i = 0; i < 0x15; ++i )
  {
    v114 = dword_B067C0[i];
    if ( v114 )
    {
      j = 0;
      if ( NiTMap_GetAt(&TESForm_FormIDMap, v114, &j) )
      {
        if ( j )
          continue;
      }
    }
    v115 = (TESWaterForm *)FormHeapAlloc(0x3Cu);
    j = v115;
    v164 = 0x1C;
    if ( v115 )
      v116 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v115);
    else
      v116 = 0;
    v159 = dword_B067C0[i];
    v164 = 0xFFFFFFFF;
    TESForm_SetFormID(v116, v159, 1);
    v116->vtbl->SetEditorID(v116, off_B06818[i]);
    TESObjectListHead_AddObject(*this, v116);
    v116->vtbl->SetFromActiveFile(v116, 0);
  }
  a2[0] = 0x64;
  a2[1] = 0x65;
  a2[2] = 0x66;
  a2[3] = 0x67;
  a2[4] = 0x68;
  a2[5] = 0x69;
  a2[6] = 0x6A;
  a2[7] = 0x6B;
  a2[8] = 0x6C;
  a2[9] = 0x6D;
  a2[0xA] = 0x6E;
  a2[0xB] = 0x6F;
  a2[0xC] = 0x70;
  a2[0xD] = 0x71;
  a2[0xE] = 0x72;
  a2[0xF] = 0x73;
  a2[0x10] = 0x74;
  a2[0x11] = 0x75;
  a2[0x12] = 0x76;
  a2[0x13] = 0x77;
  v163[0] = "FurnitureMarker01";
  v163[1] = "FurnitureMarker02";
  v163[2] = "FurnitureMarker03";
  v163[3] = "FurnitureMarker04";
  v163[4] = "FurnitureMarker05";
  v163[5] = "FurnitureMarker06";
  v163[6] = "FurnitureMarker07";
  v163[7] = "FurnitureMarker08";
  v163[8] = "FurnitureMarker09";
  v163[9] = "FurnitureMarker10";
  v163[0xA] = "FurnitureMarker11";
  v163[0xB] = "FurnitureMarker12";
  v163[0xC] = "FurnitureMarker13";
  v163[0xD] = "FurnitureMarker14";
  v163[0xE] = "FurnitureMarker15";
  v163[0xF] = "FurnitureMarker16";
  v163[0x10] = "FurnitureMarker17";
  v163[0x11] = "FurnitureMarker18";
  v163[0x12] = "FurnitureMarker19";
  v163[0x13] = "FurnitureMarker20";
  for ( j = 0; (int)j < 0x50; j = (TESWaterForm *)((char *)j + 4) )
  {
    v117 = *(int *)((char *)a2 + (_DWORD)j);
    if ( !v117 )
      goto LABEL_163;
    v118 = *(_DWORD **)(dword_B06144
                      + 4
                      * (*(int (__thiscall **)(_DWORD *, _DWORD))(TESForm_FormIDMap + 4))(
                          &TESForm_FormIDMap,
                          *(int *)((char *)a2 + (_DWORD)j)));
    if ( !v118 )
      goto LABEL_163;
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))(
               &TESForm_FormIDMap,
               v117,
               v118[1]) )
    {
      v118 = (_DWORD *)*v118;
      if ( !v118 )
        goto LABEL_163;
    }
    if ( !v118[2] )
    {
LABEL_163:
      v119 = (TESObjectSTAT *)FormHeapAlloc(0x3Cu);
      v161 = v119;
      v164 = 0x1D;
      if ( v119 )
        v120 = (TESForm *)TESObjectSTAT::TESObjectSTAT(v119);
      else
        v120 = 0;
      v164 = 0xFFFFFFFF;
      TESForm_SetFormID(v120, v117, 1);
      v120->vtbl->SetEditorID(v120, *(const char **)((char *)v163 + (_DWORD)j));
      TESObjectListHead_AddObject(*this, v120);
      v120->vtbl->SetFromActiveFile(v120, 0);
    }
  }
  sub_52FE90();
  v121 = *(_DWORD **)(dword_B06144
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 0x35));
  if ( !v121 )
    goto LABEL_173;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))(
             &TESForm_FormIDMap,
             0x35,
             v121[1]) )
  {
    v121 = (_DWORD *)*v121;
    if ( !v121 )
      goto LABEL_173;
  }
  if ( !v121[2] )
  {
LABEL_173:
    v122 = (TESGlobal *)FormHeapAlloc(0x28u);
    v161 = v122;
    v164 = 0x1E;
    if ( v122 )
      v123 = TESGlobal::TESGlobal(v122);
    else
      v123 = 0;
    v164 = 0xFFFFFFFF;
    TESForm_SetFormID((TESForm *)v123, 0x35, 1);
    v123->vtbl->SetEditorID((TESForm *)v123, "GameYear");
    v123->data = flt_A2F940;
    if ( *(this + 0x1D) )
    {
      v124 = (_DWORD *)FormHeapAlloc(8u);
      if ( v124 )
      {
        *v124 = *(this + 0x1D);
        v124[1] = 0;
      }
      else
      {
        v124 = 0;
      }
      v124[1] = *(this + 0x1E);
      *(this + 0x1E) = v124;
    }
    *(this + 0x1D) = &v123->vtbl;
    sub_412D30(&off_B06164, (int)"GameYear", (TESForm *)v123);
  }
  v125 = *(_DWORD **)(dword_B06144
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 0x36));
  if ( !v125 )
    goto LABEL_187;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))(
             &TESForm_FormIDMap,
             0x36,
             v125[1]) )
  {
    v125 = (_DWORD *)*v125;
    if ( !v125 )
      goto LABEL_187;
  }
  if ( !v125[2] )
  {
LABEL_187:
    v126 = (TESGlobal *)FormHeapAlloc(0x28u);
    v161 = v126;
    v164 = 0x1F;
    if ( v126 )
      v127 = TESGlobal::TESGlobal(v126);
    else
      v127 = 0;
    v164 = 0xFFFFFFFF;
    TESForm_SetFormID((TESForm *)v127, 0x36, 1);
    v127->vtbl->SetEditorID((TESForm *)v127, "GameMonth");
    v127->data = flt_A37CFC;
    if ( *(this + 0x1D) )
    {
      v128 = (_DWORD *)FormHeapAlloc(8u);
      if ( v128 )
      {
        *v128 = *(this + 0x1D);
        v128[1] = 0;
      }
      else
      {
        v128 = 0;
      }
      v128[1] = *(this + 0x1E);
      *(this + 0x1E) = v128;
    }
    *(this + 0x1D) = &v127->vtbl;
    sub_412D30(&off_B06164, (int)"GameMonth", (TESForm *)v127);
  }
  v129 = *(_DWORD **)(dword_B06144
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 0x37));
  if ( !v129 )
    goto LABEL_201;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))(
             &TESForm_FormIDMap,
             0x37,
             v129[1]) )
  {
    v129 = (_DWORD *)*v129;
    if ( !v129 )
      goto LABEL_201;
  }
  if ( !v129[2] )
  {
LABEL_201:
    v130 = (TESGlobal *)FormHeapAlloc(0x28u);
    v161 = v130;
    v164 = 0x20;
    if ( v130 )
      v131 = TESGlobal::TESGlobal(v130);
    else
      v131 = 0;
    v164 = 0xFFFFFFFF;
    TESForm_SetFormID((TESForm *)v131, 0x37, 1);
    v131->vtbl->SetEditorID((TESForm *)v131, "GameDay");
    v131->data = flt_A2F944;
    if ( *(this + 0x1D) )
    {
      v132 = (_DWORD *)FormHeapAlloc(8u);
      if ( v132 )
      {
        *v132 = *(this + 0x1D);
        v132[1] = 0;
      }
      else
      {
        v132 = 0;
      }
      v132[1] = *(this + 0x1E);
      *(this + 0x1E) = v132;
    }
    *(this + 0x1D) = &v131->vtbl;
    sub_412D30(&off_B06164, (int)"GameDay", (TESForm *)v131);
  }
  v133 = *(_DWORD **)(dword_B06144
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 0x38));
  if ( !v133 )
    goto LABEL_215;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))(
             &TESForm_FormIDMap,
             0x38,
             v133[1]) )
  {
    v133 = (_DWORD *)*v133;
    if ( !v133 )
      goto LABEL_215;
  }
  if ( !v133[2] )
  {
LABEL_215:
    v134 = (TESGlobal *)FormHeapAlloc(0x28u);
    v161 = v134;
    v164 = 0x21;
    if ( v134 )
      v135 = TESGlobal::TESGlobal(v134);
    else
      v135 = 0;
    v164 = 0xFFFFFFFF;
    TESForm_SetFormID((TESForm *)v135, 0x38, 1);
    v135->vtbl->SetEditorID((TESForm *)v135, "GameHour");
    v135->data = flt_A2F918;
    if ( *(this + 0x1D) )
    {
      v136 = (_DWORD *)FormHeapAlloc(8u);
      if ( v136 )
      {
        *v136 = *(this + 0x1D);
        v136[1] = 0;
      }
      else
      {
        v136 = 0;
      }
      v136[1] = *(this + 0x1E);
      *(this + 0x1E) = v136;
    }
    *(this + 0x1D) = &v135->vtbl;
    sub_412D30(&off_B06164, (int)"GameHour", (TESForm *)v135);
  }
  v137 = *(_DWORD **)(dword_B06144
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 0x39));
  if ( !v137 )
    goto LABEL_229;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))(
             &TESForm_FormIDMap,
             0x39,
             v137[1]) )
  {
    v137 = (_DWORD *)*v137;
    if ( !v137 )
      goto LABEL_229;
  }
  if ( !v137[2] )
  {
LABEL_229:
    v138 = (TESGlobal *)FormHeapAlloc(0x28u);
    v161 = v138;
    v164 = 0x22;
    if ( v138 )
      v139 = TESGlobal::TESGlobal(v138);
    else
      v139 = 0;
    v164 = 0xFFFFFFFF;
    TESForm_SetFormID((TESForm *)v139, 0x39, 1);
    v139->vtbl->SetEditorID((TESForm *)v139, "GameDaysPassed");
    v139->data = 1.0;
    if ( *(this + 0x1D) )
    {
      v140 = (_DWORD *)FormHeapAlloc(8u);
      if ( v140 )
      {
        *v140 = *(this + 0x1D);
        v140[1] = 0;
      }
      else
      {
        v140 = 0;
      }
      v140[1] = *(this + 0x1E);
      *(this + 0x1E) = v140;
    }
    *(this + 0x1D) = &v139->vtbl;
    sub_412D30(&off_B06164, (int)"GameDaysPassed", (TESForm *)v139);
  }
  v141 = *(_DWORD **)(dword_B06144
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 0x3A));
  if ( !v141 )
    goto LABEL_243;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))(
             &TESForm_FormIDMap,
             0x3A,
             v141[1]) )
  {
    v141 = (_DWORD *)*v141;
    if ( !v141 )
      goto LABEL_243;
  }
  if ( !v141[2] )
  {
LABEL_243:
    v142 = (TESGlobal *)FormHeapAlloc(0x28u);
    v161 = v142;
    v164 = 0x23;
    if ( v142 )
      v143 = TESGlobal::TESGlobal(v142);
    else
      v143 = 0;
    v164 = 0xFFFFFFFF;
    TESForm_SetFormID((TESForm *)v143, 0x3A, 1);
    v143->vtbl->SetEditorID((TESForm *)v143, "TimeScale");
    v143->data = flt_A37CC8;
    if ( *(this + 0x1D) )
    {
      v144 = (_DWORD *)FormHeapAlloc(8u);
      if ( v144 )
      {
        *v144 = *(this + 0x1D);
        v144[1] = 0;
      }
      else
      {
        v144 = 0;
      }
      v144[1] = *(this + 0x1E);
      *(this + 0x1E) = v144;
    }
    *(this + 0x1D) = &v143->vtbl;
    sub_412D30(&off_B06164, (int)"TimeScale", (TESForm *)v143);
  }
  v145 = *(_DWORD **)(dword_B06144
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 7));
  if ( v145 )
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))(
               &TESForm_FormIDMap,
               7,
               v145[1]) )
    {
      v145 = (_DWORD *)*v145;
      if ( !v145 )
        goto LABEL_255;
    }
    v146 = (void *)v145[2];
  }
  else
  {
LABEL_255:
    v146 = 0;
  }
  if ( !OblivionDynamicCast(
          v146,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESNPC `RTTI Type Descriptor',
          0) )
  {
    v147 = (TESForm *)FormHeapAlloc(0x200u);
    v161 = v147;
    v164 = 0x24;
    if ( v147 )
      v148 = (TESForm *)TESNPC_constr(v147);
    else
      v148 = 0;
    v164 = 0xFFFFFFFF;
    TESForm_SetFormID(v148, 7, 1);
    v148->vtbl->SetEditorID(v148, "Player");
    TESObjectListHead_AddObject(*this, v148);
    v148->vtbl->SetFromActiveFile(v148, 0);
  }
  v149 = *(_DWORD **)(dword_B06144
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 0x15E));
  if ( !v149 )
    goto LABEL_267;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))(
             &TESForm_FormIDMap,
             0x15E,
             v149[1]) )
  {
    v149 = (_DWORD *)*v149;
    if ( !v149 )
      goto LABEL_267;
  }
  if ( !v149[2] )
  {
LABEL_267:
    v150 = (TESWeather *)FormHeapAlloc(0x148u);
    v161 = v150;
    v164 = 0x25;
    if ( v150 )
      v151 = (TESForm *)TESWeather::TESWeather(v150);
    else
      v151 = 0;
    v164 = 0xFFFFFFFF;
    TESForm_SetFormID(v151, 0x15E, 1);
    v151->vtbl->SetEditorID(v151, "DefaultWeather");
    sub_4EE8C0((unsigned int *)v151);
    if ( *(this + 7) )
    {
      v152 = (_DWORD *)FormHeapAlloc(8u);
      if ( v152 )
      {
        *v152 = *(this + 7);
        v152[1] = 0;
      }
      else
      {
        v152 = 0;
      }
      v152[1] = *(this + 8);
      *(this + 8) = v152;
    }
    *(this + 7) = &v151->vtbl;
  }
  v153 = *(_DWORD **)(dword_B06144
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 0x15F));
  if ( !v153 )
    goto LABEL_281;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))(
             &TESForm_FormIDMap,
             0x15F,
             v153[1]) )
  {
    v153 = (_DWORD *)*v153;
    if ( !v153 )
      goto LABEL_281;
  }
  if ( !v153[2] )
  {
LABEL_281:
    v154 = (TESClimate *)FormHeapAlloc(0x58u);
    v161 = v154;
    v164 = 0x26;
    if ( v154 )
      v155 = (TESForm *)TESClimate::TESClimate(v154);
    else
      v155 = 0;
    v164 = 0xFFFFFFFF;
    TESForm_SetFormID(v155, 0x15F, 1);
    v155->vtbl->SetEditorID(v155, "DefaultClimate");
    sub_4BEE70((unsigned int *)v155);
    if ( *(this + 5) )
    {
      v156 = (_DWORD *)FormHeapAlloc(8u);
      if ( v156 )
      {
        *v156 = *(this + 5);
        v156[1] = 0;
      }
      else
      {
        v156 = 0;
      }
      v156[1] = *(this + 6);
      *(this + 6) = v156;
    }
    *(this + 5) = &v155->vtbl;
  }
  GlobalObject = Sky_CreateOrGetGlobalObject();
  Sky_CreateChildGlobalObjects(GlobalObject, 0, 1);
  Magic_ConstructGlobalData();
  return TESSound_CreateGlobalSounds();
}
