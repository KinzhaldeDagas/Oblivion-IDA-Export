char __thiscall sub_7DDD90(NiD3DPass **this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  unsigned int **v7; // edi
  NiD3DTextureStage *v8; // eax
  NiD3DTextureStage *v9; // ecx
  NiD3DTextureStage *v10; // eax
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // ebx
  int v19; // ebp
  _DWORD *v20; // edi
  int v21; // ebx
  int v22; // esi
  int v23; // edi
  _DWORD *v24; // esi
  unsigned int *a3; // [esp+14h] [ebp-18h] BYREF
  NiD3DPass *v27; // [esp+18h] [ebp-14h] BYREF
  NiD3DTextureStage *v28; // [esp+1Ch] [ebp-10h] BYREF
  int v29; // [esp+28h] [ebp-4h]

  if ( !*(this + 0x3E) ) /*0x7dddb9*/
  {
    v2 = NiD3DPassPool_Acquire(&v27); /*0x7dddd4*/
    v3 = *(this + 0x3E); /*0x7dddd6*/
    v4 = v3 == *v2; /*0x7ddddf*/
    v29 = 0; /*0x7ddde1*/
    if ( !v4 ) /*0x7ddde9*/
    {
      if ( v3 ) /*0x7ddded*/
      {
        v4 = v3->RefCount-- == 1; /*0x7dddef*/
        if ( v4 ) /*0x7dddf2*/
          NiD3DPass_ReleaseToPool(v3); /*0x7dddf4*/
      }
      v5 = *v2; /*0x7dddf9*/
      v4 = *v2 == 0; /*0x7dddfb*/
      *(this + 0x3E) = *v2; /*0x7dddfd*/
      if ( !v4 ) /*0x7dde03*/
        ++v5->RefCount; /*0x7dde05*/
    }
    v6 = v27; /*0x7dde09*/
    v29 = 0xFFFFFFFF; /*0x7dde0f*/
    if ( v27 ) /*0x7dde13*/
    {
      --v27->RefCount; /*0x7dde15*/
      if ( !v6->RefCount ) /*0x7dde1d*/
        NiD3DPass_ReleaseToPool(v6); /*0x7dde22*/
    }
    NiD3DTextureStagePool_Acquire(&a3); /*0x7dde2c*/
    v29 = 1; /*0x7dde41*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 3, 2); /*0x7dde45*/
    NiD3DPass_SetTextureStage(*(this + 0x3E), (*(this + 0x3E))->CurrentStage, a3); /*0x7dde5c*/
    v7 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v28); /*0x7dde6e*/
    v8 = (NiD3DTextureStage *)a3; /*0x7dde70*/
    v4 = a3 == *v7; /*0x7dde74*/
    LOBYTE(v29) = 2; /*0x7dde76*/
    if ( !v4 ) /*0x7dde7b*/
    {
      if ( a3 ) /*0x7dde7f*/
      {
        --a3[0x17]; /*0x7dde81*/
        if ( !v8[7].Unk08 ) /*0x7dde89*/
          sub_772560(v8); /*0x7dde8e*/
      }
      v8 = (NiD3DTextureStage *)*v7; /*0x7dde93*/
      a3 = *v7; /*0x7dde97*/
      if ( a3 ) /*0x7dde9b*/
      {
        ++v8[7].Unk08; /*0x7dde9d*/
        v8 = (NiD3DTextureStage *)a3; /*0x7ddea0*/
      }
    }
    v9 = v28; /*0x7ddea4*/
    LOBYTE(v29) = 1; /*0x7ddeaa*/
    if ( v28 ) /*0x7ddeaf*/
    {
      --v28[7].Unk08; /*0x7ddeb1*/
      if ( !v9[7].Unk08 ) /*0x7ddeb4*/
        sub_772560(v9); /*0x7ddebd*/
      v8 = (NiD3DTextureStage *)a3; /*0x7ddec2*/
    }
    BSShader_ConfigureTextureStageSampler(v8, 1, 3, 2); /*0x7ddecc*/
    NiD3DPass_SetTextureStage(*(this + 0x3E), (*(this + 0x3E))->CurrentStage, a3); /*0x7ddee3*/
    v10 = (NiD3DTextureStage *)a3; /*0x7ddee8*/
    v29 = 0xFFFFFFFF; /*0x7ddeee*/
    if ( a3 ) /*0x7ddef2*/
    {
      --a3[0x17]; /*0x7ddef4*/
      if ( !v10[7].Unk08 ) /*0x7ddefc*/
        sub_772560(v10); /*0x7ddf01*/
    }
  }
  v11 = (int)*(this + 0x3E); /*0x7ddf06*/
  if ( !*(_DWORD *)(v11 + 0x30) ) /*0x7ddf0c*/
    *(_DWORD *)(v11 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ddf17*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v11 + 0x30), 7u, 0, 0); /*0x7ddf23*/
  v12 = (int)*(this + 0x3E); /*0x7ddf28*/
  if ( !*(_DWORD *)(v12 + 0x30) ) /*0x7ddf2e*/
    *(_DWORD *)(v12 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ddf39*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v12 + 0x30), 0xEu, 0, 0); /*0x7ddf45*/
  v13 = (int)*(this + 0x3E); /*0x7ddf4a*/
  if ( !*(_DWORD *)(v13 + 0x30) ) /*0x7ddf50*/
    *(_DWORD *)(v13 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ddf5b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v13 + 0x30), 0x1Bu, 0, 0); /*0x7ddf67*/
  v14 = (int)*(this + 0x3E); /*0x7ddf6c*/
  if ( !*(_DWORD *)(v14 + 0x30) ) /*0x7ddf72*/
    *(_DWORD *)(v14 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ddf7d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v14 + 0x30), 0xFu, 0, 0); /*0x7ddf89*/
  v15 = (int)*(this + 0x3E); /*0x7ddf8e*/
  if ( !*(_DWORD *)(v15 + 0x30) ) /*0x7ddf94*/
    *(_DWORD *)(v15 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ddf9f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v15 + 0x30), 0xA8u, 0xFu, 0); /*0x7ddfae*/
  v16 = (int)*(this + 0x3E); /*0x7ddfb3*/
  if ( !*(_DWORD *)(v16 + 0x30) ) /*0x7ddfb9*/
    *(_DWORD *)(v16 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7ddfc4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v16 + 0x30), 0x16u, 1u, 0); /*0x7ddfd0*/
  v17 = (int)*(this + 0x3E); /*0x7ddfd5*/
  v18 = (int)*(this + 0x2D); /*0x7ddfdb*/
  v19 = *(_DWORD *)(v17 + 0x58); /*0x7ddfe1*/
  v20 = (_DWORD *)(v17 + 0x58); /*0x7ddfe4*/
  if ( v19 != v18 ) /*0x7ddfe9*/
  {
    if ( v19 ) /*0x7ddfed*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x7ddff3*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x7de00a*/
    }
    *v20 = v18; /*0x7de00e*/
    if ( v18 ) /*0x7de010*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x7de016*/
  }
  v21 = (int)*(this + 0x35); /*0x7de01c*/
  v22 = (int)*(this + 0x3E); /*0x7de022*/
  v23 = *(_DWORD *)(v22 + 0x44); /*0x7de028*/
  v24 = (_DWORD *)(v22 + 0x44); /*0x7de02b*/
  if ( v23 != v21 ) /*0x7de030*/
  {
    if ( v23 ) /*0x7de034*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x7de03a*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x7de050*/
    }
    *v24 = v21; /*0x7de054*/
    if ( v21 ) /*0x7de056*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x7de05c*/
  }
  return 1; /*0x7de064*/
}
