char __thiscall sub_7B09A0(NiD3DPass **this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  unsigned int i; // edi
  NiD3DTextureStage *v8; // eax
  int v9; // edi
  int v10; // ebx
  int v11; // ebp
  _DWORD *v12; // edi
  int v13; // ebx
  int v14; // ebp
  int v15; // edi
  _DWORD *v16; // ebx
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // esi
  unsigned int *a3; // [esp+14h] [ebp-14h] BYREF
  NiD3DPass *v24; // [esp+18h] [ebp-10h] BYREF
  int v25; // [esp+24h] [ebp-4h]

  v2 = NiD3DPassPool_Acquire(&v24); /*0x7b09d6*/
  v3 = *(this + 0x1C); /*0x7b09d8*/
  v4 = v3 == *v2; /*0x7b09de*/
  v25 = 0; /*0x7b09e0*/
  if ( !v4 ) /*0x7b09e8*/
  {
    if ( v3 ) /*0x7b09ec*/
    {
      v4 = v3->RefCount-- == 1; /*0x7b09ee*/
      if ( v4 ) /*0x7b09f1*/
        NiD3DPass_ReleaseToPool(v3); /*0x7b09f3*/
    }
    v5 = *v2; /*0x7b09f8*/
    v4 = *v2 == 0; /*0x7b09fa*/
    *(this + 0x1C) = *v2; /*0x7b09fc*/
    if ( !v4 ) /*0x7b09ff*/
      ++v5->RefCount; /*0x7b0a06*/
  }
  v6 = v24; /*0x7b0a10*/
  v25 = 0xFFFFFFFF; /*0x7b0a16*/
  if ( v24 ) /*0x7b0a1a*/
  {
    --v24->RefCount; /*0x7b0a1c*/
    if ( !v6->RefCount ) /*0x7b0a24*/
      NiD3DPass_ReleaseToPool(v6); /*0x7b0a29*/
  }
  for ( i = 0; i < 4; ++i ) /*0x7b0a2e*/
  {
    NiD3DTextureStagePool_Acquire(&a3); /*0x7b0a35*/
    v25 = 1; /*0x7b0a44*/
    BSShader_ConfigureTextureStageSampler(a3, i, 3, 2); /*0x7b0a48*/
    NiD3DPass_SetTextureStage(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3); /*0x7b0a5c*/
    v8 = (NiD3DTextureStage *)a3; /*0x7b0a61*/
    v25 = 0xFFFFFFFF; /*0x7b0a67*/
    if ( a3 ) /*0x7b0a6b*/
    {
      --a3[0x17]; /*0x7b0a6d*/
      if ( !v8[7].Unk08 ) /*0x7b0a75*/
        sub_772560(v8); /*0x7b0a7a*/
    }
  }
  v9 = (int)*(this + 0x1C); /*0x7b0a86*/
  v10 = (int)*(this + (_DWORD)*(this + 0x24) + 0x25); /*0x7b0a8f*/
  v11 = *(_DWORD *)(v9 + 0x58); /*0x7b0a96*/
  v12 = (_DWORD *)(v9 + 0x58); /*0x7b0a99*/
  if ( v11 != v10 ) /*0x7b0a9e*/
  {
    if ( v11 ) /*0x7b0aa2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x7b0aa8*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7b0abf*/
    }
    *v12 = v10; /*0x7b0ac3*/
    if ( v10 ) /*0x7b0ac5*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x7b0acb*/
  }
  v13 = (int)*(this + 0x1C); /*0x7b0ad1*/
  v14 = (int)*(this + (_DWORD)*(this + 0x24) + 0x28); /*0x7b0ada*/
  v15 = *(_DWORD *)(v13 + 0x44); /*0x7b0ae1*/
  v16 = (_DWORD *)(v13 + 0x44); /*0x7b0ae4*/
  if ( v15 != v14 ) /*0x7b0ae9*/
  {
    if ( v15 ) /*0x7b0aed*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x7b0af3*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x7b0b09*/
    }
    *v16 = v14; /*0x7b0b0d*/
    if ( v14 ) /*0x7b0b0f*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x7b0b15*/
  }
  v17 = (int)*(this + 0x1C); /*0x7b0b1b*/
  if ( !*(_DWORD *)(v17 + 0x30) ) /*0x7b0b1e*/
    *(_DWORD *)(v17 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7b0b29*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v17 + 0x30), 7u, 0, 0); /*0x7b0b35*/
  v18 = (int)*(this + 0x1C); /*0x7b0b3a*/
  if ( !*(_DWORD *)(v18 + 0x30) ) /*0x7b0b3d*/
    *(_DWORD *)(v18 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7b0b48*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v18 + 0x30), 0xEu, 0, 0); /*0x7b0b54*/
  v19 = (int)*(this + 0x1C); /*0x7b0b59*/
  if ( !*(_DWORD *)(v19 + 0x30) ) /*0x7b0b5c*/
    *(_DWORD *)(v19 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7b0b67*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v19 + 0x30), 0x1Bu, 0, 0); /*0x7b0b73*/
  v20 = (int)*(this + 0x1C); /*0x7b0b78*/
  if ( !*(_DWORD *)(v20 + 0x30) ) /*0x7b0b7b*/
    *(_DWORD *)(v20 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7b0b86*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v20 + 0x30), 0xFu, 0, 0); /*0x7b0b92*/
  v21 = (int)*(this + 0x1C); /*0x7b0b97*/
  if ( !*(_DWORD *)(v21 + 0x30) ) /*0x7b0b9a*/
    *(_DWORD *)(v21 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7b0ba5*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v21 + 0x30), 0xA8u, 7u, 0); /*0x7b0bb4*/
  return 1; /*0x7b0bbb*/
}
