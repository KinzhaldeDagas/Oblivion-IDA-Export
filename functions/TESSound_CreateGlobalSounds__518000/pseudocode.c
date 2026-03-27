TESForm *__cdecl TESSound_CreateGlobalSounds()
{
  TESForm *v0; // eax
  ScriptRunner *v1; // eax
  TESSound *v2; // eax
  ScriptRunner *v3; // eax
  TESForm *v4; // eax
  ScriptRunner *v5; // eax
  TESSound *v6; // eax
  ScriptRunner *v7; // eax
  TESForm *v8; // eax
  ScriptRunner *v9; // eax
  TESSound *v10; // eax
  ScriptRunner *v11; // eax
  TESForm *v12; // eax
  ScriptRunner *v13; // eax
  TESSound *v14; // eax
  ScriptRunner *v15; // eax
  TESForm *v16; // eax
  ScriptRunner *v17; // eax
  TESSound *v18; // eax
  ScriptRunner *v19; // eax
  TESForm *v20; // eax
  ScriptRunner *v21; // eax
  TESSound *v22; // eax
  ScriptRunner *v23; // eax
  TESForm *v24; // eax
  ScriptRunner *v25; // eax
  TESSound *v26; // eax
  ScriptRunner *v27; // eax
  TESForm *v28; // eax
  ScriptRunner *v29; // eax
  TESSound *v30; // eax
  ScriptRunner *v31; // eax
  TESForm *v32; // eax
  ScriptRunner *v33; // eax
  TESSound *v34; // eax
  ScriptRunner *v35; // eax
  TESForm *v36; // eax
  ScriptRunner *v37; // eax
  TESSound *v38; // eax
  ScriptRunner *v39; // eax
  TESForm *v40; // eax
  ScriptRunner *v41; // eax
  TESSound *v42; // eax
  ScriptRunner *v43; // eax
  TESForm *v44; // eax
  ScriptRunner *v45; // eax
  TESSound *v46; // eax
  ScriptRunner *v47; // eax
  TESForm *v48; // eax
  ScriptRunner *v49; // eax
  TESSound *v50; // eax
  ScriptRunner *v51; // eax
  TESForm *v52; // eax
  ScriptRunner *v53; // eax
  TESSound *v54; // eax
  ScriptRunner *v55; // eax
  TESForm *v56; // eax
  ScriptRunner *v57; // eax
  TESSound *v58; // eax
  ScriptRunner *v59; // eax
  TESForm *v60; // eax
  ScriptRunner *v61; // eax
  TESSound *v62; // eax
  ScriptRunner *v63; // eax
  TESForm *v64; // eax
  ScriptRunner *v65; // eax
  TESSound *v66; // eax
  ScriptRunner *v67; // eax
  TESForm *v68; // eax
  ScriptRunner *v69; // eax
  TESSound *v70; // eax
  ScriptRunner *v71; // eax
  TESForm *v72; // eax
  ScriptRunner *v73; // eax
  TESSound *v74; // eax
  ScriptRunner *v75; // eax
  TESForm *v76; // eax
  ScriptRunner *v77; // eax
  TESSound *v78; // eax
  ScriptRunner *v79; // eax
  TESForm *v80; // eax
  ScriptRunner *v81; // eax
  TESSound *v82; // eax
  ScriptRunner *v83; // eax
  TESForm *v84; // eax
  ScriptRunner *v85; // eax
  TESSound *v86; // eax
  ScriptRunner *v87; // eax
  TESForm *v88; // eax
  ScriptRunner *v89; // eax
  TESSound *v90; // eax
  ScriptRunner *v91; // eax
  TESForm *v92; // eax
  ScriptRunner *v93; // eax
  TESSound *v94; // eax
  ScriptRunner *v95; // eax
  TESForm *v96; // eax
  TESForm *result; // eax
  TESSound *v98; // eax
  ScriptRunner *v99; // eax

  v0 = TESDataHandler_LookupFormByID((TESForm *)0x212);
  v1 = (ScriptRunner *)OblivionDynamicCast(
                         v0,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         &TESSound `RTTI Type Descriptor',
                         0);
  *(&stru_B36208 + 4) = v1;
  if ( !v1 )
  {
    v2 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v2 )
      v3 = (ScriptRunner *)TESSound::TESSound(v2);
    else
      v3 = 0;
    *(&stru_B36208 + 4) = v3;
    TESForm_SetFormID((TESForm *)v3, 0x212, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 4))->unk00 + 0xD8))(
      *(&stru_B36208 + 4),
      "FootSoundDirt");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 4))->unk00 + 0x90))(*(&stru_B36208 + 4), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 4));
    sub_412D30(&off_B06164, (int)"FootSoundDirt", (TESForm *)*(&stru_B36208 + 4));
  }
  v4 = TESDataHandler_LookupFormByID((TESForm *)0x22B);
  v5 = (ScriptRunner *)OblivionDynamicCast(
                         v4,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         &TESSound `RTTI Type Descriptor',
                         0);
  *(&stru_B36208 + 6) = v5;
  if ( !v5 )
  {
    v6 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v6 )
      v7 = (ScriptRunner *)TESSound::TESSound(v6);
    else
      v7 = 0;
    *(&stru_B36208 + 6) = v7;
    TESForm_SetFormID((TESForm *)v7, 0x22B, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 6))->unk00 + 0xD8))(
      *(&stru_B36208 + 6),
      "FSTMetal");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 6))->unk00 + 0x90))(*(&stru_B36208 + 6), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 6));
    sub_412D30(&off_B06164, (int)"FSTMetal", (TESForm *)*(&stru_B36208 + 6));
  }
  v8 = TESDataHandler_LookupFormByID((TESForm *)0x213);
  v9 = (ScriptRunner *)OblivionDynamicCast(
                         v8,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         &TESSound `RTTI Type Descriptor',
                         0);
  *(&stru_B36208 + 5) = v9;
  if ( !v9 )
  {
    v10 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v10 )
      v11 = (ScriptRunner *)TESSound::TESSound(v10);
    else
      v11 = 0;
    *(&stru_B36208 + 5) = v11;
    TESForm_SetFormID((TESForm *)v11, 0x213, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 5))->unk00 + 0xD8))(
      *(&stru_B36208 + 5),
      "FootSoundGrass");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 5))->unk00 + 0x90))(*(&stru_B36208 + 5), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 5));
    sub_412D30(&off_B06164, (int)"FootSoundGrass", (TESForm *)*(&stru_B36208 + 5));
  }
  v12 = TESDataHandler_LookupFormByID((TESForm *)0x214);
  v13 = (ScriptRunner *)OblivionDynamicCast(
                          v12,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 7) = v13;
  if ( !v13 )
  {
    v14 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v14 )
      v15 = (ScriptRunner *)TESSound::TESSound(v14);
    else
      v15 = 0;
    *(&stru_B36208 + 7) = v15;
    TESForm_SetFormID((TESForm *)v15, 0x214, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 7))->unk00 + 0xD8))(
      *(&stru_B36208 + 7),
      "FootSoundStone");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 7))->unk00 + 0x90))(*(&stru_B36208 + 7), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 7));
    sub_412D30(&off_B06164, (int)"FootSoundStone", (TESForm *)*(&stru_B36208 + 7));
  }
  v16 = TESDataHandler_LookupFormByID((TESForm *)0x215);
  v17 = (ScriptRunner *)OblivionDynamicCast(
                          v16,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 8) = v17;
  if ( !v17 )
  {
    v18 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v18 )
      v19 = (ScriptRunner *)TESSound::TESSound(v18);
    else
      v19 = 0;
    *(&stru_B36208 + 8) = v19;
    TESForm_SetFormID((TESForm *)v19, 0x215, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 8))->unk00 + 0xD8))(
      *(&stru_B36208 + 8),
      "FootSoundWater");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 8))->unk00 + 0x90))(*(&stru_B36208 + 8), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 8));
    sub_412D30(&off_B06164, (int)"FootSoundWater", (TESForm *)*(&stru_B36208 + 8));
  }
  v20 = TESDataHandler_LookupFormByID((TESForm *)0x216);
  v21 = (ScriptRunner *)OblivionDynamicCast(
                          v20,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 9) = v21;
  if ( !v21 )
  {
    v22 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v22 )
      v23 = (ScriptRunner *)TESSound::TESSound(v22);
    else
      v23 = 0;
    *(&stru_B36208 + 9) = v23;
    TESForm_SetFormID((TESForm *)v23, 0x216, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 9))->unk00 + 0xD8))(
      *(&stru_B36208 + 9),
      "FootSoundWood");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 9))->unk00 + 0x90))(*(&stru_B36208 + 9), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 9));
    sub_412D30(&off_B06164, (int)"FootSoundWood", (TESForm *)*(&stru_B36208 + 9));
  }
  v24 = TESDataHandler_LookupFormByID((TESForm *)0x21F);
  v25 = (ScriptRunner *)OblivionDynamicCast(
                          v24,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0xA) = v25;
  if ( !v25 )
  {
    v26 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v26 )
      v27 = (ScriptRunner *)TESSound::TESSound(v26);
    else
      v27 = 0;
    *(&stru_B36208 + 0xA) = v27;
    TESForm_SetFormID((TESForm *)v27, 0x21F, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0xA))->unk00 + 0xD8))(
      *(&stru_B36208 + 0xA),
      "FSTSnow");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0xA))->unk00 + 0x90))(*(&stru_B36208 + 0xA), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0xA));
    sub_412D30(&off_B06164, (int)"FSTSnow", (TESForm *)*(&stru_B36208 + 0xA));
  }
  v28 = TESDataHandler_LookupFormByID((TESForm *)0x217);
  v29 = (ScriptRunner *)OblivionDynamicCast(
                          v28,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0xB) = v29;
  if ( !v29 )
  {
    v30 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v30 )
      v31 = (ScriptRunner *)TESSound::TESSound(v30);
    else
      v31 = 0;
    *(&stru_B36208 + 0xB) = v31;
    TESForm_SetFormID((TESForm *)v31, 0x217, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0xB))->unk00 + 0xD8))(
      *(&stru_B36208 + 0xB),
      "FootSoundHeavyArmor");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0xB))->unk00 + 0x90))(*(&stru_B36208 + 0xB), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0xB));
    sub_412D30(&off_B06164, (int)"FootSoundHeavyArmor", (TESForm *)*(&stru_B36208 + 0xB));
  }
  v32 = TESDataHandler_LookupFormByID((TESForm *)0x218);
  v33 = (ScriptRunner *)OblivionDynamicCast(
                          v32,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0xC) = v33;
  if ( !v33 )
  {
    v34 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v34 )
      v35 = (ScriptRunner *)TESSound::TESSound(v34);
    else
      v35 = 0;
    *(&stru_B36208 + 0xC) = v35;
    TESForm_SetFormID((TESForm *)v35, 0x218, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0xC))->unk00 + 0xD8))(
      *(&stru_B36208 + 0xC),
      "FootSoundLightArmor");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0xC))->unk00 + 0x90))(*(&stru_B36208 + 0xC), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0xC));
    sub_412D30(&off_B06164, (int)"FootSoundLightArmor", (TESForm *)*(&stru_B36208 + 0xC));
  }
  v36 = TESDataHandler_LookupFormByID((TESForm *)0x229);
  v37 = (ScriptRunner *)OblivionDynamicCast(
                          v36,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0x1B) = v37;
  if ( !v37 )
  {
    v38 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v38 )
      v39 = (ScriptRunner *)TESSound::TESSound(v38);
    else
      v39 = 0;
    *(&stru_B36208 + 0x1B) = v39;
    TESForm_SetFormID((TESForm *)v39, 0x229, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0x1B))->unk00 + 0xD8))(
      *(&stru_B36208 + 0x1B),
      "FSTArmorHeavySneak");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0x1B))->unk00 + 0x90))(*(&stru_B36208 + 0x1B), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0x1B));
    sub_412D30(&off_B06164, (int)"FSTArmorHeavySneak", (TESForm *)*(&stru_B36208 + 0x1B));
  }
  v40 = TESDataHandler_LookupFormByID((TESForm *)0x228);
  v41 = (ScriptRunner *)OblivionDynamicCast(
                          v40,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0x1C) = v41;
  if ( !v41 )
  {
    v42 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v42 )
      v43 = (ScriptRunner *)TESSound::TESSound(v42);
    else
      v43 = 0;
    *(&stru_B36208 + 0x1C) = v43;
    TESForm_SetFormID((TESForm *)v43, 0x228, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0x1C))->unk00 + 0xD8))(
      *(&stru_B36208 + 0x1C),
      "FSTArmorLightSneak");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0x1C))->unk00 + 0x90))(*(&stru_B36208 + 0x1C), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0x1C));
    sub_412D30(&off_B06164, (int)"FSTArmorLightSneak", (TESForm *)*(&stru_B36208 + 0x1C));
  }
  v44 = TESDataHandler_LookupFormByID((TESForm *)0x219);
  v45 = (ScriptRunner *)OblivionDynamicCast(
                          v44,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0xD) = v45;
  if ( !v45 )
  {
    v46 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v46 )
      v47 = (ScriptRunner *)TESSound::TESSound(v46);
    else
      v47 = 0;
    *(&stru_B36208 + 0xD) = v47;
    TESForm_SetFormID((TESForm *)v47, 0x219, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0xD))->unk00 + 0xD8))(
      *(&stru_B36208 + 0xD),
      "FootSoundEarthLand");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0xD))->unk00 + 0x90))(*(&stru_B36208 + 0xD), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0xD));
    sub_412D30(&off_B06164, (int)"FootSoundEarthLand", (TESForm *)*(&stru_B36208 + 0xD));
  }
  v48 = TESDataHandler_LookupFormByID((TESForm *)0x21A);
  v49 = (ScriptRunner *)OblivionDynamicCast(
                          v48,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0xE) = v49;
  if ( !v49 )
  {
    v50 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v50 )
      v51 = (ScriptRunner *)TESSound::TESSound(v50);
    else
      v51 = 0;
    *(&stru_B36208 + 0xE) = v51;
    TESForm_SetFormID((TESForm *)v51, 0x21A, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0xE))->unk00 + 0xD8))(
      *(&stru_B36208 + 0xE),
      "FootSoundGrassLand");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0xE))->unk00 + 0x90))(*(&stru_B36208 + 0xE), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0xE));
    sub_412D30(&off_B06164, (int)"FootSoundGrassLand", (TESForm *)*(&stru_B36208 + 0xE));
  }
  v52 = TESDataHandler_LookupFormByID((TESForm *)0x21B);
  v53 = (ScriptRunner *)OblivionDynamicCast(
                          v52,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0xF) = v53;
  if ( !v53 )
  {
    v54 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v54 )
      v55 = (ScriptRunner *)TESSound::TESSound(v54);
    else
      v55 = 0;
    *(&stru_B36208 + 0xF) = v55;
    TESForm_SetFormID((TESForm *)v55, 0x21B, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0xF))->unk00 + 0xD8))(
      *(&stru_B36208 + 0xF),
      "FootSoundMetalLand");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0xF))->unk00 + 0x90))(*(&stru_B36208 + 0xF), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0xF));
    sub_412D30(&off_B06164, (int)"FootSoundMetalLand", (TESForm *)*(&stru_B36208 + 0xF));
  }
  v56 = TESDataHandler_LookupFormByID((TESForm *)0x21C);
  v57 = (ScriptRunner *)OblivionDynamicCast(
                          v56,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0x10) = v57;
  if ( !v57 )
  {
    v58 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v58 )
      v59 = (ScriptRunner *)TESSound::TESSound(v58);
    else
      v59 = 0;
    *(&stru_B36208 + 0x10) = v59;
    TESForm_SetFormID((TESForm *)v59, 0x21C, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0x10))->unk00 + 0xD8))(
      *(&stru_B36208 + 0x10),
      "FootSoundStoneLand");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0x10))->unk00 + 0x90))(*(&stru_B36208 + 0x10), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0x10));
    sub_412D30(&off_B06164, (int)"FootSoundStoneLand", (TESForm *)*(&stru_B36208 + 0x10));
  }
  v60 = TESDataHandler_LookupFormByID((TESForm *)0x21D);
  v61 = (ScriptRunner *)OblivionDynamicCast(
                          v60,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0x11) = v61;
  if ( !v61 )
  {
    v62 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v62 )
      v63 = (ScriptRunner *)TESSound::TESSound(v62);
    else
      v63 = 0;
    *(&stru_B36208 + 0x11) = v63;
    TESForm_SetFormID((TESForm *)v63, 0x21D, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0x11))->unk00 + 0xD8))(
      *(&stru_B36208 + 0x11),
      "FootSoundWaterLand");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0x11))->unk00 + 0x90))(*(&stru_B36208 + 0x11), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0x11));
    sub_412D30(&off_B06164, (int)"FootSoundWaterLand", (TESForm *)*(&stru_B36208 + 0x11));
  }
  v64 = TESDataHandler_LookupFormByID((TESForm *)0x21E);
  v65 = (ScriptRunner *)OblivionDynamicCast(
                          v64,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0x12) = v65;
  if ( !v65 )
  {
    v66 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v66 )
      v67 = (ScriptRunner *)TESSound::TESSound(v66);
    else
      v67 = 0;
    *(&stru_B36208 + 0x12) = v67;
    TESForm_SetFormID((TESForm *)v67, 0x21E, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0x12))->unk00 + 0xD8))(
      *(&stru_B36208 + 0x12),
      "FootSoundWoodLand");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0x12))->unk00 + 0x90))(*(&stru_B36208 + 0x12), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0x12));
    sub_412D30(&off_B06164, (int)"FootSoundWoodLand", (TESForm *)*(&stru_B36208 + 0x12));
  }
  v68 = TESDataHandler_LookupFormByID((TESForm *)0x220);
  v69 = (ScriptRunner *)OblivionDynamicCast(
                          v68,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0x13) = v69;
  if ( !v69 )
  {
    v70 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v70 )
      v71 = (ScriptRunner *)TESSound::TESSound(v70);
    else
      v71 = 0;
    *(&stru_B36208 + 0x13) = v71;
    TESForm_SetFormID((TESForm *)v71, 0x220, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0x13))->unk00 + 0xD8))(
      *(&stru_B36208 + 0x13),
      "FSTSnowLand");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0x13))->unk00 + 0x90))(*(&stru_B36208 + 0x13), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0x13));
    sub_412D30(&off_B06164, (int)"FSTSnowLand", (TESForm *)*(&stru_B36208 + 0x13));
  }
  v72 = TESDataHandler_LookupFormByID((TESForm *)0x221);
  v73 = (ScriptRunner *)OblivionDynamicCast(
                          v72,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0x14) = v73;
  if ( !v73 )
  {
    v74 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v74 )
      v75 = (ScriptRunner *)TESSound::TESSound(v74);
    else
      v75 = 0;
    *(&stru_B36208 + 0x14) = v75;
    TESForm_SetFormID((TESForm *)v75, 0x221, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0x14))->unk00 + 0xD8))(
      *(&stru_B36208 + 0x14),
      "FSTEarthSneak");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0x14))->unk00 + 0x90))(*(&stru_B36208 + 0x14), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0x14));
    sub_412D30(&off_B06164, (int)"FSTEarthSneak", (TESForm *)*(&stru_B36208 + 0x14));
  }
  v76 = TESDataHandler_LookupFormByID((TESForm *)0x222);
  v77 = (ScriptRunner *)OblivionDynamicCast(
                          v76,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0x15) = v77;
  if ( !v77 )
  {
    v78 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v78 )
      v79 = (ScriptRunner *)TESSound::TESSound(v78);
    else
      v79 = 0;
    *(&stru_B36208 + 0x15) = v79;
    TESForm_SetFormID((TESForm *)v79, 0x222, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0x15))->unk00 + 0xD8))(
      *(&stru_B36208 + 0x15),
      "FSTGrassSneak");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0x15))->unk00 + 0x90))(*(&stru_B36208 + 0x15), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0x15));
    sub_412D30(&off_B06164, (int)"FSTGrassSneak", (TESForm *)*(&stru_B36208 + 0x15));
  }
  v80 = TESDataHandler_LookupFormByID((TESForm *)0x223);
  v81 = (ScriptRunner *)OblivionDynamicCast(
                          v80,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0x16) = v81;
  if ( !v81 )
  {
    v82 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v82 )
      v83 = (ScriptRunner *)TESSound::TESSound(v82);
    else
      v83 = 0;
    *(&stru_B36208 + 0x16) = v83;
    TESForm_SetFormID((TESForm *)v83, 0x223, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0x16))->unk00 + 0xD8))(
      *(&stru_B36208 + 0x16),
      "FSTMetalSneak");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0x16))->unk00 + 0x90))(*(&stru_B36208 + 0x16), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0x16));
    sub_412D30(&off_B06164, (int)"FSTMetalSneak", (TESForm *)*(&stru_B36208 + 0x16));
  }
  v84 = TESDataHandler_LookupFormByID((TESForm *)0x225);
  v85 = (ScriptRunner *)OblivionDynamicCast(
                          v84,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0x17) = v85;
  if ( !v85 )
  {
    v86 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v86 )
      v87 = (ScriptRunner *)TESSound::TESSound(v86);
    else
      v87 = 0;
    *(&stru_B36208 + 0x17) = v87;
    TESForm_SetFormID((TESForm *)v87, 0x225, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0x17))->unk00 + 0xD8))(
      *(&stru_B36208 + 0x17),
      "FSTStoneSneak");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0x17))->unk00 + 0x90))(*(&stru_B36208 + 0x17), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0x17));
    sub_412D30(&off_B06164, (int)"FSTStoneSneak", (TESForm *)*(&stru_B36208 + 0x17));
  }
  v88 = TESDataHandler_LookupFormByID((TESForm *)0x226);
  v89 = (ScriptRunner *)OblivionDynamicCast(
                          v88,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0x18) = v89;
  if ( !v89 )
  {
    v90 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v90 )
      v91 = (ScriptRunner *)TESSound::TESSound(v90);
    else
      v91 = 0;
    *(&stru_B36208 + 0x18) = v91;
    TESForm_SetFormID((TESForm *)v91, 0x226, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0x18))->unk00 + 0xD8))(
      *(&stru_B36208 + 0x18),
      "FSTWaterSneak");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0x18))->unk00 + 0x90))(*(&stru_B36208 + 0x18), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0x18));
    sub_412D30(&off_B06164, (int)"FSTWaterSneak", (TESForm *)*(&stru_B36208 + 0x18));
  }
  v92 = TESDataHandler_LookupFormByID((TESForm *)0x227);
  v93 = (ScriptRunner *)OblivionDynamicCast(
                          v92,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESSound `RTTI Type Descriptor',
                          0);
  *(&stru_B36208 + 0x19) = v93;
  if ( !v93 )
  {
    v94 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v94 )
      v95 = (ScriptRunner *)TESSound::TESSound(v94);
    else
      v95 = 0;
    *(&stru_B36208 + 0x19) = v95;
    TESForm_SetFormID((TESForm *)v95, 0x227, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0x19))->unk00 + 0xD8))(
      *(&stru_B36208 + 0x19),
      "FSTWoodSneak");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0x19))->unk00 + 0x90))(*(&stru_B36208 + 0x19), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0x19));
    sub_412D30(&off_B06164, (int)"FSTWoodSneak", (TESForm *)*(&stru_B36208 + 0x19));
  }
  v96 = TESDataHandler_LookupFormByID((TESForm *)0x224);
  result = (TESForm *)OblivionDynamicCast(
                        v96,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESSound `RTTI Type Descriptor',
                        0);
  *(&stru_B36208 + 0x1A) = (ScriptRunner *)result;
  if ( !result )
  {
    v98 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v98 )
      v99 = (ScriptRunner *)TESSound::TESSound(v98);
    else
      v99 = 0;
    *(&stru_B36208 + 0x1A) = v99;
    TESForm_SetFormID((TESForm *)v99, 0x224, 1);
    (*(void (__thiscall **)(_DWORD, const char *))((*(&stru_B36208 + 0x1A))->unk00 + 0xD8))(
      *(&stru_B36208 + 0x1A),
      "FSTSnowSneak");
    (*(void (__thiscall **)(_DWORD, _DWORD))((*(&stru_B36208 + 0x1A))->unk00 + 0x90))(*(&stru_B36208 + 0x1A), 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), (int)*(&stru_B36208 + 0x1A));
    return sub_412D30(&off_B06164, (int)"FSTSnowSneak", (TESForm *)*(&stru_B36208 + 0x1A));
  }
  return result;
}
