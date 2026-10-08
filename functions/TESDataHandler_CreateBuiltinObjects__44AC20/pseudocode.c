TESForm *__thiscall TESDataHandler_CreateBuiltinObjects(int *this)
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
  void *v88; // eax
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

  MEMORY[0xB35EA4] = 0; /*0x44ac5d*/
  MEMORY[0xB35EAC] = 0; /*0x44ac63*/
  MEMORY[0xB35EB0] = 0; /*0x44ac69*/
  MEMORY[0xB35EA8] = 0; /*0x44ac6f*/
  MEMORY[0xB35EB8] = 0; /*0x44ac75*/
  MEMORY[0xB35EBC] = 0; /*0x44ac7b*/
  MEMORY[0xB35EC0] = 0; /*0x44ac81*/
  MEMORY[0xB35EC4] = 0; /*0x44ac87*/
  MEMORY[0xB35EB4] = 0; /*0x44ac8d*/
  dword_B361CC[0x33] = 0; /*0x44ac93*/
  MEMORY[0xB35EC8] = 0; /*0x44ac99*/
  MEMORY[0xB35ECC] = 0; /*0x44ac9f*/
  MEMORY[0xB35ED0] = 0; /*0x44aca5*/
  MEMORY[0xB35ED4] = 0; /*0x44acab*/
  MEMORY[0xB35ED8] = 0; /*0x44acb1*/
  MEMORY[0xB35EE0] = 0; /*0x44acb7*/
  MEMORY[0xB35EE4] = 0; /*0x44acbd*/
  MEMORY[0xB360AC] = 0; /*0x44acc3*/
  MEMORY[0xB36308] = 0; /*0x44acc9*/
  MEMORY[0xB35EDC] = 0; /*0x44accf*/
  dword_B361CC[0x3C] = 0; /*0x44acd5*/
  j = 0; /*0x44acdb*/
  v2 = NiTMap_GetAt(&TESForm_FormIDMap, 0x1A, &j); /*0x44acdf*/
  v3 = OblivionDynamicCast(
         v2 != 0 ? j : 0,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESEyes `RTTI Type Descriptor',
         0);
  dword_B361CC[0x3C] = (int)v3; /*0x44ad06*/
  if ( !v3 ) /*0x44ad0b*/
  {
    v4 = (TESWaterForm *)FormHeapAlloc(0x34u); /*0x44ad13*/
    j = v4; /*0x44ad1b*/
    v164 = 0; /*0x44ad21*/
    if ( v4 ) /*0x44ad28*/
      v5 = (TESForm *)TESEyes::TESEyes((TESEyes *)v4); /*0x44ad2c*/
    else
      v5 = 0; /*0x44ad33*/
    v164 = 0xFFFFFFFF; /*0x44ad3b*/
    dword_B361CC[0x3C] = (int)v5; /*0x44ad42*/
    TESForm_SetFormID(v5, 0x1A, 1); /*0x44ad47*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x3C] + 0xD8))( /*0x44ad5f*/
      dword_B361CC[0x3C],
      "eyeReanimate");
    BSStringT_Set((BSStringT *)(dword_B361CC[0x3C] + 0x1C), "Reanimate Eyes", 0); /*0x44ad70*/
    BSSimpleList_PushFront(this + 0xF, dword_B361CC[0x3C]); /*0x44ad7f*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x3C] + 0x90))(dword_B361CC[0x3C], 0); /*0x44ad93*/
  }
  j = 0; /*0x44ada1*/
  v6 = NiTMap_GetAt(&TESForm_FormIDMap, 0x19, &j); /*0x44ada5*/
  v7 = (TESForm *)OblivionDynamicCast(
                    v6 != 0 ? j : 0,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESRace `RTTI Type Descriptor',
                    0);
  MEMORY[0xB36308] = v7; /*0x44adc9*/
  if ( !v7 ) /*0x44adce*/
  {
    v8 = (TESWaterForm *)FormHeapAlloc(0x318u); /*0x44add5*/
    j = v8; /*0x44addd*/
    v164 = 1; /*0x44ade3*/
    if ( v8 ) /*0x44adee*/
      v9 = (TESForm *)TESRace::TESRace((TESRace *)v8); /*0x44adf2*/
    else
      v9 = 0; /*0x44adf9*/
    v164 = 0xFFFFFFFF; /*0x44ae01*/
    MEMORY[0xB36308] = v9; /*0x44ae08*/
    TESForm_SetFormID(v9, 0x19, 1); /*0x44ae0d*/
    MEMORY[0xB36308]->vtbl->SetEditorID(MEMORY[0xB36308], "VampireRace"); /*0x44ae25*/
    BSSimpleList_PushFront(this + 0x11, (int)MEMORY[0xB36308]); /*0x44ae31*/
    MEMORY[0xB36308]->vtbl->SetFromActiveFile(MEMORY[0xB36308], 0); /*0x44ae45*/
  }
  j = 0; /*0x44ae53*/
  v10 = NiTMap_GetAt(&TESForm_FormIDMap, 0x18, &j); /*0x44ae57*/
  v11 = (TESWaterForm *)OblivionDynamicCast(
                          v10 != 0 ? j : 0,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESWaterForm `RTTI Type Descriptor',
                          0);
  MEMORY[0xB360AC] = v11; /*0x44ae7b*/
  if ( !v11 ) /*0x44ae80*/
  {
    v12 = (TESForm *)FormHeapAlloc(0xACu); /*0x44ae8b*/
    j = (TESWaterForm *)v12; /*0x44ae93*/
    v164 = 2; /*0x44ae99*/
    if ( v12 ) /*0x44aea4*/
      v13 = TESWaterForm::TESWaterForm((TESWaterForm *)v12); /*0x44aea8*/
    else
      v13 = 0; /*0x44aeaf*/
    v164 = 0xFFFFFFFF; /*0x44aeb7*/
    MEMORY[0xB360AC] = v13; /*0x44aebe*/
    TESForm_SetFormID((TESForm *)v13, 0x18, 1); /*0x44aec3*/
    MEMORY[0xB360AC]->vtbl->SetEditorID((TESForm *)MEMORY[0xB360AC], "DefaultWater"); /*0x44aedb*/
    TESWaterForm::SetTexturePath(MEMORY[0xB360AC], "Water\\water00.dds"); /*0x44aee8*/
    BSSimpleList_PushFront(this + 0x29, (int)MEMORY[0xB360AC]); /*0x44aefa*/
    MEMORY[0xB360AC]->vtbl->SetFromActiveFile((TESForm *)MEMORY[0xB360AC], 0); /*0x44af0e*/
  }
  j = 0; /*0x44af1c*/
  v14 = NiTMap_GetAt(&TESForm_FormIDMap, 0x12, &j); /*0x44af20*/
  v15 = (TESForm *)OblivionDynamicCast(
                     v14 != 0 ? j : 0,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESObjectSTAT `RTTI Type Descriptor',
                     0);
  MEMORY[0xB35ED4] = v15; /*0x44af44*/
  if ( !v15 ) /*0x44af49*/
  {
    v16 = (TESWaterForm *)FormHeapAlloc(0x3Cu); /*0x44af51*/
    j = v16; /*0x44af59*/
    v164 = 3; /*0x44af5f*/
    if ( v16 ) /*0x44af6a*/
      v17 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v16); /*0x44af6e*/
    else
      v17 = 0; /*0x44af75*/
    v164 = 0xFFFFFFFF; /*0x44af7d*/
    MEMORY[0xB35ED4] = v17; /*0x44af84*/
    TESForm_SetFormID(v17, 0x12, 1); /*0x44af89*/
    MEMORY[0xB35ED4]->vtbl->SetEditorID(MEMORY[0xB35ED4], "HorseMarker"); /*0x44afa1*/
    (*(void (__thiscall **)(UInt32 *, const char *))(MEMORY[0xB35ED4][1].member.refID + 0x18))( /*0x44afb7*/
      &MEMORY[0xB35ED4][1].member.refID,
      "Marker_Horse.nif");
    TESObjectListHead_AddObject((_DWORD *)*this, MEMORY[0xB35ED4]); /*0x44afc2*/
    MEMORY[0xB35ED4]->vtbl->SetFromActiveFile(MEMORY[0xB35ED4], 0); /*0x44afd6*/
  }
  j = 0; /*0x44afe7*/
  v18 = NiTMap_GetAt(&TESForm_FormIDMap, 0x194, &j); /*0x44afeb*/
  v19 = OblivionDynamicCast(
          v18 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectMISC `RTTI Type Descriptor',
          0);
  MEMORY[0xB35EDC] = (int)v19; /*0x44b00f*/
  if ( !v19 ) /*0x44b014*/
  {
    v20 = (TESWaterForm *)FormHeapAlloc(0x70u); /*0x44b018*/
    j = v20; /*0x44b020*/
    v164 = 4; /*0x44b026*/
    if ( v20 ) /*0x44b031*/
      v21 = (TESForm *)TESObjectMISC::TESObjectMISC((TESObjectMISC *)v20); /*0x44b035*/
    else
      v21 = 0; /*0x44b03c*/
    v164 = 0xFFFFFFFF; /*0x44b047*/
    MEMORY[0xB35EDC] = (int)v21; /*0x44b04e*/
    TESForm_SetFormID(v21, 0x194, 1); /*0x44b053*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB35EDC] + 0xD8))(MEMORY[0xB35EDC], "VarlaStone"); /*0x44b06b*/
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB35EDC]); /*0x44b076*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB35EDC] + 0x90))(MEMORY[0xB35EDC], 0); /*0x44b08a*/
  }
  j = 0; /*0x44b09b*/
  v22 = NiTMap_GetAt(&TESForm_FormIDMap, 0x191, &j); /*0x44b09f*/
  v23 = OblivionDynamicCast(
          v22 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectMISC `RTTI Type Descriptor',
          0);
  MEMORY[0xB35ED8] = (int)v23; /*0x44b0c3*/
  if ( !v23 ) /*0x44b0c8*/
  {
    v24 = (TESWaterForm *)FormHeapAlloc(0x70u); /*0x44b0cc*/
    j = v24; /*0x44b0d4*/
    v164 = 5; /*0x44b0da*/
    if ( v24 ) /*0x44b0e5*/
      v25 = (TESForm *)TESObjectMISC::TESObjectMISC((TESObjectMISC *)v24); /*0x44b0e9*/
    else
      v25 = 0; /*0x44b0f0*/
    v164 = 0xFFFFFFFF; /*0x44b0fb*/
    MEMORY[0xB35ED8] = (int)v25; /*0x44b102*/
    TESForm_SetFormID(v25, 0x191, 1); /*0x44b107*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB35ED8] + 0xD8))(MEMORY[0xB35ED8], "WelkyndStone"); /*0x44b11f*/
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB35ED8]); /*0x44b12a*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB35ED8] + 0x90))(MEMORY[0xB35ED8], 0); /*0x44b13e*/
  }
  j = 0; /*0x44b14f*/
  v26 = NiTMap_GetAt(&TESForm_FormIDMap, 0x192, &j); /*0x44b153*/
  v27 = OblivionDynamicCast(
          v26 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSoulGem `RTTI Type Descriptor',
          0);
  MEMORY[0xB35EE0] = (int)v27; /*0x44b177*/
  if ( !v27 ) /*0x44b17c*/
  {
    v28 = (TESWaterForm *)FormHeapAlloc(0x74u); /*0x44b180*/
    j = v28; /*0x44b188*/
    v164 = 6; /*0x44b18e*/
    if ( v28 ) /*0x44b199*/
      v29 = (TESForm *)TESSoulGem::TESSoulGem((TESSoulGem *)v28); /*0x44b19d*/
    else
      v29 = 0; /*0x44b1a4*/
    v164 = 0xFFFFFFFF; /*0x44b1af*/
    MEMORY[0xB35EE0] = (int)v29; /*0x44b1b6*/
    TESForm_SetFormID(v29, 0x192, 1); /*0x44b1bb*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB35EE0] + 0xD8))(MEMORY[0xB35EE0], "BlackSoulGem"); /*0x44b1d3*/
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB35EE0]); /*0x44b1de*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB35EE0] + 0x90))(MEMORY[0xB35EE0], 0); /*0x44b1f2*/
  }
  j = 0; /*0x44b203*/
  v30 = NiTMap_GetAt(&TESForm_FormIDMap, 0x193, &j); /*0x44b207*/
  v31 = OblivionDynamicCast(
          v30 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSoulGem `RTTI Type Descriptor',
          0);
  MEMORY[0xB35EE4] = (int)v31; /*0x44b22b*/
  if ( !v31 ) /*0x44b230*/
  {
    v32 = (TESWaterForm *)FormHeapAlloc(0x74u); /*0x44b234*/
    j = v32; /*0x44b23c*/
    v164 = 7; /*0x44b242*/
    if ( v32 ) /*0x44b24d*/
      v33 = (TESForm *)TESSoulGem::TESSoulGem((TESSoulGem *)v32); /*0x44b251*/
    else
      v33 = 0; /*0x44b258*/
    v164 = 0xFFFFFFFF; /*0x44b263*/
    MEMORY[0xB35EE4] = (int)v33; /*0x44b26a*/
    TESForm_SetFormID(v33, 0x193, 1); /*0x44b26f*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB35EE4] + 0xD8))(MEMORY[0xB35EE4], "AzuraStone"); /*0x44b287*/
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB35EE4]); /*0x44b292*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB35EE4] + 0x90))(MEMORY[0xB35EE4], 0); /*0x44b2a6*/
  }
  j = 0; /*0x44b2b4*/
  v34 = NiTMap_GetAt(&TESForm_FormIDMap, 0xA, &j); /*0x44b2b8*/
  v35 = OblivionDynamicCast(
          v34 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectMISC `RTTI Type Descriptor',
          0);
  MEMORY[0xB35EC8] = (int)v35; /*0x44b2dc*/
  if ( !v35 ) /*0x44b2e1*/
  {
    v36 = (TESWaterForm *)FormHeapAlloc(0x70u); /*0x44b2e5*/
    j = v36; /*0x44b2ed*/
    v164 = 8; /*0x44b2f3*/
    if ( v36 ) /*0x44b2fe*/
      v37 = (TESForm *)TESObjectMISC::TESObjectMISC((TESObjectMISC *)v36); /*0x44b302*/
    else
      v37 = 0; /*0x44b309*/
    v164 = 0xFFFFFFFF; /*0x44b311*/
    MEMORY[0xB35EC8] = (int)v37; /*0x44b318*/
    TESForm_SetFormID(v37, 0xA, 1); /*0x44b31d*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB35EC8] + 0xD8))(MEMORY[0xB35EC8], "Lockpick"); /*0x44b335*/
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB35EC8]); /*0x44b340*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB35EC8] + 0x90))(MEMORY[0xB35EC8], 0); /*0x44b354*/
  }
  j = 0; /*0x44b362*/
  v38 = NiTMap_GetAt(&TESForm_FormIDMap, 0xB, &j); /*0x44b366*/
  v39 = OblivionDynamicCast(
          v38 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectMISC `RTTI Type Descriptor',
          0);
  MEMORY[0xB35ECC] = (int)v39; /*0x44b38a*/
  if ( !v39 ) /*0x44b38f*/
  {
    v40 = (TESWaterForm *)FormHeapAlloc(0x70u); /*0x44b393*/
    j = v40; /*0x44b39b*/
    v164 = 9; /*0x44b3a1*/
    if ( v40 ) /*0x44b3ac*/
      v41 = (TESForm *)TESObjectMISC::TESObjectMISC((TESObjectMISC *)v40); /*0x44b3b0*/
    else
      v41 = 0; /*0x44b3b7*/
    v164 = 0xFFFFFFFF; /*0x44b3bf*/
    MEMORY[0xB35ECC] = (int)v41; /*0x44b3c6*/
    TESForm_SetFormID(v41, 0xB, 1); /*0x44b3cb*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB35ECC] + 0xD8))(MEMORY[0xB35ECC], "SkeletonKey"); /*0x44b3e3*/
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB35ECC]); /*0x44b3ee*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB35ECC] + 0x90))(MEMORY[0xB35ECC], 0); /*0x44b402*/
  }
  j = 0; /*0x44b410*/
  v42 = NiTMap_GetAt(&TESForm_FormIDMap, 0xC, &j); /*0x44b414*/
  v43 = OblivionDynamicCast(
          v42 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectMISC `RTTI Type Descriptor',
          0);
  MEMORY[0xB35ED0] = (int)v43; /*0x44b438*/
  if ( !v43 ) /*0x44b43d*/
  {
    v44 = (TESWaterForm *)FormHeapAlloc(0x70u); /*0x44b441*/
    j = v44; /*0x44b449*/
    v164 = 0xA; /*0x44b44f*/
    if ( v44 ) /*0x44b45a*/
      v45 = (TESForm *)TESObjectMISC::TESObjectMISC((TESObjectMISC *)v44); /*0x44b45e*/
    else
      v45 = 0; /*0x44b465*/
    v164 = 0xFFFFFFFF; /*0x44b46d*/
    MEMORY[0xB35ED0] = (int)v45; /*0x44b474*/
    TESForm_SetFormID(v45, 0xC, 1); /*0x44b479*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB35ED0] + 0xD8))(MEMORY[0xB35ED0], "RepairHammer"); /*0x44b491*/
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB35ED0]); /*0x44b49c*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB35ED0] + 0x90))(MEMORY[0xB35ED0], 0); /*0x44b4b0*/
  }
  j = 0; /*0x44b4be*/
  v46 = NiTMap_GetAt(&TESForm_FormIDMap, 1, &j); /*0x44b4c2*/
  v47 = OblivionDynamicCast(
          v46 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectSTAT `RTTI Type Descriptor',
          0);
  MEMORY[0xB35EA4] = (int)v47; /*0x44b4e6*/
  if ( !v47 ) /*0x44b4eb*/
  {
    v48 = (TESWaterForm *)FormHeapAlloc(0x3Cu); /*0x44b4f3*/
    j = v48; /*0x44b4fb*/
    v164 = 0xB; /*0x44b501*/
    if ( v48 ) /*0x44b50c*/
      v49 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v48); /*0x44b510*/
    else
      v49 = 0; /*0x44b517*/
    v164 = 0xFFFFFFFF; /*0x44b51f*/
    MEMORY[0xB35EA4] = (int)v49; /*0x44b526*/
    TESForm_SetFormID(v49, 1, 1); /*0x44b52b*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB35EA4] + 0xD8))(MEMORY[0xB35EA4], "DoorMarker"); /*0x44b543*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(MEMORY[0xB35EA4] + 0x24) + 0x18))( /*0x44b559*/
      MEMORY[0xB35EA4] + 0x24,
      "MarkerTeleport.nif");
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB35EA4]); /*0x44b564*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB35EA4] + 0x90))(MEMORY[0xB35EA4], 0); /*0x44b578*/
  }
  j = 0; /*0x44b586*/
  v50 = NiTMap_GetAt(&TESForm_FormIDMap, 0x3C, &j); /*0x44b58a*/
  v51 = OblivionDynamicCast(
          v50 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESWorldSpace `RTTI Type Descriptor',
          0);
  v52 = (int)v51; /*0x44b5a9*/
  if ( v51 ) /*0x44b5b0*/
  {
    if ( (_DWORD *)*(this + 3) != v51 ) /*0x44b630*/
    {
      BSSimpleList_Remove(this + 3, (int)v51); /*0x44b635*/
      BSSimpleList_PushFront(this + 3, v52); /*0x44b63d*/
    }
  }
  else
  {
    v53 = (TESWaterForm *)FormHeapAlloc(0xE0u); /*0x44b5b7*/
    j = v53; /*0x44b5bf*/
    v164 = 0xC; /*0x44b5c5*/
    if ( v53 ) /*0x44b5d0*/
      v54 = (TESForm *)TESWorldSpace::TESWorldSpace((TESWorldSpace *)v53); /*0x44b5d9*/
    else
      v54 = 0; /*0x44b5dd*/
    v164 = 0xFFFFFFFF; /*0x44b5e5*/
    TESForm_SetFormID(v54, 0x3C, 1); /*0x44b5ec*/
    v54->vtbl->SetEditorID(v54, "Tamriel"); /*0x44b600*/
    v54->vtbl->SetFromActiveFile(v54, 0); /*0x44b60d*/
    BSSimpleList_PushFront(this + 3, (int)v54); /*0x44b613*/
    sub_412D30(&off_B06164, (int)"Tamriel", v54); /*0x44b623*/
  }
  j = 0; /*0x44b651*/
  v55 = NiTMap_GetAt(&TESForm_FormIDMap, 0x3B, &j); /*0x44b655*/
  v56 = (TESForm *)OblivionDynamicCast(
                     v55 != 0 ? j : 0,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESObjectSTAT `RTTI Type Descriptor',
                     0);
  MEMORY[0xB35EAC] = v56; /*0x44b679*/
  if ( !v56 ) /*0x44b67e*/
  {
    v57 = (TESWaterForm *)FormHeapAlloc(0x3Cu); /*0x44b686*/
    j = v57; /*0x44b68e*/
    v164 = 0xD; /*0x44b694*/
    if ( v57 ) /*0x44b69f*/
      v58 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v57); /*0x44b6a3*/
    else
      v58 = 0; /*0x44b6aa*/
    v164 = 0xFFFFFFFF; /*0x44b6b2*/
    MEMORY[0xB35EAC] = v58; /*0x44b6b9*/
    TESForm_SetFormID(v58, 0x3B, 1); /*0x44b6be*/
    MEMORY[0xB35EAC]->vtbl->SetEditorID(MEMORY[0xB35EAC], "XMarker"); /*0x44b6d6*/
    (*(void (__thiscall **)(UInt32 *, const char *))(MEMORY[0xB35EAC][1].member.refID + 0x18))( /*0x44b6ec*/
      &MEMORY[0xB35EAC][1].member.refID,
      "MarkerX.nif");
    TESObjectListHead_AddObject((_DWORD *)*this, MEMORY[0xB35EAC]); /*0x44b6f7*/
    MEMORY[0xB35EAC]->vtbl->SetFromActiveFile(MEMORY[0xB35EAC], 0); /*0x44b70b*/
  }
  j = 0; /*0x44b719*/
  v59 = NiTMap_GetAt(&TESForm_FormIDMap, 0x34, &j); /*0x44b71d*/
  v60 = OblivionDynamicCast(
          v59 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectSTAT `RTTI Type Descriptor',
          0);
  MEMORY[0xB35EB0] = (int)v60; /*0x44b741*/
  if ( !v60 ) /*0x44b746*/
  {
    v61 = (TESWaterForm *)FormHeapAlloc(0x3Cu); /*0x44b74e*/
    j = v61; /*0x44b756*/
    v164 = 0xE; /*0x44b75c*/
    if ( v61 ) /*0x44b767*/
      v62 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v61); /*0x44b76b*/
    else
      v62 = 0; /*0x44b772*/
    v164 = 0xFFFFFFFF; /*0x44b77a*/
    MEMORY[0xB35EB0] = (int)v62; /*0x44b781*/
    TESForm_SetFormID(v62, 0x34, 1); /*0x44b786*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB35EB0] + 0xD8))(MEMORY[0xB35EB0], "XMarkerHeading"); /*0x44b79e*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(MEMORY[0xB35EB0] + 0x24) + 0x18))( /*0x44b7b4*/
      MEMORY[0xB35EB0] + 0x24,
      "MarkerXHeading.nif");
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB35EB0]); /*0x44b7bf*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB35EB0] + 0x90))(MEMORY[0xB35EB0], 0); /*0x44b7d3*/
  }
  j = 0; /*0x44b7e1*/
  v63 = NiTMap_GetAt(&TESForm_FormIDMap, 0x10, &j); /*0x44b7e5*/
  v64 = OblivionDynamicCast(
          v63 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectSTAT `RTTI Type Descriptor',
          0);
  MEMORY[0xB35EA8] = (int)v64; /*0x44b809*/
  if ( !v64 ) /*0x44b80e*/
  {
    v65 = (TESWaterForm *)FormHeapAlloc(0x3Cu); /*0x44b816*/
    j = v65; /*0x44b81e*/
    v164 = 0xF; /*0x44b824*/
    if ( v65 ) /*0x44b82f*/
      v66 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v65); /*0x44b833*/
    else
      v66 = 0; /*0x44b83a*/
    v164 = 0xFFFFFFFF; /*0x44b842*/
    MEMORY[0xB35EA8] = (int)v66; /*0x44b849*/
    TESForm_SetFormID(v66, 0x10, 1); /*0x44b84e*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB35EA8] + 0xD8))(MEMORY[0xB35EA8], "MapMarker"); /*0x44b866*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(MEMORY[0xB35EA8] + 0x24) + 0x18))( /*0x44b87c*/
      MEMORY[0xB35EA8] + 0x24,
      "Marker_Map.NIF");
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB35EA8]); /*0x44b887*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB35EA8] + 0x90))(MEMORY[0xB35EA8], 0); /*0x44b89b*/
  }
  j = 0; /*0x44b8a9*/
  v67 = NiTMap_GetAt(&TESForm_FormIDMap, 2, &j); /*0x44b8ad*/
  v68 = OblivionDynamicCast(
          v67 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectSTAT `RTTI Type Descriptor',
          0);
  MEMORY[0xB35EB4] = (int)v68; /*0x44b8d1*/
  if ( !v68 ) /*0x44b8d6*/
  {
    v69 = (TESWaterForm *)FormHeapAlloc(0x3Cu); /*0x44b8de*/
    j = v69; /*0x44b8e6*/
    v164 = 0x10; /*0x44b8ec*/
    if ( v69 ) /*0x44b8f7*/
      v70 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v69); /*0x44b8fb*/
    else
      v70 = 0; /*0x44b902*/
    v164 = 0xFFFFFFFF; /*0x44b90a*/
    MEMORY[0xB35EB4] = (int)v70; /*0x44b911*/
    TESForm_SetFormID(v70, 2, 1); /*0x44b916*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB35EB4] + 0xD8))(MEMORY[0xB35EB4], "TravelMarker"); /*0x44b92e*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(MEMORY[0xB35EB4] + 0x24) + 0x18))( /*0x44b944*/
      MEMORY[0xB35EB4] + 0x24,
      "Marker_Travel.nif");
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB35EB4]); /*0x44b94f*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB35EB4] + 0x90))(MEMORY[0xB35EB4], 0); /*0x44b963*/
  }
  j = 0; /*0x44b971*/
  v71 = NiTMap_GetAt(&TESForm_FormIDMap, 3, &j); /*0x44b975*/
  v72 = OblivionDynamicCast(
          v71 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectSTAT `RTTI Type Descriptor',
          0);
  MEMORY[0xB35EB8] = (int)v72; /*0x44b999*/
  if ( !v72 ) /*0x44b99e*/
  {
    v73 = (TESWaterForm *)FormHeapAlloc(0x3Cu); /*0x44b9a6*/
    j = v73; /*0x44b9ae*/
    v164 = 0x11; /*0x44b9b4*/
    if ( v73 ) /*0x44b9bf*/
      v74 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v73); /*0x44b9c3*/
    else
      v74 = 0; /*0x44b9ca*/
    v164 = 0xFFFFFFFF; /*0x44b9d2*/
    MEMORY[0xB35EB8] = (int)v74; /*0x44b9d9*/
    TESForm_SetFormID(v74, 3, 1); /*0x44b9de*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB35EB8] + 0xD8))(MEMORY[0xB35EB8], "NorthMarker"); /*0x44b9f6*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(MEMORY[0xB35EB8] + 0x24) + 0x18))( /*0x44ba0c*/
      MEMORY[0xB35EB8] + 0x24,
      "Marker_North.nif");
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB35EB8]); /*0x44ba17*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB35EB8] + 0x90))(MEMORY[0xB35EB8], 0); /*0x44ba2b*/
  }
  j = 0; /*0x44ba39*/
  v75 = NiTMap_GetAt(&TESForm_FormIDMap, 4, &j); /*0x44ba3d*/
  v76 = OblivionDynamicCast(
          v75 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectDOOR `RTTI Type Descriptor',
          0);
  MEMORY[0xB35EBC] = (int)v76; /*0x44ba61*/
  if ( !v76 ) /*0x44ba66*/
  {
    v77 = (TESWaterForm *)FormHeapAlloc(0x70u); /*0x44ba6e*/
    j = v77; /*0x44ba76*/
    v164 = 0x12; /*0x44ba7c*/
    if ( v77 ) /*0x44ba87*/
      v78 = (TESForm *)TESObjectDOOR::TESObjectDOOR((TESObjectDOOR *)v77); /*0x44ba8b*/
    else
      v78 = 0; /*0x44ba92*/
    v164 = 0xFFFFFFFF; /*0x44ba9a*/
    MEMORY[0xB35EBC] = (int)v78; /*0x44baa1*/
    TESForm_SetFormID(v78, 4, 1); /*0x44baa6*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB35EBC] + 0xD8))(MEMORY[0xB35EBC], "PrisonMarker"); /*0x44babe*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(MEMORY[0xB35EBC] + 0x30) + 0x18))( /*0x44bad4*/
      MEMORY[0xB35EBC] + 0x30,
      "Marker_Prison.nif");
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB35EBC]); /*0x44badf*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB35EBC] + 0x90))(MEMORY[0xB35EBC], 0); /*0x44baf3*/
  }
  j = 0; /*0x44bb01*/
  v79 = NiTMap_GetAt(&TESForm_FormIDMap, 6, &j); /*0x44bb05*/
  v80 = OblivionDynamicCast(
          v79 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectSTAT `RTTI Type Descriptor',
          0);
  MEMORY[0xB35EC0] = (int)v80; /*0x44bb29*/
  if ( !v80 ) /*0x44bb2e*/
  {
    v81 = (TESWaterForm *)FormHeapAlloc(0x3Cu); /*0x44bb36*/
    j = v81; /*0x44bb3e*/
    v164 = 0x13; /*0x44bb44*/
    if ( v81 ) /*0x44bb4f*/
      v82 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v81); /*0x44bb53*/
    else
      v82 = 0; /*0x44bb5a*/
    v164 = 0xFFFFFFFF; /*0x44bb62*/
    MEMORY[0xB35EC0] = (int)v82; /*0x44bb69*/
    TESForm_SetFormID(v82, 6, 1); /*0x44bb6e*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB35EC0] + 0xD8))(MEMORY[0xB35EC0], "TempleMarker"); /*0x44bb86*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(MEMORY[0xB35EC0] + 0x24) + 0x18))( /*0x44bb9c*/
      MEMORY[0xB35EC0] + 0x24,
      "Marker_Temple.nif");
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB35EC0]); /*0x44bba7*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB35EC0] + 0x90))(MEMORY[0xB35EC0], 0); /*0x44bbbb*/
  }
  j = 0; /*0x44bbc9*/
  v83 = NiTMap_GetAt(&TESForm_FormIDMap, 5, &j); /*0x44bbcd*/
  v84 = OblivionDynamicCast(
          v83 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectSTAT `RTTI Type Descriptor',
          0);
  MEMORY[0xB35EC4] = (int)v84; /*0x44bbf1*/
  if ( !v84 ) /*0x44bbf6*/
  {
    v85 = (TESWaterForm *)FormHeapAlloc(0x3Cu); /*0x44bbfe*/
    j = v85; /*0x44bc06*/
    v164 = 0x14; /*0x44bc0c*/
    if ( v85 ) /*0x44bc17*/
      v86 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v85); /*0x44bc1b*/
    else
      v86 = 0; /*0x44bc22*/
    v164 = 0xFFFFFFFF; /*0x44bc2a*/
    MEMORY[0xB35EC4] = (int)v86; /*0x44bc31*/
    TESForm_SetFormID(v86, 5, 1); /*0x44bc36*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB35EC4] + 0xD8))(MEMORY[0xB35EC4], "DivineMarker"); /*0x44bc4e*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)(MEMORY[0xB35EC4] + 0x24) + 0x18))( /*0x44bc64*/
      MEMORY[0xB35EC4] + 0x24,
      "Marker_Divine.nif");
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB35EC4]); /*0x44bc6f*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB35EC4] + 0x90))(MEMORY[0xB35EC4], 0); /*0x44bc83*/
  }
  j = 0; /*0x44bc91*/
  v87 = NiTMap_GetAt(&TESForm_FormIDMap, 0x13, &j); /*0x44bc95*/
  v88 = OblivionDynamicCast(
          v87 != 0 ? j : 0,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESFaction `RTTI Type Descriptor',
          0);
  dword_B361CC[0x33] = (int)v88; /*0x44bcb9*/
  if ( !v88 ) /*0x44bcbe*/
  {
    v89 = (TESWaterForm *)FormHeapAlloc(0x44u); /*0x44bcc6*/
    j = v89; /*0x44bcce*/
    v164 = 0x15; /*0x44bcd4*/
    if ( v89 ) /*0x44bcdf*/
      v90 = sub_51F820((TESForm *)v89); /*0x44bce3*/
    else
      v90 = 0; /*0x44bcea*/
    v164 = 0xFFFFFFFF; /*0x44bcf2*/
    dword_B361CC[0x33] = (int)v90; /*0x44bcf9*/
    TESForm_SetFormID(v90, 0x13, 1); /*0x44bcfe*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x33] + 0xD8))( /*0x44bd16*/
      dword_B361CC[0x33],
      "CreatureFaction");
    BSSimpleList_PushFront(this + 0x17, dword_B361CC[0x33]); /*0x44bd22*/
    sub_46E900((char *)(dword_B361CC[0x33] + 0x24), dword_B361CC[0x33], 0x64); /*0x44bd32*/
    sub_51F760((char *)dword_B361CC[0x33]); /*0x44bd3d*/
    TESForm_SetIsLinked((TESForm *)dword_B361CC[0x33], 1); /*0x44bd4a*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x33] + 0x90))(dword_B361CC[0x33], 0); /*0x44bd5e*/
  }
  j = 0; /*0x44bd6c*/
  if ( !NiTMap_GetAt(&TESForm_FormIDMap, 0xF, &j) || !j ) /*0x44bd7d*/
  {
    v91 = (TESWaterForm *)FormHeapAlloc(0x70u); /*0x44bd81*/
    j = v91; /*0x44bd89*/
    v164 = 0x16; /*0x44bd8f*/
    if ( v91 ) /*0x44bd9a*/
      v92 = (TESForm *)TESObjectMISC::TESObjectMISC((TESObjectMISC *)v91); /*0x44bda3*/
    else
      v92 = 0; /*0x44bda7*/
    v164 = 0xFFFFFFFF; /*0x44bdaf*/
    TESForm_SetFormID(v92, 0xF, 1); /*0x44bdb6*/
    v92->vtbl->SetEditorID(v92, "Gold001"); /*0x44bdca*/
    TESObjectListHead_AddObject((_DWORD *)*this, v92); /*0x44bdcf*/
    v92->vtbl->SetFromActiveFile(v92, 0); /*0x44bddf*/
  }
  j = 0; /*0x44bded*/
  v93 = NiTMap_GetAt(&TESForm_FormIDMap, 0xE, &j); /*0x44bdf1*/
  v94 = v93 != 0 ? (TESForm *)j : 0;
  MEMORY[0xB33AA8] = v94; /*0x44be00*/
  if ( !v94 ) /*0x44be05*/
  {
    v95 = (TESWaterForm *)FormHeapAlloc(0x7Cu); /*0x44be0d*/
    j = v95; /*0x44be15*/
    v164 = 0x17; /*0x44be1b*/
    if ( v95 ) /*0x44be26*/
      v96 = (TESForm *)TESObjectCONT::TESObjectCONT((TESObjectCONT *)v95); /*0x44be2a*/
    else
      v96 = 0; /*0x44be31*/
    v164 = 0xFFFFFFFF; /*0x44be39*/
    MEMORY[0xB33AA8] = v96; /*0x44be40*/
    TESForm_SetFormID(v96, 0xE, 1); /*0x44be45*/
    MEMORY[0xB33AA8]->vtbl->SetEditorID(MEMORY[0xB33AA8], "LootBag"); /*0x44be5d*/
    if ( !((int (__thiscall *)(TESForm::ModReferenceList *))MEMORY[0xB33AA8][2].member.modlist.data->unkFile014)(&MEMORY[0xB33AA8][2].member.modlist) /*0x44be85*/
      || !strlen((const char *)((int (__thiscall *)(TESForm::ModReferenceList *))MEMORY[0xB33AA8][2].member.modlist.data->unkFile014)(&MEMORY[0xB33AA8][2].member.modlist)) )
    {
      ((void (__thiscall *)(TESForm::ModReferenceList *, const char *))MEMORY[0xB33AA8][2].member.modlist.data->unkFile018)( /*0x44bea9*/
        &MEMORY[0xB33AA8][2].member.modlist,
        "Clutter\\Sack01.NIF");
    }
    TESObjectListHead_AddObject((_DWORD *)*this, MEMORY[0xB33AA8]); /*0x44beb4*/
    MEMORY[0xB33AA8]->vtbl->SetFromActiveFile(MEMORY[0xB33AA8], 0); /*0x44bec8*/
  }
  j = 0; /*0x44bed6*/
  v97 = NiTMap_GetAt(&TESForm_FormIDMap, 0x11, &j); /*0x44beda*/
  v98 = v97 != 0 ? j : 0;
  MEMORY[0xB33AAC] = (int)v98; /*0x44bee9*/
  if ( !v98 ) /*0x44beee*/
  {
    v99 = (TESWaterForm *)FormHeapAlloc(0x7Cu); /*0x44bef2*/
    j = v99; /*0x44befa*/
    v164 = 0x18; /*0x44bf00*/
    if ( v99 ) /*0x44bf0b*/
      v100 = (TESForm *)TESObjectCONT::TESObjectCONT((TESObjectCONT *)v99); /*0x44bf0f*/
    else
      v100 = 0; /*0x44bf16*/
    v164 = 0xFFFFFFFF; /*0x44bf1e*/
    MEMORY[0xB33AAC] = (int)v100; /*0x44bf25*/
    TESForm_SetFormID(v100, 0x11, 1); /*0x44bf2a*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33AAC] + 0xD8))(MEMORY[0xB33AAC], "StolenGoods"); /*0x44bf42*/
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB33AAC]); /*0x44bf4d*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33AAC] + 0x90))(MEMORY[0xB33AAC], 0); /*0x44bf61*/
  }
  j = 0; /*0x44bf6f*/
  v101 = NiTMap_GetAt(&TESForm_FormIDMap, 0x17, &j); /*0x44bf73*/
  v102 = v101 != 0 ? j : 0;
  MEMORY[0xB33AB0] = (int)v102; /*0x44bf82*/
  if ( !v102 ) /*0x44bf87*/
  {
    v103 = (TESWaterForm *)FormHeapAlloc(0xDCu); /*0x44bf92*/
    j = v103; /*0x44bf9a*/
    v164 = 0x19; /*0x44bfa0*/
    if ( v103 ) /*0x44bfab*/
      v104 = (TESForm *)TESObjectCLOT::TESObjectCLOT((TESObjectCLOT *)v103); /*0x44bfaf*/
    else
      v104 = 0; /*0x44bfb6*/
    v164 = 0xFFFFFFFF; /*0x44bfbe*/
    MEMORY[0xB33AB0] = (int)v104; /*0x44bfc5*/
    TESForm_SetFormID(v104, 0x17, 1); /*0x44bfca*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33AB0] + 0xD8))(MEMORY[0xB33AB0], "JailShirt"); /*0x44bfe2*/
    TESBipedModelForm_SetWorldModelPath( /*0x44bff3*/
      (_DWORD *)(MEMORY[0xB33AB0] + 0x5C),
      0,
      (int)"Clothes\\LowerClass\\05\\M\\Shirt_gnd.NIF");
    TESBipedModelForm_SetWorldModelPath( /*0x44c008*/
      (_DWORD *)(MEMORY[0xB33AB0] + 0x5C),
      1,
      (int)"Clothes\\LowerClass\\05\\F\\Shirt_gnd.NIF");
    TESBipedModelForm_SetModelPath((_DWORD *)(MEMORY[0xB33AB0] + 0x5C), 0, (int)"Clothes\\LowerClass\\05\\M\\Shirt.NIF"); /*0x44c01c*/
    TESBipedModelForm_SetModelPath((_DWORD *)(MEMORY[0xB33AB0] + 0x5C), 1, (int)"Clothes\\LowerClass\\05\\F\\Shirt.NIF"); /*0x44c031*/
    TESBipedModelForm_SetCoversBipedSlot((_WORD *)(MEMORY[0xB33AB0] + 0x5C), 2, 1); /*0x44c043*/
    TESBipedModelForm_SetCoversBipedSlot((_WORD *)(MEMORY[0xB33AB0] + 0x5C), 3, 0); /*0x44c054*/
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB33AB0]); /*0x44c062*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33AB0] + 0x90))(MEMORY[0xB33AB0], 0); /*0x44c076*/
  }
  j = 0; /*0x44c084*/
  v105 = NiTMap_GetAt(&TESForm_FormIDMap, 0x15, &j); /*0x44c088*/
  v106 = v105 != 0 ? (TESForm *)j : 0;
  MEMORY[0xB33AB4] = v106; /*0x44c097*/
  if ( !v106 ) /*0x44c09c*/
  {
    v107 = (TESWaterForm *)FormHeapAlloc(0xDCu); /*0x44c0a7*/
    j = v107; /*0x44c0af*/
    v164 = 0x1A; /*0x44c0b5*/
    if ( v107 ) /*0x44c0c0*/
      v108 = (TESForm *)TESObjectCLOT::TESObjectCLOT((TESObjectCLOT *)v107); /*0x44c0c4*/
    else
      v108 = 0; /*0x44c0cb*/
    v164 = 0xFFFFFFFF; /*0x44c0d3*/
    MEMORY[0xB33AB4] = v108; /*0x44c0da*/
    TESForm_SetFormID(v108, 0x15, 1); /*0x44c0df*/
    MEMORY[0xB33AB4]->vtbl->SetEditorID(MEMORY[0xB33AB4], "JailPants"); /*0x44c0f7*/
    TESBipedModelForm_SetWorldModelPath( /*0x44c108*/
      &MEMORY[0xB33AB4][3].member.modlist.next,
      0,
      (int)"Clothes\\LowerClass\\05\\M\\Pants_gnd.NIF");
    TESBipedModelForm_SetWorldModelPath( /*0x44c11d*/
      &MEMORY[0xB33AB4][3].member.modlist.next,
      1,
      (int)"Clothes\\LowerClass\\05\\F\\Pants_gnd.NIF");
    TESBipedModelForm_SetModelPath( /*0x44c131*/
      &MEMORY[0xB33AB4][3].member.modlist.next,
      0,
      (int)"Clothes\\LowerClass\\05\\M\\Pants.NIF");
    TESBipedModelForm_SetModelPath( /*0x44c146*/
      &MEMORY[0xB33AB4][3].member.modlist.next,
      1,
      (int)"Clothes\\LowerClass\\05\\F\\Pants.NIF");
    TESBipedModelForm_SetCoversBipedSlot(&MEMORY[0xB33AB4][3].member.modlist.next, 2, 0); /*0x44c157*/
    TESBipedModelForm_SetCoversBipedSlot(&MEMORY[0xB33AB4][3].member.modlist.next, 3, 1); /*0x44c169*/
    TESObjectListHead_AddObject((_DWORD *)*this, MEMORY[0xB33AB4]); /*0x44c177*/
    MEMORY[0xB33AB4]->vtbl->SetFromActiveFile(MEMORY[0xB33AB4], 0); /*0x44c18b*/
  }
  j = 0; /*0x44c199*/
  v109 = NiTMap_GetAt(&TESForm_FormIDMap, 0x16, &j); /*0x44c19d*/
  v110 = v109 != 0 ? j : 0;
  MEMORY[0xB33AB8] = (int)v110; /*0x44c1ac*/
  if ( !v110 ) /*0x44c1b1*/
  {
    v111 = (TESWaterForm *)FormHeapAlloc(0xDCu); /*0x44c1bc*/
    j = v111; /*0x44c1c4*/
    v164 = 0x1B; /*0x44c1ca*/
    if ( v111 ) /*0x44c1d5*/
      v112 = (TESForm *)TESObjectCLOT::TESObjectCLOT((TESObjectCLOT *)v111); /*0x44c1d9*/
    else
      v112 = 0; /*0x44c1e0*/
    v164 = 0xFFFFFFFF; /*0x44c1e8*/
    MEMORY[0xB33AB8] = (int)v112; /*0x44c1ef*/
    TESForm_SetFormID(v112, 0x16, 1); /*0x44c1f4*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33AB8] + 0xD8))(MEMORY[0xB33AB8], "JailShoes"); /*0x44c20c*/
    TESBipedModelForm_SetWorldModelPath( /*0x44c21d*/
      (_DWORD *)(MEMORY[0xB33AB8] + 0x5C),
      0,
      (int)"Clothes\\LowerClass\\05\\M\\Shoes_gnd.NIF");
    TESBipedModelForm_SetWorldModelPath( /*0x44c232*/
      (_DWORD *)(MEMORY[0xB33AB8] + 0x5C),
      1,
      (int)"Clothes\\LowerClass\\05\\F\\Shoes_gnd.NIF");
    TESBipedModelForm_SetModelPath((_DWORD *)(MEMORY[0xB33AB8] + 0x5C), 0, (int)"Clothes\\LowerClass\\05\\M\\Shoes.NIF"); /*0x44c246*/
    TESBipedModelForm_SetModelPath((_DWORD *)(MEMORY[0xB33AB8] + 0x5C), 1, (int)"Clothes\\LowerClass\\05\\F\\Shoes.NIF"); /*0x44c25b*/
    TESBipedModelForm_SetCoversBipedSlot((_WORD *)(MEMORY[0xB33AB8] + 0x5C), 2, 0); /*0x44c26c*/
    TESBipedModelForm_SetCoversBipedSlot((_WORD *)(MEMORY[0xB33AB8] + 0x5C), 3, 0); /*0x44c27d*/
    TESBipedModelForm_SetCoversBipedSlot((_WORD *)(MEMORY[0xB33AB8] + 0x5C), 5, 1); /*0x44c28f*/
    TESObjectListHead_AddObject((_DWORD *)*this, (_DWORD *)MEMORY[0xB33AB8]); /*0x44c29d*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33AB8] + 0x90))(MEMORY[0xB33AB8], 0); /*0x44c2b1*/
  }
  for ( i = 0; i < 0x15; ++i ) /*0x44c2b3*/
  {
    v114 = dword_B067C0[i]; /*0x44c2b5*/
    if ( v114 ) /*0x44c2bd*/
    {
      j = 0; /*0x44c2ca*/
      if ( NiTMap_GetAt(&TESForm_FormIDMap, v114, &j) ) /*0x44c2ce*/
      {
        if ( j ) /*0x44c2db*/
          continue; /*0x44c2db*/
      }
    }
    v115 = (TESWaterForm *)FormHeapAlloc(0x3Cu); /*0x44c2df*/
    j = v115; /*0x44c2e7*/
    v164 = 0x1C; /*0x44c2ed*/
    if ( v115 ) /*0x44c2f8*/
      v116 = (TESForm *)TESObjectSTAT::TESObjectSTAT((TESObjectSTAT *)v115); /*0x44c301*/
    else
      v116 = 0; /*0x44c305*/
    v159 = dword_B067C0[i]; /*0x44c30f*/
    v164 = 0xFFFFFFFF; /*0x44c312*/
    TESForm_SetFormID(v116, v159, 1); /*0x44c31d*/
    v116->vtbl->SetEditorID(v116, off_B06818[i]); /*0x44c333*/
    TESObjectListHead_AddObject((_DWORD *)*this, v116); /*0x44c338*/
    v116->vtbl->SetFromActiveFile(v116, 0); /*0x44c348*/
  }
  a2[0] = 0x64; /*0x44c356*/
  a2[1] = 0x65; /*0x44c35e*/
  a2[2] = 0x66; /*0x44c366*/
  a2[3] = 0x67; /*0x44c36e*/
  a2[4] = 0x68; /*0x44c376*/
  a2[5] = 0x69; /*0x44c37e*/
  a2[6] = 0x6A; /*0x44c386*/
  a2[7] = 0x6B; /*0x44c38e*/
  a2[8] = 0x6C; /*0x44c396*/
  a2[9] = 0x6D; /*0x44c39e*/
  a2[0xA] = 0x6E; /*0x44c3a6*/
  a2[0xB] = 0x6F; /*0x44c3ae*/
  a2[0xC] = 0x70; /*0x44c3b6*/
  a2[0xD] = 0x71; /*0x44c3be*/
  a2[0xE] = 0x72; /*0x44c3c6*/
  a2[0xF] = 0x73; /*0x44c3ce*/
  a2[0x10] = 0x74; /*0x44c3d6*/
  a2[0x11] = 0x75; /*0x44c3de*/
  a2[0x12] = 0x76; /*0x44c3e6*/
  a2[0x13] = 0x77; /*0x44c3ee*/
  v163[0] = "FurnitureMarker01"; /*0x44c3f6*/
  v163[1] = "FurnitureMarker02"; /*0x44c3fe*/
  v163[2] = "FurnitureMarker03"; /*0x44c406*/
  v163[3] = "FurnitureMarker04"; /*0x44c40e*/
  v163[4] = "FurnitureMarker05"; /*0x44c416*/
  v163[5] = "FurnitureMarker06"; /*0x44c41e*/
  v163[6] = "FurnitureMarker07"; /*0x44c429*/
  v163[7] = "FurnitureMarker08"; /*0x44c434*/
  v163[8] = "FurnitureMarker09"; /*0x44c43f*/
  v163[9] = "FurnitureMarker10"; /*0x44c44a*/
  v163[0xA] = "FurnitureMarker11"; /*0x44c455*/
  v163[0xB] = "FurnitureMarker12"; /*0x44c460*/
  v163[0xC] = "FurnitureMarker13"; /*0x44c46b*/
  v163[0xD] = "FurnitureMarker14"; /*0x44c476*/
  v163[0xE] = "FurnitureMarker15"; /*0x44c481*/
  v163[0xF] = "FurnitureMarker16"; /*0x44c48c*/
  v163[0x10] = "FurnitureMarker17"; /*0x44c497*/
  v163[0x11] = "FurnitureMarker18"; /*0x44c4a2*/
  v163[0x12] = "FurnitureMarker19"; /*0x44c4ad*/
  v163[0x13] = "FurnitureMarker20"; /*0x44c4b8*/
  for ( j = 0; (int)j < 0x50; j = (TESWaterForm *)((char *)j + 4) ) /*0x44c4c3*/
  {
    v117 = *(int *)((char *)a2 + (_DWORD)j); /*0x44c4d4*/
    if ( !v117 ) /*0x44c4da*/
      goto LABEL_163; /*0x44c4da*/
    v118 = *(_DWORD **)(MEMORY[0xB06144] /*0x44c4f3*/
                      + 4
                      * (*(int (__thiscall **)(_DWORD *, _DWORD))(TESForm_FormIDMap + 4))(
                          &TESForm_FormIDMap,
                          *(int *)((char *)a2 + (_DWORD)j)));
    if ( !v118 ) /*0x44c4f8*/
      goto LABEL_163; /*0x44c4f8*/
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))( /*0x44c516*/
               &TESForm_FormIDMap,
               v117,
               v118[1]) )
    {
      v118 = (_DWORD *)*v118; /*0x44c518*/
      if ( !v118 ) /*0x44c51c*/
        goto LABEL_163; /*0x44c51c*/
    }
    if ( !v118[2] ) /*0x44c520*/
    {
LABEL_163:
      v119 = (TESObjectSTAT *)FormHeapAlloc(0x3Cu); /*0x44c525*/
      v161 = v119; /*0x44c52f*/
      v164 = 0x1D; /*0x44c535*/
      if ( v119 ) /*0x44c540*/
        v120 = (TESForm *)TESObjectSTAT::TESObjectSTAT(v119); /*0x44c549*/
      else
        v120 = 0; /*0x44c54d*/
      v164 = 0xFFFFFFFF; /*0x44c554*/
      TESForm_SetFormID(v120, v117, 1); /*0x44c55f*/
      v120->vtbl->SetEditorID(v120, *(const char **)((char *)v163 + (_DWORD)j)); /*0x44c577*/
      TESObjectListHead_AddObject((_DWORD *)*this, v120); /*0x44c57c*/
      v120->vtbl->SetFromActiveFile(v120, 0); /*0x44c58c*/
    }
  }
  InitializeStockDialogueTopics();              // TESDataHandler built-in-object creation initializes the complete fixed stock-dialogue registry before normal dialogue use, guaranteeing GREETING/HELLO/ANY/GOODBYE/INFO GENERAL and the remaining stock topics exist by fixed FormID. /*0x44c5a2*/
  v121 = *(_DWORD **)(MEMORY[0xB06144] /*0x44c5bf*/
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 0x35));
  if ( !v121 ) /*0x44c5c4*/
    goto LABEL_173; /*0x44c5c4*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))( /*0x44c5dd*/
             &TESForm_FormIDMap,
             0x35,
             v121[1]) )
  {
    v121 = (_DWORD *)*v121; /*0x44c5df*/
    if ( !v121 ) /*0x44c5e3*/
      goto LABEL_173; /*0x44c5e3*/
  }
  if ( !v121[2] ) /*0x44c5e7*/
  {
LABEL_173:
    v122 = (TESGlobal *)FormHeapAlloc(0x28u); /*0x44c5f0*/
    v161 = v122; /*0x44c5fa*/
    v164 = 0x1E; /*0x44c600*/
    if ( v122 ) /*0x44c60b*/
      v123 = TESGlobal::TESGlobal(v122); /*0x44c614*/
    else
      v123 = 0; /*0x44c618*/
    v164 = 0xFFFFFFFF; /*0x44c623*/
    TESForm_SetFormID((TESForm *)v123, 0x35, 1); /*0x44c62a*/
    v123->vtbl->SetEditorID((TESForm *)v123, "GameYear"); /*0x44c63e*/
    v123->data = flt_A2F940; /*0x44c646*/
    if ( *(this + 0x1D) ) /*0x44c649*/
    {
      v124 = (_DWORD *)FormHeapAlloc(8u); /*0x44c650*/
      if ( v124 ) /*0x44c65a*/
      {
        *v124 = *(this + 0x1D); /*0x44c65f*/
        v124[1] = 0; /*0x44c661*/
      }
      else
      {
        v124 = 0; /*0x44c666*/
      }
      v124[1] = *(this + 0x1E); /*0x44c66b*/
      *(this + 0x1E) = (int)v124; /*0x44c66e*/
    }
    *(this + 0x1D) = (int)v123; /*0x44c67c*/
    sub_412D30(&off_B06164, (int)"GameYear", (TESForm *)v123); /*0x44c67f*/
  }
  v125 = *(_DWORD **)(MEMORY[0xB06144] /*0x44c6a0*/
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 0x36));
  if ( !v125 ) /*0x44c6a5*/
    goto LABEL_187; /*0x44c6a5*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))( /*0x44c6be*/
             &TESForm_FormIDMap,
             0x36,
             v125[1]) )
  {
    v125 = (_DWORD *)*v125; /*0x44c6c0*/
    if ( !v125 ) /*0x44c6c4*/
      goto LABEL_187; /*0x44c6c4*/
  }
  if ( !v125[2] ) /*0x44c6c8*/
  {
LABEL_187:
    v126 = (TESGlobal *)FormHeapAlloc(0x28u); /*0x44c6d1*/
    v161 = v126; /*0x44c6db*/
    v164 = 0x1F; /*0x44c6e1*/
    if ( v126 ) /*0x44c6ec*/
      v127 = TESGlobal::TESGlobal(v126); /*0x44c6f5*/
    else
      v127 = 0; /*0x44c6f9*/
    v164 = 0xFFFFFFFF; /*0x44c701*/
    TESForm_SetFormID((TESForm *)v127, 0x36, 1); /*0x44c708*/
    v127->vtbl->SetEditorID((TESForm *)v127, "GameMonth"); /*0x44c71c*/
    v127->data = flt_A37CFC; /*0x44c724*/
    if ( *(this + 0x1D) ) /*0x44c727*/
    {
      v128 = (_DWORD *)FormHeapAlloc(8u); /*0x44c72e*/
      if ( v128 ) /*0x44c738*/
      {
        *v128 = *(this + 0x1D); /*0x44c73d*/
        v128[1] = 0; /*0x44c73f*/
      }
      else
      {
        v128 = 0; /*0x44c744*/
      }
      v128[1] = *(this + 0x1E); /*0x44c749*/
      *(this + 0x1E) = (int)v128; /*0x44c74c*/
    }
    *(this + 0x1D) = (int)v127; /*0x44c75a*/
    sub_412D30(&off_B06164, (int)"GameMonth", (TESForm *)v127); /*0x44c75d*/
  }
  v129 = *(_DWORD **)(MEMORY[0xB06144] /*0x44c779*/
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 0x37));
  if ( !v129 ) /*0x44c77e*/
    goto LABEL_201; /*0x44c77e*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))( /*0x44c797*/
             &TESForm_FormIDMap,
             0x37,
             v129[1]) )
  {
    v129 = (_DWORD *)*v129; /*0x44c799*/
    if ( !v129 ) /*0x44c79d*/
      goto LABEL_201; /*0x44c79d*/
  }
  if ( !v129[2] ) /*0x44c7a1*/
  {
LABEL_201:
    v130 = (TESGlobal *)FormHeapAlloc(0x28u); /*0x44c7aa*/
    v161 = v130; /*0x44c7b4*/
    v164 = 0x20; /*0x44c7ba*/
    if ( v130 ) /*0x44c7c5*/
      v131 = TESGlobal::TESGlobal(v130); /*0x44c7ce*/
    else
      v131 = 0; /*0x44c7d2*/
    v164 = 0xFFFFFFFF; /*0x44c7da*/
    TESForm_SetFormID((TESForm *)v131, 0x37, 1); /*0x44c7e1*/
    v131->vtbl->SetEditorID((TESForm *)v131, "GameDay"); /*0x44c7f5*/
    v131->data = flt_A2F944; /*0x44c7fd*/
    if ( *(this + 0x1D) ) /*0x44c800*/
    {
      v132 = (_DWORD *)FormHeapAlloc(8u); /*0x44c807*/
      if ( v132 ) /*0x44c811*/
      {
        *v132 = *(this + 0x1D); /*0x44c816*/
        v132[1] = 0; /*0x44c818*/
      }
      else
      {
        v132 = 0; /*0x44c81d*/
      }
      v132[1] = *(this + 0x1E); /*0x44c822*/
      *(this + 0x1E) = (int)v132; /*0x44c825*/
    }
    *(this + 0x1D) = (int)v131; /*0x44c833*/
    sub_412D30(&off_B06164, (int)"GameDay", (TESForm *)v131); /*0x44c836*/
  }
  v133 = *(_DWORD **)(MEMORY[0xB06144] /*0x44c852*/
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 0x38));
  if ( !v133 ) /*0x44c857*/
    goto LABEL_215; /*0x44c857*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))( /*0x44c877*/
             &TESForm_FormIDMap,
             0x38,
             v133[1]) )
  {
    v133 = (_DWORD *)*v133; /*0x44c879*/
    if ( !v133 ) /*0x44c87d*/
      goto LABEL_215; /*0x44c87d*/
  }
  if ( !v133[2] ) /*0x44c881*/
  {
LABEL_215:
    v134 = (TESGlobal *)FormHeapAlloc(0x28u); /*0x44c88a*/
    v161 = v134; /*0x44c894*/
    v164 = 0x21; /*0x44c89a*/
    if ( v134 ) /*0x44c8a5*/
      v135 = TESGlobal::TESGlobal(v134); /*0x44c8ae*/
    else
      v135 = 0; /*0x44c8b2*/
    v164 = 0xFFFFFFFF; /*0x44c8ba*/
    TESForm_SetFormID((TESForm *)v135, 0x38, 1); /*0x44c8c1*/
    v135->vtbl->SetEditorID((TESForm *)v135, "GameHour"); /*0x44c8d5*/
    v135->data = flt_A2F918; /*0x44c8dd*/
    if ( *(this + 0x1D) ) /*0x44c8e0*/
    {
      v136 = (_DWORD *)FormHeapAlloc(8u); /*0x44c8e7*/
      if ( v136 ) /*0x44c8f1*/
      {
        *v136 = *(this + 0x1D); /*0x44c8f6*/
        v136[1] = 0; /*0x44c8f8*/
      }
      else
      {
        v136 = 0; /*0x44c8fd*/
      }
      v136[1] = *(this + 0x1E); /*0x44c902*/
      *(this + 0x1E) = (int)v136; /*0x44c905*/
    }
    *(this + 0x1D) = (int)v135; /*0x44c913*/
    sub_412D30(&off_B06164, (int)"GameHour", (TESForm *)v135); /*0x44c916*/
  }
  v137 = *(_DWORD **)(MEMORY[0xB06144] /*0x44c932*/
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 0x39));
  if ( !v137 ) /*0x44c937*/
    goto LABEL_229; /*0x44c937*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))( /*0x44c957*/
             &TESForm_FormIDMap,
             0x39,
             v137[1]) )
  {
    v137 = (_DWORD *)*v137; /*0x44c959*/
    if ( !v137 ) /*0x44c95d*/
      goto LABEL_229; /*0x44c95d*/
  }
  if ( !v137[2] ) /*0x44c961*/
  {
LABEL_229:
    v138 = (TESGlobal *)FormHeapAlloc(0x28u); /*0x44c96a*/
    v161 = v138; /*0x44c974*/
    v164 = 0x22; /*0x44c97a*/
    if ( v138 ) /*0x44c985*/
      v139 = TESGlobal::TESGlobal(v138); /*0x44c98e*/
    else
      v139 = 0; /*0x44c992*/
    v164 = 0xFFFFFFFF; /*0x44c99a*/
    TESForm_SetFormID((TESForm *)v139, 0x39, 1); /*0x44c9a1*/
    v139->vtbl->SetEditorID((TESForm *)v139, "GameDaysPassed"); /*0x44c9b5*/
    v139->data = 1.0; /*0x44c9b9*/
    if ( *(this + 0x1D) ) /*0x44c9bc*/
    {
      v140 = (_DWORD *)FormHeapAlloc(8u); /*0x44c9c3*/
      if ( v140 ) /*0x44c9cd*/
      {
        *v140 = *(this + 0x1D); /*0x44c9d2*/
        v140[1] = 0; /*0x44c9d4*/
      }
      else
      {
        v140 = 0; /*0x44c9d9*/
      }
      v140[1] = *(this + 0x1E); /*0x44c9de*/
      *(this + 0x1E) = (int)v140; /*0x44c9e1*/
    }
    *(this + 0x1D) = (int)v139; /*0x44c9ef*/
    sub_412D30(&off_B06164, (int)"GameDaysPassed", (TESForm *)v139); /*0x44c9f2*/
  }
  v141 = *(_DWORD **)(MEMORY[0xB06144] /*0x44ca0e*/
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 0x3A));
  if ( !v141 ) /*0x44ca13*/
    goto LABEL_243; /*0x44ca13*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))( /*0x44ca2c*/
             &TESForm_FormIDMap,
             0x3A,
             v141[1]) )
  {
    v141 = (_DWORD *)*v141; /*0x44ca2e*/
    if ( !v141 ) /*0x44ca32*/
      goto LABEL_243; /*0x44ca32*/
  }
  if ( !v141[2] ) /*0x44ca36*/
  {
LABEL_243:
    v142 = (TESGlobal *)FormHeapAlloc(0x28u); /*0x44ca3f*/
    v161 = v142; /*0x44ca49*/
    v164 = 0x23; /*0x44ca4f*/
    if ( v142 ) /*0x44ca5a*/
      v143 = TESGlobal::TESGlobal(v142); /*0x44ca63*/
    else
      v143 = 0; /*0x44ca67*/
    v164 = 0xFFFFFFFF; /*0x44ca6f*/
    TESForm_SetFormID((TESForm *)v143, 0x3A, 1); /*0x44ca76*/
    v143->vtbl->SetEditorID((TESForm *)v143, "TimeScale"); /*0x44ca8a*/
    v143->data = flt_A37CC8; /*0x44ca92*/
    if ( *(this + 0x1D) ) /*0x44ca95*/
    {
      v144 = (_DWORD *)FormHeapAlloc(8u); /*0x44ca9c*/
      if ( v144 ) /*0x44caa6*/
      {
        *v144 = *(this + 0x1D); /*0x44caab*/
        v144[1] = 0; /*0x44caad*/
      }
      else
      {
        v144 = 0; /*0x44cab2*/
      }
      v144[1] = *(this + 0x1E); /*0x44cab7*/
      *(this + 0x1E) = (int)v144; /*0x44caba*/
    }
    *(this + 0x1D) = (int)v143; /*0x44cac8*/
    sub_412D30(&off_B06164, (int)"TimeScale", (TESForm *)v143); /*0x44cacb*/
  }
  v145 = *(_DWORD **)(MEMORY[0xB06144] /*0x44cae7*/
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 7));
  if ( v145 ) /*0x44caec*/
  {
    while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))( /*0x44cb07*/
               &TESForm_FormIDMap,
               7,
               v145[1]) )
    {
      v145 = (_DWORD *)*v145; /*0x44cb09*/
      if ( !v145 ) /*0x44cb0d*/
        goto LABEL_255; /*0x44cb0d*/
    }
    v146 = (void *)v145[2]; /*0x44cb55*/
  }
  else
  {
LABEL_255:
    v146 = 0; /*0x44cb0f*/
  }
  if ( !OblivionDynamicCast( /*0x44cb1e*/
          v146,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESNPC `RTTI Type Descriptor',
          0) )
  {
    v147 = (TESForm *)FormHeapAlloc(0x200u); /*0x44cb2f*/
    v161 = v147; /*0x44cb37*/
    v164 = 0x24; /*0x44cb3d*/
    if ( v147 ) /*0x44cb48*/
      v148 = TESNPC_constr(v147); /*0x44cb51*/
    else
      v148 = 0; /*0x44cb5a*/
    v164 = 0xFFFFFFFF; /*0x44cb62*/
    TESForm_SetFormID(v148, 7, 1); /*0x44cb69*/
    v148->vtbl->SetEditorID(v148, "Player"); /*0x44cb7d*/
    TESObjectListHead_AddObject((_DWORD *)*this, v148); /*0x44cb82*/
    v148->vtbl->SetFromActiveFile(v148, 0); /*0x44cb92*/
  }
  v149 = *(_DWORD **)(MEMORY[0xB06144] /*0x44cbae*/
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 0x15E));
  if ( !v149 ) /*0x44cbb3*/
    goto LABEL_267; /*0x44cbb3*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))( /*0x44cbcf*/
             &TESForm_FormIDMap,
             0x15E,
             v149[1]) )
  {
    v149 = (_DWORD *)*v149; /*0x44cbd1*/
    if ( !v149 ) /*0x44cbd5*/
      goto LABEL_267; /*0x44cbd5*/
  }
  if ( !v149[2] ) /*0x44cbd9*/
  {
LABEL_267:
    v150 = (TESWeather *)FormHeapAlloc(0x148u); /*0x44cbe2*/
    v161 = v150; /*0x44cbef*/
    v164 = 0x25; /*0x44cbf5*/
    if ( v150 ) /*0x44cc00*/
      v151 = (TESForm *)TESWeather::TESWeather(v150); /*0x44cc09*/
    else
      v151 = 0; /*0x44cc0d*/
    v164 = 0xFFFFFFFF; /*0x44cc18*/
    TESForm_SetFormID(v151, 0x15E, 1); /*0x44cc1f*/
    v151->vtbl->SetEditorID(v151, "DefaultWeather"); /*0x44cc33*/
    sub_4EE8C0((unsigned int *)v151); /*0x44cc37*/
    if ( *(this + 7) ) /*0x44cc3c*/
    {
      v152 = (_DWORD *)FormHeapAlloc(8u); /*0x44cc43*/
      if ( v152 ) /*0x44cc4d*/
      {
        *v152 = *(this + 7); /*0x44cc52*/
        v152[1] = 0; /*0x44cc54*/
      }
      else
      {
        v152 = 0; /*0x44cc59*/
      }
      v152[1] = *(this + 8); /*0x44cc5e*/
      *(this + 8) = (int)v152; /*0x44cc61*/
    }
    *(this + 7) = (int)v151; /*0x44cc64*/
  }
  v153 = *(_DWORD **)(MEMORY[0xB06144] /*0x44cc81*/
                    + 4 * (*(int (__thiscall **)(_DWORD *, int))(TESForm_FormIDMap + 4))(&TESForm_FormIDMap, 0x15F));
  if ( !v153 ) /*0x44cc86*/
    goto LABEL_281; /*0x44cc86*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(TESForm_FormIDMap + 8))( /*0x44ccaa*/
             &TESForm_FormIDMap,
             0x15F,
             v153[1]) )
  {
    v153 = (_DWORD *)*v153; /*0x44ccac*/
    if ( !v153 ) /*0x44ccb0*/
      goto LABEL_281; /*0x44ccb0*/
  }
  if ( !v153[2] ) /*0x44ccb4*/
  {
LABEL_281:
    v154 = (TESClimate *)FormHeapAlloc(0x58u); /*0x44ccbd*/
    v161 = v154; /*0x44ccc7*/
    v164 = 0x26; /*0x44cccd*/
    if ( v154 ) /*0x44ccd8*/
      v155 = (TESForm *)TESClimate_ctor(v154); /*0x44cce1*/
    else
      v155 = 0; /*0x44cce5*/
    v164 = 0xFFFFFFFF; /*0x44ccf0*/
    TESForm_SetFormID(v155, 0x15F, 1); /*0x44ccf7*/
    v155->vtbl->SetEditorID(v155, "DefaultClimate"); /*0x44cd0b*/
    TESClimate_MakeDefault((unsigned int *)v155); /*0x44cd0f*/
    if ( *(this + 5) ) /*0x44cd14*/
    {
      v156 = (_DWORD *)FormHeapAlloc(8u); /*0x44cd1b*/
      if ( v156 ) /*0x44cd25*/
      {
        *v156 = *(this + 5); /*0x44cd2a*/
        v156[1] = 0; /*0x44cd2c*/
      }
      else
      {
        v156 = 0; /*0x44cd31*/
      }
      v156[1] = *(this + 6); /*0x44cd36*/
      *(this + 6) = (int)v156; /*0x44cd39*/
    }
    *(this + 5) = (int)v155; /*0x44cd3c*/
  }
  GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x44cd42*/
  Sky_SetClimateAndRefreshChildren(GlobalObject, 0, 1);// Verified initialization path: after TESDataHandler_CreateBuiltinObjects registers the default Climate in climateList +0x14, it calls Sky_CreateOrGetGlobalObject then Sky_SetClimateAndRefreshChildren(defaultClimate, forceRefresh=1). /*0x44cd49*/
  Magic_ConstructGlobalData(); /*0x44cd4e*/
  return TESSound_CreateGlobalSounds(); /*0x44cd58*/
}
