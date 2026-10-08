void sub_81DC40()
{
  int v0; // esi
  NiD3DTextureStage *v1; // edi
  int v2; // eax
  bool v3; // zf
  NiD3DTextureStage *v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage **v6; // ebp
  NiD3DTextureStage *v7; // eax
  NiD3DTextureStage **v8; // ebp
  NiD3DTextureStage *v9; // eax
  NiD3DTextureStage **v10; // ebp
  NiD3DTextureStage *v11; // eax
  int v12; // ebp
  int v13; // ebx
  int v14; // ebp
  int v15; // ebx
  NiD3DTextureStage **v16; // ebp
  NiD3DTextureStage *v17; // eax
  NiD3DTextureStage **v18; // ebp
  NiD3DTextureStage *v19; // eax
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
  NiD3DTextureStage **v32; // ebp
  NiD3DTextureStage *v33; // eax
  NiD3DTextureStage **v34; // ebp
  NiD3DTextureStage *v35; // eax
  int v36; // ebp
  int v37; // ebx
  int v38; // ebp
  int v39; // ebx
  NiD3DTextureStage **v40; // ebp
  NiD3DTextureStage *v41; // eax
  NiD3DTextureStage **v42; // ebp
  NiD3DTextureStage *v43; // eax
  NiD3DTextureStage **v44; // ebp
  NiD3DTextureStage *v45; // eax
  NiD3DTextureStage **v46; // ebp
  NiD3DTextureStage *v47; // eax
  int v48; // ebp
  int v49; // ebx
  int v50; // ebp
  int v51; // ebx
  NiD3DTextureStage *v52; // [esp+20h] [ebp-10h] BYREF
  unsigned int v53; // [esp+2Ch] [ebp-4h]

  v0 = 0; /*0x81dc67*/
  v1 = 0; /*0x81dc69*/
  v53 = 0; /*0x81dc6f*/
  v2 = unk_B45BA0; /*0x81dc77*/
  v3 = unk_B45BA0 == 0; /*0x81dc7c*/
  LOBYTE(v53) = 1; /*0x81dc83*/
  if ( !v3 ) /*0x81dc88*/
  {
    v0 = v2; /*0x81dc8a*/
    if ( v2 ) /*0x81dc92*/
      ++*(_DWORD *)(v2 + 0x60); /*0x81dc94*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 4u ) /*0x81dca0*/
  {
    v4 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v52); /*0x81dcb3*/
    if ( v4 ) /*0x81dcb7*/
    {
      v1 = v4; /*0x81dcb9*/
      ++v4[7].Unk08; /*0x81dcbb*/
    }
    v5 = v52; /*0x81dcc2*/
    LOBYTE(v53) = 1; /*0x81dcc8*/
    if ( v52 ) /*0x81dccd*/
    {
      --v52[7].Unk08; /*0x81dccf*/
      if ( !v5[7].Unk08 ) /*0x81dcd7*/
        sub_772560(v5); /*0x81dcdc*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81dce8*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81dcf7*/
    v6 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81dd09*/
    v3 = v1 == *v6; /*0x81dd0b*/
    LOBYTE(v53) = 3; /*0x81dd0e*/
    if ( !v3 ) /*0x81dd13*/
    {
      if ( v1 ) /*0x81dd17*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81dd19*/
        if ( v3 ) /*0x81dd1c*/
          sub_772560(v1); /*0x81dd20*/
      }
      v1 = *v6; /*0x81dd25*/
      if ( *v6 ) /*0x81dd2a*/
        ++v1[7].Unk08; /*0x81dd30*/
    }
    v7 = v52; /*0x81dd34*/
    LOBYTE(v53) = 1; /*0x81dd3a*/
    if ( v52 ) /*0x81dd3f*/
    {
      --v52[7].Unk08; /*0x81dd41*/
      if ( !v7[7].Unk08 ) /*0x81dd49*/
        sub_772560(v7); /*0x81dd4e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x81dd5a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81dd69*/
    v8 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81dd7b*/
    v3 = v1 == *v8; /*0x81dd7d*/
    LOBYTE(v53) = 4; /*0x81dd80*/
    if ( !v3 ) /*0x81dd85*/
    {
      if ( v1 ) /*0x81dd89*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81dd8b*/
        if ( v3 ) /*0x81dd8e*/
          sub_772560(v1); /*0x81dd92*/
      }
      v1 = *v8; /*0x81dd97*/
      if ( *v8 ) /*0x81dd9c*/
        ++v1[7].Unk08; /*0x81dda2*/
    }
    v9 = v52; /*0x81dda6*/
    LOBYTE(v53) = 1; /*0x81ddac*/
    if ( v52 ) /*0x81ddb1*/
    {
      --v52[7].Unk08; /*0x81ddb3*/
      if ( !v9[7].Unk08 ) /*0x81ddbb*/
        sub_772560(v9); /*0x81ddc0*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x81ddcc*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81dddb*/
    v10 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81dded*/
    v3 = v1 == *v10; /*0x81ddef*/
    LOBYTE(v53) = 5; /*0x81ddf2*/
    if ( !v3 ) /*0x81ddf7*/
    {
      if ( v1 ) /*0x81ddfb*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81ddfd*/
        if ( v3 ) /*0x81de00*/
          sub_772560(v1); /*0x81de04*/
      }
      v1 = *v10; /*0x81de09*/
      if ( *v10 ) /*0x81de0e*/
        ++v1[7].Unk08; /*0x81de14*/
    }
    v11 = v52; /*0x81de18*/
    LOBYTE(v53) = 1; /*0x81de1e*/
    if ( v52 ) /*0x81de23*/
    {
      --v52[7].Unk08; /*0x81de25*/
      if ( !v11[7].Unk08 ) /*0x81de2d*/
        sub_772560(v11); /*0x81de32*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x81de3e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81de4d*/
  }
  v12 = *(_DWORD *)(v0 + 0x58); /*0x81de57*/
  v13 = unk_B452DC; /*0x81de5c*/
  if ( v12 != unk_B452DC ) /*0x81de5e*/
  {
    if ( v12 ) /*0x81de62*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x81de68*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x81de7f*/
    }
    *(_DWORD *)(v0 + 0x58) = v13; /*0x81de83*/
    if ( v13 ) /*0x81de86*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x81de8c*/
  }
  v14 = *(_DWORD *)(v0 + 0x44); /*0x81de97*/
  v15 = unk_B45108; /*0x81de9c*/
  if ( v14 != unk_B45108 ) /*0x81de9e*/
  {
    if ( v14 ) /*0x81dea2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x81dea8*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x81debf*/
    }
    *(_DWORD *)(v0 + 0x44) = v15; /*0x81dec3*/
    if ( v15 ) /*0x81dec6*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x81decc*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ded2*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81dedd*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81dee9*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81deee*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81def9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 2u, 0); /*0x81df05*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81df0a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81df15*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 2u, 0); /*0x81df21*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81df26*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81df31*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81df3d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81df42*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81df4d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81df59*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81df5e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81df69*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81df75*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81df7a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81df85*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81df91*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81df96*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81dfa1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81dfad*/
  v3 = v0 == unk_B45BA4; /*0x81dfba*/
  unk_B44120 = 0x20006; /*0x81dfc0*/
  unk_B447B0 = 4; /*0x81dfca*/
  unk_B44E40 = 4; /*0x81dfd0*/
  if ( !v3 ) /*0x81dfd6*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81dfd8*/
    if ( v3 ) /*0x81dfdb*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81dfdf*/
    v0 = unk_B45BA4; /*0x81dfe4*/
    if ( unk_B45BA4 ) /*0x81dfec*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81dff2*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 4u ) /*0x81dff9*/
  {
    v16 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81e00c*/
    v3 = v1 == *v16; /*0x81e00e*/
    LOBYTE(v53) = 6; /*0x81e011*/
    if ( !v3 ) /*0x81e016*/
    {
      if ( v1 ) /*0x81e01a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81e01c*/
        if ( v3 ) /*0x81e01f*/
          sub_772560(v1); /*0x81e023*/
      }
      v1 = *v16; /*0x81e028*/
      if ( *v16 ) /*0x81e02d*/
        ++v1[7].Unk08; /*0x81e033*/
    }
    v17 = v52; /*0x81e037*/
    LOBYTE(v53) = 1; /*0x81e03d*/
    if ( v52 ) /*0x81e042*/
    {
      --v52[7].Unk08; /*0x81e044*/
      if ( !v17[7].Unk08 ) /*0x81e04c*/
        sub_772560(v17); /*0x81e051*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81e05d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81e06c*/
    v18 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81e07e*/
    v3 = v1 == *v18; /*0x81e080*/
    LOBYTE(v53) = 7; /*0x81e083*/
    if ( !v3 ) /*0x81e088*/
    {
      if ( v1 ) /*0x81e08c*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81e08e*/
        if ( v3 ) /*0x81e091*/
          sub_772560(v1); /*0x81e095*/
      }
      v1 = *v18; /*0x81e09a*/
      if ( *v18 ) /*0x81e09f*/
        ++v1[7].Unk08; /*0x81e0a5*/
    }
    v19 = v52; /*0x81e0a9*/
    LOBYTE(v53) = 1; /*0x81e0af*/
    if ( v52 ) /*0x81e0b4*/
    {
      --v52[7].Unk08; /*0x81e0b6*/
      if ( !v19[7].Unk08 ) /*0x81e0be*/
        sub_772560(v19); /*0x81e0c3*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x81e0cf*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81e0de*/
    v20 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81e0f0*/
    v3 = v1 == *v20; /*0x81e0f2*/
    LOBYTE(v53) = 8; /*0x81e0f5*/
    if ( !v3 ) /*0x81e0fa*/
    {
      if ( v1 ) /*0x81e0fe*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81e100*/
        if ( v3 ) /*0x81e103*/
          sub_772560(v1); /*0x81e107*/
      }
      v1 = *v20; /*0x81e10c*/
      if ( *v20 ) /*0x81e111*/
        ++v1[7].Unk08; /*0x81e117*/
    }
    v21 = v52; /*0x81e11b*/
    LOBYTE(v53) = 1; /*0x81e121*/
    if ( v52 ) /*0x81e126*/
    {
      --v52[7].Unk08; /*0x81e128*/
      if ( !v21[7].Unk08 ) /*0x81e130*/
        sub_772560(v21); /*0x81e135*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x81e141*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81e150*/
    v22 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81e162*/
    v3 = v1 == *v22; /*0x81e164*/
    LOBYTE(v53) = 9; /*0x81e167*/
    if ( !v3 ) /*0x81e16c*/
    {
      if ( v1 ) /*0x81e170*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81e172*/
        if ( v3 ) /*0x81e175*/
          sub_772560(v1); /*0x81e179*/
      }
      v1 = *v22; /*0x81e17e*/
      if ( *v22 ) /*0x81e183*/
        ++v1[7].Unk08; /*0x81e189*/
    }
    v23 = v52; /*0x81e18d*/
    LOBYTE(v53) = 1; /*0x81e193*/
    if ( v52 ) /*0x81e198*/
    {
      --v52[7].Unk08; /*0x81e19a*/
      if ( !v23[7].Unk08 ) /*0x81e1a2*/
        sub_772560(v23); /*0x81e1a7*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x81e1b3*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81e1c2*/
  }
  v24 = *(_DWORD *)(v0 + 0x58); /*0x81e1cc*/
  v25 = unk_B452DC; /*0x81e1d1*/
  if ( v24 != unk_B452DC ) /*0x81e1d3*/
  {
    if ( v24 ) /*0x81e1d7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) ) /*0x81e1dd*/
        (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x81e1f4*/
    }
    *(_DWORD *)(v0 + 0x58) = v25; /*0x81e1f8*/
    if ( v25 ) /*0x81e1fb*/
      InterlockedIncrement((volatile LONG *)(v25 + 4)); /*0x81e201*/
  }
  v26 = *(_DWORD *)(v0 + 0x44); /*0x81e20c*/
  v27 = unk_B4510C; /*0x81e211*/
  if ( v26 != unk_B4510C ) /*0x81e213*/
  {
    if ( v26 ) /*0x81e217*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x81e21d*/
        (**(void (__thiscall ***)(int, int))v26)(v26, 1); /*0x81e234*/
    }
    *(_DWORD *)(v0 + 0x44) = v27; /*0x81e238*/
    if ( v27 ) /*0x81e23b*/
      InterlockedIncrement((volatile LONG *)(v27 + 4)); /*0x81e241*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e247*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e252*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81e25e*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e263*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e26e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 2u, 0); /*0x81e27a*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e27f*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e28a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 2u, 0); /*0x81e296*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e29b*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e2a6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81e2b2*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e2b7*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e2c2*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81e2ce*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e2d3*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e2de*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81e2ea*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e2ef*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e2fa*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81e306*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e30b*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e316*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81e322*/
  v3 = v0 == unk_B45BA8; /*0x81e32f*/
  unk_B44124 = 0x20006; /*0x81e335*/
  unk_B447B4 = 4; /*0x81e33f*/
  unk_B44E44 = 4; /*0x81e345*/
  if ( !v3 ) /*0x81e34b*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81e34d*/
    if ( v3 ) /*0x81e350*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81e354*/
    v0 = unk_B45BA8; /*0x81e359*/
    if ( unk_B45BA8 ) /*0x81e361*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81e367*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 4u ) /*0x81e36e*/
  {
    v28 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81e381*/
    v3 = v1 == *v28; /*0x81e383*/
    LOBYTE(v53) = 0xA; /*0x81e386*/
    if ( !v3 ) /*0x81e38b*/
    {
      if ( v1 ) /*0x81e38f*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81e391*/
        if ( v3 ) /*0x81e394*/
          sub_772560(v1); /*0x81e398*/
      }
      v1 = *v28; /*0x81e39d*/
      if ( *v28 ) /*0x81e3a2*/
        ++v1[7].Unk08; /*0x81e3a8*/
    }
    v29 = v52; /*0x81e3ac*/
    LOBYTE(v53) = 1; /*0x81e3b2*/
    if ( v52 ) /*0x81e3b7*/
    {
      --v52[7].Unk08; /*0x81e3b9*/
      if ( !v29[7].Unk08 ) /*0x81e3c1*/
        sub_772560(v29); /*0x81e3c6*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81e3d2*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81e3e1*/
    v30 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81e3f3*/
    v3 = v1 == *v30; /*0x81e3f5*/
    LOBYTE(v53) = 0xB; /*0x81e3f8*/
    if ( !v3 ) /*0x81e3fd*/
    {
      if ( v1 ) /*0x81e401*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81e403*/
        if ( v3 ) /*0x81e406*/
          sub_772560(v1); /*0x81e40a*/
      }
      v1 = *v30; /*0x81e40f*/
      if ( *v30 ) /*0x81e414*/
        ++v1[7].Unk08; /*0x81e41a*/
    }
    v31 = v52; /*0x81e41e*/
    LOBYTE(v53) = 1; /*0x81e424*/
    if ( v52 ) /*0x81e429*/
    {
      --v52[7].Unk08; /*0x81e42b*/
      if ( !v31[7].Unk08 ) /*0x81e433*/
        sub_772560(v31); /*0x81e438*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x81e444*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81e453*/
    v32 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81e465*/
    v3 = v1 == *v32; /*0x81e467*/
    LOBYTE(v53) = 0xC; /*0x81e46a*/
    if ( !v3 ) /*0x81e46f*/
    {
      if ( v1 ) /*0x81e473*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81e475*/
        if ( v3 ) /*0x81e478*/
          sub_772560(v1); /*0x81e47c*/
      }
      v1 = *v32; /*0x81e481*/
      if ( *v32 ) /*0x81e486*/
        ++v1[7].Unk08; /*0x81e48c*/
    }
    v33 = v52; /*0x81e490*/
    LOBYTE(v53) = 1; /*0x81e496*/
    if ( v52 ) /*0x81e49b*/
    {
      --v52[7].Unk08; /*0x81e49d*/
      if ( !v33[7].Unk08 ) /*0x81e4a5*/
        sub_772560(v33); /*0x81e4aa*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x81e4b6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81e4c5*/
    v34 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81e4d7*/
    v3 = v1 == *v34; /*0x81e4d9*/
    LOBYTE(v53) = 0xD; /*0x81e4dc*/
    if ( !v3 ) /*0x81e4e1*/
    {
      if ( v1 ) /*0x81e4e5*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81e4e7*/
        if ( v3 ) /*0x81e4ea*/
          sub_772560(v1); /*0x81e4ee*/
      }
      v1 = *v34; /*0x81e4f3*/
      if ( *v34 ) /*0x81e4f8*/
        ++v1[7].Unk08; /*0x81e4fe*/
    }
    v35 = v52; /*0x81e502*/
    LOBYTE(v53) = 1; /*0x81e508*/
    if ( v52 ) /*0x81e50d*/
    {
      --v52[7].Unk08; /*0x81e50f*/
      if ( !v35[7].Unk08 ) /*0x81e517*/
        sub_772560(v35); /*0x81e51c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x81e528*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81e537*/
  }
  v36 = *(_DWORD *)(v0 + 0x58); /*0x81e541*/
  v37 = unk_B45350; /*0x81e546*/
  if ( v36 != unk_B45350 ) /*0x81e548*/
  {
    if ( v36 ) /*0x81e54c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v36 + 4)) ) /*0x81e552*/
        (**(void (__thiscall ***)(int, int))v36)(v36, 1); /*0x81e569*/
    }
    *(_DWORD *)(v0 + 0x58) = v37; /*0x81e56d*/
    if ( v37 ) /*0x81e570*/
      InterlockedIncrement((volatile LONG *)(v37 + 4)); /*0x81e576*/
  }
  v38 = *(_DWORD *)(v0 + 0x44); /*0x81e581*/
  v39 = unk_B45108; /*0x81e586*/
  if ( v38 != unk_B45108 ) /*0x81e588*/
  {
    if ( v38 ) /*0x81e58c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v38 + 4)) ) /*0x81e592*/
        (**(void (__thiscall ***)(int, int))v38)(v38, 1); /*0x81e5a9*/
    }
    *(_DWORD *)(v0 + 0x44) = v39; /*0x81e5ad*/
    if ( v39 ) /*0x81e5b0*/
      InterlockedIncrement((volatile LONG *)(v39 + 4)); /*0x81e5b6*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e5bc*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e5c7*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81e5d3*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e5d8*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e5e3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 2u, 0); /*0x81e5ef*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e5f4*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e5ff*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 2u, 0); /*0x81e60b*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e610*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e61b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81e627*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e62c*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e637*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81e643*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e648*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e653*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81e65f*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e664*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e66f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81e67b*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e680*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e68b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81e697*/
  v3 = v0 == unk_B45BAC; /*0x81e6a4*/
  unk_B44128 = 0x6000C; /*0x81e6aa*/
  unk_B447B8 = 4; /*0x81e6b4*/
  unk_B44E48 = 4; /*0x81e6ba*/
  if ( !v3 ) /*0x81e6c0*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81e6c2*/
    if ( v3 ) /*0x81e6c5*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81e6c9*/
    v0 = unk_B45BAC; /*0x81e6ce*/
    if ( unk_B45BAC ) /*0x81e6d6*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81e6dc*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 4u ) /*0x81e6e3*/
  {
    v40 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81e6f6*/
    v3 = v1 == *v40; /*0x81e6f8*/
    LOBYTE(v53) = 0xE; /*0x81e6fb*/
    if ( !v3 ) /*0x81e700*/
    {
      if ( v1 ) /*0x81e704*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81e706*/
        if ( v3 ) /*0x81e709*/
          sub_772560(v1); /*0x81e70d*/
      }
      v1 = *v40; /*0x81e712*/
      if ( *v40 ) /*0x81e717*/
        ++v1[7].Unk08; /*0x81e71d*/
    }
    v41 = v52; /*0x81e721*/
    LOBYTE(v53) = 1; /*0x81e727*/
    if ( v52 ) /*0x81e72c*/
    {
      --v52[7].Unk08; /*0x81e72e*/
      if ( !v41[7].Unk08 ) /*0x81e736*/
        sub_772560(v41); /*0x81e73b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81e747*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81e756*/
    v42 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81e768*/
    v3 = v1 == *v42; /*0x81e76a*/
    LOBYTE(v53) = 0xF; /*0x81e76d*/
    if ( !v3 ) /*0x81e772*/
    {
      if ( v1 ) /*0x81e776*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81e778*/
        if ( v3 ) /*0x81e77b*/
          sub_772560(v1); /*0x81e77f*/
      }
      v1 = *v42; /*0x81e784*/
      if ( *v42 ) /*0x81e789*/
        ++v1[7].Unk08; /*0x81e78f*/
    }
    v43 = v52; /*0x81e793*/
    LOBYTE(v53) = 1; /*0x81e799*/
    if ( v52 ) /*0x81e79e*/
    {
      --v52[7].Unk08; /*0x81e7a0*/
      if ( !v43[7].Unk08 ) /*0x81e7a8*/
        sub_772560(v43); /*0x81e7ad*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x81e7b9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81e7c8*/
    v44 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81e7da*/
    v3 = v1 == *v44; /*0x81e7dc*/
    LOBYTE(v53) = 0x10; /*0x81e7df*/
    if ( !v3 ) /*0x81e7e4*/
    {
      if ( v1 ) /*0x81e7e8*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81e7ea*/
        if ( v3 ) /*0x81e7ed*/
          sub_772560(v1); /*0x81e7f1*/
      }
      v1 = *v44; /*0x81e7f6*/
      if ( *v44 ) /*0x81e7fb*/
        ++v1[7].Unk08; /*0x81e801*/
    }
    v45 = v52; /*0x81e805*/
    LOBYTE(v53) = 1; /*0x81e80b*/
    if ( v52 ) /*0x81e810*/
    {
      --v52[7].Unk08; /*0x81e812*/
      if ( !v45[7].Unk08 ) /*0x81e81a*/
        sub_772560(v45); /*0x81e81f*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x81e82b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81e83a*/
    v46 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x81e84c*/
    v3 = v1 == *v46; /*0x81e84e*/
    LOBYTE(v53) = 0x11; /*0x81e851*/
    if ( !v3 ) /*0x81e856*/
    {
      if ( v1 ) /*0x81e85a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81e85c*/
        if ( v3 ) /*0x81e85f*/
          sub_772560(v1); /*0x81e863*/
      }
      v1 = *v46; /*0x81e868*/
      if ( *v46 ) /*0x81e86d*/
        ++v1[7].Unk08; /*0x81e873*/
    }
    v47 = v52; /*0x81e877*/
    LOBYTE(v53) = 1; /*0x81e87d*/
    if ( v52 ) /*0x81e882*/
    {
      --v52[7].Unk08; /*0x81e884*/
      if ( !v47[7].Unk08 ) /*0x81e88c*/
        sub_772560(v47); /*0x81e891*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x81e89d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81e8ac*/
  }
  v48 = *(_DWORD *)(v0 + 0x58); /*0x81e8b6*/
  v49 = unk_B45350; /*0x81e8bb*/
  if ( v48 != unk_B45350 ) /*0x81e8bd*/
  {
    if ( v48 ) /*0x81e8c1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v48 + 4)) ) /*0x81e8c7*/
        (**(void (__thiscall ***)(int, int))v48)(v48, 1); /*0x81e8de*/
    }
    *(_DWORD *)(v0 + 0x58) = v49; /*0x81e8e2*/
    if ( v49 ) /*0x81e8e5*/
      InterlockedIncrement((volatile LONG *)(v49 + 4)); /*0x81e8eb*/
  }
  v50 = *(_DWORD *)(v0 + 0x44); /*0x81e8f6*/
  v51 = unk_B4510C; /*0x81e8fb*/
  if ( v50 != unk_B4510C ) /*0x81e8fd*/
  {
    if ( v50 ) /*0x81e901*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v50 + 4)) ) /*0x81e907*/
        (**(void (__thiscall ***)(int, int))v50)(v50, 1); /*0x81e91e*/
    }
    *(_DWORD *)(v0 + 0x44) = v51; /*0x81e922*/
    if ( v51 ) /*0x81e925*/
      InterlockedIncrement((volatile LONG *)(v51 + 4)); /*0x81e92b*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e931*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e93c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81e948*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e94d*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e958*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 2u, 0); /*0x81e964*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e969*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e974*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 2u, 0); /*0x81e980*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e985*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e990*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81e99c*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e9a1*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e9ac*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81e9b8*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e9bd*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e9c8*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81e9d4*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e9d9*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81e9e4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81e9f0*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81e9f5*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ea00*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81ea0c*/
  unk_B4412C = 0x6000C; /*0x81ea1b*/
  unk_B447BC = 4; /*0x81ea25*/
  unk_B44E4C = 4; /*0x81ea2a*/
  LOBYTE(v53) = 0; /*0x81ea2f*/
  if ( v1 ) /*0x81ea34*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x81ea36*/
    if ( v3 ) /*0x81ea39*/
      sub_772560(v1); /*0x81ea3d*/
  }
  v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81ea42*/
  v53 = 0xFFFFFFFF; /*0x81ea45*/
  if ( v3 ) /*0x81ea49*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81ea4d*/
}
