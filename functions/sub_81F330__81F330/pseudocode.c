void sub_81F330()
{
  int v0; // esi
  NiD3DTextureStage *v1; // edi
  int v2; // eax
  bool v3; // zf
  NiD3DTextureStage *v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage **v6; // ebp
  NiD3DTextureStage *v7; // eax
  int v8; // ebp
  int v9; // ebx
  int v10; // ebp
  int v11; // ebx
  NiD3DTextureStage **v12; // ebp
  NiD3DTextureStage *v13; // eax
  NiD3DTextureStage **v14; // ebp
  NiD3DTextureStage *v15; // eax
  int v16; // ebp
  int v17; // ebx
  int v18; // ebp
  int v19; // ebx
  NiD3DTextureStage **v20; // ebp
  NiD3DTextureStage *v21; // eax
  NiD3DTextureStage **v22; // ebp
  NiD3DTextureStage *v23; // eax
  int v24; // ebp
  int v25; // ebx
  int v26; // ebp
  int v27; // ebx
  NiD3DTextureStage **v28; // ebp
  NiD3DTextureStage *v29; // eax
  NiD3DTextureStage **v30; // ebp
  NiD3DTextureStage *v31; // eax
  int v32; // ebp
  int v33; // ebx
  int v34; // ebp
  int v35; // ebx
  NiD3DTextureStage **v36; // ebp
  NiD3DTextureStage *v37; // eax
  NiD3DTextureStage **v38; // ebp
  NiD3DTextureStage *v39; // eax
  int v40; // ebp
  int v41; // ebx
  int v42; // ebp
  int v43; // ebx
  NiD3DTextureStage **v44; // ebp
  NiD3DTextureStage *v45; // eax
  NiD3DTextureStage **v46; // ebp
  NiD3DTextureStage *v47; // eax
  int v48; // ebp
  int v49; // ebx
  int v50; // ebp
  int v51; // ebx
  NiD3DTextureStage *v52; // [esp+30h] [ebp-10h] BYREF
  unsigned int v53; // [esp+3Ch] [ebp-4h]

  v0 = 0; /*0x81f357*/
  v1 = 0; /*0x81f35d*/
  v53 = 0; /*0x81f35f*/
  v2 = unk_B456C0; /*0x81f367*/
  v3 = unk_B456C0 == 0; /*0x81f36c*/
  LOBYTE(v53) = 1; /*0x81f373*/
  if ( !v3 ) /*0x81f377*/
  {
    v0 = v2; /*0x81f379*/
    if ( v2 ) /*0x81f381*/
      ++*(_DWORD *)(v2 + 0x60); /*0x81f383*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 2u ) /*0x81f38c*/
  {
    v4 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v52); /*0x81f39f*/
    if ( v4 ) /*0x81f3a3*/
    {
      v1 = v4; /*0x81f3a5*/
      ++v4[7].Unk08; /*0x81f3a7*/
    }
    v5 = v52; /*0x81f3ae*/
    LOBYTE(v53) = 1; /*0x81f3b4*/
    if ( v52 ) /*0x81f3b9*/
    {
      --v52[7].Unk08; /*0x81f3bb*/
      if ( !v5[7].Unk08 ) /*0x81f3c4*/
        sub_772560(v5); /*0x81f3c9*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81f3d4*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81f3e3*/
    v6 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81f3f5*/
    v3 = v1 == *v6; /*0x81f3f7*/
    LOBYTE(v53) = 3; /*0x81f3fa*/
    if ( !v3 ) /*0x81f3ff*/
    {
      if ( v1 ) /*0x81f403*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81f405*/
        if ( v3 ) /*0x81f409*/
          sub_772560(v1); /*0x81f40d*/
      }
      v1 = *v6; /*0x81f412*/
      if ( *v6 ) /*0x81f417*/
        ++v1[7].Unk08; /*0x81f41d*/
    }
    v7 = v52; /*0x81f420*/
    LOBYTE(v53) = 1; /*0x81f426*/
    if ( v52 ) /*0x81f42b*/
    {
      --v52[7].Unk08; /*0x81f42d*/
      if ( !v7[7].Unk08 ) /*0x81f436*/
        sub_772560(v7); /*0x81f43b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x81f445*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81f454*/
  }
  v8 = *(_DWORD *)(v0 + 0x58); /*0x81f45e*/
  v9 = unk_B452F4; /*0x81f463*/
  if ( v8 != unk_B452F4 ) /*0x81f465*/
  {
    if ( v8 ) /*0x81f469*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x81f46f*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x81f486*/
    }
    *(_DWORD *)(v0 + 0x58) = v9; /*0x81f48a*/
    if ( v9 ) /*0x81f48d*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x81f493*/
  }
  v10 = *(_DWORD *)(v0 + 0x44); /*0x81f49e*/
  v11 = unk_B45128; /*0x81f4a3*/
  if ( v10 != unk_B45128 ) /*0x81f4a5*/
  {
    if ( v10 ) /*0x81f4a9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x81f4af*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x81f4c6*/
    }
    *(_DWORD *)(v0 + 0x44) = v11; /*0x81f4ca*/
    if ( v11 ) /*0x81f4cd*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x81f4d3*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f4d9*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f4e4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 0, 0); /*0x81f4f0*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f4f5*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f500*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81f50c*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f511*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f51c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81f528*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f52d*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f538*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x81f544*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f549*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f554*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 1u, 0); /*0x81f560*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f565*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f570*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81f57c*/
  v3 = v0 == unk_B45B58; /*0x81f584*/
  unk_B43C40 = 0x82; /*0x81f58a*/
  unk_B442D0 = 0x3C; /*0x81f594*/
  unk_B435B0 = 0x80; /*0x81f59e*/
  unk_B44960 = 0xC; /*0x81f5a8*/
  if ( !v3 ) /*0x81f5b2*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81f5b4*/
    if ( v3 ) /*0x81f5b7*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81f5bb*/
    v0 = unk_B45B58; /*0x81f5c0*/
    if ( unk_B45B58 ) /*0x81f5c8*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81f5ce*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 2u ) /*0x81f5d8*/
  {
    v12 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81f5eb*/
    v3 = v1 == *v12; /*0x81f5ed*/
    LOBYTE(v53) = 4; /*0x81f5f0*/
    if ( !v3 ) /*0x81f5f5*/
    {
      if ( v1 ) /*0x81f5f9*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81f5fb*/
        if ( v3 ) /*0x81f5fe*/
          sub_772560(v1); /*0x81f602*/
      }
      v1 = *v12; /*0x81f607*/
      if ( *v12 ) /*0x81f60c*/
        ++v1[7].Unk08; /*0x81f612*/
    }
    v13 = v52; /*0x81f616*/
    LOBYTE(v53) = 1; /*0x81f61c*/
    if ( v52 ) /*0x81f621*/
    {
      --v52[7].Unk08; /*0x81f623*/
      if ( !v13[7].Unk08 ) /*0x81f62b*/
        sub_772560(v13); /*0x81f630*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81f63c*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81f64b*/
    v14 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81f65d*/
    v3 = v1 == *v14; /*0x81f65f*/
    LOBYTE(v53) = 5; /*0x81f662*/
    if ( !v3 ) /*0x81f667*/
    {
      if ( v1 ) /*0x81f66b*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81f66d*/
        if ( v3 ) /*0x81f670*/
          sub_772560(v1); /*0x81f674*/
      }
      v1 = *v14; /*0x81f679*/
      if ( *v14 ) /*0x81f67e*/
        ++v1[7].Unk08; /*0x81f684*/
    }
    v15 = v52; /*0x81f688*/
    LOBYTE(v53) = 1; /*0x81f68e*/
    if ( v52 ) /*0x81f693*/
    {
      --v52[7].Unk08; /*0x81f695*/
      if ( !v15[7].Unk08 ) /*0x81f69d*/
        sub_772560(v15); /*0x81f6a2*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x81f6ae*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81f6bd*/
  }
  v16 = *(_DWORD *)(v0 + 0x58); /*0x81f6c7*/
  v17 = unk_B452F8; /*0x81f6cc*/
  if ( v16 != unk_B452F8 ) /*0x81f6ce*/
  {
    if ( v16 ) /*0x81f6d2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x81f6d8*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x81f6ef*/
    }
    *(_DWORD *)(v0 + 0x58) = v17; /*0x81f6f3*/
    if ( v17 ) /*0x81f6f6*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x81f6fc*/
  }
  v18 = *(_DWORD *)(v0 + 0x44); /*0x81f707*/
  v19 = unk_B4512C; /*0x81f70c*/
  if ( v18 != unk_B4512C ) /*0x81f70e*/
  {
    if ( v18 ) /*0x81f712*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x81f718*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x81f72f*/
    }
    *(_DWORD *)(v0 + 0x44) = v19; /*0x81f733*/
    if ( v19 ) /*0x81f736*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x81f73c*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f742*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f74d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81f759*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f75e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f769*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 5u, 0); /*0x81f775*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f77a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f785*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 6u, 0); /*0x81f791*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f796*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f7a1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 1u, 0); /*0x81f7ad*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f7b2*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f7bd*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x19u, 5u, 0); /*0x81f7c9*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f7ce*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f7d9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x18u, 0, 0); /*0x81f7e5*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f7ea*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f7f5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81f801*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f806*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f811*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x81f81d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f822*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f82d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81f839*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81f83e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81f849*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81f855*/
  v3 = v0 == unk_B45B54; /*0x81f85d*/
  unk_B440D8 = 0x82; /*0x81f863*/
  unk_B44768 = 0x3C; /*0x81f86d*/
  unk_B43A48 = 0x80; /*0x81f877*/
  unk_B44DF8 = 0xC; /*0x81f881*/
  if ( !v3 ) /*0x81f88b*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81f88d*/
    if ( v3 ) /*0x81f890*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81f894*/
    v0 = unk_B45B54; /*0x81f899*/
    if ( unk_B45B54 ) /*0x81f8a1*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81f8a7*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 2u ) /*0x81f8af*/
  {
    v20 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81f8c2*/
    v3 = v1 == *v20; /*0x81f8c4*/
    LOBYTE(v53) = 6; /*0x81f8c7*/
    if ( !v3 ) /*0x81f8cc*/
    {
      if ( v1 ) /*0x81f8d0*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81f8d2*/
        if ( v3 ) /*0x81f8d5*/
          sub_772560(v1); /*0x81f8d9*/
      }
      v1 = *v20; /*0x81f8de*/
      if ( *v20 ) /*0x81f8e3*/
        ++v1[7].Unk08; /*0x81f8e9*/
    }
    v21 = v52; /*0x81f8ed*/
    LOBYTE(v53) = 1; /*0x81f8f3*/
    if ( v52 ) /*0x81f8f8*/
    {
      --v52[7].Unk08; /*0x81f8fa*/
      if ( !v21[7].Unk08 ) /*0x81f902*/
        sub_772560(v21); /*0x81f907*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81f913*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81f922*/
    v22 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81f934*/
    v3 = v1 == *v22; /*0x81f936*/
    LOBYTE(v53) = 7; /*0x81f939*/
    if ( !v3 ) /*0x81f93e*/
    {
      if ( v1 ) /*0x81f942*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81f944*/
        if ( v3 ) /*0x81f947*/
          sub_772560(v1); /*0x81f94b*/
      }
      v1 = *v22; /*0x81f950*/
      if ( *v22 ) /*0x81f955*/
        ++v1[7].Unk08; /*0x81f95b*/
    }
    v23 = v52; /*0x81f95f*/
    LOBYTE(v53) = 1; /*0x81f965*/
    if ( v52 ) /*0x81f96a*/
    {
      --v52[7].Unk08; /*0x81f96c*/
      if ( !v23[7].Unk08 ) /*0x81f974*/
        sub_772560(v23); /*0x81f979*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x81f985*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81f994*/
  }
  v24 = *(_DWORD *)(v0 + 0x58); /*0x81f99e*/
  v25 = unk_B452FC; /*0x81f9a3*/
  if ( v24 != unk_B452FC ) /*0x81f9a5*/
  {
    if ( v24 ) /*0x81f9a9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) ) /*0x81f9af*/
        (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x81f9c6*/
    }
    *(_DWORD *)(v0 + 0x58) = v25; /*0x81f9ca*/
    if ( v25 ) /*0x81f9cd*/
      InterlockedIncrement((volatile LONG *)(v25 + 4)); /*0x81f9d3*/
  }
  v26 = *(_DWORD *)(v0 + 0x44); /*0x81f9de*/
  v27 = unk_B45130; /*0x81f9e3*/
  if ( v26 != unk_B45130 ) /*0x81f9e5*/
  {
    if ( v26 ) /*0x81f9e9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x81f9ef*/
        (**(void (__thiscall ***)(int, int))v26)(v26, 1); /*0x81fa06*/
    }
    *(_DWORD *)(v0 + 0x44) = v27; /*0x81fa0a*/
    if ( v27 ) /*0x81fa0d*/
      InterlockedIncrement((volatile LONG *)(v27 + 4)); /*0x81fa13*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fa19*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fa24*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81fa30*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fa35*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fa40*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 5u, 0); /*0x81fa4c*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fa51*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fa5c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 2u, 0); /*0x81fa68*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fa6d*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fa78*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 1u, 0); /*0x81fa84*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fa89*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fa94*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x19u, 5u, 0); /*0x81faa0*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81faa5*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fab0*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x18u, 0, 0); /*0x81fabc*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fac1*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81facc*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81fad8*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fadd*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fae8*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x81faf4*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81faf9*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fb04*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81fb10*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fb15*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fb20*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81fb2c*/
  v3 = v0 == unk_B45B60; /*0x81fb34*/
  unk_B440D4 = 2; /*0x81fb3a*/
  unk_B44764 = 0x30; /*0x81fb44*/
  if ( !v3 ) /*0x81fb4e*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81fb50*/
    if ( v3 ) /*0x81fb53*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81fb57*/
    v0 = unk_B45B60; /*0x81fb5c*/
    if ( unk_B45B60 ) /*0x81fb64*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81fb6a*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 2u ) /*0x81fb74*/
  {
    v28 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81fb87*/
    v3 = v1 == *v28; /*0x81fb89*/
    LOBYTE(v53) = 8; /*0x81fb8c*/
    if ( !v3 ) /*0x81fb91*/
    {
      if ( v1 ) /*0x81fb95*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81fb97*/
        if ( v3 ) /*0x81fb9a*/
          sub_772560(v1); /*0x81fb9e*/
      }
      v1 = *v28; /*0x81fba3*/
      if ( *v28 ) /*0x81fba8*/
        ++v1[7].Unk08; /*0x81fbae*/
    }
    v29 = v52; /*0x81fbb2*/
    LOBYTE(v53) = 1; /*0x81fbb8*/
    if ( v52 ) /*0x81fbbd*/
    {
      --v52[7].Unk08; /*0x81fbbf*/
      if ( !v29[7].Unk08 ) /*0x81fbc7*/
        sub_772560(v29); /*0x81fbcc*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81fbd8*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81fbe7*/
    v30 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81fbf9*/
    v3 = v1 == *v30; /*0x81fbfb*/
    LOBYTE(v53) = 9; /*0x81fbfe*/
    if ( !v3 ) /*0x81fc03*/
    {
      if ( v1 ) /*0x81fc07*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81fc09*/
        if ( v3 ) /*0x81fc0c*/
          sub_772560(v1); /*0x81fc10*/
      }
      v1 = *v30; /*0x81fc15*/
      if ( *v30 ) /*0x81fc1a*/
        ++v1[7].Unk08; /*0x81fc20*/
    }
    v31 = v52; /*0x81fc24*/
    LOBYTE(v53) = 1; /*0x81fc2a*/
    if ( v52 ) /*0x81fc2f*/
    {
      --v52[7].Unk08; /*0x81fc31*/
      if ( !v31[7].Unk08 ) /*0x81fc39*/
        sub_772560(v31); /*0x81fc3e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x81fc4a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81fc59*/
  }
  v32 = *(_DWORD *)(v0 + 0x58); /*0x81fc63*/
  v33 = unk_B452FC; /*0x81fc68*/
  if ( v32 != unk_B452FC ) /*0x81fc6a*/
  {
    if ( v32 ) /*0x81fc6e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v32 + 4)) ) /*0x81fc74*/
        (**(void (__thiscall ***)(int, int))v32)(v32, 1); /*0x81fc8b*/
    }
    *(_DWORD *)(v0 + 0x58) = v33; /*0x81fc8f*/
    if ( v33 ) /*0x81fc92*/
      InterlockedIncrement((volatile LONG *)(v33 + 4)); /*0x81fc98*/
  }
  v34 = *(_DWORD *)(v0 + 0x44); /*0x81fca3*/
  v35 = unk_B45134; /*0x81fca8*/
  if ( v34 != unk_B45134 ) /*0x81fcaa*/
  {
    if ( v34 ) /*0x81fcae*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v34 + 4)) ) /*0x81fcb4*/
        (**(void (__thiscall ***)(int, int))v34)(v34, 1); /*0x81fccb*/
    }
    *(_DWORD *)(v0 + 0x44) = v35; /*0x81fccf*/
    if ( v35 ) /*0x81fcd2*/
      InterlockedIncrement((volatile LONG *)(v35 + 4)); /*0x81fcd8*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fcde*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fce9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81fcf5*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fcfa*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fd05*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 5u, 0); /*0x81fd11*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fd16*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fd21*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 2u, 0); /*0x81fd31*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fd36*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fd41*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 1u, 0); /*0x81fd4d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fd52*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fd5d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x19u, 5u, 0); /*0x81fd69*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fd6e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fd79*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x18u, 0, 0); /*0x81fd85*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fd8a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fd95*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81fda1*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fda6*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fdb1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x81fdbd*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fdc2*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fdcd*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81fdd9*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fdde*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81fde9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81fdf5*/
  v3 = v0 == unk_B45B40; /*0x81fdfd*/
  unk_B440E0 = 2; /*0x81fe03*/
  unk_B44770 = 0x30; /*0x81fe09*/
  if ( !v3 ) /*0x81fe13*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81fe15*/
    if ( v3 ) /*0x81fe18*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81fe1c*/
    v0 = unk_B45B40; /*0x81fe21*/
    if ( unk_B45B40 ) /*0x81fe29*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81fe2f*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 2u ) /*0x81fe36*/
  {
    v36 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81fe49*/
    v3 = v1 == *v36; /*0x81fe4b*/
    LOBYTE(v53) = 0xA; /*0x81fe4e*/
    if ( !v3 ) /*0x81fe53*/
    {
      if ( v1 ) /*0x81fe57*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81fe59*/
        if ( v3 ) /*0x81fe5c*/
          sub_772560(v1); /*0x81fe60*/
      }
      v1 = *v36; /*0x81fe65*/
      if ( *v36 ) /*0x81fe6a*/
        ++v1[7].Unk08; /*0x81fe70*/
    }
    v37 = v52; /*0x81fe74*/
    LOBYTE(v53) = 1; /*0x81fe7a*/
    if ( v52 ) /*0x81fe7f*/
    {
      --v52[7].Unk08; /*0x81fe81*/
      if ( !v37[7].Unk08 ) /*0x81fe89*/
        sub_772560(v37); /*0x81fe8e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81fe9a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81fea9*/
    v38 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81febb*/
    v3 = v1 == *v38; /*0x81febd*/
    LOBYTE(v53) = 0xB; /*0x81fec0*/
    if ( !v3 ) /*0x81fec5*/
    {
      if ( v1 ) /*0x81fec9*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81fecb*/
        if ( v3 ) /*0x81fece*/
          sub_772560(v1); /*0x81fed2*/
      }
      v1 = *v38; /*0x81fed7*/
      if ( *v38 ) /*0x81fedc*/
        ++v1[7].Unk08; /*0x81fee2*/
    }
    v39 = v52; /*0x81fee6*/
    LOBYTE(v53) = 1; /*0x81feec*/
    if ( v52 ) /*0x81fef1*/
    {
      --v52[7].Unk08; /*0x81fef3*/
      if ( !v39[7].Unk08 ) /*0x81fefb*/
        sub_772560(v39); /*0x81ff00*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x81ff0c*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81ff1b*/
  }
  v40 = *(_DWORD *)(v0 + 0x58); /*0x81ff25*/
  v41 = unk_B45300; /*0x81ff2a*/
  if ( v40 != unk_B45300 ) /*0x81ff2c*/
  {
    if ( v40 ) /*0x81ff30*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v40 + 4)) ) /*0x81ff36*/
        (**(void (__thiscall ***)(int, int))v40)(v40, 1); /*0x81ff4d*/
    }
    *(_DWORD *)(v0 + 0x58) = v41; /*0x81ff51*/
    if ( v41 ) /*0x81ff54*/
      InterlockedIncrement((volatile LONG *)(v41 + 4)); /*0x81ff5a*/
  }
  v42 = *(_DWORD *)(v0 + 0x44); /*0x81ff65*/
  v43 = unk_B45138; /*0x81ff6a*/
  if ( v42 != unk_B45138 ) /*0x81ff6c*/
  {
    if ( v42 ) /*0x81ff70*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v42 + 4)) ) /*0x81ff76*/
        (**(void (__thiscall ***)(int, int))v42)(v42, 1); /*0x81ff8d*/
    }
    *(_DWORD *)(v0 + 0x44) = v43; /*0x81ff91*/
    if ( v43 ) /*0x81ff94*/
      InterlockedIncrement((volatile LONG *)(v43 + 4)); /*0x81ff9a*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ffa0*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ffab*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81ffb7*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ffbc*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ffc7*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 5u, 0); /*0x81ffd3*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ffd8*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ffe3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 2u, 0); /*0x81ffef*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81fff4*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ffff*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 1u, 0); /*0x82000b*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x820010*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x82001b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x19u, 5u, 0); /*0x820027*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x82002c*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x820037*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x18u, 0, 0); /*0x820043*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x820048*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x820053*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x82005f*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x820064*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x82006f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x82007b*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x820080*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x82008b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x820097*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x82009c*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8200a7*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x8200b3*/
  v3 = v0 == unk_B45B64; /*0x8200bb*/
  unk_B440C0 = 0x802; /*0x8200c1*/
  unk_B44750 = 8; /*0x8200cb*/
  if ( !v3 ) /*0x8200d5*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x8200d7*/
    if ( v3 ) /*0x8200da*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x8200de*/
    v0 = unk_B45B64; /*0x8200e3*/
    if ( unk_B45B64 ) /*0x8200eb*/
      ++*(_DWORD *)(v0 + 0x60); /*0x8200f1*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 2u ) /*0x8200f9*/
  {
    v44 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x82010c*/
    v3 = v1 == *v44; /*0x82010e*/
    LOBYTE(v53) = 0xC; /*0x820111*/
    if ( !v3 ) /*0x820116*/
    {
      if ( v1 ) /*0x82011a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82011c*/
        if ( v3 ) /*0x82011f*/
          sub_772560(v1); /*0x820123*/
      }
      v1 = *v44; /*0x820128*/
      if ( *v44 ) /*0x82012d*/
        ++v1[7].Unk08; /*0x820133*/
    }
    v45 = v52; /*0x820137*/
    LOBYTE(v53) = 1; /*0x82013d*/
    if ( v52 ) /*0x820142*/
    {
      --v52[7].Unk08; /*0x820144*/
      if ( !v45[7].Unk08 ) /*0x82014c*/
        sub_772560(v45); /*0x820151*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x82015d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x82016c*/
    v46 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x82017e*/
    v3 = v1 == *v46; /*0x820180*/
    LOBYTE(v53) = 0xD; /*0x820183*/
    if ( !v3 ) /*0x820188*/
    {
      if ( v1 ) /*0x82018c*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82018e*/
        if ( v3 ) /*0x820191*/
          sub_772560(v1); /*0x820195*/
      }
      v1 = *v46; /*0x82019a*/
      if ( *v46 ) /*0x82019f*/
        ++v1[7].Unk08; /*0x8201a5*/
    }
    v47 = v52; /*0x8201a9*/
    LOBYTE(v53) = 1; /*0x8201af*/
    if ( v52 ) /*0x8201b4*/
    {
      --v52[7].Unk08; /*0x8201b6*/
      if ( !v47[7].Unk08 ) /*0x8201be*/
        sub_772560(v47); /*0x8201c3*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x8201cf*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x8201de*/
  }
  v48 = *(_DWORD *)(v0 + 0x58); /*0x8201e8*/
  v49 = unk_B45304; /*0x8201ed*/
  if ( v48 != unk_B45304 ) /*0x8201ef*/
  {
    if ( v48 ) /*0x8201f3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v48 + 4)) ) /*0x8201f9*/
        (**(void (__thiscall ***)(int, int))v48)(v48, 1); /*0x820210*/
    }
    *(_DWORD *)(v0 + 0x58) = v49; /*0x820214*/
    if ( v49 ) /*0x820217*/
      InterlockedIncrement((volatile LONG *)(v49 + 4)); /*0x82021d*/
  }
  v50 = *(_DWORD *)(v0 + 0x44); /*0x820228*/
  v51 = unk_B4513C; /*0x82022d*/
  if ( v50 != unk_B4513C ) /*0x82022f*/
  {
    if ( v50 ) /*0x820233*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v50 + 4)) ) /*0x820239*/
        (**(void (__thiscall ***)(int, int))v50)(v50, 1); /*0x820250*/
    }
    *(_DWORD *)(v0 + 0x44) = v51; /*0x820254*/
    if ( v51 ) /*0x820257*/
      InterlockedIncrement((volatile LONG *)(v51 + 4)); /*0x82025d*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x820263*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x82026e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x82027a*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x82027f*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x82028a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 5u, 0); /*0x820296*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x82029b*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8202a6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 2u, 0); /*0x8202b2*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x8202b7*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8202c2*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 1u, 0); /*0x8202ce*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x8202d3*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8202de*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x19u, 5u, 0); /*0x8202ea*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x8202ef*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8202fa*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x18u, 0, 0); /*0x820306*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x82030b*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x820316*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x820322*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x820327*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x820332*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x82033e*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x820343*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x82034e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x82035a*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x82035f*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x82036a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x820376*/
  unk_B440E4 = 0x802; /*0x820380*/
  unk_B44774 = 0x38; /*0x82038a*/
  LOBYTE(v53) = 0; /*0x820394*/
  if ( v1 ) /*0x820399*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x82039b*/
    if ( v3 ) /*0x82039e*/
      sub_772560(v1); /*0x8203a2*/
  }
  v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x8203a7*/
  v53 = 0xFFFFFFFF; /*0x8203aa*/
  if ( v3 ) /*0x8203ae*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x8203b2*/
}
