void sub_839F90()
{
  int v0; // esi
  unsigned int *p_Stage; // edi
  int v2; // eax
  bool v3; // zf
  NiD3DTextureStage *v4; // eax
  NiD3DTextureStage *v5; // eax
  int v6; // edi
  int v7; // ebp
  int v8; // edi
  int v9; // ebp
  NiD3DTextureStage **v10; // edi
  NiD3DTextureStage *v11; // ebp
  NiD3DTextureStage *v12; // eax
  int v13; // edi
  int v14; // ebp
  int v15; // edi
  int v16; // ebp
  NiD3DTextureStage **v17; // edi
  NiD3DTextureStage *v18; // ebp
  NiD3DTextureStage *v19; // eax
  int v20; // edi
  int v21; // ebp
  int v22; // edi
  int v23; // ebp
  int v24; // edi
  int v25; // ebp
  int v26; // edi
  int v27; // ebp
  int v28; // edi
  int v29; // ebp
  int v30; // edi
  int v31; // ebp
  NiD3DTextureStage *a3; // [esp+28h] [ebp-18h]
  NiD3DTextureStage *v33; // [esp+30h] [ebp-10h] BYREF
  unsigned int v34; // [esp+3Ch] [ebp-4h]

  v0 = 0; /*0x839fb7*/
  p_Stage = 0; /*0x839fbf*/
  v34 = 0; /*0x839fc1*/
  a3 = 0; /*0x839fc5*/
  v2 = unk_B45B20; /*0x839fc9*/
  v3 = unk_B45B20 == 0; /*0x839fce*/
  LOBYTE(v34) = 1; /*0x839fd5*/
  if ( !v3 ) /*0x839fda*/
  {
    v0 = v2; /*0x839fdc*/
    if ( v2 ) /*0x839fe4*/
      ++*(_DWORD *)(v2 + 0x60); /*0x839fe6*/
  }
  if ( !*(_DWORD *)(v0 + 0x18) ) /*0x839fe9*/
  {
    v4 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v33); /*0x839ffd*/
    if ( v4 ) /*0x83a001*/
    {
      p_Stage = &v4->Stage; /*0x83a003*/
      ++v4[7].Unk08; /*0x83a005*/
      a3 = v4; /*0x83a008*/
    }
    v5 = v33; /*0x83a00c*/
    LOBYTE(v34) = 1; /*0x83a012*/
    if ( v33 ) /*0x83a017*/
    {
      --v33[7].Unk08; /*0x83a019*/
      if ( !v5[7].Unk08 ) /*0x83a022*/
        sub_772560(v5); /*0x83a026*/
    }
    BSShader_ConfigureTextureStageSampler(p_Stage, 0, 1, 2); /*0x83a030*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), p_Stage); /*0x83a03f*/
  }
  v6 = *(_DWORD *)(v0 + 0x58); /*0x83a049*/
  v7 = unk_B45448; /*0x83a04e*/
  if ( v6 != unk_B45448 ) /*0x83a050*/
  {
    if ( v6 ) /*0x83a054*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x83a05a*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x83a070*/
    }
    *(_DWORD *)(v0 + 0x58) = v7; /*0x83a074*/
    if ( v7 ) /*0x83a077*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x83a07d*/
  }
  v8 = *(_DWORD *)(v0 + 0x44); /*0x83a088*/
  v9 = unk_B45240; /*0x83a08d*/
  if ( v8 != unk_B45240 ) /*0x83a08f*/
  {
    if ( v8 ) /*0x83a093*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x83a099*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x83a0af*/
    }
    *(_DWORD *)(v0 + 0x44) = v9; /*0x83a0b3*/
    if ( v9 ) /*0x83a0b6*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x83a0bc*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a0c2*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a0cc*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 0, 0); /*0x83a0d6*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a0db*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a0e5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x83a0ef*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a0f4*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a0fe*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x83a10d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a112*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a11c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x83a127*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a12c*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a136*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 1u, 0); /*0x83a140*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a145*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a14f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x83a159*/
  v3 = v0 == unk_B45B24; /*0x83a15e*/
  unk_B440A0 = 0x400002; /*0x83a164*/
  unk_B44730 = 0x20000; /*0x83a16e*/
  if ( !v3 ) /*0x83a178*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x83a17a*/
    if ( v3 ) /*0x83a17e*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x83a182*/
    v0 = unk_B45B24; /*0x83a187*/
    if ( unk_B45B24 ) /*0x83a18f*/
      ++*(_DWORD *)(v0 + 0x60); /*0x83a195*/
  }
  if ( !*(_DWORD *)(v0 + 0x18) ) /*0x83a198*/
  {
    v10 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v33); /*0x83a1aa*/
    v11 = a3; /*0x83a1ac*/
    v3 = a3 == *v10; /*0x83a1b0*/
    LOBYTE(v34) = 3; /*0x83a1b2*/
    if ( !v3 ) /*0x83a1b7*/
    {
      if ( a3 ) /*0x83a1bb*/
      {
        v3 = a3[7].Unk08-- == 1; /*0x83a1bd*/
        if ( v3 ) /*0x83a1c1*/
          sub_772560(a3); /*0x83a1c5*/
      }
      v11 = *v10; /*0x83a1ca*/
      a3 = *v10; /*0x83a1ce*/
      if ( *v10 ) /*0x83a1ce*/
        ++v11[7].Unk08; /*0x83a1d4*/
    }
    v12 = v33; /*0x83a1d8*/
    LOBYTE(v34) = 1; /*0x83a1de*/
    if ( v33 ) /*0x83a1e3*/
    {
      --v33[7].Unk08; /*0x83a1e5*/
      if ( !v12[7].Unk08 ) /*0x83a1ee*/
        sub_772560(v12); /*0x83a1f2*/
    }
    BSShader_ConfigureTextureStageSampler(v11, 0, 1, 2); /*0x83a1fd*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v11->Stage); /*0x83a20c*/
  }
  v13 = *(_DWORD *)(v0 + 0x58); /*0x83a216*/
  v14 = unk_B4544C; /*0x83a21b*/
  if ( v13 != unk_B4544C ) /*0x83a21d*/
  {
    if ( v13 ) /*0x83a221*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x83a227*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x83a23d*/
    }
    *(_DWORD *)(v0 + 0x58) = v14; /*0x83a241*/
    if ( v14 ) /*0x83a244*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x83a24a*/
  }
  v15 = *(_DWORD *)(v0 + 0x44); /*0x83a255*/
  v16 = unk_B45240; /*0x83a25a*/
  if ( v15 != unk_B45240 ) /*0x83a25c*/
  {
    if ( v15 ) /*0x83a260*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x83a266*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x83a27c*/
    }
    *(_DWORD *)(v0 + 0x44) = v16; /*0x83a280*/
    if ( v16 ) /*0x83a283*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x83a289*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a28f*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a299*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 0, 0); /*0x83a2a3*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a2a8*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a2b2*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x83a2bc*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a2c1*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a2cb*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x83a2da*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a2df*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a2e9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x83a2f4*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a2f9*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a303*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 1u, 0); /*0x83a30d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a312*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a31c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x83a326*/
  v3 = v0 == unk_B45B28; /*0x83a32b*/
  unk_B440A4 = (int)&loc_840007 + 1; /*0x83a331*/
  unk_B44734 = 0x20000; /*0x83a33b*/
  if ( !v3 ) /*0x83a345*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x83a347*/
    if ( v3 ) /*0x83a34b*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x83a34f*/
    v0 = unk_B45B28; /*0x83a354*/
    if ( unk_B45B28 ) /*0x83a35c*/
      ++*(_DWORD *)(v0 + 0x60); /*0x83a362*/
  }
  if ( !*(_DWORD *)(v0 + 0x18) ) /*0x83a365*/
  {
    v17 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v33); /*0x83a377*/
    v18 = a3; /*0x83a379*/
    v3 = a3 == *v17; /*0x83a37d*/
    LOBYTE(v34) = 4; /*0x83a37f*/
    if ( !v3 ) /*0x83a384*/
    {
      if ( a3 ) /*0x83a388*/
      {
        v3 = a3[7].Unk08-- == 1; /*0x83a38a*/
        if ( v3 ) /*0x83a38e*/
          sub_772560(a3); /*0x83a392*/
      }
      v18 = *v17; /*0x83a397*/
      a3 = *v17; /*0x83a39b*/
      if ( *v17 ) /*0x83a39b*/
        ++v18[7].Unk08; /*0x83a3a1*/
    }
    v19 = v33; /*0x83a3a5*/
    LOBYTE(v34) = 1; /*0x83a3ab*/
    if ( v33 ) /*0x83a3b0*/
    {
      --v33[7].Unk08; /*0x83a3b2*/
      if ( !v19[7].Unk08 ) /*0x83a3bb*/
        sub_772560(v19); /*0x83a3bf*/
    }
    BSShader_ConfigureTextureStageSampler(v18, 0, 1, 2); /*0x83a3ca*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v18->Stage); /*0x83a3d9*/
  }
  v20 = *(_DWORD *)(v0 + 0x58); /*0x83a3e3*/
  v21 = unk_B45450; /*0x83a3e8*/
  if ( v20 != unk_B45450 ) /*0x83a3ea*/
  {
    if ( v20 ) /*0x83a3ee*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x83a3f4*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x83a40a*/
    }
    *(_DWORD *)(v0 + 0x58) = v21; /*0x83a40e*/
    if ( v21 ) /*0x83a411*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x83a417*/
  }
  v22 = *(_DWORD *)(v0 + 0x44); /*0x83a422*/
  v23 = unk_B45244; /*0x83a427*/
  if ( v22 != unk_B45244 ) /*0x83a429*/
  {
    if ( v22 ) /*0x83a42d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x83a433*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x83a449*/
    }
    *(_DWORD *)(v0 + 0x44) = v23; /*0x83a44d*/
    if ( v23 ) /*0x83a450*/
      InterlockedIncrement((volatile LONG *)(v23 + 4)); /*0x83a456*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a45c*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a466*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x83a471*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a476*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a480*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 5u, 0); /*0x83a48b*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a490*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a49a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 6u, 0); /*0x83a4a5*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a4aa*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a4b4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x83a4be*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a4c3*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a4cd*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x83a4d8*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a4dd*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a4e7*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x83a4f2*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a4f7*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a501*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x83a50b*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a510*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a51a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x83a524*/
  v3 = v0 == unk_B45B2C; /*0x83a529*/
  unk_B440A8 = 0x1420002; /*0x83a52f*/
  unk_B44738 = 0x20000; /*0x83a539*/
  if ( !v3 ) /*0x83a543*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x83a545*/
    if ( v3 ) /*0x83a549*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x83a54d*/
    v0 = unk_B45B2C; /*0x83a552*/
    if ( unk_B45B2C ) /*0x83a55a*/
      ++*(_DWORD *)(v0 + 0x60); /*0x83a560*/
  }
  v24 = *(_DWORD *)(v0 + 0x58); /*0x83a569*/
  v25 = unk_B45454; /*0x83a56e*/
  if ( v24 != unk_B45454 ) /*0x83a570*/
  {
    if ( v24 ) /*0x83a574*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) ) /*0x83a57a*/
        (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x83a590*/
    }
    *(_DWORD *)(v0 + 0x58) = v25; /*0x83a594*/
    if ( v25 ) /*0x83a597*/
      InterlockedIncrement((volatile LONG *)(v25 + 4)); /*0x83a59d*/
  }
  v26 = *(_DWORD *)(v0 + 0x44); /*0x83a5a8*/
  v27 = unk_B45248; /*0x83a5ad*/
  if ( v26 != unk_B45248 ) /*0x83a5af*/
  {
    if ( v26 ) /*0x83a5b3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x83a5b9*/
        (**(void (__thiscall ***)(int, int))v26)(v26, 1); /*0x83a5cf*/
    }
    *(_DWORD *)(v0 + 0x44) = v27; /*0x83a5d3*/
    if ( v27 ) /*0x83a5d6*/
      InterlockedIncrement((volatile LONG *)(v27 + 4)); /*0x83a5dc*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a5e2*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a5ec*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 0, 0); /*0x83a5f6*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a5fb*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a605*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x83a60f*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a614*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a61e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 0, 0); /*0x83a628*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a62d*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a637*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x83a641*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a646*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a650*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x83a65a*/
  v3 = v0 == unk_B45B30; /*0x83a65f*/
  unk_B440AC = 2; /*0x83a665*/
  unk_B4473C = 0; /*0x83a66f*/
  if ( !v3 ) /*0x83a675*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x83a677*/
    if ( v3 ) /*0x83a67b*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x83a67f*/
    v0 = unk_B45B30; /*0x83a684*/
    if ( unk_B45B30 ) /*0x83a68c*/
      ++*(_DWORD *)(v0 + 0x60); /*0x83a692*/
  }
  v28 = *(_DWORD *)(v0 + 0x58); /*0x83a69b*/
  v29 = unk_B45458; /*0x83a6a0*/
  if ( v28 != unk_B45458 ) /*0x83a6a2*/
  {
    if ( v28 ) /*0x83a6a6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v28 + 4)) ) /*0x83a6ac*/
        (**(void (__thiscall ***)(int, int))v28)(v28, 1); /*0x83a6c2*/
    }
    *(_DWORD *)(v0 + 0x58) = v29; /*0x83a6c6*/
    if ( v29 ) /*0x83a6c9*/
      InterlockedIncrement((volatile LONG *)(v29 + 4)); /*0x83a6cf*/
  }
  v30 = *(_DWORD *)(v0 + 0x44); /*0x83a6da*/
  v31 = unk_B45248; /*0x83a6df*/
  if ( v30 != unk_B45248 ) /*0x83a6e1*/
  {
    if ( v30 ) /*0x83a6e5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v30 + 4)) ) /*0x83a6eb*/
        (**(void (__thiscall ***)(int, int))v30)(v30, 1); /*0x83a701*/
    }
    *(_DWORD *)(v0 + 0x44) = v31; /*0x83a705*/
    if ( v31 ) /*0x83a708*/
      InterlockedIncrement((volatile LONG *)(v31 + 4)); /*0x83a70e*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a714*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a71e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 0, 0); /*0x83a728*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a72d*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a737*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x83a741*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a746*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a750*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 0, 0); /*0x83a75a*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a75f*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a769*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x83a773*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x83a778*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x83a782*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x83a78c*/
  unk_B440B0 = 0x40008; /*0x83a79a*/
  unk_B44740 = 0; /*0x83a7a4*/
  LOBYTE(v34) = 0; /*0x83a7aa*/
  if ( a3 ) /*0x83a7ae*/
  {
    v3 = a3[7].Unk08-- == 1; /*0x83a7b0*/
    if ( v3 ) /*0x83a7b3*/
      sub_772560(a3); /*0x83a7b5*/
  }
  v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x83a7ba*/
  v34 = 0xFFFFFFFF; /*0x83a7bd*/
  if ( v3 ) /*0x83a7c1*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x83a7c5*/
}
