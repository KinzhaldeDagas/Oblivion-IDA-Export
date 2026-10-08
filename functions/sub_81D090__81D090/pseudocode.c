void sub_81D090()
{
  int v0; // esi
  NiD3DTextureStage *v1; // edi
  int v2; // eax
  bool v3; // zf
  NiD3DTextureStage *v4; // eax
  NiD3DTextureStage *v5; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // ebp
  int v9; // ebx
  NiD3DTextureStage **v10; // ebp
  NiD3DTextureStage *v11; // eax
  NiD3DTextureStage **v12; // ebp
  NiD3DTextureStage *v13; // eax
  NiD3DTextureStage **v14; // ebp
  NiD3DTextureStage *v15; // eax
  NiD3DTextureStage **v16; // ebp
  NiD3DTextureStage *v17; // eax
  int v18; // ebp
  int v19; // ebx
  int v20; // ebp
  int v21; // ebx
  NiD3DTextureStage **v22; // ebx
  NiD3DTextureStage *v23; // eax
  int v24; // ebp
  int v25; // ebx
  int v26; // ebp
  int v27; // ebx
  NiD3DTextureStage **v28; // ebp
  NiD3DTextureStage *v29; // eax
  NiD3DTextureStage **v30; // ebp
  NiD3DTextureStage *v31; // eax
  NiD3DTextureStage **v32; // ebp
  NiD3DTextureStage *v33; // eax
  NiD3DTextureStage **v34; // ebp
  NiD3DTextureStage *v35; // eax
  int v36; // ebp
  int v37; // ebx
  int v38; // ebp
  int v39; // ebx
  NiD3DTextureStage *v40; // [esp+20h] [ebp-10h] BYREF
  unsigned int v41; // [esp+2Ch] [ebp-4h]

  v0 = 0; /*0x81d0b7*/
  v1 = 0; /*0x81d0bd*/
  v41 = 0; /*0x81d0bf*/
  v2 = unk_B459DC; /*0x81d0c7*/
  v3 = unk_B459DC == 0; /*0x81d0cc*/
  LOBYTE(v41) = 1; /*0x81d0d3*/
  if ( !v3 ) /*0x81d0d7*/
  {
    v0 = v2; /*0x81d0d9*/
    if ( v2 ) /*0x81d0e1*/
      ++*(_DWORD *)(v2 + 0x60); /*0x81d0e3*/
  }
  if ( !*(_DWORD *)(v0 + 0x18) ) /*0x81d0e6*/
  {
    v4 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v40); /*0x81d0fa*/
    if ( v4 ) /*0x81d0fe*/
    {
      v1 = v4; /*0x81d100*/
      ++v4[7].Unk08; /*0x81d102*/
    }
    v5 = v40; /*0x81d109*/
    LOBYTE(v41) = 1; /*0x81d10f*/
    if ( v40 ) /*0x81d114*/
    {
      --v40[7].Unk08; /*0x81d116*/
      if ( !v5[7].Unk08 ) /*0x81d11f*/
        sub_772560(v5); /*0x81d124*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81d12f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81d13e*/
  }
  v6 = *(_DWORD *)(v0 + 0x58); /*0x81d148*/
  v7 = unk_B452B4; /*0x81d14d*/
  if ( v6 != unk_B452B4 ) /*0x81d14f*/
  {
    if ( v6 ) /*0x81d153*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x81d159*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x81d170*/
    }
    *(_DWORD *)(v0 + 0x58) = v7; /*0x81d174*/
    if ( v7 ) /*0x81d177*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x81d17d*/
  }
  v8 = *(_DWORD *)(v0 + 0x44); /*0x81d188*/
  v9 = unk_B450A8; /*0x81d18d*/
  if ( v8 != unk_B450A8 ) /*0x81d18f*/
  {
    if ( v8 ) /*0x81d193*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x81d199*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x81d1b0*/
    }
    *(_DWORD *)(v0 + 0x44) = v9; /*0x81d1b4*/
    if ( v9 ) /*0x81d1b7*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x81d1bd*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d1c3*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d1ce*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81d1da*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d1df*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d1ea*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 2u, 0); /*0x81d1f6*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d1fb*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d206*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 2u, 0); /*0x81d212*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d217*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d222*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81d22e*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d233*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d23e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81d24a*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d24f*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d25a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81d266*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d26b*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d276*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81d282*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d287*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d292*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81d29e*/
  v3 = v0 == unk_B459E0; /*0x81d2a6*/
  unk_B43F5C = 0x20082; /*0x81d2ac*/
  unk_B445EC = 8; /*0x81d2b6*/
  if ( !v3 ) /*0x81d2c0*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81d2c2*/
    if ( v3 ) /*0x81d2c5*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81d2c9*/
    v0 = unk_B459E0; /*0x81d2ce*/
    if ( unk_B459E0 ) /*0x81d2d6*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81d2dc*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 4u ) /*0x81d2e6*/
  {
    v10 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81d2f9*/
    v3 = v1 == *v10; /*0x81d2fb*/
    LOBYTE(v41) = 3; /*0x81d2fe*/
    if ( !v3 ) /*0x81d303*/
    {
      if ( v1 ) /*0x81d307*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81d309*/
        if ( v3 ) /*0x81d30c*/
          sub_772560(v1); /*0x81d310*/
      }
      v1 = *v10; /*0x81d315*/
      if ( *v10 ) /*0x81d31a*/
        ++v1[7].Unk08; /*0x81d320*/
    }
    v11 = v40; /*0x81d324*/
    LOBYTE(v41) = 1; /*0x81d32a*/
    if ( v40 ) /*0x81d32f*/
    {
      --v40[7].Unk08; /*0x81d331*/
      if ( !v11[7].Unk08 ) /*0x81d339*/
        sub_772560(v11); /*0x81d33e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81d34a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81d359*/
    v12 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81d36b*/
    v3 = v1 == *v12; /*0x81d36d*/
    LOBYTE(v41) = 4; /*0x81d370*/
    if ( !v3 ) /*0x81d375*/
    {
      if ( v1 ) /*0x81d379*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81d37b*/
        if ( v3 ) /*0x81d37e*/
          sub_772560(v1); /*0x81d382*/
      }
      v1 = *v12; /*0x81d387*/
      if ( *v12 ) /*0x81d38c*/
        ++v1[7].Unk08; /*0x81d392*/
    }
    v13 = v40; /*0x81d396*/
    LOBYTE(v41) = 1; /*0x81d39c*/
    if ( v40 ) /*0x81d3a1*/
    {
      --v40[7].Unk08; /*0x81d3a3*/
      if ( !v13[7].Unk08 ) /*0x81d3ab*/
        sub_772560(v13); /*0x81d3b0*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 3, 2); /*0x81d3bc*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B43110[0])); /*0x81d3cd*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81d3d9*/
    v14 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81d3eb*/
    v3 = v1 == *v14; /*0x81d3ed*/
    LOBYTE(v41) = 5; /*0x81d3f0*/
    if ( !v3 ) /*0x81d3f5*/
    {
      if ( v1 ) /*0x81d3f9*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81d3fb*/
        if ( v3 ) /*0x81d3fe*/
          sub_772560(v1); /*0x81d402*/
      }
      v1 = *v14; /*0x81d407*/
      if ( *v14 ) /*0x81d40c*/
        ++v1[7].Unk08; /*0x81d412*/
    }
    v15 = v40; /*0x81d416*/
    LOBYTE(v41) = 1; /*0x81d41c*/
    if ( v40 ) /*0x81d421*/
    {
      --v40[7].Unk08; /*0x81d423*/
      if ( !v15[7].Unk08 ) /*0x81d42b*/
        sub_772560(v15); /*0x81d430*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 3, 2); /*0x81d43c*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B430D4)); /*0x81d44d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81d459*/
    v16 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81d46b*/
    v3 = v1 == *v16; /*0x81d46d*/
    LOBYTE(v41) = 6; /*0x81d470*/
    if ( !v3 ) /*0x81d475*/
    {
      if ( v1 ) /*0x81d479*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81d47b*/
        if ( v3 ) /*0x81d47e*/
          sub_772560(v1); /*0x81d482*/
      }
      v1 = *v16; /*0x81d487*/
      if ( *v16 ) /*0x81d48c*/
        ++v1[7].Unk08; /*0x81d492*/
    }
    v17 = v40; /*0x81d496*/
    LOBYTE(v41) = 1; /*0x81d49c*/
    if ( v40 ) /*0x81d4a1*/
    {
      --v40[7].Unk08; /*0x81d4a3*/
      if ( !v17[7].Unk08 ) /*0x81d4ab*/
        sub_772560(v17); /*0x81d4b0*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x81d4bc*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B430DC[4])); /*0x81d4cd*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81d4d9*/
  }
  v18 = *(_DWORD *)(v0 + 0x58); /*0x81d4e3*/
  v19 = unk_B452B0; /*0x81d4e8*/
  if ( v18 != unk_B452B0 ) /*0x81d4ea*/
  {
    if ( v18 ) /*0x81d4ee*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x81d4f4*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x81d50b*/
    }
    *(_DWORD *)(v0 + 0x58) = v19; /*0x81d50f*/
    if ( v19 ) /*0x81d512*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x81d518*/
  }
  v20 = *(_DWORD *)(v0 + 0x44); /*0x81d523*/
  v21 = unk_B450A4; /*0x81d528*/
  if ( v20 != unk_B450A4 ) /*0x81d52a*/
  {
    if ( v20 ) /*0x81d52e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x81d534*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x81d54b*/
    }
    *(_DWORD *)(v0 + 0x44) = v21; /*0x81d54f*/
    if ( v21 ) /*0x81d552*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x81d558*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d55e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d569*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81d579*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d57e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d589*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 2u, 0); /*0x81d595*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d59a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d5a5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 2u, 0); /*0x81d5b1*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d5b6*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d5c1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81d5cd*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d5d2*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d5dd*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81d5e8*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d5ed*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d5f8*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81d604*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d609*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d614*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81d620*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d625*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d630*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81d63c*/
  v3 = v0 == unk_B459E4; /*0x81d641*/
  unk_B43F60 = 0x20802; /*0x81d647*/
  unk_B445F0 = 8; /*0x81d651*/
  if ( !v3 ) /*0x81d65b*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81d65d*/
    if ( v3 ) /*0x81d661*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81d665*/
    v0 = unk_B459E4; /*0x81d66a*/
    if ( unk_B459E4 ) /*0x81d672*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81d678*/
  }
  if ( !*(_DWORD *)(v0 + 0x18) ) /*0x81d67b*/
  {
    v22 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81d68d*/
    v3 = v1 == *v22; /*0x81d68f*/
    LOBYTE(v41) = 7; /*0x81d691*/
    if ( !v3 ) /*0x81d696*/
    {
      if ( v1 ) /*0x81d69a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81d69c*/
        if ( v3 ) /*0x81d6a0*/
          sub_772560(v1); /*0x81d6a4*/
      }
      v1 = *v22; /*0x81d6a9*/
      if ( *v22 ) /*0x81d6ad*/
        ++v1[7].Unk08; /*0x81d6b3*/
    }
    v23 = v40; /*0x81d6b6*/
    LOBYTE(v41) = 1; /*0x81d6bc*/
    if ( v40 ) /*0x81d6c1*/
    {
      --v40[7].Unk08; /*0x81d6c3*/
      if ( !v23[7].Unk08 ) /*0x81d6cc*/
        sub_772560(v23); /*0x81d6d1*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81d6dc*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81d6eb*/
  }
  v24 = *(_DWORD *)(v0 + 0x58); /*0x81d6f5*/
  v25 = unk_B45330; /*0x81d6fa*/
  if ( v24 != unk_B45330 ) /*0x81d6fc*/
  {
    if ( v24 ) /*0x81d700*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) ) /*0x81d706*/
        (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x81d71d*/
    }
    *(_DWORD *)(v0 + 0x58) = v25; /*0x81d721*/
    if ( v25 ) /*0x81d724*/
      InterlockedIncrement((volatile LONG *)(v25 + 4)); /*0x81d72a*/
  }
  v26 = *(_DWORD *)(v0 + 0x44); /*0x81d735*/
  v27 = unk_B450A8; /*0x81d73a*/
  if ( v26 != unk_B450A8 ) /*0x81d73c*/
  {
    if ( v26 ) /*0x81d740*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x81d746*/
        (**(void (__thiscall ***)(int, int))v26)(v26, 1); /*0x81d75d*/
    }
    *(_DWORD *)(v0 + 0x44) = v27; /*0x81d761*/
    if ( v27 ) /*0x81d764*/
      InterlockedIncrement((volatile LONG *)(v27 + 4)); /*0x81d76a*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d770*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d77b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81d787*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d78c*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d797*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 2u, 0); /*0x81d7a3*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d7a8*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d7b3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 2u, 0); /*0x81d7bf*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d7c4*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d7cf*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81d7db*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d7e0*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d7eb*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81d7f7*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d7fc*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d807*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81d813*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d818*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d823*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81d82f*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d834*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d83f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81d84b*/
  v3 = v0 == unk_B459E8; /*0x81d853*/
  unk_B43F64 = 0x60088; /*0x81d859*/
  unk_B445F4 = 8; /*0x81d863*/
  if ( !v3 ) /*0x81d86d*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81d86f*/
    if ( v3 ) /*0x81d872*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81d876*/
    v0 = unk_B459E8; /*0x81d87b*/
    if ( unk_B459E8 ) /*0x81d883*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81d889*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 4u ) /*0x81d891*/
  {
    v28 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81d8a4*/
    v3 = v1 == *v28; /*0x81d8a6*/
    LOBYTE(v41) = 8; /*0x81d8a9*/
    if ( !v3 ) /*0x81d8ae*/
    {
      if ( v1 ) /*0x81d8b2*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81d8b4*/
        if ( v3 ) /*0x81d8b7*/
          sub_772560(v1); /*0x81d8bb*/
      }
      v1 = *v28; /*0x81d8c0*/
      if ( *v28 ) /*0x81d8c5*/
        ++v1[7].Unk08; /*0x81d8cb*/
    }
    v29 = v40; /*0x81d8cf*/
    LOBYTE(v41) = 1; /*0x81d8d5*/
    if ( v40 ) /*0x81d8da*/
    {
      --v40[7].Unk08; /*0x81d8dc*/
      if ( !v29[7].Unk08 ) /*0x81d8e4*/
        sub_772560(v29); /*0x81d8e9*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81d8f5*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81d904*/
    v30 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81d916*/
    v3 = v1 == *v30; /*0x81d918*/
    LOBYTE(v41) = 9; /*0x81d91b*/
    if ( !v3 ) /*0x81d920*/
    {
      if ( v1 ) /*0x81d924*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81d926*/
        if ( v3 ) /*0x81d929*/
          sub_772560(v1); /*0x81d92d*/
      }
      v1 = *v30; /*0x81d932*/
      if ( *v30 ) /*0x81d937*/
        ++v1[7].Unk08; /*0x81d93d*/
    }
    v31 = v40; /*0x81d941*/
    LOBYTE(v41) = 1; /*0x81d947*/
    if ( v40 ) /*0x81d94c*/
    {
      --v40[7].Unk08; /*0x81d94e*/
      if ( !v31[7].Unk08 ) /*0x81d956*/
        sub_772560(v31); /*0x81d95b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 3, 2); /*0x81d967*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B43110[0])); /*0x81d978*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81d984*/
    v32 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81d996*/
    v3 = v1 == *v32; /*0x81d998*/
    LOBYTE(v41) = 0xA; /*0x81d99b*/
    if ( !v3 ) /*0x81d9a0*/
    {
      if ( v1 ) /*0x81d9a4*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81d9a6*/
        if ( v3 ) /*0x81d9a9*/
          sub_772560(v1); /*0x81d9ad*/
      }
      v1 = *v32; /*0x81d9b2*/
      if ( *v32 ) /*0x81d9b7*/
        ++v1[7].Unk08; /*0x81d9bd*/
    }
    v33 = v40; /*0x81d9c1*/
    LOBYTE(v41) = 1; /*0x81d9c7*/
    if ( v40 ) /*0x81d9cc*/
    {
      --v40[7].Unk08; /*0x81d9ce*/
      if ( !v33[7].Unk08 ) /*0x81d9d6*/
        sub_772560(v33); /*0x81d9db*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 3, 2); /*0x81d9e7*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B430D4)); /*0x81d9f8*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81da04*/
    v34 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81da16*/
    v3 = v1 == *v34; /*0x81da18*/
    LOBYTE(v41) = 0xB; /*0x81da1b*/
    if ( !v3 ) /*0x81da20*/
    {
      if ( v1 ) /*0x81da24*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81da26*/
        if ( v3 ) /*0x81da29*/
          sub_772560(v1); /*0x81da2d*/
      }
      v1 = *v34; /*0x81da32*/
      if ( *v34 ) /*0x81da37*/
        ++v1[7].Unk08; /*0x81da3d*/
    }
    v35 = v40; /*0x81da41*/
    LOBYTE(v41) = 1; /*0x81da47*/
    if ( v40 ) /*0x81da4c*/
    {
      --v40[7].Unk08; /*0x81da4e*/
      if ( !v35[7].Unk08 ) /*0x81da56*/
        sub_772560(v35); /*0x81da5b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x81da67*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B430DC[4])); /*0x81da78*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81da84*/
  }
  v36 = *(_DWORD *)(v0 + 0x58); /*0x81da8e*/
  v37 = unk_B4532C; /*0x81da93*/
  if ( v36 != unk_B4532C ) /*0x81da95*/
  {
    if ( v36 ) /*0x81da99*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v36 + 4)) ) /*0x81da9f*/
        (**(void (__thiscall ***)(int, int))v36)(v36, 1); /*0x81dab6*/
    }
    *(_DWORD *)(v0 + 0x58) = v37; /*0x81daba*/
    if ( v37 ) /*0x81dabd*/
      InterlockedIncrement((volatile LONG *)(v37 + 4)); /*0x81dac3*/
  }
  v38 = *(_DWORD *)(v0 + 0x44); /*0x81dace*/
  v39 = unk_B450A4; /*0x81dad3*/
  if ( v38 != unk_B450A4 ) /*0x81dad5*/
  {
    if ( v38 ) /*0x81dad9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v38 + 4)) ) /*0x81dadf*/
        (**(void (__thiscall ***)(int, int))v38)(v38, 1); /*0x81daf6*/
    }
    *(_DWORD *)(v0 + 0x44) = v39; /*0x81dafa*/
    if ( v39 ) /*0x81dafd*/
      InterlockedIncrement((volatile LONG *)(v39 + 4)); /*0x81db03*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81db09*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81db14*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81db20*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81db25*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81db30*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 2u, 0); /*0x81db3c*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81db41*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81db4c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 2u, 0); /*0x81db58*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81db5d*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81db68*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81db74*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81db79*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81db84*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81db90*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81db95*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81dba0*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81dbac*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81dbb1*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81dbbc*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81dbc8*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81dbcd*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81dbd8*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81dbe4*/
  unk_B43F68 = 0x60808; /*0x81dbee*/
  unk_B445F8 = 8; /*0x81dbf8*/
  LOBYTE(v41) = 0; /*0x81dc02*/
  if ( v1 ) /*0x81dc07*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x81dc09*/
    if ( v3 ) /*0x81dc0c*/
      sub_772560(v1); /*0x81dc10*/
  }
  v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81dc15*/
  v41 = 0xFFFFFFFF; /*0x81dc18*/
  if ( v3 ) /*0x81dc1c*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81dc20*/
}
