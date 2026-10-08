void __thiscall sub_811A30(_DWORD **this)
{
  int v2; // ebp
  int v3; // ebx
  int v4; // edi
  int v5; // ebp
  int v6; // ebx
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // esi
  NiD3DTextureStage *v14; // eax
  unsigned int *a3; // [esp+14h] [ebp-10h] BYREF
  unsigned int v16; // [esp+20h] [ebp-4h]

  NiD3DTextureStagePool_Acquire(&a3); /*0x811a5c*/
  v16 = 0; /*0x811a6c*/
  BSShader_ConfigureTextureStageSampler(a3, 0, 3, 2); /*0x811a74*/
  NiD3DPass_SetTextureStage((NiD3DPass *)*(this + 0x1F), (*(this + 0x1F))[5], a3); /*0x811a88*/
  v2 = (int)*(this + 0x1F); /*0x811a8d*/
  v3 = (int)*(this + 0x23); /*0x811a90*/
  v4 = *(_DWORD *)(v2 + 0x58); /*0x811a96*/
  if ( v4 != v3 ) /*0x811a9b*/
  {
    if ( v4 ) /*0x811a9f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x811aa5*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x811abb*/
    }
    *(_DWORD *)(v2 + 0x58) = v3; /*0x811abf*/
    if ( v3 ) /*0x811ac2*/
      InterlockedIncrement((volatile LONG *)(v3 + 4)); /*0x811ac8*/
  }
  v5 = (int)*(this + 0x1F); /*0x811ace*/
  v6 = (int)*(this + 0x27); /*0x811ad1*/
  v7 = *(_DWORD *)(v5 + 0x44); /*0x811ad7*/
  if ( v7 != v6 ) /*0x811adc*/
  {
    if ( v7 ) /*0x811ae0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x811ae6*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x811afc*/
    }
    *(_DWORD *)(v5 + 0x44) = v6; /*0x811b00*/
    if ( v6 ) /*0x811b03*/
      InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x811b09*/
  }
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x811b16*/
  {
    v8 = (int)*(this + 0x1F); /*0x811b18*/
    if ( !*(_DWORD *)(v8 + 0x30) ) /*0x811b1b*/
      *(_DWORD *)(v8 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x811b26*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v8 + 0x30), 0x18, 0xA, 0); /*0x811b32*/
  }
  v9 = (int)*(this + 0x1F); /*0x811b37*/
  if ( !*(_DWORD *)(v9 + 0x30) ) /*0x811b3a*/
    *(_DWORD *)(v9 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x811b45*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v9 + 0x30), 0xA8, 7, 0); /*0x811b54*/
  v10 = (int)*(this + 0x1F); /*0x811b59*/
  if ( !*(_DWORD *)(v10 + 0x30) ) /*0x811b5c*/
    *(_DWORD *)(v10 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x811b67*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v10 + 0x30), 0x1B, 0, 0); /*0x811b73*/
  v11 = (int)*(this + 0x1F); /*0x811b78*/
  if ( !*(_DWORD *)(v11 + 0x30) ) /*0x811b7b*/
    *(_DWORD *)(v11 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x811b86*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v11 + 0x30), 7, 1, 0); /*0x811b92*/
  v12 = (int)*(this + 0x1F); /*0x811b97*/
  if ( !*(_DWORD *)(v12 + 0x30) ) /*0x811b9a*/
    *(_DWORD *)(v12 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x811ba5*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v12 + 0x30), 0x17, 4, 0); /*0x811bb1*/
  v13 = (int)*(this + 0x1F); /*0x811bb6*/
  if ( !*(_DWORD *)(v13 + 0x30) ) /*0x811bb9*/
    *(_DWORD *)(v13 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x811bc4*/
  NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v13 + 0x30), 0xE, 1, 0); /*0x811bd0*/
  v14 = (NiD3DTextureStage *)a3; /*0x811bd5*/
  v16 = 0xFFFFFFFF; /*0x811bdb*/
  if ( a3 ) /*0x811be3*/
  {
    --a3[0x17]; /*0x811be5*/
    if ( !v14[7].Unk08 ) /*0x811bee*/
      sub_772560(v14); /*0x811bf3*/
  }
}
