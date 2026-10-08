void sub_8203D0()
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
  NiD3DTextureStage *v20; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v21; // [esp+28h] [ebp-4h]

  v0 = 0; /*0x8203f7*/
  v1 = 0; /*0x8203fd*/
  v21 = 0; /*0x8203ff*/
  v2 = unk_B45BD0; /*0x820407*/
  v3 = unk_B45BD0 == 0; /*0x82040c*/
  LOBYTE(v21) = 1; /*0x820413*/
  if ( !v3 ) /*0x820417*/
  {
    v0 = v2; /*0x820419*/
    if ( v2 ) /*0x820421*/
      ++*(_DWORD *)(v2 + 0x60); /*0x820423*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 2u ) /*0x82042c*/
  {
    v4 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v20); /*0x82043f*/
    if ( v4 ) /*0x820443*/
    {
      v1 = v4; /*0x820445*/
      ++v4[7].Unk08; /*0x820447*/
    }
    v5 = v20; /*0x82044e*/
    LOBYTE(v21) = 1; /*0x820454*/
    if ( v20 ) /*0x820459*/
    {
      --v20[7].Unk08; /*0x82045b*/
      if ( !v5[7].Unk08 ) /*0x820464*/
        sub_772560(v5); /*0x820469*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x820474*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x820483*/
    v6 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v20); /*0x820495*/
    v3 = v1 == *v6; /*0x820497*/
    LOBYTE(v21) = 3; /*0x82049a*/
    if ( !v3 ) /*0x82049f*/
    {
      if ( v1 ) /*0x8204a3*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8204a5*/
        if ( v3 ) /*0x8204a9*/
          sub_772560(v1); /*0x8204ad*/
      }
      v1 = *v6; /*0x8204b2*/
      if ( *v6 ) /*0x8204b7*/
        ++v1[7].Unk08; /*0x8204bd*/
    }
    v7 = v20; /*0x8204c0*/
    LOBYTE(v21) = 1; /*0x8204c6*/
    if ( v20 ) /*0x8204cb*/
    {
      --v20[7].Unk08; /*0x8204cd*/
      if ( !v7[7].Unk08 ) /*0x8204d6*/
        sub_772560(v7); /*0x8204db*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x8204e5*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x8204f4*/
  }
  v8 = *(_DWORD *)(v0 + 0x58); /*0x8204fe*/
  v9 = unk_B45308; /*0x820503*/
  if ( v8 != unk_B45308 ) /*0x820505*/
  {
    if ( v8 ) /*0x820509*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x82050f*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x820526*/
    }
    *(_DWORD *)(v0 + 0x58) = v9; /*0x82052a*/
    if ( v9 ) /*0x82052d*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x820533*/
  }
  v10 = *(_DWORD *)(v0 + 0x44); /*0x82053e*/
  v11 = unk_B45140; /*0x820543*/
  if ( v10 != unk_B45140 ) /*0x820545*/
  {
    if ( v10 ) /*0x820549*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x82054f*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x820566*/
    }
    *(_DWORD *)(v0 + 0x44) = v11; /*0x82056a*/
    if ( v11 ) /*0x82056d*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x820573*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x82057b*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x820585*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x820590*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x820595*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x82059f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 5u, 0); /*0x8205aa*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x8205af*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8205b9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 6u, 0); /*0x8205c4*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x8205c9*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8205d3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x8205dd*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x8205e2*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8205ec*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x8205f7*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x8205fc*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x820606*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x820611*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x820616*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x820620*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x82062a*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x82062f*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x820639*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x820643*/
  v3 = v0 == unk_B45BD4; /*0x820648*/
  unk_B44150 = 0; /*0x82064e*/
  unk_B447E0 = 0; /*0x820654*/
  if ( !v3 ) /*0x82065a*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x82065c*/
    if ( v3 ) /*0x820660*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x820664*/
    v0 = unk_B45BD4; /*0x820669*/
    if ( unk_B45BD4 ) /*0x820671*/
      ++*(_DWORD *)(v0 + 0x60); /*0x820677*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 2u ) /*0x82067f*/
  {
    v12 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v20); /*0x820692*/
    v3 = v1 == *v12; /*0x820694*/
    LOBYTE(v21) = 4; /*0x820697*/
    if ( !v3 ) /*0x82069c*/
    {
      if ( v1 ) /*0x8206a0*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8206a2*/
        if ( v3 ) /*0x8206a6*/
          sub_772560(v1); /*0x8206aa*/
      }
      v1 = *v12; /*0x8206af*/
      if ( *v12 ) /*0x8206b4*/
        ++v1[7].Unk08; /*0x8206ba*/
    }
    v13 = v20; /*0x8206be*/
    LOBYTE(v21) = 1; /*0x8206c4*/
    if ( v20 ) /*0x8206c9*/
    {
      --v20[7].Unk08; /*0x8206cb*/
      if ( !v13[7].Unk08 ) /*0x8206d4*/
        sub_772560(v13); /*0x8206d8*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x8206e3*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x8206f2*/
    v14 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v20); /*0x820704*/
    v3 = v1 == *v14; /*0x820706*/
    LOBYTE(v21) = 5; /*0x820709*/
    if ( !v3 ) /*0x82070e*/
    {
      if ( v1 ) /*0x820712*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x820714*/
        if ( v3 ) /*0x820718*/
          sub_772560(v1); /*0x82071c*/
      }
      v1 = *v14; /*0x820721*/
      if ( *v14 ) /*0x820726*/
        ++v1[7].Unk08; /*0x82072c*/
    }
    v15 = v20; /*0x820730*/
    LOBYTE(v21) = 1; /*0x820736*/
    if ( v20 ) /*0x82073b*/
    {
      --v20[7].Unk08; /*0x82073d*/
      if ( !v15[7].Unk08 ) /*0x820746*/
        sub_772560(v15); /*0x82074a*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x820756*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x820765*/
  }
  v16 = *(_DWORD *)(v0 + 0x58); /*0x82076f*/
  v17 = unk_B45360; /*0x820774*/
  if ( v16 != unk_B45360 ) /*0x820776*/
  {
    if ( v16 ) /*0x82077a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x820780*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x820797*/
    }
    *(_DWORD *)(v0 + 0x58) = v17; /*0x82079b*/
    if ( v17 ) /*0x82079e*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x8207a4*/
  }
  v18 = *(_DWORD *)(v0 + 0x44); /*0x8207af*/
  v19 = unk_B45140; /*0x8207b4*/
  if ( v18 != unk_B45140 ) /*0x8207b6*/
  {
    if ( v18 ) /*0x8207ba*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x8207c0*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x8207d7*/
    }
    *(_DWORD *)(v0 + 0x44) = v19; /*0x8207db*/
    if ( v19 ) /*0x8207de*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x8207e4*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x8207ea*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8207f5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x820802*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x820807*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x820811*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 5u, 0); /*0x82081c*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x820821*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x82082b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 6u, 0); /*0x820836*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x82083b*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x820845*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x82084f*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x820854*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x82085e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x820869*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x82086e*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x820878*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x820883*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x820888*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x820892*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x82089c*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x8208a1*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8208ab*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x8208b5*/
  unk_B44154 = 0; /*0x8208bc*/
  unk_B447E4 = 0; /*0x8208c2*/
  LOBYTE(v21) = 0; /*0x8208c8*/
  if ( v1 ) /*0x8208cd*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x8208d2*/
    if ( v3 ) /*0x8208d5*/
      sub_772560(v1); /*0x8208d9*/
  }
  v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x8208e3*/
  v21 = 0xFFFFFFFF; /*0x8208e6*/
  if ( v3 ) /*0x8208ea*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x8208ee*/
}
