void sub_8357B0()
{
  NiD3DPass *v0; // esi
  NiD3DTextureStage *v1; // edi
  int v2; // eax
  bool v3; // zf
  NiD3DTextureStage *v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage **v6; // ebp
  NiD3DTextureStage *v7; // eax
  NiD3DVertexShader *VertexShader; // ebp
  int v9; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  int v11; // ebx
  NiD3DTextureStage **v12; // ebp
  NiD3DTextureStage *v13; // eax
  NiD3DTextureStage **v14; // ebp
  NiD3DTextureStage *v15; // eax
  NiD3DVertexShader *v16; // ebp
  int v17; // ebx
  NiD3DPixelShader *v18; // ebp
  int v19; // ebx
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
  NiD3DVertexShader *v32; // ebp
  int v33; // ebx
  NiD3DPixelShader *v34; // ebp
  int v35; // ebx
  NiD3DTextureStage *v36; // [esp+20h] [ebp-10h] BYREF
  unsigned int v37; // [esp+2Ch] [ebp-4h]

  v0 = 0; /*0x8357d7*/
  v1 = 0; /*0x8357dd*/
  v37 = 0; /*0x8357df*/
  v2 = unk_B45BB0; /*0x8357e7*/
  v3 = unk_B45BB0 == 0; /*0x8357ec*/
  LOBYTE(v37) = 1; /*0x8357f3*/
  if ( !v3 ) /*0x8357f7*/
  {
    v0 = (NiD3DPass *)v2; /*0x8357f9*/
    if ( v2 ) /*0x835801*/
      ++*(_DWORD *)(v2 + 0x60); /*0x835803*/
  }
  if ( v0->StageCount < 2 ) /*0x83580c*/
  {
    v4 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v36); /*0x83581f*/
    if ( v4 ) /*0x835823*/
    {
      v1 = v4; /*0x835825*/
      ++v4[7].Unk08; /*0x835827*/
    }
    v5 = v36; /*0x83582e*/
    LOBYTE(v37) = 1; /*0x835834*/
    if ( v36 ) /*0x835839*/
    {
      --v36[7].Unk08; /*0x83583b*/
      if ( !v5[7].Unk08 ) /*0x835844*/
        sub_772560(v5); /*0x835849*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x835854*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x835863*/
    v6 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v36); /*0x835875*/
    v3 = v1 == *v6; /*0x835877*/
    LOBYTE(v37) = 3; /*0x83587a*/
    if ( !v3 ) /*0x83587f*/
    {
      if ( v1 ) /*0x835883*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x835885*/
        if ( v3 ) /*0x835889*/
          sub_772560(v1); /*0x83588d*/
      }
      v1 = *v6; /*0x835892*/
      if ( *v6 ) /*0x835897*/
        ++v1[7].Unk08; /*0x83589d*/
    }
    v7 = v36; /*0x8358a0*/
    LOBYTE(v37) = 1; /*0x8358a6*/
    if ( v36 ) /*0x8358ab*/
    {
      --v36[7].Unk08; /*0x8358ad*/
      if ( !v7[7].Unk08 ) /*0x8358b6*/
        sub_772560(v7); /*0x8358bb*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x8358c5*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x8358d4*/
  }
  VertexShader = v0->VertexShader; /*0x8358de*/
  v9 = unk_B453F8; /*0x8358e3*/
  if ( VertexShader != (NiD3DVertexShader *)unk_B453F8 ) /*0x8358e5*/
  {
    if ( VertexShader ) /*0x8358e9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) ) /*0x8358ef*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1); /*0x835906*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v9; /*0x83590a*/
    if ( v9 ) /*0x83590d*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x835913*/
  }
  PixelShader = v0->PixelShader; /*0x83591e*/
  v11 = unk_B451F0; /*0x835923*/
  if ( PixelShader != (NiD3DPixelShader *)unk_B451F0 ) /*0x835925*/
  {
    if ( PixelShader ) /*0x835929*/
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x83592f*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x835946*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v11; /*0x83594a*/
    if ( v11 ) /*0x83594d*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x835953*/
  }
  if ( !v0->RenderStateGroup ) /*0x835959*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835964*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x835970*/
  if ( !v0->RenderStateGroup ) /*0x835975*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835980*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0); /*0x83598c*/
  if ( !v0->RenderStateGroup ) /*0x835991*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83599c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x8359a8*/
  if ( !v0->RenderStateGroup ) /*0x8359ad*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8359b8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x8359c4*/
  if ( !v0->RenderStateGroup ) /*0x8359c9*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8359d4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8359e0*/
  if ( !v0->RenderStateGroup ) /*0x8359e5*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8359f0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0); /*0x8359fc*/
  if ( !v0->RenderStateGroup ) /*0x835a01*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835a0c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x835a18*/
  if ( !v0->RenderStateGroup ) /*0x835a1d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835a28*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x835a34*/
  v3 = v0 == (NiD3DPass *)unk_B45BB4; /*0x835a3c*/
  unk_B44130 = 0x20006; /*0x835a42*/
  unk_B447C0 = 0x104; /*0x835a4c*/
  if ( !v3 ) /*0x835a56*/
  {
    v3 = v0->RefCount-- == 1; /*0x835a58*/
    if ( v3 ) /*0x835a5b*/
      NiD3DPass_ReleaseToPool(v0); /*0x835a5f*/
    v0 = (NiD3DPass *)unk_B45BB4; /*0x835a64*/
    if ( unk_B45BB4 ) /*0x835a6c*/
      ++v0->RefCount; /*0x835a72*/
  }
  if ( v0->StageCount < 2 ) /*0x835a7a*/
  {
    v12 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v36); /*0x835a8d*/
    v3 = v1 == *v12; /*0x835a8f*/
    LOBYTE(v37) = 4; /*0x835a92*/
    if ( !v3 ) /*0x835a97*/
    {
      if ( v1 ) /*0x835a9b*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x835a9d*/
        if ( v3 ) /*0x835aa0*/
          sub_772560(v1); /*0x835aa4*/
      }
      v1 = *v12; /*0x835aa9*/
      if ( *v12 ) /*0x835aae*/
        ++v1[7].Unk08; /*0x835ab4*/
    }
    v13 = v36; /*0x835ab8*/
    LOBYTE(v37) = 1; /*0x835abe*/
    if ( v36 ) /*0x835ac3*/
    {
      --v36[7].Unk08; /*0x835ac5*/
      if ( !v13[7].Unk08 ) /*0x835acd*/
        sub_772560(v13); /*0x835ad2*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x835ade*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x835aed*/
    v14 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v36); /*0x835aff*/
    v3 = v1 == *v14; /*0x835b01*/
    LOBYTE(v37) = 5; /*0x835b04*/
    if ( !v3 ) /*0x835b09*/
    {
      if ( v1 ) /*0x835b0d*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x835b0f*/
        if ( v3 ) /*0x835b12*/
          sub_772560(v1); /*0x835b16*/
      }
      v1 = *v14; /*0x835b1b*/
      if ( *v14 ) /*0x835b20*/
        ++v1[7].Unk08; /*0x835b26*/
    }
    v15 = v36; /*0x835b2a*/
    LOBYTE(v37) = 1; /*0x835b30*/
    if ( v36 ) /*0x835b35*/
    {
      --v36[7].Unk08; /*0x835b37*/
      if ( !v15[7].Unk08 ) /*0x835b3f*/
        sub_772560(v15); /*0x835b44*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x835b50*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x835b5f*/
  }
  v16 = v0->VertexShader; /*0x835b69*/
  v17 = unk_B453FC; /*0x835b6e*/
  if ( v16 != (NiD3DVertexShader *)unk_B453FC ) /*0x835b70*/
  {
    if ( v16 ) /*0x835b74*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v16 + 1) ) /*0x835b7a*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v16)(v16, 1); /*0x835b91*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v17; /*0x835b95*/
    if ( v17 ) /*0x835b98*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x835b9e*/
  }
  v18 = v0->PixelShader; /*0x835ba9*/
  v19 = unk_B451F0; /*0x835bae*/
  if ( v18 != (NiD3DPixelShader *)unk_B451F0 ) /*0x835bb0*/
  {
    if ( v18 ) /*0x835bb4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v18 + 1) ) /*0x835bba*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v18)(v18, 1); /*0x835bd1*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v19; /*0x835bd5*/
    if ( v19 ) /*0x835bd8*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x835bde*/
  }
  if ( !v0->RenderStateGroup ) /*0x835be4*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835bef*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x835bfb*/
  if ( !v0->RenderStateGroup ) /*0x835c00*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835c0b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0); /*0x835c17*/
  if ( !v0->RenderStateGroup ) /*0x835c1c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835c27*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x835c33*/
  if ( !v0->RenderStateGroup ) /*0x835c38*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835c43*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x835c4f*/
  if ( !v0->RenderStateGroup ) /*0x835c54*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835c5f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x835c6b*/
  if ( !v0->RenderStateGroup ) /*0x835c70*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835c7b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0); /*0x835c87*/
  if ( !v0->RenderStateGroup ) /*0x835c8c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835c97*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x835ca3*/
  if ( !v0->RenderStateGroup ) /*0x835ca8*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835cb3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x835cbf*/
  v3 = v0 == (NiD3DPass *)unk_B45BB8; /*0x835cc7*/
  unk_B44134 = 0x260008; /*0x835ccd*/
  unk_B447C4 = 0x104; /*0x835cd7*/
  if ( !v3 ) /*0x835ce1*/
  {
    v3 = v0->RefCount-- == 1; /*0x835ce3*/
    if ( v3 ) /*0x835ce6*/
      NiD3DPass_ReleaseToPool(v0); /*0x835cea*/
    v0 = (NiD3DPass *)unk_B45BB8; /*0x835cef*/
    if ( unk_B45BB8 ) /*0x835cf7*/
      ++v0->RefCount; /*0x835cfd*/
  }
  if ( v0->StageCount < 2 ) /*0x835d05*/
  {
    v20 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v36); /*0x835d18*/
    v3 = v1 == *v20; /*0x835d1a*/
    LOBYTE(v37) = 6; /*0x835d1d*/
    if ( !v3 ) /*0x835d22*/
    {
      if ( v1 ) /*0x835d26*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x835d28*/
        if ( v3 ) /*0x835d2b*/
          sub_772560(v1); /*0x835d2f*/
      }
      v1 = *v20; /*0x835d34*/
      if ( *v20 ) /*0x835d39*/
        ++v1[7].Unk08; /*0x835d3f*/
    }
    v21 = v36; /*0x835d43*/
    LOBYTE(v37) = 1; /*0x835d49*/
    if ( v36 ) /*0x835d4e*/
    {
      --v36[7].Unk08; /*0x835d50*/
      if ( !v21[7].Unk08 ) /*0x835d58*/
        sub_772560(v21); /*0x835d5d*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x835d69*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x835d78*/
    v22 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v36); /*0x835d8a*/
    v3 = v1 == *v22; /*0x835d8c*/
    LOBYTE(v37) = 7; /*0x835d8f*/
    if ( !v3 ) /*0x835d94*/
    {
      if ( v1 ) /*0x835d98*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x835d9a*/
        if ( v3 ) /*0x835d9d*/
          sub_772560(v1); /*0x835da1*/
      }
      v1 = *v22; /*0x835da6*/
      if ( *v22 ) /*0x835dab*/
        ++v1[7].Unk08; /*0x835db1*/
    }
    v23 = v36; /*0x835db5*/
    LOBYTE(v37) = 1; /*0x835dbb*/
    if ( v36 ) /*0x835dc0*/
    {
      --v36[7].Unk08; /*0x835dc2*/
      if ( !v23[7].Unk08 ) /*0x835dca*/
        sub_772560(v23); /*0x835dcf*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x835ddb*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x835dea*/
  }
  v24 = v0->VertexShader; /*0x835df4*/
  v25 = unk_B453F8; /*0x835df9*/
  if ( v24 != (NiD3DVertexShader *)unk_B453F8 ) /*0x835dfb*/
  {
    if ( v24 ) /*0x835dff*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v24 + 1) ) /*0x835e05*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v24)(v24, 1); /*0x835e1c*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v25; /*0x835e20*/
    if ( v25 ) /*0x835e23*/
      InterlockedIncrement((volatile LONG *)(v25 + 4)); /*0x835e29*/
  }
  v26 = v0->PixelShader; /*0x835e34*/
  v27 = unk_B451F4; /*0x835e39*/
  if ( v26 != (NiD3DPixelShader *)unk_B451F4 ) /*0x835e3b*/
  {
    if ( v26 ) /*0x835e3f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v26 + 1) ) /*0x835e45*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v26)(v26, 1); /*0x835e5c*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v27; /*0x835e60*/
    if ( v27 ) /*0x835e63*/
      InterlockedIncrement((volatile LONG *)(v27 + 4)); /*0x835e69*/
  }
  if ( !v0->RenderStateGroup ) /*0x835e6f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835e7a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x835e86*/
  if ( !v0->RenderStateGroup ) /*0x835e8b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835e96*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0); /*0x835ea2*/
  if ( !v0->RenderStateGroup ) /*0x835ea7*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835eb2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x835ebe*/
  if ( !v0->RenderStateGroup ) /*0x835ec3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835ece*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x835eda*/
  if ( !v0->RenderStateGroup ) /*0x835edf*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835eea*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x835ef6*/
  if ( !v0->RenderStateGroup ) /*0x835efb*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835f06*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0); /*0x835f12*/
  if ( !v0->RenderStateGroup ) /*0x835f17*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835f22*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x835f2e*/
  if ( !v0->RenderStateGroup ) /*0x835f33*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x835f3e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x835f4a*/
  v3 = v0 == (NiD3DPass *)unk_B45BBC; /*0x835f52*/
  unk_B44138 = 0x20006; /*0x835f58*/
  unk_B447C8 = 0x104; /*0x835f62*/
  if ( !v3 ) /*0x835f6c*/
  {
    v3 = v0->RefCount-- == 1; /*0x835f6e*/
    if ( v3 ) /*0x835f71*/
      NiD3DPass_ReleaseToPool(v0); /*0x835f75*/
    v0 = (NiD3DPass *)unk_B45BBC; /*0x835f7a*/
    if ( unk_B45BBC ) /*0x835f82*/
      ++v0->RefCount; /*0x835f88*/
  }
  if ( v0->StageCount < 2 ) /*0x835f90*/
  {
    v28 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v36); /*0x835fa3*/
    v3 = v1 == *v28; /*0x835fa5*/
    LOBYTE(v37) = 8; /*0x835fa8*/
    if ( !v3 ) /*0x835fad*/
    {
      if ( v1 ) /*0x835fb1*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x835fb3*/
        if ( v3 ) /*0x835fb6*/
          sub_772560(v1); /*0x835fba*/
      }
      v1 = *v28; /*0x835fbf*/
      if ( *v28 ) /*0x835fc4*/
        ++v1[7].Unk08; /*0x835fca*/
    }
    v29 = v36; /*0x835fce*/
    LOBYTE(v37) = 1; /*0x835fd4*/
    if ( v36 ) /*0x835fd9*/
    {
      --v36[7].Unk08; /*0x835fdb*/
      if ( !v29[7].Unk08 ) /*0x835fe3*/
        sub_772560(v29); /*0x835fe8*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x835ff4*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x836003*/
    v30 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v36); /*0x836015*/
    v3 = v1 == *v30; /*0x836017*/
    LOBYTE(v37) = 9; /*0x83601a*/
    if ( !v3 ) /*0x83601f*/
    {
      if ( v1 ) /*0x836023*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x836025*/
        if ( v3 ) /*0x836028*/
          sub_772560(v1); /*0x83602c*/
      }
      v1 = *v30; /*0x836031*/
      if ( *v30 ) /*0x836036*/
        ++v1[7].Unk08; /*0x83603c*/
    }
    v31 = v36; /*0x836040*/
    LOBYTE(v37) = 1; /*0x836046*/
    if ( v36 ) /*0x83604b*/
    {
      --v36[7].Unk08; /*0x83604d*/
      if ( !v31[7].Unk08 ) /*0x836055*/
        sub_772560(v31); /*0x83605a*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x836066*/
    NiD3DPass_SetTextureStage(v0, v0->CurrentStage, &v1->Stage); /*0x836075*/
  }
  v32 = v0->VertexShader; /*0x83607f*/
  v33 = unk_B45400; /*0x836084*/
  if ( v32 != (NiD3DVertexShader *)unk_B45400 ) /*0x836086*/
  {
    if ( v32 ) /*0x83608a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v32 + 1) ) /*0x836090*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v32)(v32, 1); /*0x8360a7*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v33; /*0x8360ab*/
    if ( v33 ) /*0x8360ae*/
      InterlockedIncrement((volatile LONG *)(v33 + 4)); /*0x8360b4*/
  }
  v34 = v0->PixelShader; /*0x8360bf*/
  v35 = unk_B451F8; /*0x8360c4*/
  if ( v34 != (NiD3DPixelShader *)unk_B451F8 ) /*0x8360c6*/
  {
    if ( v34 ) /*0x8360ca*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v34 + 1) ) /*0x8360d0*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v34)(v34, 1); /*0x8360e7*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v35; /*0x8360eb*/
    if ( v35 ) /*0x8360ee*/
      InterlockedIncrement((volatile LONG *)(v35 + 4)); /*0x8360f4*/
  }
  if ( !v0->RenderStateGroup ) /*0x8360fa*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836105*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 1, 0); /*0x836111*/
  if ( !v0->RenderStateGroup ) /*0x836116*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836121*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x13, 2, 0); /*0x83612d*/
  if ( !v0->RenderStateGroup ) /*0x836132*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x83613d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x14, 2, 0); /*0x836149*/
  if ( !v0->RenderStateGroup ) /*0x83614e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836159*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x836165*/
  if ( !v0->RenderStateGroup ) /*0x83616a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836175*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x836181*/
  if ( !v0->RenderStateGroup ) /*0x836186*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x836191*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 3, 0); /*0x83619d*/
  if ( !v0->RenderStateGroup ) /*0x8361a2*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8361ad*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 0, 0); /*0x8361b9*/
  if ( !v0->RenderStateGroup ) /*0x8361be*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8361c9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8361d5*/
  unk_B4413C = 0x4020006; /*0x8361df*/
  unk_B447CC = 0x10C; /*0x8361e9*/
  LOBYTE(v37) = 0; /*0x8361f3*/
  if ( v1 ) /*0x8361f8*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x8361fa*/
    if ( v3 ) /*0x8361fd*/
      sub_772560(v1); /*0x836201*/
  }
  v3 = v0->RefCount-- == 1; /*0x836206*/
  v37 = 0xFFFFFFFF; /*0x836209*/
  if ( v3 ) /*0x83620d*/
    NiD3DPass_ReleaseToPool(v0); /*0x836211*/
}
