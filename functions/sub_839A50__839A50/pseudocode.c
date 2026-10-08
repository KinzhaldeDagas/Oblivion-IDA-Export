void sub_839A50()
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

  v0 = 0; /*0x839a77*/
  v1 = 0; /*0x839a7d*/
  v21 = 0; /*0x839a7f*/
  v2 = unk_B45BD8; /*0x839a87*/
  v3 = unk_B45BD8 == 0; /*0x839a8c*/
  LOBYTE(v21) = 1; /*0x839a93*/
  if ( !v3 ) /*0x839a97*/
  {
    v0 = v2; /*0x839a99*/
    if ( v2 ) /*0x839aa1*/
      ++*(_DWORD *)(v2 + 0x60); /*0x839aa3*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 2u ) /*0x839aac*/
  {
    v4 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v20); /*0x839abf*/
    if ( v4 ) /*0x839ac3*/
    {
      v1 = v4; /*0x839ac5*/
      ++v4[7].Unk08; /*0x839ac7*/
    }
    v5 = v20; /*0x839ace*/
    LOBYTE(v21) = 1; /*0x839ad4*/
    if ( v20 ) /*0x839ad9*/
    {
      --v20[7].Unk08; /*0x839adb*/
      if ( !v5[7].Unk08 ) /*0x839ae4*/
        sub_772560(v5); /*0x839ae9*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x839af4*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x839b03*/
    v6 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v20); /*0x839b15*/
    v3 = v1 == *v6; /*0x839b17*/
    LOBYTE(v21) = 3; /*0x839b1a*/
    if ( !v3 ) /*0x839b1f*/
    {
      if ( v1 ) /*0x839b23*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x839b25*/
        if ( v3 ) /*0x839b29*/
          sub_772560(v1); /*0x839b2d*/
      }
      v1 = *v6; /*0x839b32*/
      if ( *v6 ) /*0x839b37*/
        ++v1[7].Unk08; /*0x839b3d*/
    }
    v7 = v20; /*0x839b40*/
    LOBYTE(v21) = 1; /*0x839b46*/
    if ( v20 ) /*0x839b4b*/
    {
      --v20[7].Unk08; /*0x839b4d*/
      if ( !v7[7].Unk08 ) /*0x839b56*/
        sub_772560(v7); /*0x839b5b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x839b65*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x839b74*/
  }
  v8 = *(_DWORD *)(v0 + 0x58); /*0x839b7e*/
  v9 = unk_B45480; /*0x839b83*/
  if ( v8 != unk_B45480 ) /*0x839b85*/
  {
    if ( v8 ) /*0x839b89*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x839b8f*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x839ba6*/
    }
    *(_DWORD *)(v0 + 0x58) = v9; /*0x839baa*/
    if ( v9 ) /*0x839bad*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x839bb3*/
  }
  v10 = *(_DWORD *)(v0 + 0x44); /*0x839bbe*/
  v11 = unk_B45270; /*0x839bc3*/
  if ( v10 != unk_B45270 ) /*0x839bc5*/
  {
    if ( v10 ) /*0x839bc9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x839bcf*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x839be6*/
    }
    *(_DWORD *)(v0 + 0x44) = v11; /*0x839bea*/
    if ( v11 ) /*0x839bed*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x839bf3*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x839bfb*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x839c05*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x839c10*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x839c15*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x839c1f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 5u, 0); /*0x839c2a*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x839c2f*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x839c39*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 6u, 0); /*0x839c44*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x839c49*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x839c53*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x839c5d*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x839c62*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x839c6c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x839c77*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x839c7c*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x839c86*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x839c91*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x839c96*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x839ca0*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x839caa*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x839caf*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x839cb9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x839cc3*/
  v3 = v0 == unk_B45BDC; /*0x839cc8*/
  unk_B44158 = 0; /*0x839cce*/
  unk_B447E8 = 0; /*0x839cd4*/
  if ( !v3 ) /*0x839cda*/
  {
    v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x839cdc*/
    if ( v3 ) /*0x839ce0*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x839ce4*/
    v0 = unk_B45BDC; /*0x839ce9*/
    if ( unk_B45BDC ) /*0x839cf1*/
      ++*(_DWORD *)(v0 + 0x60); /*0x839cf7*/
  }
  if ( *(_DWORD *)(v0 + 0x18) < 2u ) /*0x839cff*/
  {
    v12 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v20); /*0x839d12*/
    v3 = v1 == *v12; /*0x839d14*/
    LOBYTE(v21) = 4; /*0x839d17*/
    if ( !v3 ) /*0x839d1c*/
    {
      if ( v1 ) /*0x839d20*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x839d22*/
        if ( v3 ) /*0x839d26*/
          sub_772560(v1); /*0x839d2a*/
      }
      v1 = *v12; /*0x839d2f*/
      if ( *v12 ) /*0x839d34*/
        ++v1[7].Unk08; /*0x839d3a*/
    }
    v13 = v20; /*0x839d3e*/
    LOBYTE(v21) = 1; /*0x839d44*/
    if ( v20 ) /*0x839d49*/
    {
      --v20[7].Unk08; /*0x839d4b*/
      if ( !v13[7].Unk08 ) /*0x839d54*/
        sub_772560(v13); /*0x839d58*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x839d63*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x839d72*/
    v14 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v20); /*0x839d84*/
    v3 = v1 == *v14; /*0x839d86*/
    LOBYTE(v21) = 5; /*0x839d89*/
    if ( !v3 ) /*0x839d8e*/
    {
      if ( v1 ) /*0x839d92*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x839d94*/
        if ( v3 ) /*0x839d98*/
          sub_772560(v1); /*0x839d9c*/
      }
      v1 = *v14; /*0x839da1*/
      if ( *v14 ) /*0x839da6*/
        ++v1[7].Unk08; /*0x839dac*/
    }
    v15 = v20; /*0x839db0*/
    LOBYTE(v21) = 1; /*0x839db6*/
    if ( v20 ) /*0x839dbb*/
    {
      --v20[7].Unk08; /*0x839dbd*/
      if ( !v15[7].Unk08 ) /*0x839dc6*/
        sub_772560(v15); /*0x839dca*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x839dd6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v0, *(_DWORD *)(v0 + 0x14), &v1->Stage); /*0x839de5*/
  }
  v16 = *(_DWORD *)(v0 + 0x58); /*0x839def*/
  v17 = unk_B45484; /*0x839df4*/
  if ( v16 != unk_B45484 ) /*0x839df6*/
  {
    if ( v16 ) /*0x839dfa*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x839e00*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x839e17*/
    }
    *(_DWORD *)(v0 + 0x58) = v17; /*0x839e1b*/
    if ( v17 ) /*0x839e1e*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x839e24*/
  }
  v18 = *(_DWORD *)(v0 + 0x44); /*0x839e2f*/
  v19 = unk_B45270; /*0x839e34*/
  if ( v18 != unk_B45270 ) /*0x839e36*/
  {
    if ( v18 ) /*0x839e3a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x839e40*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x839e57*/
    }
    *(_DWORD *)(v0 + 0x44) = v19; /*0x839e5b*/
    if ( v19 ) /*0x839e5e*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x839e64*/
  }
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x839e6a*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x839e75*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x1Bu, 1u, 0); /*0x839e82*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x839e87*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x839e91*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x13u, 5u, 0); /*0x839e9c*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x839ea1*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x839eab*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x14u, 6u, 0); /*0x839eb6*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x839ebb*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x839ec5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xFu, 0, 0); /*0x839ecf*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x839ed4*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x839ede*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 7u, 1u, 0); /*0x839ee9*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x839eee*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x839ef8*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x17u, 3u, 0); /*0x839f03*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x839f08*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x839f12*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0xEu, 0, 0); /*0x839f1c*/
  if ( !*(_DWORD *)(v0 + 0x30) ) /*0x839f21*/
    *(_DWORD *)(v0 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x839f2b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v0 + 0x30), 0x34u, 0, 0); /*0x839f35*/
  unk_B4415C = 0; /*0x839f3c*/
  unk_B447EC = 0; /*0x839f42*/
  LOBYTE(v21) = 0; /*0x839f48*/
  if ( v1 ) /*0x839f4d*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x839f52*/
    if ( v3 ) /*0x839f55*/
      sub_772560(v1); /*0x839f59*/
  }
  v3 = (*(_DWORD *)(v0 + 0x60))-- == 1; /*0x839f63*/
  v21 = 0xFFFFFFFF; /*0x839f66*/
  if ( v3 ) /*0x839f6a*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v0); /*0x839f6e*/
}
