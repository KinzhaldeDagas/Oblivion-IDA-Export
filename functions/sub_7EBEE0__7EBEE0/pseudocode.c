char __thiscall sub_7EBEE0(NiD3DPass **this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  unsigned int **v7; // edi
  NiD3DTextureStage *v8; // eax
  NiD3DTextureStage *v9; // ecx
  int v10; // ebx
  int v11; // ebp
  int v12; // edi
  int v13; // ebp
  int v14; // ebx
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  NiD3DPass **v21; // edi
  NiD3DPass *v22; // ecx
  NiD3DPass *v23; // edi
  NiD3DPass *v24; // eax
  unsigned int **v25; // edi
  NiD3DTextureStage *v26; // eax
  NiD3DTextureStage *v27; // ecx
  int v28; // ebx
  int v29; // ebp
  int v30; // edi
  int v31; // ebp
  int v32; // ebx
  int v33; // edi
  int v34; // edi
  int v35; // edi
  int v36; // edi
  int v37; // edi
  int v38; // edi
  NiD3DPass **v39; // edi
  NiD3DPass *v40; // ecx
  NiD3DPass *v41; // eax
  NiD3DPass *v42; // eax
  unsigned int **v43; // edi
  NiD3DTextureStage *v44; // eax
  NiD3DTextureStage *v45; // ecx
  int v46; // ebx
  int v47; // ebp
  int v48; // edi
  int v49; // ebp
  int v50; // ebx
  int v51; // edi
  int v52; // edi
  int v53; // edi
  int v54; // edi
  int v55; // edi
  int v56; // esi
  NiD3DTextureStage *v57; // eax
  unsigned int *a3; // [esp+18h] [ebp-18h] BYREF
  NiD3DPass *v60; // [esp+1Ch] [ebp-14h] BYREF
  NiD3DTextureStage *v61; // [esp+20h] [ebp-10h] BYREF
  int v62; // [esp+2Ch] [ebp-4h]

  v2 = NiD3DPassPool_Acquire(&v60); /*0x7ebf16*/
  v3 = *(this + 0x1C); /*0x7ebf18*/
  v4 = v3 == *v2; /*0x7ebf1e*/
  v62 = 0; /*0x7ebf20*/
  if ( !v4 ) /*0x7ebf2d*/
  {
    if ( v3 ) /*0x7ebf31*/
    {
      v4 = v3->RefCount-- == 1; /*0x7ebf33*/
      if ( v4 ) /*0x7ebf36*/
        NiD3DPass_ReleaseToPool(v3); /*0x7ebf38*/
    }
    v5 = *v2; /*0x7ebf3d*/
    v4 = *v2 == 0; /*0x7ebf3f*/
    *(this + 0x1C) = *v2; /*0x7ebf41*/
    if ( !v4 ) /*0x7ebf44*/
      ++v5->RefCount; /*0x7ebf46*/
  }
  v6 = v60; /*0x7ebf49*/
  v62 = 0xFFFFFFFF; /*0x7ebf4f*/
  if ( v60 ) /*0x7ebf53*/
  {
    --v60->RefCount; /*0x7ebf55*/
    if ( !v6->RefCount ) /*0x7ebf5d*/
      NiD3DPass_ReleaseToPool(v6); /*0x7ebf62*/
  }
  NiD3DTextureStagePool_Acquire(&a3); /*0x7ebf6c*/
  v62 = 1; /*0x7ebf7c*/
  BSShader_ConfigureTextureStageSampler(a3, 0, 3, 2); /*0x7ebf80*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)a3, 0); /*0x7ebf8e*/
  NiD3DPass_SetTextureStage(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3); /*0x7ebf9f*/
  v7 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v60); /*0x7ebfb1*/
  v8 = (NiD3DTextureStage *)a3; /*0x7ebfb3*/
  v4 = a3 == *v7; /*0x7ebfb7*/
  LOBYTE(v62) = 2; /*0x7ebfb9*/
  if ( !v4 ) /*0x7ebfbe*/
  {
    if ( a3 ) /*0x7ebfc2*/
    {
      --a3[0x17]; /*0x7ebfc4*/
      if ( !v8[7].Unk08 ) /*0x7ebfcc*/
        sub_772560(v8); /*0x7ebfd1*/
    }
    v8 = (NiD3DTextureStage *)*v7; /*0x7ebfd6*/
    a3 = *v7; /*0x7ebfda*/
    if ( a3 ) /*0x7ebfde*/
    {
      ++v8[7].Unk08; /*0x7ebfe0*/
      v8 = (NiD3DTextureStage *)a3; /*0x7ebfe3*/
    }
  }
  v9 = (NiD3DTextureStage *)v60; /*0x7ebfe7*/
  LOBYTE(v62) = 1; /*0x7ebfed*/
  if ( v60 ) /*0x7ebff2*/
  {
    --*(_DWORD *)&v60->SoftwareVP; /*0x7ebff4*/
    if ( !v9[7].Unk08 ) /*0x7ebff7*/
      sub_772560(v9); /*0x7ec000*/
    v8 = (NiD3DTextureStage *)a3; /*0x7ec005*/
  }
  BSShader_ConfigureTextureStageSampler(v8, 1, 3, 2); /*0x7ec010*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)a3, 1u); /*0x7ec01e*/
  NiD3DPass_SetTextureStage(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3); /*0x7ec02f*/
  v10 = (int)*(this + 0x1C); /*0x7ec034*/
  v11 = (int)*(this + 0x27); /*0x7ec037*/
  v12 = *(_DWORD *)(v10 + 0x58); /*0x7ec03d*/
  if ( v12 != v11 ) /*0x7ec042*/
  {
    if ( v12 ) /*0x7ec046*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x7ec04c*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7ec062*/
    }
    *(_DWORD *)(v10 + 0x58) = v11; /*0x7ec066*/
    if ( v11 ) /*0x7ec069*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x7ec06f*/
  }
  v13 = (int)*(this + 0x1C); /*0x7ec075*/
  v14 = (int)*(this + 0x2A); /*0x7ec078*/
  v15 = *(_DWORD *)(v13 + 0x44); /*0x7ec07e*/
  if ( v15 != v14 ) /*0x7ec083*/
  {
    if ( v15 ) /*0x7ec087*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x7ec08d*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x7ec0a3*/
    }
    *(_DWORD *)(v13 + 0x44) = v14; /*0x7ec0a7*/
    if ( v14 ) /*0x7ec0aa*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x7ec0b0*/
  }
  v16 = (int)*(this + 0x1C); /*0x7ec0b6*/
  if ( !*(_DWORD *)(v16 + 0x30) ) /*0x7ec0b9*/
    *(_DWORD *)(v16 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ec0c4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v16 + 0x30), 7u, 0, 0); /*0x7ec0d0*/
  v17 = (int)*(this + 0x1C); /*0x7ec0d5*/
  if ( !*(_DWORD *)(v17 + 0x30) ) /*0x7ec0d8*/
    *(_DWORD *)(v17 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ec0e3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v17 + 0x30), 0xEu, 0, 0); /*0x7ec0ef*/
  v18 = (int)*(this + 0x1C); /*0x7ec0f4*/
  if ( !*(_DWORD *)(v18 + 0x30) ) /*0x7ec0f7*/
    *(_DWORD *)(v18 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ec102*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v18 + 0x30), 0x1Bu, 0, 0); /*0x7ec10e*/
  v19 = (int)*(this + 0x1C); /*0x7ec113*/
  if ( !*(_DWORD *)(v19 + 0x30) ) /*0x7ec116*/
    *(_DWORD *)(v19 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ec121*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v19 + 0x30), 0xFu, 0, 0); /*0x7ec12d*/
  v20 = (int)*(this + 0x1C); /*0x7ec132*/
  if ( !*(_DWORD *)(v20 + 0x30) ) /*0x7ec135*/
    *(_DWORD *)(v20 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ec140*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v20 + 0x30), 0xA8u, 7u, 0); /*0x7ec14f*/
  v21 = NiD3DPassPool_Acquire(&v60); /*0x7ec161*/
  v22 = *(this + 0x2B); /*0x7ec163*/
  v4 = v22 == *v21; /*0x7ec169*/
  LOBYTE(v62) = 3; /*0x7ec16b*/
  if ( !v4 ) /*0x7ec170*/
  {
    if ( v22 ) /*0x7ec174*/
    {
      v4 = v22->RefCount-- == 1; /*0x7ec176*/
      if ( v4 ) /*0x7ec17a*/
        NiD3DPass_ReleaseToPool(v22); /*0x7ec17c*/
    }
    v23 = *v21; /*0x7ec181*/
    *(this + 0x2B) = v23; /*0x7ec185*/
    if ( v23 ) /*0x7ec18b*/
      ++v23->RefCount; /*0x7ec18d*/
  }
  v24 = v60; /*0x7ec191*/
  LOBYTE(v62) = 1; /*0x7ec197*/
  if ( v60 ) /*0x7ec19c*/
  {
    --v60->RefCount; /*0x7ec19e*/
    if ( !v24->RefCount ) /*0x7ec1a7*/
      NiD3DPass_ReleaseToPool(v24); /*0x7ec1ac*/
  }
  v25 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v60); /*0x7ec1be*/
  v26 = (NiD3DTextureStage *)a3; /*0x7ec1c0*/
  v4 = a3 == *v25; /*0x7ec1c4*/
  LOBYTE(v62) = 4; /*0x7ec1c6*/
  if ( !v4 ) /*0x7ec1cb*/
  {
    if ( a3 ) /*0x7ec1cf*/
    {
      --a3[0x17]; /*0x7ec1d1*/
      if ( !v26[7].Unk08 ) /*0x7ec1da*/
        sub_772560(v26); /*0x7ec1df*/
    }
    v26 = (NiD3DTextureStage *)*v25; /*0x7ec1e4*/
    a3 = *v25; /*0x7ec1e8*/
    if ( a3 ) /*0x7ec1ec*/
    {
      ++v26[7].Unk08; /*0x7ec1ee*/
      v26 = (NiD3DTextureStage *)a3; /*0x7ec1f2*/
    }
  }
  v27 = (NiD3DTextureStage *)v60; /*0x7ec1f6*/
  LOBYTE(v62) = 1; /*0x7ec1fc*/
  if ( v60 ) /*0x7ec201*/
  {
    --*(_DWORD *)&v60->SoftwareVP; /*0x7ec203*/
    if ( !v27[7].Unk08 ) /*0x7ec207*/
      sub_772560(v27); /*0x7ec210*/
    v26 = (NiD3DTextureStage *)a3; /*0x7ec215*/
  }
  BSShader_ConfigureTextureStageSampler(v26, 0, 3, 2); /*0x7ec220*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)a3, 1u); /*0x7ec22e*/
  NiD3DPass_SetTextureStage(*(this + 0x2B), (*(this + 0x2B))->CurrentStage, a3); /*0x7ec242*/
  v28 = (int)*(this + 0x2B); /*0x7ec247*/
  v29 = (int)*(this + 0x26); /*0x7ec24d*/
  v30 = *(_DWORD *)(v28 + 0x58); /*0x7ec253*/
  if ( v30 != v29 ) /*0x7ec258*/
  {
    if ( v30 ) /*0x7ec25c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v30 + 4)) ) /*0x7ec262*/
        (**(void (__thiscall ***)(int, int))v30)(v30, 1); /*0x7ec278*/
    }
    *(_DWORD *)(v28 + 0x58) = v29; /*0x7ec27c*/
    if ( v29 ) /*0x7ec27f*/
      InterlockedIncrement((volatile LONG *)(v29 + 4)); /*0x7ec285*/
  }
  v31 = (int)*(this + 0x2B); /*0x7ec28b*/
  v32 = (int)*(this + 0x29); /*0x7ec291*/
  v33 = *(_DWORD *)(v31 + 0x44); /*0x7ec297*/
  if ( v33 != v32 ) /*0x7ec29c*/
  {
    if ( v33 ) /*0x7ec2a0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v33 + 4)) ) /*0x7ec2a6*/
        (**(void (__thiscall ***)(int, int))v33)(v33, 1); /*0x7ec2bc*/
    }
    *(_DWORD *)(v31 + 0x44) = v32; /*0x7ec2c0*/
    if ( v32 ) /*0x7ec2c3*/
      InterlockedIncrement((volatile LONG *)(v32 + 4)); /*0x7ec2c9*/
  }
  v34 = (int)*(this + 0x2B); /*0x7ec2cf*/
  if ( !*(_DWORD *)(v34 + 0x30) ) /*0x7ec2d5*/
    *(_DWORD *)(v34 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ec2e0*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v34 + 0x30), 7u, 0, 0); /*0x7ec2ec*/
  v35 = (int)*(this + 0x2B); /*0x7ec2f1*/
  if ( !*(_DWORD *)(v35 + 0x30) ) /*0x7ec2f7*/
    *(_DWORD *)(v35 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ec302*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v35 + 0x30), 0xEu, 0, 0); /*0x7ec30e*/
  v36 = (int)*(this + 0x2B); /*0x7ec313*/
  if ( !*(_DWORD *)(v36 + 0x30) ) /*0x7ec319*/
    *(_DWORD *)(v36 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ec324*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v36 + 0x30), 0x1Bu, 0, 0); /*0x7ec330*/
  v37 = (int)*(this + 0x2B); /*0x7ec335*/
  if ( !*(_DWORD *)(v37 + 0x30) ) /*0x7ec33b*/
    *(_DWORD *)(v37 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ec346*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v37 + 0x30), 0xFu, 0, 0); /*0x7ec352*/
  v38 = (int)*(this + 0x2B); /*0x7ec357*/
  if ( !*(_DWORD *)(v38 + 0x30) ) /*0x7ec35d*/
    *(_DWORD *)(v38 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ec368*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v38 + 0x30), 0xA8u, 7u, 0); /*0x7ec377*/
  v39 = NiD3DPassPool_Acquire(&v60); /*0x7ec389*/
  v40 = *(this + 0x2C); /*0x7ec38b*/
  v4 = v40 == *v39; /*0x7ec391*/
  LOBYTE(v62) = 5; /*0x7ec393*/
  if ( !v4 ) /*0x7ec398*/
  {
    if ( v40 ) /*0x7ec39c*/
    {
      v4 = v40->RefCount-- == 1; /*0x7ec39e*/
      if ( v4 ) /*0x7ec3a2*/
        NiD3DPass_ReleaseToPool(v40); /*0x7ec3a4*/
    }
    v41 = *v39; /*0x7ec3a9*/
    v4 = *v39 == 0; /*0x7ec3ab*/
    *(this + 0x2C) = *v39; /*0x7ec3ad*/
    if ( !v4 ) /*0x7ec3b3*/
      ++v41->RefCount; /*0x7ec3b5*/
  }
  v42 = v60; /*0x7ec3b9*/
  LOBYTE(v62) = 1; /*0x7ec3bf*/
  if ( v60 ) /*0x7ec3c4*/
  {
    --v60->RefCount; /*0x7ec3c6*/
    if ( !v42->RefCount ) /*0x7ec3cf*/
      NiD3DPass_ReleaseToPool(v42); /*0x7ec3d4*/
  }
  v43 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v61); /*0x7ec3e6*/
  v44 = (NiD3DTextureStage *)a3; /*0x7ec3e8*/
  v4 = a3 == *v43; /*0x7ec3ec*/
  LOBYTE(v62) = 6; /*0x7ec3ee*/
  if ( !v4 ) /*0x7ec3f3*/
  {
    if ( a3 ) /*0x7ec3f7*/
    {
      --a3[0x17]; /*0x7ec3f9*/
      if ( !v44[7].Unk08 ) /*0x7ec402*/
        sub_772560(v44); /*0x7ec407*/
    }
    v44 = (NiD3DTextureStage *)*v43; /*0x7ec40c*/
    a3 = *v43; /*0x7ec410*/
    if ( a3 ) /*0x7ec414*/
    {
      ++v44[7].Unk08; /*0x7ec416*/
      v44 = (NiD3DTextureStage *)a3; /*0x7ec41a*/
    }
  }
  v45 = v61; /*0x7ec41e*/
  LOBYTE(v62) = 1; /*0x7ec424*/
  if ( v61 ) /*0x7ec429*/
  {
    --v61[7].Unk08; /*0x7ec42b*/
    if ( !v45[7].Unk08 ) /*0x7ec42f*/
      sub_772560(v45); /*0x7ec438*/
    v44 = (NiD3DTextureStage *)a3; /*0x7ec43d*/
  }
  BSShader_ConfigureTextureStageSampler(v44, 0, 3, 2); /*0x7ec448*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)a3, 1u); /*0x7ec456*/
  NiD3DPass_SetTextureStage(*(this + 0x2C), (*(this + 0x2C))->CurrentStage, a3); /*0x7ec46a*/
  v46 = (int)*(this + 0x2C); /*0x7ec46f*/
  v47 = (int)*(this + 0x25); /*0x7ec475*/
  v48 = *(_DWORD *)(v46 + 0x58); /*0x7ec47b*/
  if ( v48 != v47 ) /*0x7ec480*/
  {
    if ( v48 ) /*0x7ec484*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v48 + 4)) ) /*0x7ec48a*/
        (**(void (__thiscall ***)(int, int))v48)(v48, 1); /*0x7ec4a0*/
    }
    *(_DWORD *)(v46 + 0x58) = v47; /*0x7ec4a4*/
    if ( v47 ) /*0x7ec4a7*/
      InterlockedIncrement((volatile LONG *)(v47 + 4)); /*0x7ec4ad*/
  }
  v49 = (int)*(this + 0x2C); /*0x7ec4b3*/
  v50 = (int)*(this + 0x28); /*0x7ec4b9*/
  v51 = *(_DWORD *)(v49 + 0x44); /*0x7ec4bf*/
  if ( v51 != v50 ) /*0x7ec4c4*/
  {
    if ( v51 ) /*0x7ec4c8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v51 + 4)) ) /*0x7ec4ce*/
        (**(void (__thiscall ***)(int, int))v51)(v51, 1); /*0x7ec4e4*/
    }
    *(_DWORD *)(v49 + 0x44) = v50; /*0x7ec4e8*/
    if ( v50 ) /*0x7ec4eb*/
      InterlockedIncrement((volatile LONG *)(v50 + 4)); /*0x7ec4f1*/
  }
  v52 = (int)*(this + 0x2C); /*0x7ec4f7*/
  if ( !*(_DWORD *)(v52 + 0x30) ) /*0x7ec4fd*/
    *(_DWORD *)(v52 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ec508*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v52 + 0x30), 7u, 0, 0); /*0x7ec514*/
  v53 = (int)*(this + 0x2C); /*0x7ec519*/
  if ( !*(_DWORD *)(v53 + 0x30) ) /*0x7ec51f*/
    *(_DWORD *)(v53 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ec52a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v53 + 0x30), 0xEu, 0, 0); /*0x7ec536*/
  v54 = (int)*(this + 0x2C); /*0x7ec53b*/
  if ( !*(_DWORD *)(v54 + 0x30) ) /*0x7ec541*/
    *(_DWORD *)(v54 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ec54c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v54 + 0x30), 0x1Bu, 0, 0); /*0x7ec558*/
  v55 = (int)*(this + 0x2C); /*0x7ec55d*/
  if ( !*(_DWORD *)(v55 + 0x30) ) /*0x7ec563*/
    *(_DWORD *)(v55 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ec56e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v55 + 0x30), 0xFu, 0, 0); /*0x7ec57a*/
  v56 = (int)*(this + 0x2C); /*0x7ec57f*/
  if ( !*(_DWORD *)(v56 + 0x30) ) /*0x7ec585*/
    *(_DWORD *)(v56 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ec590*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v56 + 0x30), 0xA8u, 7u, 0); /*0x7ec59f*/
  v57 = (NiD3DTextureStage *)a3; /*0x7ec5a4*/
  v62 = 0xFFFFFFFF; /*0x7ec5aa*/
  if ( a3 ) /*0x7ec5b2*/
  {
    --a3[0x17]; /*0x7ec5b4*/
    if ( !v57[7].Unk08 ) /*0x7ec5bd*/
      sub_772560(v57); /*0x7ec5c2*/
  }
  return 1; /*0x7ec5c9*/
}
