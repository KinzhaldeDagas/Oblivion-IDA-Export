TESForm *__cdecl TESSound_CreateGlobalSounds()
{
  TESForm *v0; // eax
  void *v1; // eax
  TESSound *v2; // eax
  TESForm *v3; // eax
  TESForm *v4; // eax
  void *v5; // eax
  TESSound *v6; // eax
  TESForm *v7; // eax
  TESForm *v8; // eax
  void *v9; // eax
  TESSound *v10; // eax
  TESForm *v11; // eax
  TESForm *v12; // eax
  void *v13; // eax
  TESSound *v14; // eax
  TESForm *v15; // eax
  TESForm *v16; // eax
  void *v17; // eax
  TESSound *v18; // eax
  TESForm *v19; // eax
  TESForm *v20; // eax
  void *v21; // eax
  TESSound *v22; // eax
  TESForm *v23; // eax
  TESForm *v24; // eax
  void *v25; // eax
  TESSound *v26; // eax
  TESForm *v27; // eax
  TESForm *v28; // eax
  void *v29; // eax
  TESSound *v30; // eax
  TESForm *v31; // eax
  TESForm *v32; // eax
  void *v33; // eax
  TESSound *v34; // eax
  TESForm *v35; // eax
  TESForm *v36; // eax
  void *v37; // eax
  TESSound *v38; // eax
  TESForm *v39; // eax
  TESForm *v40; // eax
  void *v41; // eax
  TESSound *v42; // eax
  TESForm *v43; // eax
  TESForm *v44; // eax
  void *v45; // eax
  TESSound *v46; // eax
  TESForm *v47; // eax
  TESForm *v48; // eax
  void *v49; // eax
  TESSound *v50; // eax
  TESForm *v51; // eax
  TESForm *v52; // eax
  void *v53; // eax
  TESSound *v54; // eax
  TESForm *v55; // eax
  TESForm *v56; // eax
  void *v57; // eax
  TESSound *v58; // eax
  TESForm *v59; // eax
  TESForm *v60; // eax
  void *v61; // eax
  TESSound *v62; // eax
  TESForm *v63; // eax
  TESForm *v64; // eax
  void *v65; // eax
  TESSound *v66; // eax
  TESForm *v67; // eax
  TESForm *v68; // eax
  void *v69; // eax
  TESSound *v70; // eax
  TESForm *v71; // eax
  TESForm *v72; // eax
  void *v73; // eax
  TESSound *v74; // eax
  TESForm *v75; // eax
  TESForm *v76; // eax
  void *v77; // eax
  TESSound *v78; // eax
  TESForm *v79; // eax
  TESForm *v80; // eax
  void *v81; // eax
  TESSound *v82; // eax
  TESForm *v83; // eax
  TESForm *v84; // eax
  void *v85; // eax
  TESSound *v86; // eax
  TESForm *v87; // eax
  TESForm *v88; // eax
  void *v89; // eax
  TESSound *v90; // eax
  TESForm *v91; // eax
  TESForm *v92; // eax
  void *v93; // eax
  TESSound *v94; // eax
  TESForm *v95; // eax
  TESForm *v96; // eax
  TESForm *result; // eax
  TESSound *v98; // eax
  TESForm *v99; // eax

  v0 = TESDataHandler_LookupFormByID((TESForm *)0x212); /*0x51803b*/
  v1 = OblivionDynamicCast( /*0x518041*/
         v0,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESSound `RTTI Type Descriptor',
         0);
  dword_B361CC[0x13] = (int)v1; /*0x51804e*/
  if ( !v1 ) /*0x518053*/
  {
    v2 = (TESSound *)FormHeapAlloc(0x44u); /*0x51805b*/
    if ( v2 ) /*0x518071*/
      v3 = (TESForm *)TESSound::TESSound(v2); /*0x518075*/
    else
      v3 = 0; /*0x51807c*/
    dword_B361CC[0x13] = (int)v3; /*0x51808b*/
    TESForm_SetFormID(v3, 0x212, 1); /*0x518090*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x13] + 0xD8))( /*0x5180a8*/
      dword_B361CC[0x13],
      "FootSoundDirt");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x13] + 0x90))(dword_B361CC[0x13], 0); /*0x5180ba*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x13]); /*0x5180cb*/
    sub_412D30(&off_B06164, (int)"FootSoundDirt", (TESForm *)dword_B361CC[0x13]); /*0x5180e1*/
  }
  v4 = TESDataHandler_LookupFormByID((TESForm *)0x22B); /*0x5180ff*/
  v5 = OblivionDynamicCast( /*0x518105*/
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESSound `RTTI Type Descriptor',
         0);
  dword_B361CC[0x15] = (int)v5; /*0x51810f*/
  if ( !v5 ) /*0x518114*/
  {
    v6 = (TESSound *)FormHeapAlloc(0x44u); /*0x51811c*/
    if ( v6 ) /*0x518132*/
      v7 = (TESForm *)TESSound::TESSound(v6); /*0x518136*/
    else
      v7 = 0; /*0x51813d*/
    dword_B361CC[0x15] = (int)v7; /*0x51814c*/
    TESForm_SetFormID(v7, 0x22B, 1); /*0x518151*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x15] + 0xD8))(dword_B361CC[0x15], "FSTMetal"); /*0x518169*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x15] + 0x90))(dword_B361CC[0x15], 0); /*0x51817b*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x15]); /*0x51818d*/
    sub_412D30(&off_B06164, (int)"FSTMetal", (TESForm *)dword_B361CC[0x15]); /*0x5181a3*/
  }
  v8 = TESDataHandler_LookupFormByID((TESForm *)0x213); /*0x5181c1*/
  v9 = OblivionDynamicCast( /*0x5181c7*/
         v8,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESSound `RTTI Type Descriptor',
         0);
  dword_B361CC[0x14] = (int)v9; /*0x5181d1*/
  if ( !v9 ) /*0x5181d6*/
  {
    v10 = (TESSound *)FormHeapAlloc(0x44u); /*0x5181de*/
    if ( v10 ) /*0x5181f4*/
      v11 = (TESForm *)TESSound::TESSound(v10); /*0x5181f8*/
    else
      v11 = 0; /*0x5181ff*/
    dword_B361CC[0x14] = (int)v11; /*0x51820e*/
    TESForm_SetFormID(v11, 0x213, 1); /*0x518213*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x14] + 0xD8))( /*0x51822b*/
      dword_B361CC[0x14],
      "FootSoundGrass");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x14] + 0x90))(dword_B361CC[0x14], 0); /*0x51823d*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x14]); /*0x51824e*/
    sub_412D30(&off_B06164, (int)"FootSoundGrass", (TESForm *)dword_B361CC[0x14]); /*0x518264*/
  }
  v12 = TESDataHandler_LookupFormByID((TESForm *)0x214); /*0x518282*/
  v13 = OblivionDynamicCast( /*0x518288*/
          v12,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x16] = (int)v13; /*0x518292*/
  if ( !v13 ) /*0x518297*/
  {
    v14 = (TESSound *)FormHeapAlloc(0x44u); /*0x51829f*/
    if ( v14 ) /*0x5182b5*/
      v15 = (TESForm *)TESSound::TESSound(v14); /*0x5182b9*/
    else
      v15 = 0; /*0x5182c0*/
    dword_B361CC[0x16] = (int)v15; /*0x5182cf*/
    TESForm_SetFormID(v15, 0x214, 1); /*0x5182d4*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x16] + 0xD8))( /*0x5182ec*/
      dword_B361CC[0x16],
      "FootSoundStone");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x16] + 0x90))(dword_B361CC[0x16], 0); /*0x5182fe*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x16]); /*0x518310*/
    sub_412D30(&off_B06164, (int)"FootSoundStone", (TESForm *)dword_B361CC[0x16]); /*0x518326*/
  }
  v16 = TESDataHandler_LookupFormByID((TESForm *)0x215); /*0x518344*/
  v17 = OblivionDynamicCast( /*0x51834a*/
          v16,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x17] = (int)v17; /*0x518354*/
  if ( !v17 ) /*0x518359*/
  {
    v18 = (TESSound *)FormHeapAlloc(0x44u); /*0x518361*/
    if ( v18 ) /*0x518377*/
      v19 = (TESForm *)TESSound::TESSound(v18); /*0x51837b*/
    else
      v19 = 0; /*0x518382*/
    dword_B361CC[0x17] = (int)v19; /*0x518391*/
    TESForm_SetFormID(v19, 0x215, 1); /*0x518396*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x17] + 0xD8))( /*0x5183ae*/
      dword_B361CC[0x17],
      "FootSoundWater");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x17] + 0x90))(dword_B361CC[0x17], 0); /*0x5183c0*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x17]); /*0x5183d1*/
    sub_412D30(&off_B06164, (int)"FootSoundWater", (TESForm *)dword_B361CC[0x17]); /*0x5183e7*/
  }
  v20 = TESDataHandler_LookupFormByID((TESForm *)0x216); /*0x518405*/
  v21 = OblivionDynamicCast( /*0x51840b*/
          v20,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x18] = (int)v21; /*0x518415*/
  if ( !v21 ) /*0x51841a*/
  {
    v22 = (TESSound *)FormHeapAlloc(0x44u); /*0x518422*/
    if ( v22 ) /*0x518438*/
      v23 = (TESForm *)TESSound::TESSound(v22); /*0x51843c*/
    else
      v23 = 0; /*0x518443*/
    dword_B361CC[0x18] = (int)v23; /*0x518452*/
    TESForm_SetFormID(v23, 0x216, 1); /*0x518457*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x18] + 0xD8))( /*0x51846f*/
      dword_B361CC[0x18],
      "FootSoundWood");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x18] + 0x90))(dword_B361CC[0x18], 0); /*0x518481*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x18]); /*0x518493*/
    sub_412D30(&off_B06164, (int)"FootSoundWood", (TESForm *)dword_B361CC[0x18]); /*0x5184a9*/
  }
  v24 = TESDataHandler_LookupFormByID((TESForm *)0x21F); /*0x5184c7*/
  v25 = OblivionDynamicCast( /*0x5184cd*/
          v24,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x19] = (int)v25; /*0x5184d7*/
  if ( !v25 ) /*0x5184dc*/
  {
    v26 = (TESSound *)FormHeapAlloc(0x44u); /*0x5184e4*/
    if ( v26 ) /*0x5184fa*/
      v27 = (TESForm *)TESSound::TESSound(v26); /*0x5184fe*/
    else
      v27 = 0; /*0x518505*/
    dword_B361CC[0x19] = (int)v27; /*0x518514*/
    TESForm_SetFormID(v27, 0x21F, 1); /*0x518519*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x19] + 0xD8))(dword_B361CC[0x19], "FSTSnow"); /*0x518531*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x19] + 0x90))(dword_B361CC[0x19], 0); /*0x518543*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x19]); /*0x518554*/
    sub_412D30(&off_B06164, (int)"FSTSnow", (TESForm *)dword_B361CC[0x19]); /*0x51856a*/
  }
  v28 = TESDataHandler_LookupFormByID((TESForm *)0x217); /*0x518588*/
  v29 = OblivionDynamicCast( /*0x51858e*/
          v28,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x1A] = (int)v29; /*0x518598*/
  if ( !v29 ) /*0x51859d*/
  {
    v30 = (TESSound *)FormHeapAlloc(0x44u); /*0x5185a5*/
    if ( v30 ) /*0x5185bb*/
      v31 = (TESForm *)TESSound::TESSound(v30); /*0x5185bf*/
    else
      v31 = 0; /*0x5185c6*/
    dword_B361CC[0x1A] = (int)v31; /*0x5185d5*/
    TESForm_SetFormID(v31, 0x217, 1); /*0x5185da*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x1A] + 0xD8))( /*0x5185f2*/
      dword_B361CC[0x1A],
      "FootSoundHeavyArmor");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x1A] + 0x90))(dword_B361CC[0x1A], 0); /*0x518604*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x1A]); /*0x518616*/
    sub_412D30(&off_B06164, (int)"FootSoundHeavyArmor", (TESForm *)dword_B361CC[0x1A]); /*0x51862c*/
  }
  v32 = TESDataHandler_LookupFormByID((TESForm *)0x218); /*0x51864a*/
  v33 = OblivionDynamicCast( /*0x518650*/
          v32,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x1B] = (int)v33; /*0x51865a*/
  if ( !v33 ) /*0x51865f*/
  {
    v34 = (TESSound *)FormHeapAlloc(0x44u); /*0x518667*/
    if ( v34 ) /*0x51867d*/
      v35 = (TESForm *)TESSound::TESSound(v34); /*0x518681*/
    else
      v35 = 0; /*0x518688*/
    dword_B361CC[0x1B] = (int)v35; /*0x518697*/
    TESForm_SetFormID(v35, 0x218, 1); /*0x51869c*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x1B] + 0xD8))( /*0x5186b4*/
      dword_B361CC[0x1B],
      "FootSoundLightArmor");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x1B] + 0x90))(dword_B361CC[0x1B], 0); /*0x5186c6*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x1B]); /*0x5186d7*/
    sub_412D30(&off_B06164, (int)"FootSoundLightArmor", (TESForm *)dword_B361CC[0x1B]); /*0x5186ed*/
  }
  v36 = TESDataHandler_LookupFormByID((TESForm *)0x229); /*0x51870b*/
  v37 = OblivionDynamicCast( /*0x518711*/
          v36,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x2A] = (int)v37; /*0x51871b*/
  if ( !v37 ) /*0x518720*/
  {
    v38 = (TESSound *)FormHeapAlloc(0x44u); /*0x518728*/
    if ( v38 ) /*0x51873e*/
      v39 = (TESForm *)TESSound::TESSound(v38); /*0x518742*/
    else
      v39 = 0; /*0x518749*/
    dword_B361CC[0x2A] = (int)v39; /*0x518758*/
    TESForm_SetFormID(v39, 0x229, 1); /*0x51875d*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x2A] + 0xD8))( /*0x518775*/
      dword_B361CC[0x2A],
      "FSTArmorHeavySneak");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x2A] + 0x90))(dword_B361CC[0x2A], 0); /*0x518787*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x2A]); /*0x518799*/
    sub_412D30(&off_B06164, (int)"FSTArmorHeavySneak", (TESForm *)dword_B361CC[0x2A]); /*0x5187af*/
  }
  v40 = TESDataHandler_LookupFormByID((TESForm *)0x228); /*0x5187cd*/
  v41 = OblivionDynamicCast( /*0x5187d3*/
          v40,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x2B] = (int)v41; /*0x5187dd*/
  if ( !v41 ) /*0x5187e2*/
  {
    v42 = (TESSound *)FormHeapAlloc(0x44u); /*0x5187ea*/
    if ( v42 ) /*0x518800*/
      v43 = (TESForm *)TESSound::TESSound(v42); /*0x518804*/
    else
      v43 = 0; /*0x51880b*/
    dword_B361CC[0x2B] = (int)v43; /*0x51881a*/
    TESForm_SetFormID(v43, 0x228, 1); /*0x51881f*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x2B] + 0xD8))( /*0x518837*/
      dword_B361CC[0x2B],
      "FSTArmorLightSneak");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x2B] + 0x90))(dword_B361CC[0x2B], 0); /*0x518849*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x2B]); /*0x51885a*/
    sub_412D30(&off_B06164, (int)"FSTArmorLightSneak", (TESForm *)dword_B361CC[0x2B]); /*0x518870*/
  }
  v44 = TESDataHandler_LookupFormByID((TESForm *)0x219); /*0x51888e*/
  v45 = OblivionDynamicCast( /*0x518894*/
          v44,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x1C] = (int)v45; /*0x51889e*/
  if ( !v45 ) /*0x5188a3*/
  {
    v46 = (TESSound *)FormHeapAlloc(0x44u); /*0x5188ab*/
    if ( v46 ) /*0x5188c1*/
      v47 = (TESForm *)TESSound::TESSound(v46); /*0x5188c5*/
    else
      v47 = 0; /*0x5188cc*/
    dword_B361CC[0x1C] = (int)v47; /*0x5188db*/
    TESForm_SetFormID(v47, 0x219, 1); /*0x5188e0*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x1C] + 0xD8))( /*0x5188f8*/
      dword_B361CC[0x1C],
      "FootSoundEarthLand");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x1C] + 0x90))(dword_B361CC[0x1C], 0); /*0x51890a*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x1C]); /*0x51891c*/
    sub_412D30(&off_B06164, (int)"FootSoundEarthLand", (TESForm *)dword_B361CC[0x1C]); /*0x518932*/
  }
  v48 = TESDataHandler_LookupFormByID((TESForm *)0x21A); /*0x518950*/
  v49 = OblivionDynamicCast( /*0x518956*/
          v48,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x1D] = (int)v49; /*0x518960*/
  if ( !v49 ) /*0x518965*/
  {
    v50 = (TESSound *)FormHeapAlloc(0x44u); /*0x51896d*/
    if ( v50 ) /*0x518983*/
      v51 = (TESForm *)TESSound::TESSound(v50); /*0x518987*/
    else
      v51 = 0; /*0x51898e*/
    dword_B361CC[0x1D] = (int)v51; /*0x51899d*/
    TESForm_SetFormID(v51, 0x21A, 1); /*0x5189a2*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x1D] + 0xD8))( /*0x5189ba*/
      dword_B361CC[0x1D],
      "FootSoundGrassLand");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x1D] + 0x90))(dword_B361CC[0x1D], 0); /*0x5189cc*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x1D]); /*0x5189dd*/
    sub_412D30(&off_B06164, (int)"FootSoundGrassLand", (TESForm *)dword_B361CC[0x1D]); /*0x5189f3*/
  }
  v52 = TESDataHandler_LookupFormByID((TESForm *)0x21B); /*0x518a11*/
  v53 = OblivionDynamicCast( /*0x518a17*/
          v52,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x1E] = (int)v53; /*0x518a21*/
  if ( !v53 ) /*0x518a26*/
  {
    v54 = (TESSound *)FormHeapAlloc(0x44u); /*0x518a2e*/
    if ( v54 ) /*0x518a44*/
      v55 = (TESForm *)TESSound::TESSound(v54); /*0x518a48*/
    else
      v55 = 0; /*0x518a4f*/
    dword_B361CC[0x1E] = (int)v55; /*0x518a5e*/
    TESForm_SetFormID(v55, 0x21B, 1); /*0x518a63*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x1E] + 0xD8))( /*0x518a7b*/
      dword_B361CC[0x1E],
      "FootSoundMetalLand");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x1E] + 0x90))(dword_B361CC[0x1E], 0); /*0x518a8d*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x1E]); /*0x518a9f*/
    sub_412D30(&off_B06164, (int)"FootSoundMetalLand", (TESForm *)dword_B361CC[0x1E]); /*0x518ab5*/
  }
  v56 = TESDataHandler_LookupFormByID((TESForm *)0x21C); /*0x518ad3*/
  v57 = OblivionDynamicCast( /*0x518ad9*/
          v56,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x1F] = (int)v57; /*0x518ae3*/
  if ( !v57 ) /*0x518ae8*/
  {
    v58 = (TESSound *)FormHeapAlloc(0x44u); /*0x518af0*/
    if ( v58 ) /*0x518b06*/
      v59 = (TESForm *)TESSound::TESSound(v58); /*0x518b0a*/
    else
      v59 = 0; /*0x518b11*/
    dword_B361CC[0x1F] = (int)v59; /*0x518b20*/
    TESForm_SetFormID(v59, 0x21C, 1); /*0x518b25*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x1F] + 0xD8))( /*0x518b3d*/
      dword_B361CC[0x1F],
      "FootSoundStoneLand");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x1F] + 0x90))(dword_B361CC[0x1F], 0); /*0x518b4f*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x1F]); /*0x518b60*/
    sub_412D30(&off_B06164, (int)"FootSoundStoneLand", (TESForm *)dword_B361CC[0x1F]); /*0x518b76*/
  }
  v60 = TESDataHandler_LookupFormByID((TESForm *)0x21D); /*0x518b94*/
  v61 = OblivionDynamicCast( /*0x518b9a*/
          v60,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x20] = (int)v61; /*0x518ba4*/
  if ( !v61 ) /*0x518ba9*/
  {
    v62 = (TESSound *)FormHeapAlloc(0x44u); /*0x518bb1*/
    if ( v62 ) /*0x518bc7*/
      v63 = (TESForm *)TESSound::TESSound(v62); /*0x518bcb*/
    else
      v63 = 0; /*0x518bd2*/
    dword_B361CC[0x20] = (int)v63; /*0x518be1*/
    TESForm_SetFormID(v63, 0x21D, 1); /*0x518be6*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x20] + 0xD8))( /*0x518bfe*/
      dword_B361CC[0x20],
      "FootSoundWaterLand");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x20] + 0x90))(dword_B361CC[0x20], 0); /*0x518c10*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x20]); /*0x518c22*/
    sub_412D30(&off_B06164, (int)"FootSoundWaterLand", (TESForm *)dword_B361CC[0x20]); /*0x518c38*/
  }
  v64 = TESDataHandler_LookupFormByID((TESForm *)0x21E); /*0x518c56*/
  v65 = OblivionDynamicCast( /*0x518c5c*/
          v64,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x21] = (int)v65; /*0x518c66*/
  if ( !v65 ) /*0x518c6b*/
  {
    v66 = (TESSound *)FormHeapAlloc(0x44u); /*0x518c73*/
    if ( v66 ) /*0x518c89*/
      v67 = (TESForm *)TESSound::TESSound(v66); /*0x518c8d*/
    else
      v67 = 0; /*0x518c94*/
    dword_B361CC[0x21] = (int)v67; /*0x518ca3*/
    TESForm_SetFormID(v67, 0x21E, 1); /*0x518ca8*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x21] + 0xD8))( /*0x518cc0*/
      dword_B361CC[0x21],
      "FootSoundWoodLand");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x21] + 0x90))(dword_B361CC[0x21], 0); /*0x518cd2*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x21]); /*0x518ce3*/
    sub_412D30(&off_B06164, (int)"FootSoundWoodLand", (TESForm *)dword_B361CC[0x21]); /*0x518cf9*/
  }
  v68 = TESDataHandler_LookupFormByID((TESForm *)0x220); /*0x518d17*/
  v69 = OblivionDynamicCast( /*0x518d1d*/
          v68,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x22] = (int)v69; /*0x518d27*/
  if ( !v69 ) /*0x518d2c*/
  {
    v70 = (TESSound *)FormHeapAlloc(0x44u); /*0x518d34*/
    if ( v70 ) /*0x518d4a*/
      v71 = (TESForm *)TESSound::TESSound(v70); /*0x518d4e*/
    else
      v71 = 0; /*0x518d55*/
    dword_B361CC[0x22] = (int)v71; /*0x518d64*/
    TESForm_SetFormID(v71, 0x220, 1); /*0x518d69*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x22] + 0xD8))( /*0x518d81*/
      dword_B361CC[0x22],
      "FSTSnowLand");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x22] + 0x90))(dword_B361CC[0x22], 0); /*0x518d93*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x22]); /*0x518da5*/
    sub_412D30(&off_B06164, (int)"FSTSnowLand", (TESForm *)dword_B361CC[0x22]); /*0x518dbb*/
  }
  v72 = TESDataHandler_LookupFormByID((TESForm *)0x221); /*0x518dd9*/
  v73 = OblivionDynamicCast( /*0x518ddf*/
          v72,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x23] = (int)v73; /*0x518de9*/
  if ( !v73 ) /*0x518dee*/
  {
    v74 = (TESSound *)FormHeapAlloc(0x44u); /*0x518df6*/
    if ( v74 ) /*0x518e0c*/
      v75 = (TESForm *)TESSound::TESSound(v74); /*0x518e10*/
    else
      v75 = 0; /*0x518e17*/
    dword_B361CC[0x23] = (int)v75; /*0x518e26*/
    TESForm_SetFormID(v75, 0x221, 1); /*0x518e2b*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x23] + 0xD8))( /*0x518e43*/
      dword_B361CC[0x23],
      "FSTEarthSneak");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x23] + 0x90))(dword_B361CC[0x23], 0); /*0x518e55*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x23]); /*0x518e66*/
    sub_412D30(&off_B06164, (int)"FSTEarthSneak", (TESForm *)dword_B361CC[0x23]); /*0x518e7c*/
  }
  v76 = TESDataHandler_LookupFormByID((TESForm *)0x222); /*0x518e9a*/
  v77 = OblivionDynamicCast( /*0x518ea0*/
          v76,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x24] = (int)v77; /*0x518eaa*/
  if ( !v77 ) /*0x518eaf*/
  {
    v78 = (TESSound *)FormHeapAlloc(0x44u); /*0x518eb7*/
    if ( v78 ) /*0x518ecd*/
      v79 = (TESForm *)TESSound::TESSound(v78); /*0x518ed1*/
    else
      v79 = 0; /*0x518ed8*/
    dword_B361CC[0x24] = (int)v79; /*0x518ee7*/
    TESForm_SetFormID(v79, 0x222, 1); /*0x518eec*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x24] + 0xD8))( /*0x518f04*/
      dword_B361CC[0x24],
      "FSTGrassSneak");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x24] + 0x90))(dword_B361CC[0x24], 0); /*0x518f16*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x24]); /*0x518f28*/
    sub_412D30(&off_B06164, (int)"FSTGrassSneak", (TESForm *)dword_B361CC[0x24]); /*0x518f3e*/
  }
  v80 = TESDataHandler_LookupFormByID((TESForm *)0x223); /*0x518f5c*/
  v81 = OblivionDynamicCast( /*0x518f62*/
          v80,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x25] = (int)v81; /*0x518f6c*/
  if ( !v81 ) /*0x518f71*/
  {
    v82 = (TESSound *)FormHeapAlloc(0x44u); /*0x518f79*/
    if ( v82 ) /*0x518f8f*/
      v83 = (TESForm *)TESSound::TESSound(v82); /*0x518f93*/
    else
      v83 = 0; /*0x518f9a*/
    dword_B361CC[0x25] = (int)v83; /*0x518fa9*/
    TESForm_SetFormID(v83, 0x223, 1); /*0x518fae*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x25] + 0xD8))( /*0x518fc6*/
      dword_B361CC[0x25],
      "FSTMetalSneak");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x25] + 0x90))(dword_B361CC[0x25], 0); /*0x518fd8*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x25]); /*0x518fe9*/
    sub_412D30(&off_B06164, (int)"FSTMetalSneak", (TESForm *)dword_B361CC[0x25]); /*0x518fff*/
  }
  v84 = TESDataHandler_LookupFormByID((TESForm *)0x225); /*0x51901d*/
  v85 = OblivionDynamicCast( /*0x519023*/
          v84,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x26] = (int)v85; /*0x51902d*/
  if ( !v85 ) /*0x519032*/
  {
    v86 = (TESSound *)FormHeapAlloc(0x44u); /*0x51903a*/
    if ( v86 ) /*0x519050*/
      v87 = (TESForm *)TESSound::TESSound(v86); /*0x519054*/
    else
      v87 = 0; /*0x51905b*/
    dword_B361CC[0x26] = (int)v87; /*0x51906a*/
    TESForm_SetFormID(v87, 0x225, 1); /*0x51906f*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x26] + 0xD8))( /*0x519087*/
      dword_B361CC[0x26],
      "FSTStoneSneak");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x26] + 0x90))(dword_B361CC[0x26], 0); /*0x519099*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x26]); /*0x5190ab*/
    sub_412D30(&off_B06164, (int)"FSTStoneSneak", (TESForm *)dword_B361CC[0x26]); /*0x5190c1*/
  }
  v88 = TESDataHandler_LookupFormByID((TESForm *)0x226); /*0x5190df*/
  v89 = OblivionDynamicCast( /*0x5190e5*/
          v88,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x27] = (int)v89; /*0x5190ef*/
  if ( !v89 ) /*0x5190f4*/
  {
    v90 = (TESSound *)FormHeapAlloc(0x44u); /*0x5190fc*/
    if ( v90 ) /*0x519112*/
      v91 = (TESForm *)TESSound::TESSound(v90); /*0x519116*/
    else
      v91 = 0; /*0x51911d*/
    dword_B361CC[0x27] = (int)v91; /*0x51912c*/
    TESForm_SetFormID(v91, 0x226, 1); /*0x519131*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x27] + 0xD8))( /*0x519149*/
      dword_B361CC[0x27],
      "FSTWaterSneak");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x27] + 0x90))(dword_B361CC[0x27], 0); /*0x51915b*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x27]); /*0x51916c*/
    sub_412D30(&off_B06164, (int)"FSTWaterSneak", (TESForm *)dword_B361CC[0x27]); /*0x519182*/
  }
  v92 = TESDataHandler_LookupFormByID((TESForm *)0x227); /*0x5191a0*/
  v93 = OblivionDynamicCast( /*0x5191a6*/
          v92,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESSound `RTTI Type Descriptor',
          0);
  dword_B361CC[0x28] = (int)v93; /*0x5191b0*/
  if ( !v93 ) /*0x5191b5*/
  {
    v94 = (TESSound *)FormHeapAlloc(0x44u); /*0x5191bd*/
    if ( v94 ) /*0x5191d3*/
      v95 = (TESForm *)TESSound::TESSound(v94); /*0x5191d7*/
    else
      v95 = 0; /*0x5191de*/
    dword_B361CC[0x28] = (int)v95; /*0x5191ed*/
    TESForm_SetFormID(v95, 0x227, 1); /*0x5191f2*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x28] + 0xD8))( /*0x51920a*/
      dword_B361CC[0x28],
      "FSTWoodSneak");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x28] + 0x90))(dword_B361CC[0x28], 0); /*0x51921c*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x28]); /*0x51922e*/
    sub_412D30(&off_B06164, (int)"FSTWoodSneak", (TESForm *)dword_B361CC[0x28]); /*0x519244*/
  }
  v96 = TESDataHandler_LookupFormByID((TESForm *)0x224); /*0x519262*/
  result = (TESForm *)OblivionDynamicCast( /*0x519268*/
                        v96,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESSound `RTTI Type Descriptor',
                        0);
  dword_B361CC[0x29] = (int)result; /*0x519272*/
  if ( !result ) /*0x519277*/
  {
    v98 = (TESSound *)FormHeapAlloc(0x44u); /*0x51927f*/
    if ( v98 ) /*0x519295*/
      v99 = (TESForm *)TESSound::TESSound(v98); /*0x519299*/
    else
      v99 = 0; /*0x5192a0*/
    dword_B361CC[0x29] = (int)v99; /*0x5192af*/
    TESForm_SetFormID(v99, 0x224, 1); /*0x5192b4*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B361CC[0x29] + 0xD8))( /*0x5192cc*/
      dword_B361CC[0x29],
      "FSTSnowSneak");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_B361CC[0x29] + 0x90))(dword_B361CC[0x29], 0); /*0x5192de*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, dword_B361CC[0x29]); /*0x5192ef*/
    return sub_412D30(&off_B06164, (int)"FSTSnowSneak", (TESForm *)dword_B361CC[0x29]); /*0x519305*/
  }
  return result; /*0x51930a*/
}
