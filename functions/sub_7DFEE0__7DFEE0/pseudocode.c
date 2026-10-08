char __thiscall sub_7DFEE0(NiD3DPass **this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  unsigned int **v7; // edi
  NiD3DTextureStage *v8; // eax
  NiD3DTextureStage *v9; // ecx
  unsigned int **v10; // edi
  NiD3DTextureStage *v11; // eax
  NiD3DTextureStage *v12; // ecx
  NiD3DTextureStage *v13; // eax
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // ebx
  int v21; // ebp
  _DWORD *v22; // edi
  int v23; // ebx
  int v24; // esi
  int v25; // edi
  _DWORD *v26; // esi
  unsigned int *a3; // [esp+14h] [ebp-18h] BYREF
  NiD3DPass *v29; // [esp+18h] [ebp-14h] BYREF
  NiD3DTextureStage *v30; // [esp+1Ch] [ebp-10h] BYREF
  int v31; // [esp+28h] [ebp-4h]

  if ( !*(this + 0x35) ) /*0x7dff09*/
  {
    v2 = NiD3DPassPool_Acquire(&v29); /*0x7dff24*/
    v3 = *(this + 0x35); /*0x7dff26*/
    v4 = v3 == *v2; /*0x7dff2f*/
    v31 = 0; /*0x7dff31*/
    if ( !v4 ) /*0x7dff39*/
    {
      if ( v3 ) /*0x7dff3d*/
      {
        v4 = v3->RefCount-- == 1; /*0x7dff3f*/
        if ( v4 ) /*0x7dff42*/
          NiD3DPass_ReleaseToPool(v3); /*0x7dff44*/
      }
      v5 = *v2; /*0x7dff49*/
      v4 = *v2 == 0; /*0x7dff4b*/
      *(this + 0x35) = *v2; /*0x7dff4d*/
      if ( !v4 ) /*0x7dff53*/
        ++v5->RefCount; /*0x7dff5a*/
    }
    v6 = v29; /*0x7dff64*/
    v31 = 0xFFFFFFFF; /*0x7dff6a*/
    if ( v29 ) /*0x7dff6e*/
    {
      --v29->RefCount; /*0x7dff70*/
      if ( !v6->RefCount ) /*0x7dff78*/
        NiD3DPass_ReleaseToPool(v6); /*0x7dff7d*/
    }
    NiD3DTextureStagePool_Acquire(&a3); /*0x7dff87*/
    v31 = 1; /*0x7dff97*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 3, 2); /*0x7dff9b*/
    NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)a3, 0); /*0x7dffa9*/
    NiD3DPass_SetTextureStage(*(this + 0x35), (*(this + 0x35))->CurrentStage, a3); /*0x7dffbd*/
    v7 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v29); /*0x7dffcf*/
    v8 = (NiD3DTextureStage *)a3; /*0x7dffd1*/
    v4 = a3 == *v7; /*0x7dffd5*/
    LOBYTE(v31) = 2; /*0x7dffd7*/
    if ( !v4 ) /*0x7dffdc*/
    {
      if ( a3 ) /*0x7dffe0*/
      {
        --a3[0x17]; /*0x7dffe2*/
        if ( !v8[7].Unk08 ) /*0x7dffea*/
          sub_772560(v8); /*0x7dffef*/
      }
      v8 = (NiD3DTextureStage *)*v7; /*0x7dfff4*/
      a3 = *v7; /*0x7dfff8*/
      if ( a3 ) /*0x7dfffc*/
      {
        ++v8[7].Unk08; /*0x7dfffe*/
        v8 = (NiD3DTextureStage *)a3; /*0x7e0001*/
      }
    }
    v9 = (NiD3DTextureStage *)v29; /*0x7e0005*/
    LOBYTE(v31) = 1; /*0x7e000b*/
    if ( v29 ) /*0x7e0010*/
    {
      --*(_DWORD *)&v29->SoftwareVP; /*0x7e0012*/
      if ( !v9[7].Unk08 ) /*0x7e0015*/
        sub_772560(v9); /*0x7e001e*/
      v8 = (NiD3DTextureStage *)a3; /*0x7e0023*/
    }
    BSShader_ConfigureTextureStageSampler(v8, 1, 3, 2); /*0x7e002d*/
    NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)a3, 0); /*0x7e003b*/
    NiD3DPass_SetTextureStage(*(this + 0x35), (*(this + 0x35))->CurrentStage, a3); /*0x7e004f*/
    v10 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v30); /*0x7e0061*/
    v11 = (NiD3DTextureStage *)a3; /*0x7e0063*/
    v4 = a3 == *v10; /*0x7e0067*/
    LOBYTE(v31) = 3; /*0x7e0069*/
    if ( !v4 ) /*0x7e006e*/
    {
      if ( a3 ) /*0x7e0072*/
      {
        --a3[0x17]; /*0x7e0074*/
        if ( !v11[7].Unk08 ) /*0x7e007c*/
          sub_772560(v11); /*0x7e0081*/
      }
      v11 = (NiD3DTextureStage *)*v10; /*0x7e0086*/
      a3 = *v10; /*0x7e008a*/
      if ( a3 ) /*0x7e008e*/
      {
        ++v11[7].Unk08; /*0x7e0090*/
        v11 = (NiD3DTextureStage *)a3; /*0x7e0093*/
      }
    }
    v12 = v30; /*0x7e0097*/
    LOBYTE(v31) = 1; /*0x7e009d*/
    if ( v30 ) /*0x7e00a2*/
    {
      --v30[7].Unk08; /*0x7e00a4*/
      if ( !v12[7].Unk08 ) /*0x7e00a7*/
        sub_772560(v12); /*0x7e00b0*/
      v11 = (NiD3DTextureStage *)a3; /*0x7e00b5*/
    }
    BSShader_ConfigureTextureStageSampler(v11, 2, 3, 2); /*0x7e00c0*/
    NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)a3, 0); /*0x7e00ce*/
    NiD3DPass_SetTextureStage(*(this + 0x35), (*(this + 0x35))->CurrentStage, a3); /*0x7e00e2*/
    v13 = (NiD3DTextureStage *)a3; /*0x7e00e7*/
    v31 = 0xFFFFFFFF; /*0x7e00ed*/
    if ( a3 ) /*0x7e00f1*/
    {
      --a3[0x17]; /*0x7e00f3*/
      if ( !v13[7].Unk08 ) /*0x7e00fb*/
        sub_772560(v13); /*0x7e0100*/
    }
  }
  v14 = (int)*(this + 0x35); /*0x7e0105*/
  if ( !*(_DWORD *)(v14 + 0x30) ) /*0x7e010b*/
    *(_DWORD *)(v14 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e0116*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v14 + 0x30), 7u, 0, 0); /*0x7e0122*/
  v15 = (int)*(this + 0x35); /*0x7e0127*/
  if ( !*(_DWORD *)(v15 + 0x30) ) /*0x7e012d*/
    *(_DWORD *)(v15 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e0138*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v15 + 0x30), 0xEu, 0, 0); /*0x7e0144*/
  v16 = (int)*(this + 0x35); /*0x7e0149*/
  if ( !*(_DWORD *)(v16 + 0x30) ) /*0x7e014f*/
    *(_DWORD *)(v16 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e015a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v16 + 0x30), 0x1Bu, 0, 0); /*0x7e0166*/
  v17 = (int)*(this + 0x35); /*0x7e016b*/
  if ( !*(_DWORD *)(v17 + 0x30) ) /*0x7e0171*/
    *(_DWORD *)(v17 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e017c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v17 + 0x30), 0xFu, 0, 0); /*0x7e0188*/
  v18 = (int)*(this + 0x35); /*0x7e018d*/
  if ( !*(_DWORD *)(v18 + 0x30) ) /*0x7e0193*/
    *(_DWORD *)(v18 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7e019e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v18 + 0x30), 0xA8u, 0xFu, 0); /*0x7e01ad*/
  v19 = (int)*(this + 0x35); /*0x7e01b2*/
  v20 = (int)*(this + 0x2C); /*0x7e01b8*/
  v21 = *(_DWORD *)(v19 + 0x58); /*0x7e01be*/
  v22 = (_DWORD *)(v19 + 0x58); /*0x7e01c1*/
  if ( v21 != v20 ) /*0x7e01c6*/
  {
    if ( v21 ) /*0x7e01ca*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) ) /*0x7e01d0*/
        (**(void (__thiscall ***)(int, int))v21)(v21, 1); /*0x7e01e7*/
    }
    *v22 = v20; /*0x7e01eb*/
    if ( v20 ) /*0x7e01ed*/
      InterlockedIncrement((volatile LONG *)(v20 + 4)); /*0x7e01f3*/
  }
  v23 = (int)*(this + 0x2D); /*0x7e01f9*/
  v24 = (int)*(this + 0x35); /*0x7e01ff*/
  v25 = *(_DWORD *)(v24 + 0x44); /*0x7e0205*/
  v26 = (_DWORD *)(v24 + 0x44); /*0x7e0208*/
  if ( v25 != v23 ) /*0x7e020d*/
  {
    if ( v25 ) /*0x7e0211*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) ) /*0x7e0217*/
        (**(void (__thiscall ***)(int, int))v25)(v25, 1); /*0x7e022d*/
    }
    *v26 = v23; /*0x7e0231*/
    if ( v23 ) /*0x7e0233*/
      InterlockedIncrement((volatile LONG *)(v23 + 4)); /*0x7e0239*/
  }
  return 1; /*0x7e0241*/
}
