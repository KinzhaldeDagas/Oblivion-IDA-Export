void sub_81EA70()
{
  int v0; // esi
  NiD3DTextureStage *v1; // ebx
  int v2; // eax
  bool v3; // zf
  NiD3DTextureStage *v4; // eax
  NiD3DTextureStage *v5; // eax
  int v6; // edi
  int v7; // ebp
  int v8; // edi
  int v9; // ebp
  NiD3DTextureStage **v10; // edi
  NiD3DTextureStage *v11; // eax
  int v12; // edi
  int v13; // ebp
  int v14; // edi
  int v15; // ebp
  NiD3DTextureStage **v16; // edi
  NiD3DTextureStage *v17; // eax
  int v18; // edi
  int v19; // ebp
  int v20; // edi
  int v21; // ebp
  NiD3DTextureStage **v22; // edi
  NiD3DTextureStage *v23; // ebp
  NiD3DTextureStage *v24; // eax
  int v25; // edi
  int v26; // ebp
  int v27; // edi
  int v28; // ebp
  NiD3DTextureStage *a3; // [esp+20h] [ebp-18h]
  NiD3DTextureStage *v30; // [esp+28h] [ebp-10h] BYREF
  unsigned int v31; // [esp+34h] [ebp-4h]

  v0 = 0; /*0x81ea97*/
  v1 = 0; /*0x81ea9d*/
  v31 = 0; /*0x81ea9f*/
  a3 = 0; /*0x81eaa3*/
  v2 = unk_B45BE0; /*0x81eaa7*/
  v3 = unk_B45BE0 == 0; /*0x81eaac*/
  LOBYTE(v31) = 1; /*0x81eab3*/
  if ( !v3 ) /*0x81eab8*/
  {
    v0 = v2; /*0x81eaba*/
    if ( v2 ) /*0x81eac2*/
      ++*(_DWORD *)(v2 + 0x60); /*0x81eac4*/
  }
  if ( !*(_DWORD *)(v0 + 0x18) ) /*0x81eac7*/
  {
    v4 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v30); /*0x81eadb*/
    if ( v4 ) /*0x81eadf*/
    {
      v1 = v4; /*0x81eae1*/
      ++v4[7].Unk08; /*0x81eae3*/
      a3 = v4; /*0x81eae6*/
    }
    v5 = v30; /*0x81eaea*/
    LOBYTE(v31) = 1; /*0x81eaf0*/
    if ( v30 ) /*0x81eaf5*/
    {
      --v30[7].Unk08; /*0x81eaf7*/
      if ( !v5[7].Unk08 ) /*0x81eb00*/
        sub_772560(v5); /*0x81eb05*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81eb10*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81eb1f*/
  }
  v6 = *(_DWORD *)(v0 + 0x58); /*0x81eb29*/
  v7 = unk_B452D4; /*0x81eb2e*/
  if ( v6 != unk_B452D4 ) /*0x81eb30*/
  {
    if ( v6 ) /*0x81eb34*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x81eb3a*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x81eb50*/
    }
    *(_DWORD *)(v0 + 0x58) = v7; /*0x81eb54*/
    if ( v7 ) /*0x81eb57*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x81eb5d*/
  }
  v8 = *(_DWORD *)(v0 + 0x44); /*0x81eb68*/
  v9 = unk_B45100; /*0x81eb6d*/
  if ( v8 != unk_B45100 ) /*0x81eb6f*/
  {
    if ( v8 ) /*0x81eb73*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x81eb79*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x81eb8f*/
    }
    *(_DWORD *)(v0 + 0x44) = v9; /*0x81eb93*/
    if ( v9 ) /*0x81eb96*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x81eb9c*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81eba2*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ebad*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81ebbd*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ebc2*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ebcd*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 5u, 0); /*0x81ebd9*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ebde*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ebe9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 6u, 0); /*0x81ebf5*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ebfa*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ec05*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81ec11*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ec16*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ec21*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81ec2c*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ec31*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ec3c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81ec48*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ec4d*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ec58*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81ec64*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ec69*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ec74*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81ec80*/
  v3 = v0 == unk_B45BE4; /*0x81ec85*/
  unk_B44160 = 0x18002; /*0x81ec8b*/
  unk_B447F0 = 0; /*0x81ec95*/
  unk_B43AD0 = 0x18000; /*0x81ec9f*/
  if ( !v3 ) /*0x81eca9*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81ecab*/
    if ( v3 ) /*0x81ecaf*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81ecb3*/
    v0 = unk_B45BE4; /*0x81ecb8*/
    if ( unk_B45BE4 ) /*0x81ecc0*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81ecc6*/
  }
  if ( !*(_DWORD *)(v0 + 0x18) ) /*0x81ecc9*/
  {
    v10 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v30); /*0x81ecdb*/
    v3 = v1 == *v10; /*0x81ecdd*/
    LOBYTE(v31) = 3; /*0x81ecdf*/
    if ( !v3 ) /*0x81ece4*/
    {
      if ( v1 ) /*0x81ece8*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81ecea*/
        if ( v3 ) /*0x81ecee*/
          sub_772560(v1); /*0x81ecf2*/
      }
      v1 = *v10; /*0x81ecf7*/
      a3 = *v10; /*0x81ecfb*/
      if ( *v10 ) /*0x81ecfb*/
        ++v1[7].Unk08; /*0x81ed01*/
    }
    v11 = v30; /*0x81ed04*/
    LOBYTE(v31) = 1; /*0x81ed0a*/
    if ( v30 ) /*0x81ed0f*/
    {
      --v30[7].Unk08; /*0x81ed11*/
      if ( !v11[7].Unk08 ) /*0x81ed1a*/
        sub_772560(v11); /*0x81ed1f*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81ed2a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81ed39*/
  }
  v12 = *(_DWORD *)(v0 + 0x58); /*0x81ed43*/
  v13 = unk_B452D8; /*0x81ed48*/
  if ( v12 != unk_B452D8 ) /*0x81ed4a*/
  {
    if ( v12 ) /*0x81ed4e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x81ed54*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x81ed6a*/
    }
    *(_DWORD *)(v0 + 0x58) = v13; /*0x81ed6e*/
    if ( v13 ) /*0x81ed71*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x81ed77*/
  }
  v14 = *(_DWORD *)(v0 + 0x44); /*0x81ed82*/
  v15 = unk_B45104; /*0x81ed87*/
  if ( v14 != unk_B45104 ) /*0x81ed89*/
  {
    if ( v14 ) /*0x81ed8d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x81ed93*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x81eda9*/
    }
    *(_DWORD *)(v0 + 0x44) = v15; /*0x81edad*/
    if ( v15 ) /*0x81edb0*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x81edb6*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81edbc*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81edc7*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81edd7*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81eddc*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ede7*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 5u, 0); /*0x81edf3*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81edf8*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ee03*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 6u, 0); /*0x81ee0f*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ee14*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ee1f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81ee2b*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ee30*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ee3b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81ee46*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ee4b*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ee56*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81ee62*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ee67*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ee72*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81ee7e*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ee83*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ee8e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81ee9a*/
  v3 = v0 == unk_B45BE8; /*0x81ee9f*/
  unk_B44164 = 0x18002; /*0x81eea5*/
  unk_B447F4 = 0; /*0x81eeaf*/
  unk_B43AD4 = 0x18000; /*0x81eeb9*/
  if ( !v3 ) /*0x81eec3*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81eec5*/
    if ( v3 ) /*0x81eec9*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81eecd*/
    v0 = unk_B45BE8; /*0x81eed2*/
    if ( unk_B45BE8 ) /*0x81eeda*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81eee0*/
  }
  if ( !*(_DWORD *)(v0 + 0x18) ) /*0x81eee3*/
  {
    v16 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v30); /*0x81eef5*/
    v3 = v1 == *v16; /*0x81eef7*/
    LOBYTE(v31) = 4; /*0x81eef9*/
    if ( !v3 ) /*0x81eefe*/
    {
      if ( v1 ) /*0x81ef02*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81ef04*/
        if ( v3 ) /*0x81ef08*/
          sub_772560(v1); /*0x81ef0c*/
      }
      v1 = *v16; /*0x81ef11*/
      a3 = *v16; /*0x81ef15*/
      if ( *v16 ) /*0x81ef15*/
        ++v1[7].Unk08; /*0x81ef1b*/
    }
    v17 = v30; /*0x81ef1e*/
    LOBYTE(v31) = 1; /*0x81ef24*/
    if ( v30 ) /*0x81ef29*/
    {
      --v30[7].Unk08; /*0x81ef2b*/
      if ( !v17[7].Unk08 ) /*0x81ef34*/
        sub_772560(v17); /*0x81ef39*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81ef44*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81ef53*/
  }
  v18 = *(_DWORD *)(v0 + 0x58); /*0x81ef5d*/
  v19 = unk_B45310; /*0x81ef62*/
  if ( v18 != unk_B45310 ) /*0x81ef64*/
  {
    if ( v18 ) /*0x81ef68*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x81ef6e*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x81ef84*/
    }
    *(_DWORD *)(v0 + 0x58) = v19; /*0x81ef88*/
    if ( v19 ) /*0x81ef8b*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x81ef91*/
  }
  v20 = *(_DWORD *)(v0 + 0x44); /*0x81ef9c*/
  v21 = unk_B45100; /*0x81efa1*/
  if ( v20 != unk_B45100 ) /*0x81efa3*/
  {
    if ( v20 ) /*0x81efa7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x81efad*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x81efc3*/
    }
    *(_DWORD *)(v0 + 0x44) = v21; /*0x81efc7*/
    if ( v21 ) /*0x81efca*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x81efd0*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81efd6*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81efe1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81efed*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81eff2*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81effd*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 5u, 0); /*0x81f009*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f00e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f019*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 6u, 0); /*0x81f025*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f02a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f035*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81f041*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f046*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f051*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81f05d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f062*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f06d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81f079*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f07e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f089*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81f095*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f09a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f0a5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81f0b1*/
  v3 = v0 == unk_B45BEC; /*0x81f0b6*/
  unk_B44168 = 0x58008; /*0x81f0c1*/
  unk_B447F8 = 0; /*0x81f0c7*/
  unk_B43AD8 = 0x18000; /*0x81f0d1*/
  if ( !v3 ) /*0x81f0db*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81f0dd*/
    if ( v3 ) /*0x81f0e1*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81f0e5*/
    v0 = unk_B45BEC; /*0x81f0ea*/
    if ( unk_B45BEC ) /*0x81f0f2*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81f0f8*/
  }
  if ( !*(_DWORD *)(v0 + 0x18) ) /*0x81f0fc*/
  {
    v22 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v30); /*0x81f10f*/
    v23 = a3; /*0x81f111*/
    v3 = a3 == *v22; /*0x81f115*/
    LOBYTE(v31) = 5; /*0x81f117*/
    if ( !v3 ) /*0x81f11c*/
    {
      if ( a3 ) /*0x81f120*/
      {
        v3 = a3[7].Unk08-- == 1; /*0x81f122*/
        if ( v3 ) /*0x81f126*/
          sub_772560(a3); /*0x81f12a*/
      }
      v23 = *v22; /*0x81f12f*/
      a3 = *v22; /*0x81f133*/
      if ( *v22 ) /*0x81f133*/
        ++v23[7].Unk08; /*0x81f139*/
    }
    v24 = v30; /*0x81f13d*/
    LOBYTE(v31) = 1; /*0x81f143*/
    if ( v30 ) /*0x81f148*/
    {
      --v30[7].Unk08; /*0x81f14a*/
      if ( !v24[7].Unk08 ) /*0x81f153*/
        sub_772560(v24); /*0x81f158*/
    }
    BSShader_ConfigureTextureStageSampler(v23, 0, 1, 2); /*0x81f164*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v23->Stage); /*0x81f173*/
  }
  v25 = *(_DWORD *)(v0 + 0x58); /*0x81f17d*/
  v26 = unk_B45314; /*0x81f182*/
  if ( v25 != unk_B45314 ) /*0x81f184*/
  {
    if ( v25 ) /*0x81f188*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) ) /*0x81f18e*/
        (**(void (__thiscall ***)(int, int))v25)(v25, 1); /*0x81f1a4*/
    }
    *(_DWORD *)(v0 + 0x58) = v26; /*0x81f1a8*/
    if ( v26 ) /*0x81f1ab*/
      InterlockedIncrement((volatile LONG *)(v26 + 4)); /*0x81f1b1*/
  }
  v27 = *(_DWORD *)(v0 + 0x44); /*0x81f1bc*/
  v28 = unk_B45104; /*0x81f1c1*/
  if ( v27 != unk_B45104 ) /*0x81f1c3*/
  {
    if ( v27 ) /*0x81f1c7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) ) /*0x81f1cd*/
        (**(void (__thiscall ***)(int, int))v27)(v27, 1); /*0x81f1e3*/
    }
    *(_DWORD *)(v0 + 0x44) = v28; /*0x81f1e7*/
    if ( v28 ) /*0x81f1ea*/
      InterlockedIncrement((volatile LONG *)(v28 + 4)); /*0x81f1f0*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f1f6*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f201*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81f20d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f212*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f21d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 5u, 0); /*0x81f229*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f22e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f239*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 6u, 0); /*0x81f245*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f24a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f255*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81f261*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f266*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f271*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81f27d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f282*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f28d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81f299*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f29e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f2a9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81f2b5*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f2ba*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f2c5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81f2d1*/
  unk_B4416C = 0x58008; /*0x81f2df*/
  unk_B447FC = 0; /*0x81f2e5*/
  unk_B43ADC = 0x18000; /*0x81f2ef*/
  LOBYTE(v31) = 0; /*0x81f2f9*/
  if ( a3 ) /*0x81f2fe*/
  {
    v3 = a3[7].Unk08-- == 1; /*0x81f300*/
    if ( v3 ) /*0x81f303*/
      sub_772560(a3); /*0x81f305*/
  }
  v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81f30a*/
  v31 = 0xFFFFFFFF; /*0x81f30d*/
  if ( v3 ) /*0x81f311*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81f315*/
}
