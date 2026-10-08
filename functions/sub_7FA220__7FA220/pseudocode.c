char __thiscall sub_7FA220(NiD3DPass **this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // edi
  int v10; // ebp
  int v11; // ebx
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // esi
  NiD3DTextureStage *v19; // eax
  unsigned int *a3; // [esp+14h] [ebp-14h] BYREF
  NiD3DPass *v22; // [esp+18h] [ebp-10h] BYREF
  int v23; // [esp+24h] [ebp-4h]

  v2 = NiD3DPassPool_Acquire(&v22); /*0x7fa256*/
  v3 = *(this + 0x1C); /*0x7fa258*/
  v4 = v3 == *v2; /*0x7fa25b*/
  v23 = 0; /*0x7fa25d*/
  if ( !v4 ) /*0x7fa265*/
  {
    if ( v3 ) /*0x7fa269*/
    {
      v4 = v3->RefCount-- == 1; /*0x7fa26b*/
      if ( v4 ) /*0x7fa26f*/
        NiD3DPass_ReleaseToPool(v3); /*0x7fa271*/
    }
    v5 = *v2; /*0x7fa276*/
    v4 = *v2 == 0; /*0x7fa278*/
    *(this + 0x1C) = *v2; /*0x7fa27a*/
    if ( !v4 ) /*0x7fa27d*/
      ++v5->RefCount; /*0x7fa27f*/
  }
  v6 = v22; /*0x7fa283*/
  v23 = 0xFFFFFFFF; /*0x7fa289*/
  if ( v22 ) /*0x7fa291*/
  {
    --v22->RefCount; /*0x7fa293*/
    if ( !v6->RefCount ) /*0x7fa29c*/
      NiD3DPass_ReleaseToPool(v6); /*0x7fa2a1*/
  }
  NiD3DTextureStagePool_Acquire(&a3); /*0x7fa2ab*/
  v23 = 1; /*0x7fa2bb*/
  BSShader_ConfigureTextureStageSampler(a3, 0, 3, 2); /*0x7fa2c3*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)a3, 0); /*0x7fa2d1*/
  NiD3DPass_SetTextureStage(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3); /*0x7fa2e2*/
  v7 = (int)*(this + 0x1C); /*0x7fa2e7*/
  v8 = (int)*(this + 0x30); /*0x7fa2ea*/
  v9 = *(_DWORD *)(v7 + 0x58); /*0x7fa2f0*/
  if ( v9 != v8 ) /*0x7fa2f5*/
  {
    if ( v9 ) /*0x7fa2f9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x7fa2ff*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x7fa315*/
    }
    *(_DWORD *)(v7 + 0x58) = v8; /*0x7fa319*/
    if ( v8 ) /*0x7fa31c*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x7fa322*/
  }
  v10 = (int)*(this + 0x1C); /*0x7fa328*/
  v11 = (int)*(this + 0x31); /*0x7fa32b*/
  v12 = *(_DWORD *)(v10 + 0x44); /*0x7fa331*/
  if ( v12 != v11 ) /*0x7fa336*/
  {
    if ( v12 ) /*0x7fa33a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x7fa340*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7fa356*/
    }
    *(_DWORD *)(v10 + 0x44) = v11; /*0x7fa35a*/
    if ( v11 ) /*0x7fa35d*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x7fa363*/
  }
  v13 = (int)*(this + 0x1C); /*0x7fa369*/
  if ( !*(_DWORD *)(v13 + 0x30) ) /*0x7fa36c*/
    *(_DWORD *)(v13 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7fa377*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v13 + 0x30), 7u, 0, 0); /*0x7fa383*/
  v14 = (int)*(this + 0x1C); /*0x7fa388*/
  if ( !*(_DWORD *)(v14 + 0x30) ) /*0x7fa38b*/
    *(_DWORD *)(v14 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7fa396*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v14 + 0x30), 0xEu, 0, 0); /*0x7fa3a2*/
  v15 = (int)*(this + 0x1C); /*0x7fa3a7*/
  if ( !*(_DWORD *)(v15 + 0x30) ) /*0x7fa3aa*/
    *(_DWORD *)(v15 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7fa3b5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v15 + 0x30), 0x1Bu, 0, 0); /*0x7fa3c1*/
  v16 = (int)*(this + 0x1C); /*0x7fa3c6*/
  if ( !*(_DWORD *)(v16 + 0x30) ) /*0x7fa3c9*/
    *(_DWORD *)(v16 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7fa3d4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v16 + 0x30), 0x13u, 2u, 0); /*0x7fa3e0*/
  v17 = (int)*(this + 0x1C); /*0x7fa3e5*/
  if ( !*(_DWORD *)(v17 + 0x30) ) /*0x7fa3e8*/
    *(_DWORD *)(v17 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7fa3f3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v17 + 0x30), 0x14u, 2u, 0); /*0x7fa3ff*/
  v18 = (int)*(this + 0x1C); /*0x7fa404*/
  if ( !*(_DWORD *)(v18 + 0x30) ) /*0x7fa407*/
    *(_DWORD *)(v18 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7fa412*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v18 + 0x30), 0xA8u, 0xFu, 0); /*0x7fa421*/
  v19 = (NiD3DTextureStage *)a3; /*0x7fa426*/
  v23 = 0xFFFFFFFF; /*0x7fa42c*/
  if ( a3 ) /*0x7fa434*/
  {
    --a3[0x17]; /*0x7fa436*/
    if ( !v19[7].Unk08 ) /*0x7fa43f*/
      sub_772560(v19); /*0x7fa444*/
  }
  return 1; /*0x7fa44b*/
}
