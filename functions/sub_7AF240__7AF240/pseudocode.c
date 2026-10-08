char __thiscall sub_7AF240(NiD3DPass **this)
{
  NiD3DTextureStage *v2; // esi
  NiD3DPass **v3; // ebp
  NiD3DPass *v4; // ecx
  bool v5; // zf
  NiD3DPass *v6; // eax
  NiD3DPass *v7; // eax
  NiD3DTextureStage *v8; // eax
  NiD3DTextureStage *v9; // eax
  NiD3DTextureStage **v10; // ebp
  NiD3DTextureStage *v11; // eax
  NiD3DTextureStage **v12; // ebp
  NiD3DTextureStage *v13; // eax
  int v14; // ebp
  int v15; // ebp
  int v16; // ebp
  int v17; // ebp
  int v18; // ebp
  NiD3DPass *v20; // [esp+18h] [ebp-10h] BYREF
  unsigned int v21; // [esp+24h] [ebp-4h]

  v2 = 0; /*0x7af269*/
  v21 = 0; /*0x7af276*/
  v3 = NiD3DPassPool_Acquire(&v20); /*0x7af282*/
  v4 = *(this + 0x25); /*0x7af284*/
  v5 = v4 == *v3; /*0x7af28a*/
  LOBYTE(v21) = 1; /*0x7af28d*/
  if ( !v5 ) /*0x7af292*/
  {
    if ( v4 ) /*0x7af296*/
    {
      v5 = v4->RefCount-- == 1; /*0x7af298*/
      if ( v5 ) /*0x7af29c*/
        NiD3DPass_ReleaseToPool(v4); /*0x7af29e*/
    }
    v6 = *v3; /*0x7af2a3*/
    v5 = *v3 == 0; /*0x7af2a6*/
    *(this + 0x25) = *v3; /*0x7af2a8*/
    if ( !v5 ) /*0x7af2ae*/
      ++v6->RefCount; /*0x7af2b0*/
  }
  v7 = v20; /*0x7af2b4*/
  LOBYTE(v21) = 0; /*0x7af2ba*/
  if ( v20 ) /*0x7af2be*/
  {
    --v20->RefCount; /*0x7af2c0*/
    if ( !v7->RefCount ) /*0x7af2c9*/
      NiD3DPass_ReleaseToPool(v7); /*0x7af2cd*/
  }
  v8 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v20); /*0x7af2df*/
  if ( v8 ) /*0x7af2e3*/
  {
    v2 = v8; /*0x7af2e5*/
    ++v8[7].Unk08; /*0x7af2e7*/
  }
  v9 = (NiD3DTextureStage *)v20; /*0x7af2ef*/
  LOBYTE(v21) = 0; /*0x7af2f5*/
  if ( v20 ) /*0x7af2f9*/
  {
    --*(_DWORD *)&v20->SoftwareVP; /*0x7af2fb*/
    if ( !v9[7].Unk08 ) /*0x7af304*/
      sub_772560(v9); /*0x7af308*/
  }
  BSShader_ConfigureTextureStageSampler(v2, 0, 3, 2); /*0x7af313*/
  NiD3DTextureStage_ApplyFilterPreset(v2, 0); /*0x7af31e*/
  NiD3DPass_SetTextureStage(*(this + 0x25), (*(this + 0x25))->CurrentStage, &v2->Stage); /*0x7af32e*/
  v10 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v20); /*0x7af340*/
  v5 = v2 == *v10; /*0x7af342*/
  LOBYTE(v21) = 3; /*0x7af345*/
  if ( !v5 ) /*0x7af34a*/
  {
    if ( v2 ) /*0x7af34e*/
    {
      v5 = v2[7].Unk08-- == 1; /*0x7af350*/
      if ( v5 ) /*0x7af354*/
        sub_772560(v2); /*0x7af358*/
    }
    v2 = *v10; /*0x7af35d*/
    if ( *v10 ) /*0x7af362*/
      ++v2[7].Unk08; /*0x7af368*/
  }
  v11 = (NiD3DTextureStage *)v20; /*0x7af36c*/
  LOBYTE(v21) = 0; /*0x7af372*/
  if ( v20 ) /*0x7af376*/
  {
    --*(_DWORD *)&v20->SoftwareVP; /*0x7af378*/
    if ( !v11[7].Unk08 ) /*0x7af381*/
      sub_772560(v11); /*0x7af385*/
  }
  BSShader_ConfigureTextureStageSampler(v2, 1, 3, 2); /*0x7af391*/
  NiD3DTextureStage_ApplyFilterPreset(v2, 0); /*0x7af39c*/
  NiD3DPass_SetTextureStage(*(this + 0x25), (*(this + 0x25))->CurrentStage, &v2->Stage); /*0x7af3ac*/
  v12 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v20); /*0x7af3be*/
  v5 = v2 == *v12; /*0x7af3c0*/
  LOBYTE(v21) = 4; /*0x7af3c3*/
  if ( !v5 ) /*0x7af3c8*/
  {
    if ( v2 ) /*0x7af3cc*/
    {
      v5 = v2[7].Unk08-- == 1; /*0x7af3ce*/
      if ( v5 ) /*0x7af3d2*/
        sub_772560(v2); /*0x7af3d6*/
    }
    v2 = *v12; /*0x7af3db*/
    if ( *v12 ) /*0x7af3e0*/
      ++v2[7].Unk08; /*0x7af3e6*/
  }
  v13 = (NiD3DTextureStage *)v20; /*0x7af3ea*/
  LOBYTE(v21) = 0; /*0x7af3f0*/
  if ( v20 ) /*0x7af3f4*/
  {
    --*(_DWORD *)&v20->SoftwareVP; /*0x7af3f6*/
    if ( !v13[7].Unk08 ) /*0x7af3ff*/
      sub_772560(v13); /*0x7af403*/
  }
  BSShader_ConfigureTextureStageSampler(v2, 2, 3, 2); /*0x7af40f*/
  NiD3DTextureStage_ApplyFilterPreset(v2, 0); /*0x7af41a*/
  NiD3DPass_SetTextureStage(*(this + 0x25), (*(this + 0x25))->CurrentStage, &v2->Stage); /*0x7af42a*/
  v14 = (int)*(this + 0x25); /*0x7af42f*/
  if ( !*(_DWORD *)(v14 + 0x30) ) /*0x7af435*/
    *(_DWORD *)(v14 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7af43f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v14 + 0x30), 7u, 0, 0); /*0x7af449*/
  v15 = (int)*(this + 0x25); /*0x7af44e*/
  if ( !*(_DWORD *)(v15 + 0x30) ) /*0x7af454*/
    *(_DWORD *)(v15 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7af45e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v15 + 0x30), 0xEu, 0, 0); /*0x7af468*/
  v16 = (int)*(this + 0x25); /*0x7af46d*/
  if ( !*(_DWORD *)(v16 + 0x30) ) /*0x7af473*/
    *(_DWORD *)(v16 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7af47d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v16 + 0x30), 0x1Bu, 0, 0); /*0x7af487*/
  v17 = (int)*(this + 0x25); /*0x7af48c*/
  if ( !*(_DWORD *)(v17 + 0x30) ) /*0x7af492*/
    *(_DWORD *)(v17 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7af49c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v17 + 0x30), 0xFu, 0, 0); /*0x7af4a6*/
  v18 = (int)*(this + 0x25); /*0x7af4ab*/
  if ( !*(_DWORD *)(v18 + 0x30) ) /*0x7af4b1*/
    *(_DWORD *)(v18 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7af4bb*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v18 + 0x30), 0xA8u, 0xFu, 0); /*0x7af4c9*/
  ((void (__thiscall *)(NiD3DPass **))(*this)[1].VertexShaderTarget)(this); /*0x7af4d8*/
  v21 = 0xFFFFFFFF; /*0x7af4df*/
  if ( v2 ) /*0x7af4e3*/
  {
    v5 = v2[7].Unk08-- == 1; /*0x7af4e5*/
    if ( v5 ) /*0x7af4e8*/
      sub_772560(v2); /*0x7af4ec*/
  }
  return 1; /*0x7af4f3*/
}
