// MoonSugarEffect decode: RefractionShader pass constructs two texture stages and native image-space render-state disables, confirming a faithful Moon Sugar two-sampler path should own a second stage in its pass.
char __thiscall sub_800900(RefractionShader *this)
{
  NiD3DTextureStage *v2; // esi
  NiD3DPass **v3; // ebp
  NiD3DPass *v4; // ecx
  bool v5; // zf
  NiD3DPass *v6; // eax
  NiD3DPass *v7; // eax
  int i; // ebp
  NiD3DTextureStage **v9; // ebx
  NiD3DTextureStage *v10; // eax
  UInt32 v11; // ebx
  UInt32 v12; // ebp
  UInt32 v13; // ebp
  UInt32 v14; // ebp
  UInt32 v15; // ebp
  NiD3DPass *v17; // [esp+14h] [ebp-14h] BYREF
  NiD3DTextureStage *v18; // [esp+18h] [ebp-10h]
  unsigned int v19; // [esp+24h] [ebp-4h]

  v2 = 0; /*0x800929*/
  v18 = 0; /*0x80092b*/
  v19 = 0; /*0x800934*/
  v3 = NiD3DPassPool_Acquire(&v17); /*0x800940*/
  v4 = (NiD3DPass *)this->Unk90[1]; /*0x800942*/
  v5 = v4 == *v3; /*0x800948*/
  LOBYTE(v19) = 1; /*0x80094b*/
  if ( !v5 ) /*0x800950*/
  {
    if ( v4 ) /*0x800954*/
    {
      v5 = v4->RefCount-- == 1; /*0x800956*/
      if ( v5 ) /*0x80095a*/
        NiD3DPass_ReleaseToPool(v4); /*0x80095c*/
    }
    v6 = *v3; /*0x800961*/
    v5 = *v3 == 0; /*0x800964*/
    this->Unk90[1] = (UInt32)*v3; /*0x800966*/
    if ( !v5 ) /*0x80096c*/
      ++v6->RefCount; /*0x80096e*/
  }
  v7 = v17; /*0x800972*/
  LOBYTE(v19) = 0; /*0x800978*/
  if ( v17 ) /*0x80097d*/
  {
    --v17->RefCount; /*0x80097f*/
    if ( !v7->RefCount ) /*0x800988*/
      NiD3DPass_ReleaseToPool(v7); /*0x80098c*/
  }
  for ( i = 0; i < 2; ++i ) /*0x800991*/
  {
    v9 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v17); /*0x8009a0*/
    v5 = v2 == *v9; /*0x8009a2*/
    LOBYTE(v19) = 2; /*0x8009a4*/
    if ( !v5 ) /*0x8009a9*/
    {
      if ( v2 ) /*0x8009ad*/
      {
        v5 = v2[7].Unk08-- == 1; /*0x8009af*/
        if ( v5 ) /*0x8009b3*/
          sub_772560(v2); /*0x8009b7*/
      }
      v2 = *v9; /*0x8009bc*/
      v18 = *v9; /*0x8009c0*/
      if ( v18 ) /*0x8009c4*/
        ++v2[7].Unk08; /*0x8009c6*/
    }
    v10 = (NiD3DTextureStage *)v17; /*0x8009ca*/
    LOBYTE(v19) = 0; /*0x8009d0*/
    if ( v17 ) /*0x8009d5*/
    {
      --*(_DWORD *)&v17->SoftwareVP; /*0x8009d7*/
      if ( !v10[7].Unk08 ) /*0x8009e0*/
        sub_772560(v10); /*0x8009e5*/
    }
    BSShader_ConfigureTextureStageSampler(v2, i, 3, 2); /*0x8009f0*/
    NiD3DTextureStage_ApplyFilterPreset(v2, 0); /*0x8009fc*/
    NiD3DPass_SetTextureStage((NiD3DPass *)this->Unk90[1], *(_DWORD *)(this->Unk90[1] + 0x14), &v2->Stage); /*0x800a0c*/
  }
  v11 = this->Unk90[1]; /*0x800a1d*/
  if ( !*(_DWORD *)(v11 + 0x30) ) /*0x800a23*/
    *(_DWORD *)(v11 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x800a2e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v11 + 0x30), 7u, 0, 0); /*0x800a3a*/
  v12 = this->Unk90[1]; /*0x800a3f*/
  if ( !*(_DWORD *)(v12 + 0x30) ) /*0x800a45*/
    *(_DWORD *)(v12 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x800a50*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v12 + 0x30), 0xEu, 0, 0); /*0x800a5c*/
  v13 = this->Unk90[1]; /*0x800a61*/
  if ( !*(_DWORD *)(v13 + 0x30) ) /*0x800a67*/
    *(_DWORD *)(v13 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x800a72*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v13 + 0x30), 0x1Bu, 0, 0); /*0x800a7e*/
  v14 = this->Unk90[1]; /*0x800a83*/
  if ( !*(_DWORD *)(v14 + 0x30) ) /*0x800a89*/
    *(_DWORD *)(v14 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x800a94*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v14 + 0x30), 0xFu, 0, 0);// MoonSugarEffect decode: Refraction pass setup creates two texture stages, confirming native image-space supports a second sampler when shader class owns/binds it. /*0x800aa0*/
  v15 = this->Unk90[1]; /*0x800aa5*/
  if ( !*(_DWORD *)(v15 + 0x30) ) /*0x800aab*/
    *(_DWORD *)(v15 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x800ab6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v15 + 0x30), 0xA8u, 0xFu, 0); /*0x800ac5*/
  this->super.__vftable[1].super.super.super.super.No08((NiShader *)this); /*0x800ad4*/
  v19 = 0xFFFFFFFF; /*0x800adb*/
  if ( v2 ) /*0x800adf*/
  {
    v5 = v2[7].Unk08-- == 1; /*0x800ae1*/
    if ( v5 ) /*0x800ae4*/
      sub_772560(v2); /*0x800ae8*/
  }
  return 1; /*0x800aef*/
}
