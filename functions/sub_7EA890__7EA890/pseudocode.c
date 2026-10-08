char __thiscall sub_7EA890(NiD3DPass **this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  unsigned int **v7; // edi
  NiD3DTextureStage *v8; // ecx
  NiD3DTextureStage *v9; // eax
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
  int v20; // esi
  NiD3DTextureStage *v21; // eax
  unsigned int *a3; // [esp+14h] [ebp-18h] BYREF
  NiD3DPass *v24; // [esp+18h] [ebp-14h] BYREF
  NiD3DTextureStage *v25; // [esp+1Ch] [ebp-10h] BYREF
  int v26; // [esp+28h] [ebp-4h]

  v2 = NiD3DPassPool_Acquire(&v24); /*0x7ea8c6*/
  v3 = *(this + 0x1C); /*0x7ea8c8*/
  v4 = v3 == *v2; /*0x7ea8cb*/
  v26 = 0; /*0x7ea8cd*/
  if ( !v4 ) /*0x7ea8d5*/
  {
    if ( v3 ) /*0x7ea8d9*/
    {
      v4 = v3->RefCount-- == 1; /*0x7ea8db*/
      if ( v4 ) /*0x7ea8df*/
        NiD3DPass_ReleaseToPool(v3); /*0x7ea8e1*/
    }
    v5 = *v2; /*0x7ea8e6*/
    v4 = *v2 == 0; /*0x7ea8e8*/
    *(this + 0x1C) = *v2; /*0x7ea8ea*/
    if ( !v4 ) /*0x7ea8ed*/
      ++v5->RefCount; /*0x7ea8ef*/
  }
  v6 = v24; /*0x7ea8f3*/
  v26 = 0xFFFFFFFF; /*0x7ea8f9*/
  if ( v24 ) /*0x7ea901*/
  {
    --v24->RefCount; /*0x7ea903*/
    if ( !v6->RefCount ) /*0x7ea90c*/
      NiD3DPass_ReleaseToPool(v6); /*0x7ea911*/
  }
  NiD3DTextureStagePool_Acquire(&a3); /*0x7ea91b*/
  v26 = 1; /*0x7ea930*/
  BSShader_ConfigureTextureStageSampler(a3, 0, 3, 2); /*0x7ea934*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)a3, 1u); /*0x7ea941*/
  NiD3DPass_SetTextureStage(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3); /*0x7ea952*/
  v7 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v25); /*0x7ea964*/
  v8 = (NiD3DTextureStage *)a3; /*0x7ea966*/
  v4 = a3 == *v7; /*0x7ea96a*/
  LOBYTE(v26) = 2; /*0x7ea96c*/
  if ( !v4 ) /*0x7ea971*/
  {
    if ( a3 ) /*0x7ea975*/
    {
      --a3[0x17]; /*0x7ea977*/
      if ( !v8[7].Unk08 ) /*0x7ea97b*/
        sub_772560(v8); /*0x7ea984*/
    }
    v8 = (NiD3DTextureStage *)*v7; /*0x7ea989*/
    a3 = *v7; /*0x7ea98d*/
    if ( a3 ) /*0x7ea991*/
    {
      ++v8[7].Unk08; /*0x7ea993*/
      v8 = (NiD3DTextureStage *)a3; /*0x7ea996*/
    }
  }
  v9 = v25; /*0x7ea99a*/
  LOBYTE(v26) = 1; /*0x7ea9a0*/
  if ( v25 ) /*0x7ea9a5*/
  {
    --v25[7].Unk08; /*0x7ea9a7*/
    if ( !v9[7].Unk08 ) /*0x7ea9b0*/
      sub_772560(v9); /*0x7ea9b5*/
    v8 = (NiD3DTextureStage *)a3; /*0x7ea9ba*/
  }
  NiD3DTextureStage_ApplyFilterPreset(v8, 0); /*0x7ea9c0*/
  BSShader_ConfigureTextureStageSampler(a3, 1, 3, 2); /*0x7ea9cf*/
  NiD3DPass_SetTextureStage(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3); /*0x7ea9e3*/
  v10 = (int)*(this + 0x1C); /*0x7ea9ee*/
  v11 = (int)*(this + (_DWORD)*(this + 0x24) + 0x25); /*0x7ea9f1*/
  v12 = *(_DWORD *)(v10 + 0x58); /*0x7ea9f8*/
  if ( v12 != v11 ) /*0x7ea9fd*/
  {
    if ( v12 ) /*0x7eaa01*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x7eaa07*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7eaa1d*/
    }
    *(_DWORD *)(v10 + 0x58) = v11; /*0x7eaa21*/
    if ( v11 ) /*0x7eaa24*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x7eaa2a*/
  }
  v13 = (int)*(this + 0x1C); /*0x7eaa36*/
  v14 = (int)*(this + (_DWORD)*(this + 0x24) + 0x2A); /*0x7eaa39*/
  v15 = *(_DWORD *)(v13 + 0x44); /*0x7eaa40*/
  if ( v15 != v14 ) /*0x7eaa45*/
  {
    if ( v15 ) /*0x7eaa49*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x7eaa4f*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x7eaa65*/
    }
    *(_DWORD *)(v13 + 0x44) = v14; /*0x7eaa69*/
    if ( v14 ) /*0x7eaa6c*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x7eaa72*/
  }
  v16 = (int)*(this + 0x1C); /*0x7eaa78*/
  if ( !*(_DWORD *)(v16 + 0x30) ) /*0x7eaa7b*/
    *(_DWORD *)(v16 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7eaa86*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v16 + 0x30), 7u, 0, 0); /*0x7eaa92*/
  v17 = (int)*(this + 0x1C); /*0x7eaa97*/
  if ( !*(_DWORD *)(v17 + 0x30) ) /*0x7eaa9a*/
    *(_DWORD *)(v17 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7eaaa5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v17 + 0x30), 0xEu, 0, 0); /*0x7eaab1*/
  v18 = (int)*(this + 0x1C); /*0x7eaab6*/
  if ( !*(_DWORD *)(v18 + 0x30) ) /*0x7eaab9*/
    *(_DWORD *)(v18 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7eaac4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v18 + 0x30), 0x1Bu, 0, 0); /*0x7eaad0*/
  v19 = (int)*(this + 0x1C); /*0x7eaad5*/
  if ( !*(_DWORD *)(v19 + 0x30) ) /*0x7eaad8*/
    *(_DWORD *)(v19 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7eaae3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v19 + 0x30), 0xFu, 0, 0); /*0x7eaaef*/
  v20 = (int)*(this + 0x1C); /*0x7eaaf4*/
  if ( !*(_DWORD *)(v20 + 0x30) ) /*0x7eaaf7*/
    *(_DWORD *)(v20 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7eab02*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v20 + 0x30), 0xA8u, 7u, 0); /*0x7eab11*/
  v21 = (NiD3DTextureStage *)a3; /*0x7eab16*/
  v26 = 0xFFFFFFFF; /*0x7eab1c*/
  if ( a3 ) /*0x7eab24*/
  {
    --a3[0x17]; /*0x7eab26*/
    if ( !v21[7].Unk08 ) /*0x7eab2f*/
      sub_772560(v21); /*0x7eab34*/
  }
  return 1; /*0x7eab3b*/
}
