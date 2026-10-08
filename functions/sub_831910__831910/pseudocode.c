void sub_831910()
{
  NiD3DPass *v0; // esi
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
  NiD3DVertexShader *VertexShader; // ebp
  int v13; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  int v15; // ebx
  NiD3DTextureStage **v16; // ebp
  NiD3DTextureStage *v17; // eax
  NiD3DTextureStage **v18; // ebp
  NiD3DTextureStage *v19; // eax
  NiD3DTextureStage **v20; // ebp
  NiD3DTextureStage *v21; // eax
  NiD3DTextureStage **v22; // ebp
  NiD3DTextureStage *v23; // eax
  NiD3DVertexShader *v24; // ebp
  int v25; // ebx
  NiD3DPixelShader *v26; // ebp
  int v27; // ebx
  NiD3DTextureStage **v28; // ebp
  NiD3DTextureStage *v29; // eax
  NiD3DTextureStage **v30; // ebp
  NiD3DTextureStage *v31; // eax
  NiD3DTextureStage **v32; // ebp
  NiD3DTextureStage *v33; // eax
  NiD3DTextureStage **v34; // ebp
  NiD3DTextureStage *v35; // eax
  NiD3DVertexShader *v36; // ebp
  int v37; // ebx
  NiD3DPixelShader *v38; // ebp
  int v39; // ebx
  NiD3DTextureStage **v40; // ebp
  NiD3DTextureStage *v41; // eax
  NiD3DTextureStage **v42; // ebp
  NiD3DTextureStage *v43; // eax
  NiD3DTextureStage **v44; // ebp
  NiD3DTextureStage *v45; // eax
  NiD3DTextureStage **v46; // ebp
  NiD3DTextureStage *v47; // eax
  NiD3DVertexShader *v48; // ebp
  int v49; // ebx
  NiD3DPixelShader *v50; // ebp
  int v51; // ebx
  NiD3DTextureStage *v52; // [esp+20h] [ebp-10h] BYREF
  unsigned int v53; // [esp+2Ch] [ebp-4h]

  v0 = 0; /*0x831937*/
  v1 = 0; /*0x83193d*/
  v53 = 0; /*0x83193f*/
  v2 = unk_B45940; /*0x831947*/
  v3 = unk_B45940 == 0; /*0x83194c*/
  LOBYTE(v53) = 1; /*0x831953*/
  if ( !v3 ) /*0x831957*/
  {
    v0 = (NiD3DPass *)v2; /*0x831959*/
    if ( v2 ) /*0x831961*/
      ++*(_DWORD *)(v2 + 0x60); /*0x831963*/
  }
  if ( v0->StageCount < 4 ) /*0x83196c*/
  {
    v4 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v52); /*0x83197f*/
    if ( v4 ) /*0x831983*/
    {
      v1 = v4; /*0x831985*/
      ++v4[7].Unk08; /*0x831987*/
    }
    v5 = v52; /*0x83198e*/
    LOBYTE(v53) = 1; /*0x831994*/
    if ( v52 ) /*0x831999*/
    {
      --v52[7].Unk08; /*0x83199b*/
      if ( !v5[7].Unk08 ) /*0x8319a4*/
        sub_772560(v5); /*0x8319a9*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x8319b4*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x8319c1*/
    v6 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x8319d3*/
    v3 = v1 == *v6; /*0x8319d5*/
    LOBYTE(v53) = 3; /*0x8319d8*/
    if ( !v3 ) /*0x8319dd*/
    {
      if ( v1 ) /*0x8319e1*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8319e3*/
        if ( v3 ) /*0x8319e7*/
          sub_772560(v1); /*0x8319eb*/
      }
      v1 = *v6; /*0x8319f0*/
      if ( *v6 ) /*0x8319f5*/
        ++v1[7].Unk08; /*0x8319fb*/
    }
    v7 = v52; /*0x8319fe*/
    LOBYTE(v53) = 1; /*0x831a04*/
    if ( v52 ) /*0x831a09*/
    {
      --v52[7].Unk08; /*0x831a0b*/
      if ( !v7[7].Unk08 ) /*0x831a14*/
        sub_772560(v7); /*0x831a19*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x831a23*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x831a2f*/
    v8 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x831a41*/
    v3 = v1 == *v8; /*0x831a43*/
    LOBYTE(v53) = 4; /*0x831a46*/
    if ( !v3 ) /*0x831a4b*/
    {
      if ( v1 ) /*0x831a4f*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x831a51*/
        if ( v3 ) /*0x831a55*/
          sub_772560(v1); /*0x831a59*/
      }
      v1 = *v8; /*0x831a5e*/
      if ( *v8 ) /*0x831a63*/
        ++v1[7].Unk08; /*0x831a69*/
    }
    v9 = v52; /*0x831a6c*/
    LOBYTE(v53) = 1; /*0x831a72*/
    if ( v52 ) /*0x831a77*/
    {
      --v52[7].Unk08; /*0x831a79*/
      if ( !v9[7].Unk08 ) /*0x831a82*/
        sub_772560(v9); /*0x831a87*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x831a92*/
    NiD3DPass_SetTextureStage(v0, 2u, &v1->Stage); /*0x831a9f*/
    v10 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x831ab1*/
    v3 = v1 == *v10; /*0x831ab3*/
    LOBYTE(v53) = 5; /*0x831ab6*/
    if ( !v3 ) /*0x831abb*/
    {
      if ( v1 ) /*0x831abf*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x831ac1*/
        if ( v3 ) /*0x831ac5*/
          sub_772560(v1); /*0x831ac9*/
      }
      v1 = *v10; /*0x831ace*/
      if ( *v10 ) /*0x831ad3*/
        ++v1[7].Unk08; /*0x831ad9*/
    }
    v11 = v52; /*0x831adc*/
    LOBYTE(v53) = 1; /*0x831ae2*/
    if ( v52 ) /*0x831ae7*/
    {
      --v52[7].Unk08; /*0x831ae9*/
      if ( !v11[7].Unk08 ) /*0x831af2*/
        sub_772560(v11); /*0x831af7*/
    }
    NiD3DTextureStage_SetTexture(v1, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x831b05*/
    BSShader_ConfigureTextureStageSampler(v1, 3, 3, 0); /*0x831b11*/
    NiD3DPass_SetTextureStage(v0, 3u, &v1->Stage); /*0x831b1e*/
  }
  VertexShader = v0->VertexShader; /*0x831b28*/
  v13 = unk_B453D0; /*0x831b2d*/
  if ( VertexShader != (NiD3DVertexShader *)unk_B453D0 ) /*0x831b2f*/
  {
    if ( VertexShader ) /*0x831b33*/
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) ) /*0x831b39*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1); /*0x831b50*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v13; /*0x831b54*/
    if ( v13 ) /*0x831b57*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x831b5d*/
  }
  PixelShader = v0->PixelShader; /*0x831b68*/
  v15 = unk_B451D0; /*0x831b6d*/
  if ( PixelShader != (NiD3DPixelShader *)unk_B451D0 ) /*0x831b6f*/
  {
    if ( PixelShader ) /*0x831b73*/
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x831b79*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x831b90*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v15; /*0x831b94*/
    if ( v15 ) /*0x831b97*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x831b9d*/
  }
  if ( !v0->RenderStateGroup ) /*0x831ba3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831bae*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x831bba*/
  if ( !v0->RenderStateGroup ) /*0x831bbf*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831bca*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0); /*0x831bd6*/
  if ( !v0->RenderStateGroup ) /*0x831bdb*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831be6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x831bf2*/
  if ( !v0->RenderStateGroup ) /*0x831bf7*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831c02*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x831c0e*/
  if ( !v0->RenderStateGroup ) /*0x831c13*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831c1e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x831c2a*/
  if ( !v0->RenderStateGroup ) /*0x831c2f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831c3a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0); /*0x831c46*/
  if ( !v0->RenderStateGroup ) /*0x831c4b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831c56*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x831c62*/
  if ( !v0->RenderStateGroup ) /*0x831c67*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831c72*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x831c7e*/
  v3 = v0 == (NiD3DPass *)unk_B4594C; /*0x831c86*/
  unk_B43EC0 = 0x1802; /*0x831c8c*/
  unk_B44550 = 0x18; /*0x831c96*/
  if ( !v3 ) /*0x831ca0*/
  {
    v3 = v0->RefCount-- == 1; /*0x831ca2*/
    if ( v3 ) /*0x831ca5*/
      NiD3DPass_ReleaseToPool(v0); /*0x831ca9*/
    v0 = (NiD3DPass *)unk_B4594C; /*0x831cae*/
    if ( unk_B4594C ) /*0x831cb6*/
      ++v0->RefCount; /*0x831cbc*/
  }
  if ( v0->StageCount < 4 ) /*0x831cc4*/
  {
    v16 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x831cd7*/
    v3 = v1 == *v16; /*0x831cd9*/
    LOBYTE(v53) = 6; /*0x831cdc*/
    if ( !v3 ) /*0x831ce1*/
    {
      if ( v1 ) /*0x831ce5*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x831ce7*/
        if ( v3 ) /*0x831cea*/
          sub_772560(v1); /*0x831cee*/
      }
      v1 = *v16; /*0x831cf3*/
      if ( *v16 ) /*0x831cf8*/
        ++v1[7].Unk08; /*0x831cfe*/
    }
    v17 = v52; /*0x831d02*/
    LOBYTE(v53) = 1; /*0x831d08*/
    if ( v52 ) /*0x831d0d*/
    {
      --v52[7].Unk08; /*0x831d0f*/
      if ( !v17[7].Unk08 ) /*0x831d17*/
        sub_772560(v17); /*0x831d1c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x831d28*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x831d35*/
    v18 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x831d47*/
    v3 = v1 == *v18; /*0x831d49*/
    LOBYTE(v53) = 7; /*0x831d4c*/
    if ( !v3 ) /*0x831d51*/
    {
      if ( v1 ) /*0x831d55*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x831d57*/
        if ( v3 ) /*0x831d5a*/
          sub_772560(v1); /*0x831d5e*/
      }
      v1 = *v18; /*0x831d63*/
      if ( *v18 ) /*0x831d68*/
        ++v1[7].Unk08; /*0x831d6e*/
    }
    v19 = v52; /*0x831d72*/
    LOBYTE(v53) = 1; /*0x831d78*/
    if ( v52 ) /*0x831d7d*/
    {
      --v52[7].Unk08; /*0x831d7f*/
      if ( !v19[7].Unk08 ) /*0x831d87*/
        sub_772560(v19); /*0x831d8c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x831d98*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x831da5*/
    v20 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x831db7*/
    v3 = v1 == *v20; /*0x831db9*/
    LOBYTE(v53) = 8; /*0x831dbc*/
    if ( !v3 ) /*0x831dc1*/
    {
      if ( v1 ) /*0x831dc5*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x831dc7*/
        if ( v3 ) /*0x831dca*/
          sub_772560(v1); /*0x831dce*/
      }
      v1 = *v20; /*0x831dd3*/
      if ( *v20 ) /*0x831dd8*/
        ++v1[7].Unk08; /*0x831dde*/
    }
    v21 = v52; /*0x831de2*/
    LOBYTE(v53) = 1; /*0x831de8*/
    if ( v52 ) /*0x831ded*/
    {
      --v52[7].Unk08; /*0x831def*/
      if ( !v21[7].Unk08 ) /*0x831df7*/
        sub_772560(v21); /*0x831dfc*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x831e08*/
    NiD3DPass_SetTextureStage(v0, 2u, &v1->Stage); /*0x831e15*/
    v22 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x831e27*/
    v3 = v1 == *v22; /*0x831e29*/
    LOBYTE(v53) = 9; /*0x831e2c*/
    if ( !v3 ) /*0x831e31*/
    {
      if ( v1 ) /*0x831e35*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x831e37*/
        if ( v3 ) /*0x831e3a*/
          sub_772560(v1); /*0x831e3e*/
      }
      v1 = *v22; /*0x831e43*/
      if ( *v22 ) /*0x831e48*/
        ++v1[7].Unk08; /*0x831e4e*/
    }
    v23 = v52; /*0x831e52*/
    LOBYTE(v53) = 1; /*0x831e58*/
    if ( v52 ) /*0x831e5d*/
    {
      --v52[7].Unk08; /*0x831e5f*/
      if ( !v23[7].Unk08 ) /*0x831e67*/
        sub_772560(v23); /*0x831e6c*/
    }
    NiD3DTextureStage_SetTexture(v1, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x831e7a*/
    BSShader_ConfigureTextureStageSampler(v1, 3, 3, 0); /*0x831e86*/
    NiD3DPass_SetTextureStage(v0, 3u, &v1->Stage); /*0x831e93*/
  }
  v24 = v0->VertexShader; /*0x831e9d*/
  v25 = unk_B453D4; /*0x831ea2*/
  if ( v24 != (NiD3DVertexShader *)unk_B453D4 ) /*0x831ea4*/
  {
    if ( v24 ) /*0x831ea8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v24 + 1) ) /*0x831eae*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v24)(v24, 1); /*0x831ec5*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v25; /*0x831ec9*/
    if ( v25 ) /*0x831ecc*/
      InterlockedIncrement((volatile LONG *)(v25 + 4)); /*0x831ed2*/
  }
  v26 = v0->PixelShader; /*0x831edd*/
  v27 = unk_B451D0; /*0x831ee2*/
  if ( v26 != (NiD3DPixelShader *)unk_B451D0 ) /*0x831ee4*/
  {
    if ( v26 ) /*0x831ee8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v26 + 1) ) /*0x831eee*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v26)(v26, 1); /*0x831f05*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v27; /*0x831f09*/
    if ( v27 ) /*0x831f0c*/
      InterlockedIncrement((volatile LONG *)(v27 + 4)); /*0x831f12*/
  }
  if ( !v0->RenderStateGroup ) /*0x831f18*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831f23*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x831f2f*/
  if ( !v0->RenderStateGroup ) /*0x831f34*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831f3f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0); /*0x831f4b*/
  if ( !v0->RenderStateGroup ) /*0x831f50*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831f5b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x831f67*/
  if ( !v0->RenderStateGroup ) /*0x831f6c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831f77*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x831f83*/
  if ( !v0->RenderStateGroup ) /*0x831f88*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831f93*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x831f9f*/
  if ( !v0->RenderStateGroup ) /*0x831fa4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831faf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0); /*0x831fbb*/
  if ( !v0->RenderStateGroup ) /*0x831fc0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831fcb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x831fd7*/
  if ( !v0->RenderStateGroup ) /*0x831fdc*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x831fe7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x831ff3*/
  v3 = v0 == (NiD3DPass *)unk_B45978; /*0x831ffb*/
  unk_B43ECC = 0x41808; /*0x832001*/
  unk_B4455C = 0x18; /*0x83200b*/
  if ( !v3 ) /*0x832015*/
  {
    v3 = v0->RefCount-- == 1; /*0x832017*/
    if ( v3 ) /*0x83201a*/
      NiD3DPass_ReleaseToPool(v0); /*0x83201e*/
    v0 = (NiD3DPass *)unk_B45978; /*0x832023*/
    if ( unk_B45978 ) /*0x83202b*/
      ++v0->RefCount; /*0x832031*/
  }
  if ( v0->StageCount < 4 ) /*0x832039*/
  {
    v28 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x83204c*/
    v3 = v1 == *v28; /*0x83204e*/
    LOBYTE(v53) = 0xA; /*0x832051*/
    if ( !v3 ) /*0x832056*/
    {
      if ( v1 ) /*0x83205a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x83205c*/
        if ( v3 ) /*0x83205f*/
          sub_772560(v1); /*0x832063*/
      }
      v1 = *v28; /*0x832068*/
      if ( *v28 ) /*0x83206d*/
        ++v1[7].Unk08; /*0x832073*/
    }
    v29 = v52; /*0x832077*/
    LOBYTE(v53) = 1; /*0x83207d*/
    if ( v52 ) /*0x832082*/
    {
      --v52[7].Unk08; /*0x832084*/
      if ( !v29[7].Unk08 ) /*0x83208c*/
        sub_772560(v29); /*0x832091*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x83209d*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x8320aa*/
    v30 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x8320bc*/
    v3 = v1 == *v30; /*0x8320be*/
    LOBYTE(v53) = 0xB; /*0x8320c1*/
    if ( !v3 ) /*0x8320c6*/
    {
      if ( v1 ) /*0x8320ca*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8320cc*/
        if ( v3 ) /*0x8320cf*/
          sub_772560(v1); /*0x8320d3*/
      }
      v1 = *v30; /*0x8320d8*/
      if ( *v30 ) /*0x8320dd*/
        ++v1[7].Unk08; /*0x8320e3*/
    }
    v31 = v52; /*0x8320e7*/
    LOBYTE(v53) = 1; /*0x8320ed*/
    if ( v52 ) /*0x8320f2*/
    {
      --v52[7].Unk08; /*0x8320f4*/
      if ( !v31[7].Unk08 ) /*0x8320fc*/
        sub_772560(v31); /*0x832101*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x83210d*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x83211a*/
    v32 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x83212c*/
    v3 = v1 == *v32; /*0x83212e*/
    LOBYTE(v53) = 0xC; /*0x832131*/
    if ( !v3 ) /*0x832136*/
    {
      if ( v1 ) /*0x83213a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x83213c*/
        if ( v3 ) /*0x83213f*/
          sub_772560(v1); /*0x832143*/
      }
      v1 = *v32; /*0x832148*/
      if ( *v32 ) /*0x83214d*/
        ++v1[7].Unk08; /*0x832153*/
    }
    v33 = v52; /*0x832157*/
    LOBYTE(v53) = 1; /*0x83215d*/
    if ( v52 ) /*0x832162*/
    {
      --v52[7].Unk08; /*0x832164*/
      if ( !v33[7].Unk08 ) /*0x83216c*/
        sub_772560(v33); /*0x832171*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x83217d*/
    NiD3DPass_SetTextureStage(v0, 2u, &v1->Stage); /*0x83218a*/
    v34 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x83219c*/
    v3 = v1 == *v34; /*0x83219e*/
    LOBYTE(v53) = 0xD; /*0x8321a1*/
    if ( !v3 ) /*0x8321a6*/
    {
      if ( v1 ) /*0x8321aa*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8321ac*/
        if ( v3 ) /*0x8321af*/
          sub_772560(v1); /*0x8321b3*/
      }
      v1 = *v34; /*0x8321b8*/
      if ( *v34 ) /*0x8321bd*/
        ++v1[7].Unk08; /*0x8321c3*/
    }
    v35 = v52; /*0x8321c7*/
    LOBYTE(v53) = 1; /*0x8321cd*/
    if ( v52 ) /*0x8321d2*/
    {
      --v52[7].Unk08; /*0x8321d4*/
      if ( !v35[7].Unk08 ) /*0x8321dc*/
        sub_772560(v35); /*0x8321e1*/
    }
    NiD3DTextureStage_SetTexture(v1, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x8321ef*/
    BSShader_ConfigureTextureStageSampler(v1, 3, 3, 0); /*0x8321fb*/
    NiD3DPass_SetTextureStage(v0, 3u, &v1->Stage); /*0x832208*/
  }
  v36 = v0->VertexShader; /*0x832212*/
  v37 = unk_B453D8; /*0x832217*/
  if ( v36 != (NiD3DVertexShader *)unk_B453D8 ) /*0x832219*/
  {
    if ( v36 ) /*0x83221d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v36 + 1) ) /*0x832223*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v36)(v36, 1); /*0x83223a*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v37; /*0x83223e*/
    if ( v37 ) /*0x832241*/
      InterlockedIncrement((volatile LONG *)(v37 + 4)); /*0x832247*/
  }
  v38 = v0->PixelShader; /*0x832252*/
  v39 = unk_B451D4; /*0x832257*/
  if ( v38 != (NiD3DPixelShader *)unk_B451D4 ) /*0x832259*/
  {
    if ( v38 ) /*0x83225d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v38 + 1) ) /*0x832263*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v38)(v38, 1); /*0x83227a*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v39; /*0x83227e*/
    if ( v39 ) /*0x832281*/
      InterlockedIncrement((volatile LONG *)(v39 + 4)); /*0x832287*/
  }
  if ( !v0->RenderStateGroup ) /*0x83228d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x832298*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x8322a4*/
  if ( !v0->RenderStateGroup ) /*0x8322a9*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8322b4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0); /*0x8322c0*/
  if ( !v0->RenderStateGroup ) /*0x8322c5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8322d0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x8322dc*/
  if ( !v0->RenderStateGroup ) /*0x8322e1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8322ec*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x8322f8*/
  if ( !v0->RenderStateGroup ) /*0x8322fd*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x832308*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x832314*/
  if ( !v0->RenderStateGroup ) /*0x832319*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x832324*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0); /*0x832330*/
  if ( !v0->RenderStateGroup ) /*0x832335*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x832340*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x83234c*/
  if ( !v0->RenderStateGroup ) /*0x832351*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83235c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x832368*/
  v3 = v0 == (NiD3DPass *)unk_B45984; /*0x832370*/
  unk_B43EF8 = 0x3802; /*0x832376*/
  unk_B44588 = 0x38; /*0x832380*/
  if ( !v3 ) /*0x83238a*/
  {
    v3 = v0->RefCount-- == 1; /*0x83238c*/
    if ( v3 ) /*0x83238f*/
      NiD3DPass_ReleaseToPool(v0); /*0x832393*/
    v0 = (NiD3DPass *)unk_B45984; /*0x832398*/
    if ( unk_B45984 ) /*0x8323a0*/
      ++v0->RefCount; /*0x8323a6*/
  }
  if ( v0->StageCount < 4 ) /*0x8323ae*/
  {
    v40 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x8323c1*/
    v3 = v1 == *v40; /*0x8323c3*/
    LOBYTE(v53) = 0xE; /*0x8323c6*/
    if ( !v3 ) /*0x8323cb*/
    {
      if ( v1 ) /*0x8323cf*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8323d1*/
        if ( v3 ) /*0x8323d4*/
          sub_772560(v1); /*0x8323d8*/
      }
      v1 = *v40; /*0x8323dd*/
      if ( *v40 ) /*0x8323e2*/
        ++v1[7].Unk08; /*0x8323e8*/
    }
    v41 = v52; /*0x8323ec*/
    LOBYTE(v53) = 1; /*0x8323f2*/
    if ( v52 ) /*0x8323f7*/
    {
      --v52[7].Unk08; /*0x8323f9*/
      if ( !v41[7].Unk08 ) /*0x832401*/
        sub_772560(v41); /*0x832406*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x832412*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x83241f*/
    v42 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x832431*/
    v3 = v1 == *v42; /*0x832433*/
    LOBYTE(v53) = 0xF; /*0x832436*/
    if ( !v3 ) /*0x83243b*/
    {
      if ( v1 ) /*0x83243f*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x832441*/
        if ( v3 ) /*0x832444*/
          sub_772560(v1); /*0x832448*/
      }
      v1 = *v42; /*0x83244d*/
      if ( *v42 ) /*0x832452*/
        ++v1[7].Unk08; /*0x832458*/
    }
    v43 = v52; /*0x83245c*/
    LOBYTE(v53) = 1; /*0x832462*/
    if ( v52 ) /*0x832467*/
    {
      --v52[7].Unk08; /*0x832469*/
      if ( !v43[7].Unk08 ) /*0x832471*/
        sub_772560(v43); /*0x832476*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x832482*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x83248f*/
    v44 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x8324a1*/
    v3 = v1 == *v44; /*0x8324a3*/
    LOBYTE(v53) = 0x10; /*0x8324a6*/
    if ( !v3 ) /*0x8324ab*/
    {
      if ( v1 ) /*0x8324af*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8324b1*/
        if ( v3 ) /*0x8324b4*/
          sub_772560(v1); /*0x8324b8*/
      }
      v1 = *v44; /*0x8324bd*/
      if ( *v44 ) /*0x8324c2*/
        ++v1[7].Unk08; /*0x8324c8*/
    }
    v45 = v52; /*0x8324cc*/
    LOBYTE(v53) = 1; /*0x8324d2*/
    if ( v52 ) /*0x8324d7*/
    {
      --v52[7].Unk08; /*0x8324d9*/
      if ( !v45[7].Unk08 ) /*0x8324e1*/
        sub_772560(v45); /*0x8324e6*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x8324f2*/
    NiD3DPass_SetTextureStage(v0, 2u, &v1->Stage); /*0x8324ff*/
    v46 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v52); /*0x832511*/
    v3 = v1 == *v46; /*0x832513*/
    LOBYTE(v53) = 0x11; /*0x832516*/
    if ( !v3 ) /*0x83251b*/
    {
      if ( v1 ) /*0x83251f*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x832521*/
        if ( v3 ) /*0x832524*/
          sub_772560(v1); /*0x832528*/
      }
      v1 = *v46; /*0x83252d*/
      if ( *v46 ) /*0x832532*/
        ++v1[7].Unk08; /*0x832538*/
    }
    v47 = v52; /*0x83253c*/
    LOBYTE(v53) = 1; /*0x832542*/
    if ( v52 ) /*0x832547*/
    {
      --v52[7].Unk08; /*0x832549*/
      if ( !v47[7].Unk08 ) /*0x832551*/
        sub_772560(v47); /*0x832556*/
    }
    NiD3DTextureStage_SetTexture(v1, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x832564*/
    BSShader_ConfigureTextureStageSampler(v1, 3, 3, 0); /*0x832570*/
    NiD3DPass_SetTextureStage(v0, 3u, &v1->Stage); /*0x83257d*/
  }
  v48 = v0->VertexShader; /*0x832587*/
  v49 = unk_B453DC; /*0x83258c*/
  if ( v48 != (NiD3DVertexShader *)unk_B453DC ) /*0x83258e*/
  {
    if ( v48 ) /*0x832592*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v48 + 1) ) /*0x832598*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v48)(v48, 1); /*0x8325af*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v49; /*0x8325b3*/
    if ( v49 ) /*0x8325b6*/
      InterlockedIncrement((volatile LONG *)(v49 + 4)); /*0x8325bc*/
  }
  v50 = v0->PixelShader; /*0x8325c7*/
  v51 = unk_B451D4; /*0x8325cc*/
  if ( v50 != (NiD3DPixelShader *)unk_B451D4 ) /*0x8325ce*/
  {
    if ( v50 ) /*0x8325d2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v50 + 1) ) /*0x8325d8*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v50)(v50, 1); /*0x8325ef*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v51; /*0x8325f3*/
    if ( v51 ) /*0x8325f6*/
      InterlockedIncrement((volatile LONG *)(v51 + 4)); /*0x8325fc*/
  }
  if ( !v0->RenderStateGroup ) /*0x832602*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83260d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x832619*/
  if ( !v0->RenderStateGroup ) /*0x83261e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x832629*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0); /*0x832635*/
  if ( !v0->RenderStateGroup ) /*0x83263a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x832645*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x832651*/
  if ( !v0->RenderStateGroup ) /*0x832656*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x832661*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x83266d*/
  if ( !v0->RenderStateGroup ) /*0x832672*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83267d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x832689*/
  if ( !v0->RenderStateGroup ) /*0x83268e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x832699*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0); /*0x8326a5*/
  if ( !v0->RenderStateGroup ) /*0x8326aa*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8326b5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x8326c1*/
  if ( !v0->RenderStateGroup ) /*0x8326c6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8326d1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8326dd*/
  unk_B43F04 = 0x43808; /*0x8326e7*/
  unk_B44594 = 0x38; /*0x8326f1*/
  LOBYTE(v53) = 0; /*0x8326fb*/
  if ( v1 ) /*0x832700*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x832702*/
    if ( v3 ) /*0x832705*/
      sub_772560(v1); /*0x832709*/
  }
  v3 = v0->RefCount-- == 1; /*0x83270e*/
  v53 = 0xFFFFFFFF; /*0x832711*/
  if ( v3 ) /*0x832715*/
    NiD3DPass_ReleaseToPool(v0); /*0x832719*/
}
