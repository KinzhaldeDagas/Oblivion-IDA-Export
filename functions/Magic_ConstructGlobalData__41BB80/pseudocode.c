void __cdecl Magic_ConstructGlobalData()
{
  TESForm *v0; // eax
  TESSound *v1; // eax
  TESForm *v2; // eax
  TESForm *v3; // eax
  TESSound *v4; // eax
  TESForm *v5; // eax
  TESForm *v6; // eax
  TESSound *v7; // eax
  TESForm *v8; // eax
  TESForm *v9; // eax
  TESSound *v10; // eax
  TESForm *v11; // eax
  TESForm *v12; // eax
  TESSound *v13; // eax
  TESForm *v14; // eax
  TESForm *v15; // eax
  TESSound *v16; // eax
  TESForm *v17; // eax
  TESForm *v18; // eax
  TESSound *v19; // eax
  TESForm *v20; // eax
  TESForm *v21; // eax
  TESSound *v22; // eax
  TESForm *v23; // eax
  TESForm *v24; // eax
  TESSound *v25; // eax
  TESForm *v26; // eax
  TESForm *v27; // eax
  TESSound *v28; // eax
  TESForm *v29; // eax
  TESForm *v30; // eax
  TESSound *v31; // eax
  TESForm *v32; // eax
  TESForm *v33; // eax
  TESSound *v34; // eax
  TESForm *v35; // eax
  TESForm *v36; // eax
  TESSound *v37; // eax
  TESForm *v38; // eax
  TESForm *v39; // eax
  TESSound *v40; // eax
  TESForm *v41; // eax
  TESForm *v42; // eax
  TESSound *v43; // eax
  TESForm *v44; // eax
  TESForm *v45; // eax
  TESSound *v46; // eax
  TESForm *v47; // eax
  TESForm *v48; // eax
  TESSound *v49; // eax
  TESForm *v50; // eax
  TESForm *v51; // eax
  TESSound *v52; // eax
  TESForm *v53; // eax
  TESForm *v54; // eax
  SpellItem *DefaultPlayerSpell; // eax
  TESForm *v56; // eax
  SpellItem *DefaultMarksmanSpell; // eax
  TESForm *v58; // eax
  TESEffectShader *v59; // eax
  TESEffectShader *v60; // eax
  TESForm *v61; // eax
  TESEffectShader *v62; // eax
  TESEffectShader *v63; // eax
  TESForm *v64; // eax
  TESEffectShader *v65; // eax
  TESEffectShader *v66; // eax

  v0 = TESDataHandler_LookupFormByID((TESForm *)0x12C); /*0x41bbbb*/
  MEMORY[0xB33560] = (int)OblivionDynamicCast( /*0x41bbce*/
                            v0,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &TESSound `RTTI Type Descriptor',
                            0);
  if ( !MEMORY[0xB33560] ) /*0x41bbd3*/
  {
    v1 = (TESSound *)FormHeapAlloc(0x44u); /*0x41bbd7*/
    if ( v1 ) /*0x41bbed*/
      v2 = (TESForm *)TESSound::TESSound(v1); /*0x41bbf1*/
    else
      v2 = 0; /*0x41bbf8*/
    MEMORY[0xB33560] = (int)v2; /*0x41bc07*/
    TESForm_SetFormID(v2, 0x12C, 1); /*0x41bc0c*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33560] + 0xD8))( /*0x41bc24*/
      MEMORY[0xB33560],
      "MagicFailureSoundAlteration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33560] + 0x90))(MEMORY[0xB33560], 0); /*0x41bc36*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33560]); /*0x41bc47*/
  }
  v3 = TESDataHandler_LookupFormByID((TESForm *)0x12D); /*0x41bc65*/
  MEMORY[0xB33564] = (int)OblivionDynamicCast( /*0x41bc75*/
                            v3,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &TESSound `RTTI Type Descriptor',
                            0);
  if ( !MEMORY[0xB33564] ) /*0x41bc7a*/
  {
    v4 = (TESSound *)FormHeapAlloc(0x44u); /*0x41bc7e*/
    if ( v4 ) /*0x41bc94*/
      v5 = (TESForm *)TESSound::TESSound(v4); /*0x41bc98*/
    else
      v5 = 0; /*0x41bc9f*/
    MEMORY[0xB33564] = (int)v5; /*0x41bcae*/
    TESForm_SetFormID(v5, 0x12D, 1); /*0x41bcb3*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33564] + 0xD8))( /*0x41bccb*/
      MEMORY[0xB33564],
      "MagicFailureSoundConjuration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33564] + 0x90))(MEMORY[0xB33564], 0); /*0x41bcdd*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33564]); /*0x41bcef*/
  }
  v6 = TESDataHandler_LookupFormByID((TESForm *)0x12E); /*0x41bd0d*/
  MEMORY[0xB33568] = (int)OblivionDynamicCast( /*0x41bd1d*/
                            v6,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &TESSound `RTTI Type Descriptor',
                            0);
  if ( !MEMORY[0xB33568] ) /*0x41bd22*/
  {
    v7 = (TESSound *)FormHeapAlloc(0x44u); /*0x41bd26*/
    if ( v7 ) /*0x41bd3c*/
      v8 = (TESForm *)TESSound::TESSound(v7); /*0x41bd40*/
    else
      v8 = 0; /*0x41bd47*/
    MEMORY[0xB33568] = (int)v8; /*0x41bd56*/
    TESForm_SetFormID(v8, 0x12E, 1); /*0x41bd5b*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33568] + 0xD8))( /*0x41bd73*/
      MEMORY[0xB33568],
      "MagicFailureSoundDestruction");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33568] + 0x90))(MEMORY[0xB33568], 0); /*0x41bd85*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33568]); /*0x41bd97*/
  }
  v9 = TESDataHandler_LookupFormByID((TESForm *)0x12F); /*0x41bdb5*/
  MEMORY[0xB3356C] = (int)OblivionDynamicCast( /*0x41bdc5*/
                            v9,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &TESSound `RTTI Type Descriptor',
                            0);
  if ( !MEMORY[0xB3356C] ) /*0x41bdca*/
  {
    v10 = (TESSound *)FormHeapAlloc(0x44u); /*0x41bdce*/
    if ( v10 ) /*0x41bde4*/
      v11 = (TESForm *)TESSound::TESSound(v10); /*0x41bde8*/
    else
      v11 = 0; /*0x41bdef*/
    MEMORY[0xB3356C] = (int)v11; /*0x41bdfe*/
    TESForm_SetFormID(v11, 0x12F, 1); /*0x41be03*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB3356C] + 0xD8))( /*0x41be1b*/
      MEMORY[0xB3356C],
      "MagicFailureSoundIllusion");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB3356C] + 0x90))(MEMORY[0xB3356C], 0); /*0x41be2d*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB3356C]); /*0x41be3f*/
  }
  v12 = TESDataHandler_LookupFormByID((TESForm *)0x130); /*0x41be5d*/
  MEMORY[0xB33570] = (int)OblivionDynamicCast( /*0x41be6d*/
                            v12,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &TESSound `RTTI Type Descriptor',
                            0);
  if ( !MEMORY[0xB33570] ) /*0x41be72*/
  {
    v13 = (TESSound *)FormHeapAlloc(0x44u); /*0x41be76*/
    if ( v13 ) /*0x41be8c*/
      v14 = (TESForm *)TESSound::TESSound(v13); /*0x41be90*/
    else
      v14 = 0; /*0x41be97*/
    MEMORY[0xB33570] = (int)v14; /*0x41bea6*/
    TESForm_SetFormID(v14, 0x130, 1); /*0x41beab*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33570] + 0xD8))( /*0x41bec3*/
      MEMORY[0xB33570],
      "MagicFailureSoundMysticism");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33570] + 0x90))(MEMORY[0xB33570], 0); /*0x41bed5*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33570]); /*0x41bee7*/
  }
  v15 = TESDataHandler_LookupFormByID((TESForm *)0x131); /*0x41bf05*/
  MEMORY[0xB33574] = (int)OblivionDynamicCast( /*0x41bf15*/
                            v15,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &TESSound `RTTI Type Descriptor',
                            0);
  if ( !MEMORY[0xB33574] ) /*0x41bf1a*/
  {
    v16 = (TESSound *)FormHeapAlloc(0x44u); /*0x41bf1e*/
    if ( v16 ) /*0x41bf34*/
      v17 = (TESForm *)TESSound::TESSound(v16); /*0x41bf38*/
    else
      v17 = 0; /*0x41bf3f*/
    MEMORY[0xB33574] = (int)v17; /*0x41bf4e*/
    TESForm_SetFormID(v17, 0x131, 1); /*0x41bf53*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33574] + 0xD8))( /*0x41bf6b*/
      MEMORY[0xB33574],
      "MagicFailureSoundRestoration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33574] + 0x90))(MEMORY[0xB33574], 0); /*0x41bf7d*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33574]); /*0x41bf8f*/
  }
  v18 = TESDataHandler_LookupFormByID((TESForm *)0x138); /*0x41bfad*/
  MEMORY[0xB33578][0] = (int)OblivionDynamicCast( /*0x41bfbd*/
                               v18,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESSound `RTTI Type Descriptor',
                               0);
  if ( !MEMORY[0xB33578][0] ) /*0x41bfc2*/
  {
    v19 = (TESSound *)FormHeapAlloc(0x44u); /*0x41bfc6*/
    if ( v19 ) /*0x41bfdc*/
      v20 = (TESForm *)TESSound::TESSound(v19); /*0x41bfe0*/
    else
      v20 = 0; /*0x41bfe7*/
    MEMORY[0xB33578][0] = (int)v20; /*0x41bff6*/
    TESForm_SetFormID(v20, 0x138, 1); /*0x41bffb*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][0] + 0xD8))( /*0x41c013*/
      MEMORY[0xB33578][0],
      "MagicEnchantDrawSoundAlteration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][0] + 0x90))(MEMORY[0xB33578][0], 0); /*0x41c025*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33578][0]); /*0x41c037*/
  }
  v21 = TESDataHandler_LookupFormByID((TESForm *)0x139); /*0x41c055*/
  MEMORY[0xB33578][1] = (int)OblivionDynamicCast( /*0x41c065*/
                               v21,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESSound `RTTI Type Descriptor',
                               0);
  if ( !MEMORY[0xB33578][1] ) /*0x41c06a*/
  {
    v22 = (TESSound *)FormHeapAlloc(0x44u); /*0x41c06e*/
    if ( v22 ) /*0x41c084*/
      v23 = (TESForm *)TESSound::TESSound(v22); /*0x41c088*/
    else
      v23 = 0; /*0x41c08f*/
    MEMORY[0xB33578][1] = (int)v23; /*0x41c09e*/
    TESForm_SetFormID(v23, 0x139, 1); /*0x41c0a3*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][1] + 0xD8))( /*0x41c0bb*/
      MEMORY[0xB33578][1],
      "MagicEnchantDrawSoundConjuration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][1] + 0x90))(MEMORY[0xB33578][1], 0); /*0x41c0cd*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33578][1]); /*0x41c0df*/
  }
  v24 = TESDataHandler_LookupFormByID((TESForm *)0x13A); /*0x41c0fd*/
  MEMORY[0xB33578][2] = (int)OblivionDynamicCast( /*0x41c10d*/
                               v24,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESSound `RTTI Type Descriptor',
                               0);
  if ( !MEMORY[0xB33578][2] ) /*0x41c112*/
  {
    v25 = (TESSound *)FormHeapAlloc(0x44u); /*0x41c116*/
    if ( v25 ) /*0x41c12c*/
      v26 = (TESForm *)TESSound::TESSound(v25); /*0x41c130*/
    else
      v26 = 0; /*0x41c137*/
    MEMORY[0xB33578][2] = (int)v26; /*0x41c146*/
    TESForm_SetFormID(v26, 0x13A, 1); /*0x41c14b*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][2] + 0xD8))( /*0x41c163*/
      MEMORY[0xB33578][2],
      "MagicEnchantDrawSoundDestruction");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][2] + 0x90))(MEMORY[0xB33578][2], 0); /*0x41c175*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33578][2]); /*0x41c187*/
  }
  v27 = TESDataHandler_LookupFormByID((TESForm *)0x13B); /*0x41c1a5*/
  MEMORY[0xB33578][3] = (int)OblivionDynamicCast( /*0x41c1b5*/
                               v27,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESSound `RTTI Type Descriptor',
                               0);
  if ( !MEMORY[0xB33578][3] ) /*0x41c1ba*/
  {
    v28 = (TESSound *)FormHeapAlloc(0x44u); /*0x41c1be*/
    if ( v28 ) /*0x41c1d4*/
      v29 = (TESForm *)TESSound::TESSound(v28); /*0x41c1d8*/
    else
      v29 = 0; /*0x41c1df*/
    MEMORY[0xB33578][3] = (int)v29; /*0x41c1ee*/
    TESForm_SetFormID(v29, 0x13B, 1); /*0x41c1f3*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][3] + 0xD8))( /*0x41c20b*/
      MEMORY[0xB33578][3],
      "MagicEnchantDrawSoundIllusion");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][3] + 0x90))(MEMORY[0xB33578][3], 0); /*0x41c21d*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33578][3]); /*0x41c22f*/
  }
  v30 = TESDataHandler_LookupFormByID((TESForm *)0x13C); /*0x41c24d*/
  MEMORY[0xB33578][4] = (int)OblivionDynamicCast( /*0x41c25d*/
                               v30,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESSound `RTTI Type Descriptor',
                               0);
  if ( !MEMORY[0xB33578][4] ) /*0x41c262*/
  {
    v31 = (TESSound *)FormHeapAlloc(0x44u); /*0x41c266*/
    if ( v31 ) /*0x41c27c*/
      v32 = (TESForm *)TESSound::TESSound(v31); /*0x41c280*/
    else
      v32 = 0; /*0x41c287*/
    MEMORY[0xB33578][4] = (int)v32; /*0x41c296*/
    TESForm_SetFormID(v32, 0x13C, 1); /*0x41c29b*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][4] + 0xD8))( /*0x41c2b3*/
      MEMORY[0xB33578][4],
      "MagicEnchantDrawSoundMysticism");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][4] + 0x90))(MEMORY[0xB33578][4], 0); /*0x41c2c5*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33578][4]); /*0x41c2d7*/
  }
  v33 = TESDataHandler_LookupFormByID((TESForm *)0x13D); /*0x41c2f5*/
  MEMORY[0xB33578][5] = (int)OblivionDynamicCast( /*0x41c305*/
                               v33,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESSound `RTTI Type Descriptor',
                               0);
  if ( !MEMORY[0xB33578][5] ) /*0x41c30a*/
  {
    v34 = (TESSound *)FormHeapAlloc(0x44u); /*0x41c30e*/
    if ( v34 ) /*0x41c324*/
      v35 = (TESForm *)TESSound::TESSound(v34); /*0x41c328*/
    else
      v35 = 0; /*0x41c32f*/
    MEMORY[0xB33578][5] = (int)v35; /*0x41c33e*/
    TESForm_SetFormID(v35, 0x13D, 1); /*0x41c343*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][5] + 0xD8))( /*0x41c35b*/
      MEMORY[0xB33578][5],
      "MagicEnchantDrawSoundRestoration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][5] + 0x90))(MEMORY[0xB33578][5], 0); /*0x41c36d*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33578][5]); /*0x41c37f*/
  }
  v36 = TESDataHandler_LookupFormByID((TESForm *)0x13E); /*0x41c39d*/
  MEMORY[0xB33578][6] = (int)OblivionDynamicCast( /*0x41c3ad*/
                               v36,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESSound `RTTI Type Descriptor',
                               0);
  if ( !MEMORY[0xB33578][6] ) /*0x41c3b2*/
  {
    v37 = (TESSound *)FormHeapAlloc(0x44u); /*0x41c3b6*/
    if ( v37 ) /*0x41c3cc*/
      v38 = (TESForm *)TESSound::TESSound(v37); /*0x41c3d0*/
    else
      v38 = 0; /*0x41c3d7*/
    MEMORY[0xB33578][6] = (int)v38; /*0x41c3e6*/
    TESForm_SetFormID(v38, 0x13E, 1); /*0x41c3eb*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][6] + 0xD8))( /*0x41c403*/
      MEMORY[0xB33578][6],
      "MagicEnchantHitSoundAlteration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][6] + 0x90))(MEMORY[0xB33578][6], 0); /*0x41c415*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33578][6]); /*0x41c427*/
  }
  v39 = TESDataHandler_LookupFormByID((TESForm *)0x13F); /*0x41c445*/
  MEMORY[0xB33578][7] = (int)OblivionDynamicCast( /*0x41c455*/
                               v39,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESSound `RTTI Type Descriptor',
                               0);
  if ( !MEMORY[0xB33578][7] ) /*0x41c45a*/
  {
    v40 = (TESSound *)FormHeapAlloc(0x44u); /*0x41c45e*/
    if ( v40 ) /*0x41c474*/
      v41 = (TESForm *)TESSound::TESSound(v40); /*0x41c478*/
    else
      v41 = 0; /*0x41c47f*/
    MEMORY[0xB33578][7] = (int)v41; /*0x41c48e*/
    TESForm_SetFormID(v41, 0x13F, 1); /*0x41c493*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][7] + 0xD8))( /*0x41c4ab*/
      MEMORY[0xB33578][7],
      "MagicEnchantHitSoundConjuration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][7] + 0x90))(MEMORY[0xB33578][7], 0); /*0x41c4bd*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33578][7]); /*0x41c4cf*/
  }
  v42 = TESDataHandler_LookupFormByID((TESForm *)0x140); /*0x41c4ed*/
  MEMORY[0xB33578][8] = (int)OblivionDynamicCast( /*0x41c4fd*/
                               v42,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESSound `RTTI Type Descriptor',
                               0);
  if ( !MEMORY[0xB33578][8] ) /*0x41c502*/
  {
    v43 = (TESSound *)FormHeapAlloc(0x44u); /*0x41c506*/
    if ( v43 ) /*0x41c51c*/
      v44 = (TESForm *)TESSound::TESSound(v43); /*0x41c520*/
    else
      v44 = 0; /*0x41c527*/
    MEMORY[0xB33578][8] = (int)v44; /*0x41c536*/
    TESForm_SetFormID(v44, 0x140, 1); /*0x41c53b*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][8] + 0xD8))( /*0x41c553*/
      MEMORY[0xB33578][8],
      "MagicEnchantHitSoundDestruction");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][8] + 0x90))(MEMORY[0xB33578][8], 0); /*0x41c565*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33578][8]); /*0x41c577*/
  }
  v45 = TESDataHandler_LookupFormByID((TESForm *)0x141); /*0x41c595*/
  MEMORY[0xB33578][9] = (int)OblivionDynamicCast( /*0x41c5a5*/
                               v45,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESSound `RTTI Type Descriptor',
                               0);
  if ( !MEMORY[0xB33578][9] ) /*0x41c5aa*/
  {
    v46 = (TESSound *)FormHeapAlloc(0x44u); /*0x41c5ae*/
    if ( v46 ) /*0x41c5c4*/
      v47 = (TESForm *)TESSound::TESSound(v46); /*0x41c5c8*/
    else
      v47 = 0; /*0x41c5cf*/
    MEMORY[0xB33578][9] = (int)v47; /*0x41c5de*/
    TESForm_SetFormID(v47, 0x141, 1); /*0x41c5e3*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][9] + 0xD8))( /*0x41c5fb*/
      MEMORY[0xB33578][9],
      "MagicEnchantHitSoundIllusion");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][9] + 0x90))(MEMORY[0xB33578][9], 0); /*0x41c60d*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33578][9]); /*0x41c61f*/
  }
  v48 = TESDataHandler_LookupFormByID((TESForm *)0x142); /*0x41c63d*/
  MEMORY[0xB33578][0xA] = (int)OblivionDynamicCast( /*0x41c64d*/
                                 v48,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESSound `RTTI Type Descriptor',
                                 0);
  if ( !MEMORY[0xB33578][0xA] ) /*0x41c652*/
  {
    v49 = (TESSound *)FormHeapAlloc(0x44u); /*0x41c656*/
    if ( v49 ) /*0x41c66c*/
      v50 = (TESForm *)TESSound::TESSound(v49); /*0x41c670*/
    else
      v50 = 0; /*0x41c677*/
    MEMORY[0xB33578][0xA] = (int)v50; /*0x41c686*/
    TESForm_SetFormID(v50, 0x142, 1); /*0x41c68b*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][0xA] + 0xD8))( /*0x41c6a3*/
      MEMORY[0xB33578][0xA],
      "MagicEnchantHitSoundMysticism");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][0xA] + 0x90))(MEMORY[0xB33578][0xA], 0); /*0x41c6b5*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33578][0xA]); /*0x41c6c7*/
  }
  v51 = TESDataHandler_LookupFormByID((TESForm *)0x143); /*0x41c6e5*/
  MEMORY[0xB33578][0xB] = (int)OblivionDynamicCast( /*0x41c6f5*/
                                 v51,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESSound `RTTI Type Descriptor',
                                 0);
  if ( !MEMORY[0xB33578][0xB] ) /*0x41c6fa*/
  {
    v52 = (TESSound *)FormHeapAlloc(0x44u); /*0x41c6fe*/
    if ( v52 ) /*0x41c714*/
      v53 = (TESForm *)TESSound::TESSound(v52); /*0x41c718*/
    else
      v53 = 0; /*0x41c71f*/
    MEMORY[0xB33578][0xB] = (int)v53; /*0x41c72e*/
    TESForm_SetFormID(v53, 0x143, 1); /*0x41c733*/
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][0xB] + 0xD8))( /*0x41c74b*/
      MEMORY[0xB33578][0xB],
      "MagicEnchantHitSoundRestoration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][0xB] + 0x90))(MEMORY[0xB33578][0xB], 0); /*0x41c75d*/
    BSSimpleList_PushFront(&g_TESDataHandler->soundList.item, MEMORY[0xB33578][0xB]); /*0x41c76f*/
  }
  v54 = TESDataHandler_LookupFormByID((TESForm *)0x136); /*0x41c78d*/
  MEMORY[0xB33578][0xC] = (int)OblivionDynamicCast( /*0x41c79d*/
                                 v54,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &SpellItem `RTTI Type Descriptor',
                                 0);
  if ( !MEMORY[0xB33578][0xC] ) /*0x41c7a2*/
  {
    DefaultPlayerSpell = SpellItem_MakeDefaultPlayerSpell(); /*0x41c7a4*/
    MEMORY[0xB33578][0xC] = (int)DefaultPlayerSpell; /*0x41c7ab*/
    if ( DefaultPlayerSpell ) /*0x41c7b0*/
    {
      TESForm_SetFormID((TESForm *)DefaultPlayerSpell, 0x136, 1); /*0x41c7bb*/
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][0xC] + 0xD8))( /*0x41c7d3*/
        MEMORY[0xB33578][0xC],
        "DefaultPlayerSpell");
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][0xC] + 0x90))(MEMORY[0xB33578][0xC], 0); /*0x41c7e5*/
      BSSimpleList_PushFront(&g_TESDataHandler->spellList.item, MEMORY[0xB33578][0xC]); /*0x41c7f7*/
    }
  }
  v56 = TESDataHandler_LookupFormByID((TESForm *)0x137); /*0x41c815*/
  MEMORY[0xB33578][0xD] = (int)OblivionDynamicCast( /*0x41c825*/
                                 v56,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &SpellItem `RTTI Type Descriptor',
                                 0);
  if ( !MEMORY[0xB33578][0xD] ) /*0x41c82a*/
  {
    DefaultMarksmanSpell = SpellItem_MakeDefaultMarksmanSpell(); /*0x41c82c*/
    MEMORY[0xB33578][0xD] = (int)DefaultMarksmanSpell; /*0x41c833*/
    if ( DefaultMarksmanSpell ) /*0x41c838*/
    {
      TESForm_SetFormID((TESForm *)DefaultMarksmanSpell, 0x137, 1); /*0x41c843*/
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][0xD] + 0xD8))( /*0x41c85b*/
        MEMORY[0xB33578][0xD],
        "DefaultMarksmanParalyzeSpell");
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][0xD] + 0x90))(MEMORY[0xB33578][0xD], 0); /*0x41c86d*/
      BSSimpleList_PushFront(&g_TESDataHandler->spellList.item, MEMORY[0xB33578][0xD]); /*0x41c87f*/
    }
  }
  v58 = TESDataHandler_LookupFormByID((TESForm *)0x144); /*0x41c89d*/
  MEMORY[0xB33578][0xE] = (int)OblivionDynamicCast( /*0x41c8ad*/
                                 v58,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESEffectShader `RTTI Type Descriptor',
                                 0);
  if ( !MEMORY[0xB33578][0xE] ) /*0x41c8b2*/
  {
    v59 = (TESEffectShader *)FormHeapAlloc(0x110u); /*0x41c8bd*/
    if ( v59 ) /*0x41c8d3*/
      v60 = TESEffectShader::TESEffectShader(v59); /*0x41c8d7*/
    else
      v60 = 0; /*0x41c8de*/
    MEMORY[0xB33578][0xE] = (int)v60; /*0x41c8e6*/
    if ( v60 ) /*0x41c8eb*/
    {
      TESForm_SetFormID(&v60->super, 0x144, 1); /*0x41c8f6*/
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][0xE] + 0xD8))( /*0x41c90e*/
        MEMORY[0xB33578][0xE],
        "effectAbsorb");
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][0xE] + 0x90))(MEMORY[0xB33578][0xE], 0); /*0x41c920*/
      BSSimpleList_PushFront(&g_TESDataHandler->effectShaderList.item, MEMORY[0xB33578][0xE]); /*0x41c935*/
    }
  }
  v61 = TESDataHandler_LookupFormByID((TESForm *)0x145); /*0x41c953*/
  MEMORY[0xB33578][0xF] = (int)OblivionDynamicCast( /*0x41c963*/
                                 v61,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESEffectShader `RTTI Type Descriptor',
                                 0);
  if ( !MEMORY[0xB33578][0xF] ) /*0x41c968*/
  {
    v62 = (TESEffectShader *)FormHeapAlloc(0x110u); /*0x41c973*/
    if ( v62 ) /*0x41c989*/
      v63 = TESEffectShader::TESEffectShader(v62); /*0x41c98d*/
    else
      v63 = 0; /*0x41c994*/
    MEMORY[0xB33578][0xF] = (int)v63; /*0x41c99c*/
    if ( v63 ) /*0x41c9a1*/
    {
      TESForm_SetFormID(&v63->super, 0x145, 1); /*0x41c9ac*/
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][0xF] + 0xD8))( /*0x41c9c4*/
        MEMORY[0xB33578][0xF],
        "effectReflect");
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][0xF] + 0x90))(MEMORY[0xB33578][0xF], 0); /*0x41c9d6*/
      BSSimpleList_PushFront(&g_TESDataHandler->effectShaderList.item, MEMORY[0xB33578][0xF]); /*0x41c9eb*/
    }
  }
  v64 = TESDataHandler_LookupFormByID((TESForm *)0x146); /*0x41ca09*/
  MEMORY[0xB33578][0x10] = (int)OblivionDynamicCast( /*0x41ca19*/
                                  v64,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &TESEffectShader `RTTI Type Descriptor',
                                  0);
  if ( !MEMORY[0xB33578][0x10] ) /*0x41ca1e*/
  {
    v65 = (TESEffectShader *)FormHeapAlloc(0x110u); /*0x41ca29*/
    if ( v65 ) /*0x41ca3f*/
      v66 = TESEffectShader::TESEffectShader(v65); /*0x41ca43*/
    else
      v66 = 0; /*0x41ca4a*/
    MEMORY[0xB33578][0x10] = (int)v66; /*0x41ca52*/
    if ( v66 ) /*0x41ca57*/
    {
      TESForm_SetFormID(&v66->super, 0x146, 1); /*0x41ca62*/
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MEMORY[0xB33578][0x10] + 0xD8))( /*0x41ca7a*/
        MEMORY[0xB33578][0x10],
        "LifeDetected");
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0xB33578][0x10] + 0x90))(MEMORY[0xB33578][0x10], 0); /*0x41ca8c*/
      BSSimpleList_PushFront(&g_TESDataHandler->effectShaderList.item, MEMORY[0xB33578][0x10]); /*0x41caa1*/
    }
  }
}
