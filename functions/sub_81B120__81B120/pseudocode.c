void sub_81B120()
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
  NiD3DTextureStage **v10; // ebx
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
  NiD3DTextureStage *v40; // [esp+20h] [ebp-10h] BYREF
  unsigned int v41; // [esp+2Ch] [ebp-4h]

  v0 = 0; /*0x81b147*/
  v1 = 0; /*0x81b14d*/
  v41 = 0; /*0x81b14f*/
  v2 = unk_B45928; /*0x81b157*/
  v3 = unk_B45928 == 0; /*0x81b15c*/
  LOBYTE(v41) = 1; /*0x81b163*/
  if ( !v3 ) /*0x81b167*/
  {
    v0 = v2; /*0x81b169*/
    if ( v2 ) /*0x81b171*/
      ++*(_DWORD *)(v2 + 0x60); /*0x81b173*/
  }
  if ( !*(_DWORD *)(v0 + 0x18) ) /*0x81b176*/
  {
    v4 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v40); /*0x81b18a*/
    if ( v4 ) /*0x81b18e*/
    {
      v1 = v4; /*0x81b190*/
      ++v4[7].Unk08; /*0x81b192*/
    }
    v5 = v40; /*0x81b199*/
    LOBYTE(v41) = 1; /*0x81b19f*/
    if ( v40 ) /*0x81b1a4*/
    {
      --v40[7].Unk08; /*0x81b1a6*/
      if ( !v5[7].Unk08 ) /*0x81b1af*/
        sub_772560(v5); /*0x81b1b4*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81b1bf*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81b1ce*/
  }
  v6 = *(_DWORD *)(v0 + 0x58); /*0x81b1d8*/
  v7 = unk_B452A0; /*0x81b1dd*/
  if ( v6 != unk_B452A0 ) /*0x81b1df*/
  {
    if ( v6 ) /*0x81b1e3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x81b1e9*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x81b200*/
    }
    *(_DWORD *)(v0 + 0x58) = v7; /*0x81b204*/
    if ( v7 ) /*0x81b207*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x81b20d*/
  }
  v8 = *(_DWORD *)(v0 + 0x44); /*0x81b218*/
  v9 = unk_B45090; /*0x81b21d*/
  if ( v8 != unk_B45090 ) /*0x81b21f*/
  {
    if ( v8 ) /*0x81b223*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x81b229*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x81b240*/
    }
    *(_DWORD *)(v0 + 0x44) = v9; /*0x81b244*/
    if ( v9 ) /*0x81b247*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x81b24d*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b253*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b25e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81b26e*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b273*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b27e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 2u, 0); /*0x81b28a*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b28f*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b29a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 2u, 0); /*0x81b2a6*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b2ab*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b2b6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81b2c2*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b2c7*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b2d2*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81b2dd*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b2e2*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b2ed*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81b2f9*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b2fe*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b309*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81b315*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b31a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b325*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81b331*/
  v3 = v0 == unk_B45930; /*0x81b336*/
  unk_B43EA8 = 0x82; /*0x81b341*/
  unk_B44538 = 8; /*0x81b34b*/
  unk_B44BC8 = 8; /*0x81b350*/
  if ( !v3 ) /*0x81b355*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81b357*/
    if ( v3 ) /*0x81b35b*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81b35f*/
    v0 = unk_B45930; /*0x81b364*/
    if ( unk_B45930 ) /*0x81b36c*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81b372*/
  }
  if ( !*(_DWORD *)(v0 + 0x18) ) /*0x81b375*/
  {
    v10 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81b387*/
    v3 = v1 == *v10; /*0x81b389*/
    LOBYTE(v41) = 3; /*0x81b38b*/
    if ( !v3 ) /*0x81b390*/
    {
      if ( v1 ) /*0x81b394*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81b396*/
        if ( v3 ) /*0x81b39a*/
          sub_772560(v1); /*0x81b39e*/
      }
      v1 = *v10; /*0x81b3a3*/
      if ( *v10 ) /*0x81b3a7*/
        ++v1[7].Unk08; /*0x81b3ad*/
    }
    v11 = v40; /*0x81b3b0*/
    LOBYTE(v41) = 1; /*0x81b3b6*/
    if ( v40 ) /*0x81b3bb*/
    {
      --v40[7].Unk08; /*0x81b3bd*/
      if ( !v11[7].Unk08 ) /*0x81b3c6*/
        sub_772560(v11); /*0x81b3cb*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81b3d6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81b3e5*/
  }
  v12 = *(_DWORD *)(v0 + 0x58); /*0x81b3ef*/
  v13 = unk_B4531C; /*0x81b3f4*/
  if ( v12 != unk_B4531C ) /*0x81b3f6*/
  {
    if ( v12 ) /*0x81b3fa*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x81b400*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x81b417*/
    }
    *(_DWORD *)(v0 + 0x58) = v13; /*0x81b41b*/
    if ( v13 ) /*0x81b41e*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x81b424*/
  }
  v14 = *(_DWORD *)(v0 + 0x44); /*0x81b42f*/
  v15 = unk_B45090; /*0x81b434*/
  if ( v14 != unk_B45090 ) /*0x81b436*/
  {
    if ( v14 ) /*0x81b43a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x81b440*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x81b457*/
    }
    *(_DWORD *)(v0 + 0x44) = v15; /*0x81b45b*/
    if ( v15 ) /*0x81b45e*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x81b464*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b46a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b475*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81b481*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b486*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b491*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 2u, 0); /*0x81b49d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b4a2*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b4ad*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 2u, 0); /*0x81b4b9*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b4be*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b4c9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81b4d5*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b4da*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b4e5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81b4f1*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b4f6*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b501*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81b50d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b512*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b51d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81b529*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b52e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b539*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81b545*/
  v3 = v0 == unk_B4592C; /*0x81b552*/
  unk_B43EB0 = 0x40808; /*0x81b558*/
  unk_B44540 = 8; /*0x81b562*/
  unk_B44BD0 = 8; /*0x81b567*/
  if ( !v3 ) /*0x81b56c*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81b56e*/
    if ( v3 ) /*0x81b571*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81b575*/
    v0 = unk_B4592C; /*0x81b57a*/
    if ( unk_B4592C ) /*0x81b582*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81b588*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 4u ) /*0x81b592*/
  {
    v16 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81b5a5*/
    v3 = v1 == *v16; /*0x81b5a7*/
    LOBYTE(v41) = 4; /*0x81b5aa*/
    if ( !v3 ) /*0x81b5af*/
    {
      if ( v1 ) /*0x81b5b3*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81b5b5*/
        if ( v3 ) /*0x81b5b8*/
          sub_772560(v1); /*0x81b5bc*/
      }
      v1 = *v16; /*0x81b5c1*/
      if ( *v16 ) /*0x81b5c6*/
        ++v1[7].Unk08; /*0x81b5cc*/
    }
    v17 = v40; /*0x81b5d0*/
    LOBYTE(v41) = 1; /*0x81b5d6*/
    if ( v40 ) /*0x81b5db*/
    {
      --v40[7].Unk08; /*0x81b5dd*/
      if ( !v17[7].Unk08 ) /*0x81b5e5*/
        sub_772560(v17); /*0x81b5ea*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81b5f6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81b605*/
    v18 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81b617*/
    v3 = v1 == *v18; /*0x81b619*/
    LOBYTE(v41) = 5; /*0x81b61c*/
    if ( !v3 ) /*0x81b621*/
    {
      if ( v1 ) /*0x81b625*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81b627*/
        if ( v3 ) /*0x81b62a*/
          sub_772560(v1); /*0x81b62e*/
      }
      v1 = *v18; /*0x81b633*/
      if ( *v18 ) /*0x81b638*/
        ++v1[7].Unk08; /*0x81b63e*/
    }
    v19 = v40; /*0x81b642*/
    LOBYTE(v41) = 1; /*0x81b648*/
    if ( v40 ) /*0x81b64d*/
    {
      --v40[7].Unk08; /*0x81b64f*/
      if ( !v19[7].Unk08 ) /*0x81b657*/
        sub_772560(v19); /*0x81b65c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 3, 2); /*0x81b668*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B43110[0])); /*0x81b679*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81b685*/
    v20 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81b697*/
    v3 = v1 == *v20; /*0x81b699*/
    LOBYTE(v41) = 6; /*0x81b69c*/
    if ( !v3 ) /*0x81b6a1*/
    {
      if ( v1 ) /*0x81b6a5*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81b6a7*/
        if ( v3 ) /*0x81b6aa*/
          sub_772560(v1); /*0x81b6ae*/
      }
      v1 = *v20; /*0x81b6b3*/
      if ( *v20 ) /*0x81b6b8*/
        ++v1[7].Unk08; /*0x81b6be*/
    }
    v21 = v40; /*0x81b6c2*/
    LOBYTE(v41) = 1; /*0x81b6c8*/
    if ( v40 ) /*0x81b6cd*/
    {
      --v40[7].Unk08; /*0x81b6cf*/
      if ( !v21[7].Unk08 ) /*0x81b6d7*/
        sub_772560(v21); /*0x81b6dc*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 3, 2); /*0x81b6e8*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B430D4)); /*0x81b6f9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81b705*/
    v22 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81b717*/
    v3 = v1 == *v22; /*0x81b719*/
    LOBYTE(v41) = 7; /*0x81b71c*/
    if ( !v3 ) /*0x81b721*/
    {
      if ( v1 ) /*0x81b725*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81b727*/
        if ( v3 ) /*0x81b72a*/
          sub_772560(v1); /*0x81b72e*/
      }
      v1 = *v22; /*0x81b733*/
      if ( *v22 ) /*0x81b738*/
        ++v1[7].Unk08; /*0x81b73e*/
    }
    v23 = v40; /*0x81b742*/
    LOBYTE(v41) = 1; /*0x81b748*/
    if ( v40 ) /*0x81b74d*/
    {
      --v40[7].Unk08; /*0x81b74f*/
      if ( !v23[7].Unk08 ) /*0x81b757*/
        sub_772560(v23); /*0x81b75c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x81b768*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B430DC[4])); /*0x81b779*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81b785*/
  }
  v24 = *(_DWORD *)(v0 + 0x58); /*0x81b78f*/
  v25 = unk_B4529C; /*0x81b794*/
  if ( v24 != unk_B4529C ) /*0x81b796*/
  {
    if ( v24 ) /*0x81b79a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) ) /*0x81b7a0*/
        (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x81b7b7*/
    }
    *(_DWORD *)(v0 + 0x58) = v25; /*0x81b7bb*/
    if ( v25 ) /*0x81b7be*/
      InterlockedIncrement((volatile LONG *)(v25 + 4)); /*0x81b7c4*/
  }
  v26 = *(_DWORD *)(v0 + 0x44); /*0x81b7cf*/
  v27 = unk_B4508C; /*0x81b7d4*/
  if ( v26 != unk_B4508C ) /*0x81b7d6*/
  {
    if ( v26 ) /*0x81b7da*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x81b7e0*/
        (**(void (__thiscall ***)(int, int))v26)(v26, 1); /*0x81b7f7*/
    }
    *(_DWORD *)(v0 + 0x44) = v27; /*0x81b7fb*/
    if ( v27 ) /*0x81b7fe*/
      InterlockedIncrement((volatile LONG *)(v27 + 4)); /*0x81b804*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b80a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b815*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81b821*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b826*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b831*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 2u, 0); /*0x81b83d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b842*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b84d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 2u, 0); /*0x81b859*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b85e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b869*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81b875*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b87a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b885*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81b891*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b896*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b8a1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81b8ad*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b8b2*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b8bd*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81b8c9*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81b8ce*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81b8d9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81b8e5*/
  v3 = v0 == unk_B45934; /*0x81b8f2*/
  unk_B43EAC = 0x802; /*0x81b8f8*/
  unk_B4453C = 8; /*0x81b902*/
  unk_B44BCC = 8; /*0x81b907*/
  if ( !v3 ) /*0x81b90c*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81b90e*/
    if ( v3 ) /*0x81b911*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81b915*/
    v0 = unk_B45934; /*0x81b91a*/
    if ( unk_B45934 ) /*0x81b922*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81b928*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 4u ) /*0x81b930*/
  {
    v28 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81b943*/
    v3 = v1 == *v28; /*0x81b945*/
    LOBYTE(v41) = 8; /*0x81b948*/
    if ( !v3 ) /*0x81b94d*/
    {
      if ( v1 ) /*0x81b951*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81b953*/
        if ( v3 ) /*0x81b956*/
          sub_772560(v1); /*0x81b95a*/
      }
      v1 = *v28; /*0x81b95f*/
      if ( *v28 ) /*0x81b964*/
        ++v1[7].Unk08; /*0x81b96a*/
    }
    v29 = v40; /*0x81b96e*/
    LOBYTE(v41) = 1; /*0x81b974*/
    if ( v40 ) /*0x81b979*/
    {
      --v40[7].Unk08; /*0x81b97b*/
      if ( !v29[7].Unk08 ) /*0x81b983*/
        sub_772560(v29); /*0x81b988*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81b994*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81b9a3*/
    v30 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81b9b5*/
    v3 = v1 == *v30; /*0x81b9b7*/
    LOBYTE(v41) = 9; /*0x81b9ba*/
    if ( !v3 ) /*0x81b9bf*/
    {
      if ( v1 ) /*0x81b9c3*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81b9c5*/
        if ( v3 ) /*0x81b9c8*/
          sub_772560(v1); /*0x81b9cc*/
      }
      v1 = *v30; /*0x81b9d1*/
      if ( *v30 ) /*0x81b9d6*/
        ++v1[7].Unk08; /*0x81b9dc*/
    }
    v31 = v40; /*0x81b9e0*/
    LOBYTE(v41) = 1; /*0x81b9e6*/
    if ( v40 ) /*0x81b9eb*/
    {
      --v40[7].Unk08; /*0x81b9ed*/
      if ( !v31[7].Unk08 ) /*0x81b9f5*/
        sub_772560(v31); /*0x81b9fa*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 3, 2); /*0x81ba06*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B43110[0])); /*0x81ba17*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81ba23*/
    v32 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81ba35*/
    v3 = v1 == *v32; /*0x81ba37*/
    LOBYTE(v41) = 0xA; /*0x81ba3a*/
    if ( !v3 ) /*0x81ba3f*/
    {
      if ( v1 ) /*0x81ba43*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81ba45*/
        if ( v3 ) /*0x81ba48*/
          sub_772560(v1); /*0x81ba4c*/
      }
      v1 = *v32; /*0x81ba51*/
      if ( *v32 ) /*0x81ba56*/
        ++v1[7].Unk08; /*0x81ba5c*/
    }
    v33 = v40; /*0x81ba60*/
    LOBYTE(v41) = 1; /*0x81ba66*/
    if ( v40 ) /*0x81ba6b*/
    {
      --v40[7].Unk08; /*0x81ba6d*/
      if ( !v33[7].Unk08 ) /*0x81ba75*/
        sub_772560(v33); /*0x81ba7a*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 3, 2); /*0x81ba86*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B430D4)); /*0x81ba97*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81baa3*/
    v34 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v40); /*0x81bab5*/
    v3 = v1 == *v34; /*0x81bab7*/
    LOBYTE(v41) = 0xB; /*0x81baba*/
    if ( !v3 ) /*0x81babf*/
    {
      if ( v1 ) /*0x81bac3*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81bac5*/
        if ( v3 ) /*0x81bac8*/
          sub_772560(v1); /*0x81bacc*/
      }
      v1 = *v34; /*0x81bad1*/
      if ( *v34 ) /*0x81bad6*/
        ++v1[7].Unk08; /*0x81badc*/
    }
    v35 = v40; /*0x81bae0*/
    LOBYTE(v41) = 1; /*0x81bae6*/
    if ( v40 ) /*0x81baeb*/
    {
      --v40[7].Unk08; /*0x81baed*/
      if ( !v35[7].Unk08 ) /*0x81baf5*/
        sub_772560(v35); /*0x81bafa*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x81bb06*/
    NiD3DTextureStage_SetTexture(v1, (NiTexture *)LODWORD(flt_B430DC[4])); /*0x81bb17*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81bb23*/
  }
  v36 = *(_DWORD *)(v0 + 0x58); /*0x81bb2d*/
  v37 = unk_B45318; /*0x81bb32*/
  if ( v36 != unk_B45318 ) /*0x81bb34*/
  {
    if ( v36 ) /*0x81bb38*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v36 + 4)) ) /*0x81bb3e*/
        (**(void (__thiscall ***)(int, int))v36)(v36, 1); /*0x81bb55*/
    }
    *(_DWORD *)(v0 + 0x58) = v37; /*0x81bb59*/
    if ( v37 ) /*0x81bb5c*/
      InterlockedIncrement((volatile LONG *)(v37 + 4)); /*0x81bb62*/
  }
  v38 = *(_DWORD *)(v0 + 0x44); /*0x81bb6d*/
  v39 = unk_B4508C; /*0x81bb72*/
  if ( v38 != unk_B4508C ) /*0x81bb74*/
  {
    if ( v38 ) /*0x81bb78*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v38 + 4)) ) /*0x81bb7e*/
        (**(void (__thiscall ***)(int, int))v38)(v38, 1); /*0x81bb95*/
    }
    *(_DWORD *)(v0 + 0x44) = v39; /*0x81bb99*/
    if ( v39 ) /*0x81bb9c*/
      InterlockedIncrement((volatile LONG *)(v39 + 4)); /*0x81bba2*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81bba8*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81bbb3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81bbbf*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81bbc4*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81bbcf*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 2u, 0); /*0x81bbdb*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81bbe0*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81bbeb*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 2u, 0); /*0x81bbf7*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81bbfc*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81bc07*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81bc13*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81bc18*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81bc23*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81bc2f*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81bc34*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81bc3f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81bc4b*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81bc50*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81bc5b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81bc67*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81bc6c*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81bc77*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81bc83*/
  unk_B43EB4 = 0x40808; /*0x81bc92*/
  unk_B44544 = 8; /*0x81bc9c*/
  unk_B44BD4 = 8; /*0x81bca1*/
  LOBYTE(v41) = 0; /*0x81bca6*/
  if ( v1 ) /*0x81bcab*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x81bcad*/
    if ( v3 ) /*0x81bcb0*/
      sub_772560(v1); /*0x81bcb4*/
  }
  v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81bcb9*/
  v41 = 0xFFFFFFFF; /*0x81bcbc*/
  if ( v3 ) /*0x81bcc0*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81bcc4*/
}
