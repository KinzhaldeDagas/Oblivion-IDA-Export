void sub_81BCE0()
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
  NiD3DTextureStage **v28; // ebx
  NiD3DTextureStage *v29; // eax
  int v30; // ebp
  int v31; // ebx
  int v32; // ebp
  int v33; // ebx
  NiD3DTextureStage **v34; // ebx
  NiD3DTextureStage *v35; // eax
  int v36; // ebp
  int v37; // ebx
  int v38; // ebp
  int v39; // ebx
  NiD3DTextureStage **v40; // ebx
  NiD3DTextureStage *v41; // eax
  int v42; // ebp
  int v43; // ebx
  int v44; // ebp
  int v45; // ebx
  NiD3DTextureStage **v46; // ebp
  NiD3DTextureStage *v47; // eax
  NiD3DTextureStage **v48; // ebp
  NiD3DTextureStage *v49; // eax
  NiD3DTextureStage **v50; // ebp
  NiD3DTextureStage *v51; // eax
  int v52; // ebp
  int v53; // ebx
  int v54; // ebp
  int v55; // ebx
  NiD3DTextureStage **v56; // ebp
  NiD3DTextureStage *v57; // eax
  NiD3DTextureStage **v58; // ebp
  NiD3DTextureStage *v59; // eax
  int v60; // ebp
  int v61; // ebx
  int v62; // ebp
  int v63; // ebx
  NiD3DTextureStage *v64; // [esp+40h] [ebp-10h] BYREF
  unsigned int v65; // [esp+4Ch] [ebp-4h]

  v0 = 0; /*0x81bd07*/
  v1 = 0; /*0x81bd0d*/
  v65 = 0; /*0x81bd0f*/
  v2 = unk_B459B0; /*0x81bd17*/
  v3 = unk_B459B0 == 0; /*0x81bd1c*/
  LOBYTE(v65) = 1; /*0x81bd23*/
  if ( !v3 ) /*0x81bd27*/
  {
    v0 = v2; /*0x81bd29*/
    if ( v2 ) /*0x81bd31*/
      ++*(_DWORD *)(v2 + 0x60); /*0x81bd33*/
  }
  if ( !*(_DWORD *)(v0 + 0x18) ) /*0x81bd36*/
  {
    v4 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v64); /*0x81bd4a*/
    if ( v4 ) /*0x81bd4e*/
    {
      v1 = v4; /*0x81bd50*/
      ++v4[7].Unk08; /*0x81bd52*/
    }
    v5 = v64; /*0x81bd59*/
    LOBYTE(v65) = 1; /*0x81bd5f*/
    if ( v64 ) /*0x81bd64*/
    {
      --v64[7].Unk08; /*0x81bd66*/
      if ( !v5[7].Unk08 ) /*0x81bd6f*/
        sub_772560(v5); /*0x81bd74*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81bd7f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81bd8e*/
  }
  v6 = *(_DWORD *)(v0 + 0x58); /*0x81bd98*/
  v7 = unk_B452A4; /*0x81bd9d*/
  if ( v6 != unk_B452A4 ) /*0x81bd9f*/
  {
    if ( v6 ) /*0x81bda3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x81bda9*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x81bdc0*/
    }
    *(_DWORD *)(v0 + 0x58) = v7; /*0x81bdc4*/
    if ( v7 ) /*0x81bdc7*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x81bdcd*/
  }
  v8 = *(_DWORD *)(v0 + 0x44); /*0x81bdd8*/
  v9 = unk_B45094; /*0x81bddd*/
  if ( v8 != unk_B45094 ) /*0x81bddf*/
  {
    if ( v8 ) /*0x81bde3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x81bde9*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x81be00*/
    }
    *(_DWORD *)(v0 + 0x44) = v9; /*0x81be04*/
    if ( v9 ) /*0x81be07*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x81be0d*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81be13*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81be1e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81be2a*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81be2f*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81be3a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 9u, 0); /*0x81be46*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81be4b*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81be56*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 1u, 0); /*0x81be62*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81be67*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81be72*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81be7e*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81be83*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81be8e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81be9a*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81be9f*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81beaa*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81beb6*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81bebb*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81bec6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81bed2*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81bed7*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81bee2*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81beee*/
  v3 = v0 == unk_B459B4; /*0x81bef6*/
  unk_B43F30 = 2; /*0x81befc*/
  unk_B445C0 = 0; /*0x81bf06*/
  if ( !v3 ) /*0x81bf10*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81bf12*/
    if ( v3 ) /*0x81bf15*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81bf19*/
    v0 = unk_B459B4; /*0x81bf1e*/
    if ( unk_B459B4 ) /*0x81bf26*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81bf2c*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 3u ) /*0x81bf36*/
  {
    v10 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v64); /*0x81bf49*/
    v3 = v1 == *v10; /*0x81bf4b*/
    LOBYTE(v65) = 3; /*0x81bf4e*/
    if ( !v3 ) /*0x81bf53*/
    {
      if ( v1 ) /*0x81bf57*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81bf59*/
        if ( v3 ) /*0x81bf5c*/
          sub_772560(v1); /*0x81bf60*/
      }
      v1 = *v10; /*0x81bf65*/
      if ( *v10 ) /*0x81bf6a*/
        ++v1[7].Unk08; /*0x81bf70*/
    }
    v11 = v64; /*0x81bf74*/
    LOBYTE(v65) = 1; /*0x81bf7a*/
    if ( v64 ) /*0x81bf7f*/
    {
      --v64[7].Unk08; /*0x81bf81*/
      if ( !v11[7].Unk08 ) /*0x81bf89*/
        sub_772560(v11); /*0x81bf8e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81bf9a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81bfa9*/
    v12 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v64); /*0x81bfbb*/
    v3 = v1 == *v12; /*0x81bfbd*/
    LOBYTE(v65) = 4; /*0x81bfc0*/
    if ( !v3 ) /*0x81bfc5*/
    {
      if ( v1 ) /*0x81bfc9*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81bfcb*/
        if ( v3 ) /*0x81bfce*/
          sub_772560(v1); /*0x81bfd2*/
      }
      v1 = *v12; /*0x81bfd7*/
      if ( *v12 ) /*0x81bfdc*/
        ++v1[7].Unk08; /*0x81bfe2*/
    }
    v13 = v64; /*0x81bfe6*/
    LOBYTE(v65) = 1; /*0x81bfec*/
    if ( v64 ) /*0x81bff1*/
    {
      --v64[7].Unk08; /*0x81bff3*/
      if ( !v13[7].Unk08 ) /*0x81bffb*/
        sub_772560(v13); /*0x81c000*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x81c00c*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81c01b*/
    v14 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v64); /*0x81c02d*/
    v3 = v1 == *v14; /*0x81c02f*/
    LOBYTE(v65) = 5; /*0x81c032*/
    if ( !v3 ) /*0x81c037*/
    {
      if ( v1 ) /*0x81c03b*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81c03d*/
        if ( v3 ) /*0x81c040*/
          sub_772560(v1); /*0x81c044*/
      }
      v1 = *v14; /*0x81c049*/
      if ( *v14 ) /*0x81c04e*/
        ++v1[7].Unk08; /*0x81c054*/
    }
    v15 = v64; /*0x81c058*/
    LOBYTE(v65) = 1; /*0x81c05e*/
    if ( v64 ) /*0x81c063*/
    {
      --v64[7].Unk08; /*0x81c065*/
      if ( !v15[7].Unk08 ) /*0x81c06d*/
        sub_772560(v15); /*0x81c072*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x81c07e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81c08d*/
  }
  v16 = *(_DWORD *)(v0 + 0x58); /*0x81c097*/
  v17 = unk_B452AC; /*0x81c09c*/
  if ( v16 != unk_B452AC ) /*0x81c09e*/
  {
    if ( v16 ) /*0x81c0a2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x81c0a8*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x81c0bf*/
    }
    *(_DWORD *)(v0 + 0x58) = v17; /*0x81c0c3*/
    if ( v17 ) /*0x81c0c6*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x81c0cc*/
  }
  v18 = *(_DWORD *)(v0 + 0x44); /*0x81c0d7*/
  v19 = unk_B4509C; /*0x81c0dc*/
  if ( v18 != unk_B4509C ) /*0x81c0de*/
  {
    if ( v18 ) /*0x81c0e2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x81c0e8*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x81c0ff*/
    }
    *(_DWORD *)(v0 + 0x44) = v19; /*0x81c103*/
    if ( v19 ) /*0x81c106*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x81c10c*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c112*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c11d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81c129*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c12e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c139*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 9u, 0); /*0x81c145*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c14a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c155*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 1u, 0); /*0x81c161*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c166*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c171*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81c17d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c182*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c18d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81c199*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c19e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c1a9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81c1b5*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c1ba*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c1c5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81c1d1*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c1d6*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c1e1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81c1ed*/
  v3 = v0 == unk_B459B8; /*0x81c1fa*/
  unk_B43F34 = 2; /*0x81c200*/
  unk_B445C4 = 0; /*0x81c206*/
  if ( !v3 ) /*0x81c210*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81c212*/
    if ( v3 ) /*0x81c215*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81c219*/
    v0 = unk_B459B8; /*0x81c21e*/
    if ( unk_B459B8 ) /*0x81c226*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81c22c*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 2u ) /*0x81c233*/
  {
    v20 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v64); /*0x81c246*/
    v3 = v1 == *v20; /*0x81c248*/
    LOBYTE(v65) = 6; /*0x81c24b*/
    if ( !v3 ) /*0x81c250*/
    {
      if ( v1 ) /*0x81c254*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81c256*/
        if ( v3 ) /*0x81c259*/
          sub_772560(v1); /*0x81c25d*/
      }
      v1 = *v20; /*0x81c262*/
      if ( *v20 ) /*0x81c267*/
        ++v1[7].Unk08; /*0x81c26d*/
    }
    v21 = v64; /*0x81c271*/
    LOBYTE(v65) = 1; /*0x81c277*/
    if ( v64 ) /*0x81c27c*/
    {
      --v64[7].Unk08; /*0x81c27e*/
      if ( !v21[7].Unk08 ) /*0x81c286*/
        sub_772560(v21); /*0x81c28b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81c297*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81c2a6*/
    v22 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v64); /*0x81c2b8*/
    v3 = v1 == *v22; /*0x81c2ba*/
    LOBYTE(v65) = 7; /*0x81c2bd*/
    if ( !v3 ) /*0x81c2c2*/
    {
      if ( v1 ) /*0x81c2c6*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81c2c8*/
        if ( v3 ) /*0x81c2cb*/
          sub_772560(v1); /*0x81c2cf*/
      }
      v1 = *v22; /*0x81c2d4*/
      if ( *v22 ) /*0x81c2d9*/
        ++v1[7].Unk08; /*0x81c2df*/
    }
    v23 = v64; /*0x81c2e3*/
    LOBYTE(v65) = 1; /*0x81c2e9*/
    if ( v64 ) /*0x81c2ee*/
    {
      --v64[7].Unk08; /*0x81c2f0*/
      if ( !v23[7].Unk08 ) /*0x81c2f8*/
        sub_772560(v23); /*0x81c2fd*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x81c309*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81c318*/
  }
  v24 = *(_DWORD *)(v0 + 0x58); /*0x81c322*/
  v25 = unk_B452A8; /*0x81c327*/
  if ( v24 != unk_B452A8 ) /*0x81c329*/
  {
    if ( v24 ) /*0x81c32d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) ) /*0x81c333*/
        (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x81c34a*/
    }
    *(_DWORD *)(v0 + 0x58) = v25; /*0x81c34e*/
    if ( v25 ) /*0x81c351*/
      InterlockedIncrement((volatile LONG *)(v25 + 4)); /*0x81c357*/
  }
  v26 = *(_DWORD *)(v0 + 0x44); /*0x81c362*/
  v27 = unk_B450A0; /*0x81c367*/
  if ( v26 != unk_B450A0 ) /*0x81c369*/
  {
    if ( v26 ) /*0x81c36d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x81c373*/
        (**(void (__thiscall ***)(int, int))v26)(v26, 1); /*0x81c38a*/
    }
    *(_DWORD *)(v0 + 0x44) = v27; /*0x81c38e*/
    if ( v27 ) /*0x81c391*/
      InterlockedIncrement((volatile LONG *)(v27 + 4)); /*0x81c397*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c39d*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c3a8*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81c3b8*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c3bd*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c3c8*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 9u, 0); /*0x81c3d4*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c3d9*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c3e4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 1u, 0); /*0x81c3ef*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c3f4*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c3ff*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 1u, 0); /*0x81c40a*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c40f*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c41a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81c425*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c42a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c435*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81c441*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c446*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c451*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81c45d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c462*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c46d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81c479*/
  v3 = v0 == unk_B459BC; /*0x81c47e*/
  unk_B43F38 = 2; /*0x81c484*/
  unk_B445C8 = 0x80; /*0x81c48e*/
  if ( !v3 ) /*0x81c498*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81c49a*/
    if ( v3 ) /*0x81c49e*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81c4a2*/
    v0 = unk_B459BC; /*0x81c4a7*/
    if ( unk_B459BC ) /*0x81c4af*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81c4b5*/
  }
  if ( !*(_DWORD *)(v0 + 0x18) ) /*0x81c4b8*/
  {
    v28 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v64); /*0x81c4ca*/
    v3 = v1 == *v28; /*0x81c4cc*/
    LOBYTE(v65) = 8; /*0x81c4ce*/
    if ( !v3 ) /*0x81c4d3*/
    {
      if ( v1 ) /*0x81c4d7*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81c4d9*/
        if ( v3 ) /*0x81c4dd*/
          sub_772560(v1); /*0x81c4e1*/
      }
      v1 = *v28; /*0x81c4e6*/
      if ( *v28 ) /*0x81c4ea*/
        ++v1[7].Unk08; /*0x81c4f0*/
    }
    v29 = v64; /*0x81c4f3*/
    LOBYTE(v65) = 1; /*0x81c4f9*/
    if ( v64 ) /*0x81c4fe*/
    {
      --v64[7].Unk08; /*0x81c500*/
      if ( !v29[7].Unk08 ) /*0x81c509*/
        sub_772560(v29); /*0x81c50e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81c519*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81c528*/
  }
  v30 = *(_DWORD *)(v0 + 0x58); /*0x81c532*/
  v31 = unk_B45320; /*0x81c537*/
  if ( v30 != unk_B45320 ) /*0x81c539*/
  {
    if ( v30 ) /*0x81c53d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v30 + 4)) ) /*0x81c543*/
        (**(void (__thiscall ***)(int, int))v30)(v30, 1); /*0x81c55a*/
    }
    *(_DWORD *)(v0 + 0x58) = v31; /*0x81c55e*/
    if ( v31 ) /*0x81c561*/
      InterlockedIncrement((volatile LONG *)(v31 + 4)); /*0x81c567*/
  }
  v32 = *(_DWORD *)(v0 + 0x44); /*0x81c572*/
  v33 = unk_B45094; /*0x81c577*/
  if ( v32 != unk_B45094 ) /*0x81c579*/
  {
    if ( v32 ) /*0x81c57d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v32 + 4)) ) /*0x81c583*/
        (**(void (__thiscall ***)(int, int))v32)(v32, 1); /*0x81c59a*/
    }
    *(_DWORD *)(v0 + 0x44) = v33; /*0x81c59e*/
    if ( v33 ) /*0x81c5a1*/
      InterlockedIncrement((volatile LONG *)(v33 + 4)); /*0x81c5a7*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c5ad*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c5b8*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81c5c8*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c5cd*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c5d8*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 9u, 0); /*0x81c5e4*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c5e9*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c5f4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 1u, 0); /*0x81c5ff*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c604*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c60f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81c61b*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c620*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c62b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81c636*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c63b*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c646*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81c652*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c657*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c662*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81c66e*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c673*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c67e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81c68a*/
  v3 = v0 == unk_B459C0; /*0x81c68f*/
  unk_B43F3C = 0x40008; /*0x81c695*/
  unk_B445CC = 0; /*0x81c69f*/
  if ( !v3 ) /*0x81c6a9*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81c6ab*/
    if ( v3 ) /*0x81c6af*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81c6b3*/
    v0 = unk_B459C0; /*0x81c6b8*/
    if ( unk_B459C0 ) /*0x81c6c0*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81c6c6*/
  }
  if ( !*(_DWORD *)(v0 + 0x18) ) /*0x81c6c9*/
  {
    v34 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v64); /*0x81c6db*/
    v3 = v1 == *v34; /*0x81c6dd*/
    LOBYTE(v65) = 9; /*0x81c6df*/
    if ( !v3 ) /*0x81c6e4*/
    {
      if ( v1 ) /*0x81c6e8*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81c6ea*/
        if ( v3 ) /*0x81c6ee*/
          sub_772560(v1); /*0x81c6f2*/
      }
      v1 = *v34; /*0x81c6f7*/
      if ( *v34 ) /*0x81c6fb*/
        ++v1[7].Unk08; /*0x81c701*/
    }
    v35 = v64; /*0x81c704*/
    LOBYTE(v65) = 1; /*0x81c70a*/
    if ( v64 ) /*0x81c70f*/
    {
      --v64[7].Unk08; /*0x81c711*/
      if ( !v35[7].Unk08 ) /*0x81c71a*/
        sub_772560(v35); /*0x81c71f*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81c72a*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81c739*/
  }
  v36 = *(_DWORD *)(v0 + 0x58); /*0x81c743*/
  v37 = unk_B452A8; /*0x81c748*/
  if ( v36 != unk_B452A8 ) /*0x81c74a*/
  {
    if ( v36 ) /*0x81c74e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v36 + 4)) ) /*0x81c754*/
        (**(void (__thiscall ***)(int, int))v36)(v36, 1); /*0x81c76b*/
    }
    *(_DWORD *)(v0 + 0x58) = v37; /*0x81c76f*/
    if ( v37 ) /*0x81c772*/
      InterlockedIncrement((volatile LONG *)(v37 + 4)); /*0x81c778*/
  }
  v38 = *(_DWORD *)(v0 + 0x44); /*0x81c783*/
  v39 = unk_B45098; /*0x81c788*/
  if ( v38 != unk_B45098 ) /*0x81c78a*/
  {
    if ( v38 ) /*0x81c78e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v38 + 4)) ) /*0x81c794*/
        (**(void (__thiscall ***)(int, int))v38)(v38, 1); /*0x81c7ab*/
    }
    *(_DWORD *)(v0 + 0x44) = v39; /*0x81c7af*/
    if ( v39 ) /*0x81c7b2*/
      InterlockedIncrement((volatile LONG *)(v39 + 4)); /*0x81c7b8*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c7be*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c7c9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81c7d9*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c7de*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c7e9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 9u, 0); /*0x81c7f5*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c7fa*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c805*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 1u, 0); /*0x81c810*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c815*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c820*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81c82c*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c831*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c83c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81c847*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c84c*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c857*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81c863*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c868*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c873*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81c87f*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c884*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c88f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81c89b*/
  v3 = v0 == unk_B459C4; /*0x81c8a0*/
  unk_B43F40 = 2; /*0x81c8a6*/
  unk_B445D0 = 0; /*0x81c8b0*/
  if ( !v3 ) /*0x81c8ba*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81c8bc*/
    if ( v3 ) /*0x81c8c0*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81c8c4*/
    v0 = unk_B459C4; /*0x81c8c9*/
    if ( unk_B459C4 ) /*0x81c8d1*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81c8d7*/
  }
  if ( !*(_DWORD *)(v0 + 0x18) ) /*0x81c8da*/
  {
    v40 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v64); /*0x81c8ec*/
    v3 = v1 == *v40; /*0x81c8ee*/
    LOBYTE(v65) = 0xA; /*0x81c8f0*/
    if ( !v3 ) /*0x81c8f5*/
    {
      if ( v1 ) /*0x81c8f9*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81c8fb*/
        if ( v3 ) /*0x81c8ff*/
          sub_772560(v1); /*0x81c903*/
      }
      v1 = *v40; /*0x81c908*/
      if ( *v40 ) /*0x81c90c*/
        ++v1[7].Unk08; /*0x81c912*/
    }
    v41 = v64; /*0x81c915*/
    LOBYTE(v65) = 1; /*0x81c91b*/
    if ( v64 ) /*0x81c920*/
    {
      --v64[7].Unk08; /*0x81c922*/
      if ( !v41[7].Unk08 ) /*0x81c92b*/
        sub_772560(v41); /*0x81c930*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81c93b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81c94a*/
  }
  v42 = *(_DWORD *)(v0 + 0x58); /*0x81c954*/
  v43 = unk_B45324; /*0x81c959*/
  if ( v42 != unk_B45324 ) /*0x81c95b*/
  {
    if ( v42 ) /*0x81c95f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v42 + 4)) ) /*0x81c965*/
        (**(void (__thiscall ***)(int, int))v42)(v42, 1); /*0x81c97c*/
    }
    *(_DWORD *)(v0 + 0x58) = v43; /*0x81c980*/
    if ( v43 ) /*0x81c983*/
      InterlockedIncrement((volatile LONG *)(v43 + 4)); /*0x81c989*/
  }
  v44 = *(_DWORD *)(v0 + 0x44); /*0x81c994*/
  v45 = unk_B45098; /*0x81c999*/
  if ( v44 != unk_B45098 ) /*0x81c99b*/
  {
    if ( v44 ) /*0x81c99f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v44 + 4)) ) /*0x81c9a5*/
        (**(void (__thiscall ***)(int, int))v44)(v44, 1); /*0x81c9bc*/
    }
    *(_DWORD *)(v0 + 0x44) = v45; /*0x81c9c0*/
    if ( v45 ) /*0x81c9c3*/
      InterlockedIncrement((volatile LONG *)(v45 + 4)); /*0x81c9c9*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c9cf*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c9da*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81c9e6*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81c9eb*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81c9f6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 9u, 0); /*0x81ca02*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ca07*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ca12*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 1u, 0); /*0x81ca1e*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ca23*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ca2e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81ca3a*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ca3f*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ca4a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81ca56*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ca5b*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ca66*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x81ca72*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ca77*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ca82*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x81ca8e*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81ca93*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ca9e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81caaa*/
  v3 = v0 == unk_B459C8; /*0x81cab2*/
  unk_B43F44 = 0x40008; /*0x81cab8*/
  unk_B445D4 = 0; /*0x81cac2*/
  if ( !v3 ) /*0x81cacc*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81cace*/
    if ( v3 ) /*0x81cad1*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81cad5*/
    v0 = unk_B459C8; /*0x81cada*/
    if ( unk_B459C8 ) /*0x81cae2*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81cae8*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 3u ) /*0x81caf0*/
  {
    v46 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v64); /*0x81cb03*/
    v3 = v1 == *v46; /*0x81cb05*/
    LOBYTE(v65) = 0xB; /*0x81cb08*/
    if ( !v3 ) /*0x81cb0d*/
    {
      if ( v1 ) /*0x81cb11*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81cb13*/
        if ( v3 ) /*0x81cb16*/
          sub_772560(v1); /*0x81cb1a*/
      }
      v1 = *v46; /*0x81cb1f*/
      if ( *v46 ) /*0x81cb24*/
        ++v1[7].Unk08; /*0x81cb2a*/
    }
    v47 = v64; /*0x81cb2e*/
    LOBYTE(v65) = 1; /*0x81cb34*/
    if ( v64 ) /*0x81cb39*/
    {
      --v64[7].Unk08; /*0x81cb3b*/
      if ( !v47[7].Unk08 ) /*0x81cb43*/
        sub_772560(v47); /*0x81cb48*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81cb54*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81cb63*/
    v48 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v64); /*0x81cb75*/
    v3 = v1 == *v48; /*0x81cb77*/
    LOBYTE(v65) = 0xC; /*0x81cb7a*/
    if ( !v3 ) /*0x81cb7f*/
    {
      if ( v1 ) /*0x81cb83*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81cb85*/
        if ( v3 ) /*0x81cb88*/
          sub_772560(v1); /*0x81cb8c*/
      }
      v1 = *v48; /*0x81cb91*/
      if ( *v48 ) /*0x81cb96*/
        ++v1[7].Unk08; /*0x81cb9c*/
    }
    v49 = v64; /*0x81cba0*/
    LOBYTE(v65) = 1; /*0x81cba6*/
    if ( v64 ) /*0x81cbab*/
    {
      --v64[7].Unk08; /*0x81cbad*/
      if ( !v49[7].Unk08 ) /*0x81cbb5*/
        sub_772560(v49); /*0x81cbba*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x81cbc6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81cbd5*/
    v50 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v64); /*0x81cbe7*/
    v3 = v1 == *v50; /*0x81cbe9*/
    LOBYTE(v65) = 0xD; /*0x81cbec*/
    if ( !v3 ) /*0x81cbf1*/
    {
      if ( v1 ) /*0x81cbf5*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81cbf7*/
        if ( v3 ) /*0x81cbfa*/
          sub_772560(v1); /*0x81cbfe*/
      }
      v1 = *v50; /*0x81cc03*/
      if ( *v50 ) /*0x81cc08*/
        ++v1[7].Unk08; /*0x81cc0e*/
    }
    v51 = v64; /*0x81cc12*/
    LOBYTE(v65) = 1; /*0x81cc18*/
    if ( v64 ) /*0x81cc1d*/
    {
      --v64[7].Unk08; /*0x81cc1f*/
      if ( !v51[7].Unk08 ) /*0x81cc27*/
        sub_772560(v51); /*0x81cc2c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x81cc38*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81cc47*/
  }
  v52 = *(_DWORD *)(v0 + 0x58); /*0x81cc51*/
  v53 = unk_B45328; /*0x81cc56*/
  if ( v52 != unk_B45328 ) /*0x81cc58*/
  {
    if ( v52 ) /*0x81cc5c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v52 + 4)) ) /*0x81cc62*/
        (**(void (__thiscall ***)(int, int))v52)(v52, 1); /*0x81cc79*/
    }
    *(_DWORD *)(v0 + 0x58) = v53; /*0x81cc7d*/
    if ( v53 ) /*0x81cc80*/
      InterlockedIncrement((volatile LONG *)(v53 + 4)); /*0x81cc86*/
  }
  v54 = *(_DWORD *)(v0 + 0x44); /*0x81cc91*/
  v55 = unk_B4509C; /*0x81cc96*/
  if ( v54 != unk_B4509C ) /*0x81cc98*/
  {
    if ( v54 ) /*0x81cc9c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v54 + 4)) ) /*0x81cca2*/
        (**(void (__thiscall ***)(int, int))v54)(v54, 1); /*0x81ccb9*/
    }
    *(_DWORD *)(v0 + 0x44) = v55; /*0x81ccbd*/
    if ( v55 ) /*0x81ccc0*/
      InterlockedIncrement((volatile LONG *)(v55 + 4)); /*0x81ccc6*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81cccc*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ccd7*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81cce3*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81cce8*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81ccf3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 9u, 0); /*0x81ccff*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81cd04*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81cd0f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 1u, 0); /*0x81cd1b*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81cd20*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81cd2b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x81cd37*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81cd3c*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81cd47*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81cd53*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81cd58*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81cd63*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x81cd6f*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81cd74*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81cd7f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 1u, 0); /*0x81cd8b*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81cd90*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81cd9b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81cda7*/
  v3 = v0 == unk_B459D0; /*0x81cdaf*/
  unk_B43F48 = 0x40008; /*0x81cdb5*/
  unk_B445D8 = 0; /*0x81cdbf*/
  if ( !v3 ) /*0x81cdc9*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81cdcb*/
    if ( v3 ) /*0x81cdce*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81cdd2*/
    v0 = unk_B459D0; /*0x81cdd7*/
    if ( unk_B459D0 ) /*0x81cddf*/
      ++*(_DWORD *)(v0 + 0x60); /*0x81cde5*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 2u ) /*0x81cded*/
  {
    v56 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v64); /*0x81ce00*/
    v3 = v1 == *v56; /*0x81ce02*/
    LOBYTE(v65) = 0xE; /*0x81ce05*/
    if ( !v3 ) /*0x81ce0a*/
    {
      if ( v1 ) /*0x81ce0e*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81ce10*/
        if ( v3 ) /*0x81ce13*/
          sub_772560(v1); /*0x81ce17*/
      }
      v1 = *v56; /*0x81ce1c*/
      if ( *v56 ) /*0x81ce21*/
        ++v1[7].Unk08; /*0x81ce27*/
    }
    v57 = v64; /*0x81ce2b*/
    LOBYTE(v65) = 1; /*0x81ce31*/
    if ( v64 ) /*0x81ce36*/
    {
      --v64[7].Unk08; /*0x81ce38*/
      if ( !v57[7].Unk08 ) /*0x81ce40*/
        sub_772560(v57); /*0x81ce45*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x81ce51*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81ce60*/
    v58 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v64); /*0x81ce72*/
    v3 = v1 == *v58; /*0x81ce74*/
    LOBYTE(v65) = 0xF; /*0x81ce77*/
    if ( !v3 ) /*0x81ce7c*/
    {
      if ( v1 ) /*0x81ce80*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x81ce82*/
        if ( v3 ) /*0x81ce85*/
          sub_772560(v1); /*0x81ce89*/
      }
      v1 = *v58; /*0x81ce8e*/
      if ( *v58 ) /*0x81ce93*/
        ++v1[7].Unk08; /*0x81ce99*/
    }
    v59 = v64; /*0x81ce9d*/
    LOBYTE(v65) = 1; /*0x81cea3*/
    if ( v64 ) /*0x81cea8*/
    {
      --v64[7].Unk08; /*0x81ceaa*/
      if ( !v59[7].Unk08 ) /*0x81ceb2*/
        sub_772560(v59); /*0x81ceb7*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x81cec3*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x81ced2*/
  }
  v60 = *(_DWORD *)(v0 + 0x58); /*0x81cedc*/
  v61 = unk_B45324; /*0x81cee1*/
  if ( v60 != unk_B45324 ) /*0x81cee3*/
  {
    if ( v60 ) /*0x81cee7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v60 + 4)) ) /*0x81ceed*/
        (**(void (__thiscall ***)(int, int))v60)(v60, 1); /*0x81cf04*/
    }
    *(_DWORD *)(v0 + 0x58) = v61; /*0x81cf08*/
    if ( v61 ) /*0x81cf0b*/
      InterlockedIncrement((volatile LONG *)(v61 + 4)); /*0x81cf11*/
  }
  v62 = *(_DWORD *)(v0 + 0x44); /*0x81cf1c*/
  v63 = unk_B450A0; /*0x81cf21*/
  if ( v62 != unk_B450A0 ) /*0x81cf23*/
  {
    if ( v62 ) /*0x81cf27*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v62 + 4)) ) /*0x81cf2d*/
        (**(void (__thiscall ***)(int, int))v62)(v62, 1); /*0x81cf44*/
    }
    *(_DWORD *)(v0 + 0x44) = v63; /*0x81cf48*/
    if ( v63 ) /*0x81cf4b*/
      InterlockedIncrement((volatile LONG *)(v63 + 4)); /*0x81cf51*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81cf57*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81cf62*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x81cf6e*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81cf73*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81cf7e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 9u, 0); /*0x81cf8a*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81cf8f*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81cf9a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 1u, 0); /*0x81cfa6*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81cfab*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81cfb6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 1u, 0); /*0x81cfc2*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81cfc7*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81cfd2*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x81cfde*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81cfe3*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81cfee*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 4u, 0); /*0x81cffa*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81cfff*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d00a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 1u, 0); /*0x81d016*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x81d01b*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x81d026*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x81d032*/
  unk_B43F50 = 0x40008; /*0x81d03c*/
  unk_B445E0 = 0x80; /*0x81d046*/
  LOBYTE(v65) = 0; /*0x81d050*/
  if ( v1 ) /*0x81d055*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x81d057*/
    if ( v3 ) /*0x81d05a*/
      sub_772560(v1); /*0x81d05e*/
  }
  v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x81d063*/
  v65 = 0xFFFFFFFF; /*0x81d066*/
  if ( v3 ) /*0x81d06a*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x81d06e*/
}
