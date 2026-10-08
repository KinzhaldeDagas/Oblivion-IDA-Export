// BloodOnDeath decode 2026-05-30: configures GeometryDecalShader passes. More blood trails come from more Decal_ProjectToSceneGeometry calls and longer lifetimes upstream.
void __thiscall sub_805740(NiD3DPass **this)
{
  NiD3DPass *v1; // esi
  NiD3DTextureStage *v2; // edi
  NiD3DPass *v3; // eax
  NiD3DTextureStage *v4; // eax
  NiD3DTextureStage *v5; // eax
  NiD3DTextureStage **v6; // ebx
  bool v7; // zf
  NiD3DTextureStage *v8; // eax
  volatile LONG *v9; // ebx
  NiD3DVertexShader *VertexShader; // ebp
  volatile LONG *v11; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  NiD3DTextureStage **v13; // ebp
  NiD3DTextureStage *v14; // eax
  NiD3DTextureStage **v15; // ebp
  NiD3DTextureStage *v16; // eax
  volatile LONG *v17; // ebx
  NiD3DVertexShader *v18; // ebp
  volatile LONG *v19; // ebx
  NiD3DPixelShader *v20; // ebp
  NiD3DTextureStage *v22; // [esp+20h] [ebp-10h] BYREF
  unsigned int v23; // [esp+2Ch] [ebp-4h]

  v1 = 0; /*0x80576b*/
  v2 = 0; /*0x805771*/
  v23 = 0; /*0x805773*/
  v3 = *(this + 0x1F);                          // BloodOnDeath decode: first geometry-decal pass binds non-skinned VS/PS programs. /*0x80577b*/
  LOBYTE(v23) = 1; /*0x805785*/
  if ( v3 ) /*0x80578a*/
  {
    v1 = v3; /*0x80578c*/
    ++v3->RefCount; /*0x80578e*/
  }
  if ( v1->StageCount < 2 ) /*0x80579b*/
  {
    v4 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v22); /*0x8057ae*/
    if ( v4 ) /*0x8057b2*/
    {
      v2 = v4; /*0x8057b4*/
      ++v4[7].Unk08; /*0x8057b6*/
    }
    v5 = v22; /*0x8057bd*/
    LOBYTE(v23) = 1; /*0x8057c3*/
    if ( v22 ) /*0x8057c8*/
    {
      --v22[7].Unk08; /*0x8057ca*/
      if ( !v5[7].Unk08 ) /*0x8057d3*/
        sub_772560(v5); /*0x8057d8*/
    }
    BSShader_ConfigureTextureStageSampler((int)v2, 0, 1, 2); /*0x8057e3*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x8057f2*/
    v6 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v22); /*0x805804*/
    v7 = v2 == *v6; /*0x805806*/
    LOBYTE(v23) = 3; /*0x805808*/
    if ( !v7 ) /*0x80580d*/
    {
      if ( v2 ) /*0x805811*/
      {
        v7 = v2[7].Unk08-- == 1; /*0x805813*/
        if ( v7 ) /*0x805817*/
          sub_772560(v2); /*0x80581b*/
      }
      v2 = *v6; /*0x805820*/
      if ( *v6 ) /*0x805824*/
        ++v2[7].Unk08; /*0x80582a*/
    }
    v8 = v22; /*0x80582d*/
    LOBYTE(v23) = 1; /*0x805833*/
    if ( v22 ) /*0x805838*/
    {
      --v22[7].Unk08; /*0x80583a*/
      if ( !v8[7].Unk08 ) /*0x805843*/
        sub_772560(v8); /*0x805848*/
    }
    BSShader_ConfigureTextureStageSampler((int)v2, 1, 3, 2); /*0x805853*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x805862*/
  }
  v9 = (volatile LONG *)*(this + 0x21); /*0x80586b*/
  VertexShader = v1->VertexShader; /*0x805871*/
  if ( VertexShader != (NiD3DVertexShader *)v9 ) /*0x805876*/
  {
    if ( VertexShader ) /*0x80587a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) ) /*0x805880*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1); /*0x805897*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v9; /*0x80589b*/
    if ( v9 ) /*0x80589e*/
      InterlockedIncrement(v9 + 1); /*0x8058a4*/
  }
  v11 = (volatile LONG *)*(this + 0x23); /*0x8058ae*/
  PixelShader = v1->PixelShader; /*0x8058b4*/
  if ( PixelShader != (NiD3DPixelShader *)v11 ) /*0x8058b9*/
  {
    if ( PixelShader ) /*0x8058bd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x8058c3*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x8058da*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v11; /*0x8058de*/
    if ( v11 ) /*0x8058e1*/
      InterlockedIncrement(v11 + 1); /*0x8058e7*/
  }
  if ( !v1->RenderStateGroup ) /*0x8058ed*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8058f8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0); /*0x805907*/
  if ( !v1->RenderStateGroup ) /*0x80590c*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x805917*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0); /*0x805923*/
  if ( !v1->RenderStateGroup ) /*0x805928*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x805933*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x13, 9, 0); /*0x80593f*/
  if ( !v1->RenderStateGroup ) /*0x805944*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x80594f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x14, 6, 0); /*0x80595b*/
  if ( !v1->RenderStateGroup ) /*0x805960*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x80596b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 1, 0); /*0x805977*/
  if ( !v1->RenderStateGroup ) /*0x80597c*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x805987*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x19, 5, 0); /*0x805993*/
  if ( !v1->RenderStateGroup ) /*0x805998*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8059a3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x18, 0, 0); /*0x8059af*/
  if ( !v1->RenderStateGroup ) /*0x8059b4*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8059bf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x8059cb*/
  if ( !v1->RenderStateGroup ) /*0x8059d0*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8059db*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x8059e7*/
  if ( !v1->RenderStateGroup ) /*0x8059ec*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8059f7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0); /*0x805a03*/
  if ( !v1->RenderStateGroup ) /*0x805a08*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x805a13*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x805a1f*/
  if ( v1 != *(this + 0x20) )                   // BloodOnDeath decode: switch to second geometry-decal pass, which binds skinned VS/PS programs. /*0x805a31*/
  {
    v7 = v1->RefCount-- == 1; /*0x805a33*/
    if ( v7 ) /*0x805a36*/
      NiD3DPass_ReleaseToPool(v1); /*0x805a3a*/
    v1 = *(this + 0x20); /*0x805a3f*/
    if ( v1 ) /*0x805a4b*/
      ++v1->RefCount; /*0x805a4d*/
  }
  if ( v1->StageCount < 2 ) /*0x805a55*/
  {
    v13 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v22); /*0x805a68*/
    v7 = v2 == *v13; /*0x805a6a*/
    LOBYTE(v23) = 4; /*0x805a6d*/
    if ( !v7 ) /*0x805a72*/
    {
      if ( v2 ) /*0x805a76*/
      {
        v7 = v2[7].Unk08-- == 1; /*0x805a78*/
        if ( v7 ) /*0x805a7b*/
          sub_772560(v2); /*0x805a7f*/
      }
      v2 = *v13; /*0x805a84*/
      if ( *v13 ) /*0x805a89*/
        ++v2[7].Unk08; /*0x805a8f*/
    }
    v14 = v22; /*0x805a93*/
    LOBYTE(v23) = 1; /*0x805a99*/
    if ( v22 ) /*0x805a9e*/
    {
      --v22[7].Unk08; /*0x805aa0*/
      if ( !v14[7].Unk08 ) /*0x805aa8*/
        sub_772560(v14); /*0x805aad*/
    }
    BSShader_ConfigureTextureStageSampler((int)v2, 0, 1, 2); /*0x805ab9*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x805ac8*/
    v15 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v22); /*0x805ada*/
    v7 = v2 == *v15; /*0x805adc*/
    LOBYTE(v23) = 5; /*0x805adf*/
    if ( !v7 ) /*0x805ae4*/
    {
      if ( v2 ) /*0x805ae8*/
      {
        v7 = v2[7].Unk08-- == 1; /*0x805aea*/
        if ( v7 ) /*0x805aed*/
          sub_772560(v2); /*0x805af1*/
      }
      v2 = *v15; /*0x805af6*/
      if ( *v15 ) /*0x805afb*/
        ++v2[7].Unk08; /*0x805b01*/
    }
    v16 = v22; /*0x805b05*/
    LOBYTE(v23) = 1; /*0x805b0b*/
    if ( v22 ) /*0x805b10*/
    {
      --v22[7].Unk08; /*0x805b12*/
      if ( !v16[7].Unk08 ) /*0x805b1a*/
        sub_772560(v16); /*0x805b1f*/
    }
    BSShader_ConfigureTextureStageSampler((int)v2, 1, 3, 2); /*0x805b2b*/
    NiD3DPass_SetTextureStage(v1, v1->CurrentStage, &v2->Stage); /*0x805b3a*/
  }
  v17 = (volatile LONG *)*(this + 0x22); /*0x805b43*/
  v18 = v1->VertexShader; /*0x805b49*/
  if ( v18 != (NiD3DVertexShader *)v17 ) /*0x805b4e*/
  {
    if ( v18 ) /*0x805b52*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v18 + 1) ) /*0x805b58*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v18)(v18, 1); /*0x805b6f*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v17; /*0x805b73*/
    if ( v17 ) /*0x805b76*/
      InterlockedIncrement(v17 + 1); /*0x805b7c*/
  }
  v19 = (volatile LONG *)*(this + 0x24); /*0x805b86*/
  v20 = v1->PixelShader; /*0x805b8c*/
  if ( v20 != (NiD3DPixelShader *)v19 ) /*0x805b91*/
  {
    if ( v20 ) /*0x805b95*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v20 + 1) ) /*0x805b9b*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v20)(v20, 1); /*0x805bb2*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v19; /*0x805bb6*/
    if ( v19 ) /*0x805bb9*/
      InterlockedIncrement(v19 + 1); /*0x805bbf*/
  }
  if ( !v1->RenderStateGroup ) /*0x805bc5*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x805bd0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0); /*0x805bdf*/
  if ( !v1->RenderStateGroup ) /*0x805be4*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x805bef*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0); /*0x805bfb*/
  if ( !v1->RenderStateGroup ) /*0x805c00*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x805c0b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x13, 9, 0); /*0x805c17*/
  if ( !v1->RenderStateGroup ) /*0x805c1c*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x805c27*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x14, 6, 0); /*0x805c33*/
  if ( !v1->RenderStateGroup ) /*0x805c38*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x805c43*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 1, 0); /*0x805c4f*/
  if ( !v1->RenderStateGroup ) /*0x805c54*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x805c5f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x19, 5, 0); /*0x805c6b*/
  if ( !v1->RenderStateGroup ) /*0x805c70*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x805c7b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x18, 0, 0); /*0x805c87*/
  if ( !v1->RenderStateGroup ) /*0x805c8c*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x805c97*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x805ca3*/
  if ( !v1->RenderStateGroup ) /*0x805ca8*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x805cb3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x805cbf*/
  if ( !v1->RenderStateGroup ) /*0x805cc4*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x805ccf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0); /*0x805cdb*/
  if ( !v1->RenderStateGroup ) /*0x805ce0*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x805ceb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x805cf7*/
  LOBYTE(v23) = 0; /*0x805d01*/
  if ( v2 ) /*0x805d06*/
  {
    v7 = v2[7].Unk08-- == 1; /*0x805d08*/
    if ( v7 ) /*0x805d0b*/
      sub_772560(v2); /*0x805d0f*/
  }
  v7 = v1->RefCount-- == 1; /*0x805d14*/
  v23 = 0xFFFFFFFF; /*0x805d17*/
  if ( v7 ) /*0x805d1b*/
    NiD3DPass_ReleaseToPool(v1); /*0x805d1f*/
}
