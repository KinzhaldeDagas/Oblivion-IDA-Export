void sub_820910()
{
  NiD3DPass *v0; // esi
  NiD3DVertexShader *VertexShader; // edi
  int v2; // ebp
  NiD3DPixelShader *PixelShader; // edi
  int v4; // ebp
  bool v5; // zf
  NiD3DVertexShader *v6; // edi
  int v7; // ebp
  NiD3DPixelShader *v8; // edi
  int v9; // ebp

  v0 = 0; /*0x820937*/
  if ( unk_B455A0[0] ) /*0x820947*/
  {
    v0 = (NiD3DPass *)unk_B455A0[0]; /*0x820955*/
    ++*(_DWORD *)(unk_B455A0[0] + 0x60); /*0x82095f*/
  }
  VertexShader = v0->VertexShader; /*0x820968*/
  v2 = unk_B45290[0]; /*0x82096d*/
  if ( VertexShader != (NiD3DVertexShader *)unk_B45290[0] ) /*0x82096f*/
  {
    if ( VertexShader ) /*0x820973*/
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) ) /*0x820979*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1); /*0x82098f*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v2; /*0x820993*/
    if ( v2 ) /*0x820996*/
      InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x82099c*/
  }
  PixelShader = v0->PixelShader; /*0x8209a7*/
  v4 = unk_B45088[0]; /*0x8209ac*/
  if ( PixelShader != (NiD3DPixelShader *)unk_B45088[0] ) /*0x8209ae*/
  {
    if ( PixelShader ) /*0x8209b2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x8209b8*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x8209ce*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v4; /*0x8209d2*/
    if ( v4 ) /*0x8209d5*/
      InterlockedIncrement((volatile LONG *)(v4 + 4)); /*0x8209db*/
  }
  if ( !v0->RenderStateGroup ) /*0x8209e1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8209eb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x8209f5*/
  if ( !v0->RenderStateGroup ) /*0x8209fa*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x820a04*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x820a0e*/
  if ( !v0->RenderStateGroup ) /*0x820a13*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x820a1d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x820a28*/
  if ( !v0->RenderStateGroup ) /*0x820a2d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x820a37*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x820a42*/
  if ( !v0->RenderStateGroup ) /*0x820a47*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x820a51*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x820a5c*/
  if ( !v0->RenderStateGroup ) /*0x820a61*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x820a6b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x820a75*/
  v5 = v0 == (NiD3DPass *)unk_B455A8; /*0x820a7a*/
  unk_B43B20[0] = 2; /*0x820a80*/
  unk_B441B0[0] = 0; /*0x820a8a*/
  if ( !v5 ) /*0x820a90*/
  {
    v5 = v0->RefCount-- == 1; /*0x820a92*/
    if ( v5 ) /*0x820a96*/
      NiD3DPass_ReleaseToPool(v0); /*0x820a9a*/
    v0 = (NiD3DPass *)unk_B455A8; /*0x820a9f*/
    if ( unk_B455A8 ) /*0x820aa7*/
      ++v0->RefCount; /*0x820aad*/
  }
  v6 = v0->VertexShader; /*0x820ab6*/
  v7 = unk_B4530C[0]; /*0x820abb*/
  if ( v6 != (NiD3DVertexShader *)unk_B4530C[0] ) /*0x820abd*/
  {
    if ( v6 ) /*0x820ac1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v6 + 1) ) /*0x820ac7*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v6)(v6, 1); /*0x820add*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v7; /*0x820ae1*/
    if ( v7 ) /*0x820ae4*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x820aea*/
  }
  v8 = v0->PixelShader; /*0x820af5*/
  v9 = unk_B45088[0]; /*0x820afa*/
  if ( v8 != (NiD3DPixelShader *)unk_B45088[0] ) /*0x820afc*/
  {
    if ( v8 ) /*0x820b00*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v8 + 1) ) /*0x820b06*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v8)(v8, 1); /*0x820b1c*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v9; /*0x820b20*/
    if ( v9 ) /*0x820b23*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x820b29*/
  }
  if ( !v0->RenderStateGroup ) /*0x820b2f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x820b39*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x820b43*/
  if ( !v0->RenderStateGroup ) /*0x820b48*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x820b52*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x820b5c*/
  if ( !v0->RenderStateGroup ) /*0x820b61*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x820b6b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x820b76*/
  if ( !v0->RenderStateGroup ) /*0x820b7b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x820b85*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x820b90*/
  if ( !v0->RenderStateGroup ) /*0x820b95*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x820b9f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x820baa*/
  if ( !v0->RenderStateGroup ) /*0x820baf*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x820bb9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x820bc3*/
  unk_B43B28 = 0x40008; /*0x820bcb*/
  unk_B441B8 = 0; /*0x820bd5*/
  v5 = v0->RefCount-- == 1; /*0x820bdb*/
  if ( v5 ) /*0x820be2*/
    NiD3DPass_ReleaseToPool(v0); /*0x820be6*/
}
