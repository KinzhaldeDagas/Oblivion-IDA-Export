TESForm *__cdecl Magic_ConstructGlobalData()
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
  unsigned int *DefaultPlayerSpell; // eax
  TESForm *v56; // eax
  SpellItem *DefaultMarksmanSpell; // eax
  TESForm *v58; // eax
  TESEffectShader *v59; // eax
  TESForm *v60; // eax
  TESForm *v61; // eax
  TESEffectShader *v62; // eax
  TESForm *v63; // eax
  TESForm *v64; // eax
  TESForm *result; // eax
  TESEffectShader *v66; // eax

  v0 = TESDataHandler_LookupFormByID((TESForm *)0x12C);
  MagicFailureSoundAlteration = (int)OblivionDynamicCast(
                                       v0,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       &TESSound `RTTI Type Descriptor',
                                       0);
  if ( !MagicFailureSoundAlteration )
  {
    v1 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v1 )
      v2 = (TESForm *)TESSound::TESSound(v1);
    else
      v2 = 0;
    MagicFailureSoundAlteration = (int)v2;
    TESForm_SetFormID(v2, 0x12C, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicFailureSoundAlteration + 0xD8))(
      MagicFailureSoundAlteration,
      "MagicFailureSoundAlteration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicFailureSoundAlteration + 0x90))(
      MagicFailureSoundAlteration,
      0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicFailureSoundAlteration);
  }
  v3 = TESDataHandler_LookupFormByID((TESForm *)0x12D);
  MagicFailureSoundConjuration = (int)OblivionDynamicCast(
                                        v3,
                                        0,
                                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                        &TESSound `RTTI Type Descriptor',
                                        0);
  if ( !MagicFailureSoundConjuration )
  {
    v4 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v4 )
      v5 = (TESForm *)TESSound::TESSound(v4);
    else
      v5 = 0;
    MagicFailureSoundConjuration = (int)v5;
    TESForm_SetFormID(v5, 0x12D, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicFailureSoundConjuration + 0xD8))(
      MagicFailureSoundConjuration,
      "MagicFailureSoundConjuration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicFailureSoundConjuration + 0x90))(
      MagicFailureSoundConjuration,
      0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicFailureSoundConjuration);
  }
  v6 = TESDataHandler_LookupFormByID((TESForm *)0x12E);
  MagicFailureSoundDestruction = (int)OblivionDynamicCast(
                                        v6,
                                        0,
                                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                        &TESSound `RTTI Type Descriptor',
                                        0);
  if ( !MagicFailureSoundDestruction )
  {
    v7 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v7 )
      v8 = (TESForm *)TESSound::TESSound(v7);
    else
      v8 = 0;
    MagicFailureSoundDestruction = (int)v8;
    TESForm_SetFormID(v8, 0x12E, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicFailureSoundDestruction + 0xD8))(
      MagicFailureSoundDestruction,
      "MagicFailureSoundDestruction");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicFailureSoundDestruction + 0x90))(
      MagicFailureSoundDestruction,
      0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicFailureSoundDestruction);
  }
  v9 = TESDataHandler_LookupFormByID((TESForm *)0x12F);
  MagicFailureSoundIllusion = (int)OblivionDynamicCast(
                                     v9,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESSound `RTTI Type Descriptor',
                                     0);
  if ( !MagicFailureSoundIllusion )
  {
    v10 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v10 )
      v11 = (TESForm *)TESSound::TESSound(v10);
    else
      v11 = 0;
    MagicFailureSoundIllusion = (int)v11;
    TESForm_SetFormID(v11, 0x12F, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicFailureSoundIllusion + 0xD8))(
      MagicFailureSoundIllusion,
      "MagicFailureSoundIllusion");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicFailureSoundIllusion + 0x90))(MagicFailureSoundIllusion, 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicFailureSoundIllusion);
  }
  v12 = TESDataHandler_LookupFormByID((TESForm *)0x130);
  MagicFailureSoundMysticism = (int)OblivionDynamicCast(
                                      v12,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                      &TESSound `RTTI Type Descriptor',
                                      0);
  if ( !MagicFailureSoundMysticism )
  {
    v13 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v13 )
      v14 = (TESForm *)TESSound::TESSound(v13);
    else
      v14 = 0;
    MagicFailureSoundMysticism = (int)v14;
    TESForm_SetFormID(v14, 0x130, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicFailureSoundMysticism + 0xD8))(
      MagicFailureSoundMysticism,
      "MagicFailureSoundMysticism");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicFailureSoundMysticism + 0x90))(MagicFailureSoundMysticism, 0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicFailureSoundMysticism);
  }
  v15 = TESDataHandler_LookupFormByID((TESForm *)0x131);
  MagicFailureSoundRestoration = (int)OblivionDynamicCast(
                                        v15,
                                        0,
                                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                        &TESSound `RTTI Type Descriptor',
                                        0);
  if ( !MagicFailureSoundRestoration )
  {
    v16 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v16 )
      v17 = (TESForm *)TESSound::TESSound(v16);
    else
      v17 = 0;
    MagicFailureSoundRestoration = (int)v17;
    TESForm_SetFormID(v17, 0x131, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicFailureSoundRestoration + 0xD8))(
      MagicFailureSoundRestoration,
      "MagicFailureSoundRestoration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicFailureSoundRestoration + 0x90))(
      MagicFailureSoundRestoration,
      0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicFailureSoundRestoration);
  }
  v18 = TESDataHandler_LookupFormByID((TESForm *)0x138);
  MagicEnchantDrawSoundAlteration = (int)OblivionDynamicCast(
                                           v18,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                           &TESSound `RTTI Type Descriptor',
                                           0);
  if ( !MagicEnchantDrawSoundAlteration )
  {
    v19 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v19 )
      v20 = (TESForm *)TESSound::TESSound(v19);
    else
      v20 = 0;
    MagicEnchantDrawSoundAlteration = (int)v20;
    TESForm_SetFormID(v20, 0x138, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicEnchantDrawSoundAlteration + 0xD8))(
      MagicEnchantDrawSoundAlteration,
      "MagicEnchantDrawSoundAlteration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicEnchantDrawSoundAlteration + 0x90))(
      MagicEnchantDrawSoundAlteration,
      0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicEnchantDrawSoundAlteration);
  }
  v21 = TESDataHandler_LookupFormByID((TESForm *)0x139);
  MagicEnchantDrawSoundConjuration = (int)OblivionDynamicCast(
                                            v21,
                                            0,
                                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                            &TESSound `RTTI Type Descriptor',
                                            0);
  if ( !MagicEnchantDrawSoundConjuration )
  {
    v22 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v22 )
      v23 = (TESForm *)TESSound::TESSound(v22);
    else
      v23 = 0;
    MagicEnchantDrawSoundConjuration = (int)v23;
    TESForm_SetFormID(v23, 0x139, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicEnchantDrawSoundConjuration + 0xD8))(
      MagicEnchantDrawSoundConjuration,
      "MagicEnchantDrawSoundConjuration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicEnchantDrawSoundConjuration + 0x90))(
      MagicEnchantDrawSoundConjuration,
      0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicEnchantDrawSoundConjuration);
  }
  v24 = TESDataHandler_LookupFormByID((TESForm *)0x13A);
  MagicEnchantDrawSoundDestruction = (int)OblivionDynamicCast(
                                            v24,
                                            0,
                                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                            &TESSound `RTTI Type Descriptor',
                                            0);
  if ( !MagicEnchantDrawSoundDestruction )
  {
    v25 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v25 )
      v26 = (TESForm *)TESSound::TESSound(v25);
    else
      v26 = 0;
    MagicEnchantDrawSoundDestruction = (int)v26;
    TESForm_SetFormID(v26, 0x13A, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicEnchantDrawSoundDestruction + 0xD8))(
      MagicEnchantDrawSoundDestruction,
      "MagicEnchantDrawSoundDestruction");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicEnchantDrawSoundDestruction + 0x90))(
      MagicEnchantDrawSoundDestruction,
      0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicEnchantDrawSoundDestruction);
  }
  v27 = TESDataHandler_LookupFormByID((TESForm *)0x13B);
  MagicEnchantDrawSoundIllusion = (int)OblivionDynamicCast(
                                         v27,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                         &TESSound `RTTI Type Descriptor',
                                         0);
  if ( !MagicEnchantDrawSoundIllusion )
  {
    v28 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v28 )
      v29 = (TESForm *)TESSound::TESSound(v28);
    else
      v29 = 0;
    MagicEnchantDrawSoundIllusion = (int)v29;
    TESForm_SetFormID(v29, 0x13B, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicEnchantDrawSoundIllusion + 0xD8))(
      MagicEnchantDrawSoundIllusion,
      "MagicEnchantDrawSoundIllusion");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicEnchantDrawSoundIllusion + 0x90))(
      MagicEnchantDrawSoundIllusion,
      0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicEnchantDrawSoundIllusion);
  }
  v30 = TESDataHandler_LookupFormByID((TESForm *)0x13C);
  MagicEnchantDrawSoundMysticism = (int)OblivionDynamicCast(
                                          v30,
                                          0,
                                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                          &TESSound `RTTI Type Descriptor',
                                          0);
  if ( !MagicEnchantDrawSoundMysticism )
  {
    v31 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v31 )
      v32 = (TESForm *)TESSound::TESSound(v31);
    else
      v32 = 0;
    MagicEnchantDrawSoundMysticism = (int)v32;
    TESForm_SetFormID(v32, 0x13C, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicEnchantDrawSoundMysticism + 0xD8))(
      MagicEnchantDrawSoundMysticism,
      "MagicEnchantDrawSoundMysticism");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicEnchantDrawSoundMysticism + 0x90))(
      MagicEnchantDrawSoundMysticism,
      0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicEnchantDrawSoundMysticism);
  }
  v33 = TESDataHandler_LookupFormByID((TESForm *)0x13D);
  MagicEnchantDrawSoundRestoration = (int)OblivionDynamicCast(
                                            v33,
                                            0,
                                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                            &TESSound `RTTI Type Descriptor',
                                            0);
  if ( !MagicEnchantDrawSoundRestoration )
  {
    v34 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v34 )
      v35 = (TESForm *)TESSound::TESSound(v34);
    else
      v35 = 0;
    MagicEnchantDrawSoundRestoration = (int)v35;
    TESForm_SetFormID(v35, 0x13D, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicEnchantDrawSoundRestoration + 0xD8))(
      MagicEnchantDrawSoundRestoration,
      "MagicEnchantDrawSoundRestoration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicEnchantDrawSoundRestoration + 0x90))(
      MagicEnchantDrawSoundRestoration,
      0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicEnchantDrawSoundRestoration);
  }
  v36 = TESDataHandler_LookupFormByID((TESForm *)0x13E);
  MagicEnchantHitSoundAlteration = (int)OblivionDynamicCast(
                                          v36,
                                          0,
                                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                          &TESSound `RTTI Type Descriptor',
                                          0);
  if ( !MagicEnchantHitSoundAlteration )
  {
    v37 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v37 )
      v38 = (TESForm *)TESSound::TESSound(v37);
    else
      v38 = 0;
    MagicEnchantHitSoundAlteration = (int)v38;
    TESForm_SetFormID(v38, 0x13E, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicEnchantHitSoundAlteration + 0xD8))(
      MagicEnchantHitSoundAlteration,
      "MagicEnchantHitSoundAlteration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicEnchantHitSoundAlteration + 0x90))(
      MagicEnchantHitSoundAlteration,
      0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicEnchantHitSoundAlteration);
  }
  v39 = TESDataHandler_LookupFormByID((TESForm *)0x13F);
  MagicEnchantHitSoundConjuration = (int)OblivionDynamicCast(
                                           v39,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                           &TESSound `RTTI Type Descriptor',
                                           0);
  if ( !MagicEnchantHitSoundConjuration )
  {
    v40 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v40 )
      v41 = (TESForm *)TESSound::TESSound(v40);
    else
      v41 = 0;
    MagicEnchantHitSoundConjuration = (int)v41;
    TESForm_SetFormID(v41, 0x13F, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicEnchantHitSoundConjuration + 0xD8))(
      MagicEnchantHitSoundConjuration,
      "MagicEnchantHitSoundConjuration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicEnchantHitSoundConjuration + 0x90))(
      MagicEnchantHitSoundConjuration,
      0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicEnchantHitSoundConjuration);
  }
  v42 = TESDataHandler_LookupFormByID((TESForm *)0x140);
  MagicEnchantHitSoundDestruction = (int)OblivionDynamicCast(
                                           v42,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                           &TESSound `RTTI Type Descriptor',
                                           0);
  if ( !MagicEnchantHitSoundDestruction )
  {
    v43 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v43 )
      v44 = (TESForm *)TESSound::TESSound(v43);
    else
      v44 = 0;
    MagicEnchantHitSoundDestruction = (int)v44;
    TESForm_SetFormID(v44, 0x140, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicEnchantHitSoundDestruction + 0xD8))(
      MagicEnchantHitSoundDestruction,
      "MagicEnchantHitSoundDestruction");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicEnchantHitSoundDestruction + 0x90))(
      MagicEnchantHitSoundDestruction,
      0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicEnchantHitSoundDestruction);
  }
  v45 = TESDataHandler_LookupFormByID((TESForm *)0x141);
  MagicEnchantHitSoundIllusion = (int)OblivionDynamicCast(
                                        v45,
                                        0,
                                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                        &TESSound `RTTI Type Descriptor',
                                        0);
  if ( !MagicEnchantHitSoundIllusion )
  {
    v46 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v46 )
      v47 = (TESForm *)TESSound::TESSound(v46);
    else
      v47 = 0;
    MagicEnchantHitSoundIllusion = (int)v47;
    TESForm_SetFormID(v47, 0x141, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicEnchantHitSoundIllusion + 0xD8))(
      MagicEnchantHitSoundIllusion,
      "MagicEnchantHitSoundIllusion");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicEnchantHitSoundIllusion + 0x90))(
      MagicEnchantHitSoundIllusion,
      0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicEnchantHitSoundIllusion);
  }
  v48 = TESDataHandler_LookupFormByID((TESForm *)0x142);
  MagicEnchantHitSoundMysticism = (int)OblivionDynamicCast(
                                         v48,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                         &TESSound `RTTI Type Descriptor',
                                         0);
  if ( !MagicEnchantHitSoundMysticism )
  {
    v49 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v49 )
      v50 = (TESForm *)TESSound::TESSound(v49);
    else
      v50 = 0;
    MagicEnchantHitSoundMysticism = (int)v50;
    TESForm_SetFormID(v50, 0x142, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicEnchantHitSoundMysticism + 0xD8))(
      MagicEnchantHitSoundMysticism,
      "MagicEnchantHitSoundMysticism");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicEnchantHitSoundMysticism + 0x90))(
      MagicEnchantHitSoundMysticism,
      0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicEnchantHitSoundMysticism);
  }
  v51 = TESDataHandler_LookupFormByID((TESForm *)0x143);
  MagicEnchantHitSoundRestoration = (int)OblivionDynamicCast(
                                           v51,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                           &TESSound `RTTI Type Descriptor',
                                           0);
  if ( !MagicEnchantHitSoundRestoration )
  {
    v52 = (TESSound *)FormHeapAlloc(0x44u);
    if ( v52 )
      v53 = (TESForm *)TESSound::TESSound(v52);
    else
      v53 = 0;
    MagicEnchantHitSoundRestoration = (int)v53;
    TESForm_SetFormID(v53, 0x143, 1);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)MagicEnchantHitSoundRestoration + 0xD8))(
      MagicEnchantHitSoundRestoration,
      "MagicEnchantHitSoundRestoration");
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MagicEnchantHitSoundRestoration + 0x90))(
      MagicEnchantHitSoundRestoration,
      0);
    BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x6C), MagicEnchantHitSoundRestoration);
  }
  v54 = TESDataHandler_LookupFormByID((TESForm *)0x136);
  TESDataHandler_g_DefaultPlayerSpell = (int)OblivionDynamicCast(
                                               v54,
                                               0,
                                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                               &SpellItem `RTTI Type Descriptor',
                                               0);
  if ( !TESDataHandler_g_DefaultPlayerSpell )
  {
    DefaultPlayerSpell = SpellItem_MakeDefaultPlayerSpell();
    TESDataHandler_g_DefaultPlayerSpell = (int)DefaultPlayerSpell;
    if ( DefaultPlayerSpell )
    {
      TESForm_SetFormID((TESForm *)DefaultPlayerSpell, 0x136, 1);
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_DefaultPlayerSpell + 0xD8))(
        TESDataHandler_g_DefaultPlayerSpell,
        "DefaultPlayerSpell");
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_DefaultPlayerSpell + 0x90))(
        TESDataHandler_g_DefaultPlayerSpell,
        0);
      BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x2C), TESDataHandler_g_DefaultPlayerSpell);
    }
  }
  v56 = TESDataHandler_LookupFormByID((TESForm *)0x137);
  TESDataHandler_g_MarksmanParalyzeSpell = (int)OblivionDynamicCast(
                                                  v56,
                                                  0,
                                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                  &SpellItem `RTTI Type Descriptor',
                                                  0);
  if ( !TESDataHandler_g_MarksmanParalyzeSpell )
  {
    DefaultMarksmanSpell = SpellItem_MakeDefaultMarksmanSpell();
    TESDataHandler_g_MarksmanParalyzeSpell = (int)DefaultMarksmanSpell;
    if ( DefaultMarksmanSpell )
    {
      TESForm_SetFormID((TESForm *)DefaultMarksmanSpell, 0x137, 1);
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)TESDataHandler_g_MarksmanParalyzeSpell + 0xD8))(
        TESDataHandler_g_MarksmanParalyzeSpell,
        "DefaultMarksmanParalyzeSpell");
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)TESDataHandler_g_MarksmanParalyzeSpell + 0x90))(
        TESDataHandler_g_MarksmanParalyzeSpell,
        0);
      BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0x2C), TESDataHandler_g_MarksmanParalyzeSpell);
    }
  }
  v58 = TESDataHandler_LookupFormByID((TESForm *)0x144);
  effectReflectShader = (int)OblivionDynamicCast(
                               v58,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESEffectShader `RTTI Type Descriptor',
                               0);
  if ( !effectReflectShader )
  {
    v59 = (TESEffectShader *)FormHeapAlloc(0x110u);
    if ( v59 )
      v60 = (TESForm *)TESEffectShader::TESEffectShader(v59);
    else
      v60 = 0;
    effectReflectShader = (int)v60;
    if ( v60 )
    {
      TESForm_SetFormID(v60, 0x144, 1);
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)effectReflectShader + 0xD8))(
        effectReflectShader,
        "effectAbsorb");
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)effectReflectShader + 0x90))(effectReflectShader, 0);
      BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0xAC), effectReflectShader);
    }
  }
  v61 = TESDataHandler_LookupFormByID((TESForm *)0x145);
  effectAbsorbShader = (int)OblivionDynamicCast(
                              v61,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESEffectShader `RTTI Type Descriptor',
                              0);
  if ( !effectAbsorbShader )
  {
    v62 = (TESEffectShader *)FormHeapAlloc(0x110u);
    if ( v62 )
      v63 = (TESForm *)TESEffectShader::TESEffectShader(v62);
    else
      v63 = 0;
    effectAbsorbShader = (int)v63;
    if ( v63 )
    {
      TESForm_SetFormID(v63, 0x145, 1);
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)effectAbsorbShader + 0xD8))(
        effectAbsorbShader,
        "effectReflect");
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)effectAbsorbShader + 0x90))(effectAbsorbShader, 0);
      BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0xAC), effectAbsorbShader);
    }
  }
  v64 = TESDataHandler_LookupFormByID((TESForm *)0x146);
  result = (TESForm *)OblivionDynamicCast(
                        v64,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESEffectShader `RTTI Type Descriptor',
                        0);
  LifeDetectedShader = (int)result;
  if ( !result )
  {
    v66 = (TESEffectShader *)FormHeapAlloc(0x110u);
    if ( v66 )
      result = (TESForm *)TESEffectShader::TESEffectShader(v66);
    else
      result = 0;
    LifeDetectedShader = (int)result;
    if ( result )
    {
      TESForm_SetFormID(result, 0x146, 1);
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)LifeDetectedShader + 0xD8))(
        LifeDetectedShader,
        "LifeDetected");
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)LifeDetectedShader + 0x90))(LifeDetectedShader, 0);
      return (TESForm *)BSSimpleList_PushFront((_DWORD *)(TESDataHandler + 0xAC), LifeDetectedShader);
    }
  }
  return result;
}
