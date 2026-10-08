char __thiscall sub_7F54F0(NiD3DPass **this)
{
  NiD3DTextureStage *v2; // ebp
  NiD3DPass **v3; // edi
  NiD3DPass *v4; // ecx
  bool v5; // zf
  NiD3DPass *v6; // eax
  NiD3DPass *v7; // eax
  NiD3DTextureStage *v8; // eax
  NiD3DTextureStage *v9; // eax
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  NiD3DPass *v16; // [esp+10h] [ebp-14h] BYREF
  NiD3DTextureStage *v17; // [esp+14h] [ebp-10h]
  unsigned int v18; // [esp+20h] [ebp-4h]

  v2 = 0; /*0x7f5518*/
  v17 = 0; /*0x7f551a*/
  v18 = 0; /*0x7f5523*/
  v3 = NiD3DPassPool_Acquire(&v16); /*0x7f552f*/
  v4 = *(this + 0x27); /*0x7f5531*/
  v5 = v4 == *v3; /*0x7f5537*/
  LOBYTE(v18) = 1; /*0x7f5539*/
  if ( !v5 ) /*0x7f553e*/
  {
    if ( v4 ) /*0x7f5542*/
    {
      v5 = v4->RefCount-- == 1; /*0x7f5544*/
      if ( v5 ) /*0x7f5548*/
        NiD3DPass_ReleaseToPool(v4); /*0x7f554a*/
    }
    v6 = *v3; /*0x7f554f*/
    v5 = *v3 == 0; /*0x7f5551*/
    *(this + 0x27) = *v3; /*0x7f5553*/
    if ( !v5 ) /*0x7f5559*/
      ++v6->RefCount; /*0x7f555b*/
  }
  v7 = v16; /*0x7f555f*/
  LOBYTE(v18) = 0; /*0x7f5565*/
  if ( v16 ) /*0x7f556a*/
  {
    --v16->RefCount; /*0x7f556c*/
    if ( !v7->RefCount ) /*0x7f5575*/
      NiD3DPass_ReleaseToPool(v7); /*0x7f557a*/
  }
  v8 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v16); /*0x7f558c*/
  if ( v8 ) /*0x7f5590*/
  {
    v2 = v8; /*0x7f5592*/
    ++v8[7].Unk08; /*0x7f5594*/
    v17 = v8; /*0x7f5598*/
  }
  v9 = (NiD3DTextureStage *)v16; /*0x7f559c*/
  LOBYTE(v18) = 0; /*0x7f55a2*/
  if ( v16 ) /*0x7f55a7*/
  {
    --*(_DWORD *)&v16->SoftwareVP; /*0x7f55a9*/
    if ( !v9[7].Unk08 ) /*0x7f55b2*/
      sub_772560(v9); /*0x7f55b7*/
  }
  BSShader_ConfigureTextureStageSampler(v2, 0, 3, 2); /*0x7f55c3*/
  NiD3DTextureStage_ApplyFilterPreset(v2, 0); /*0x7f55cf*/
  NiD3DPass_SetTextureStage(*(this + 0x27), (*(this + 0x27))->CurrentStage, &v2->Stage); /*0x7f55df*/
  v10 = (int)*(this + 0x27); /*0x7f55e4*/
  if ( v10 ) /*0x7f55ec*/
  {
    if ( !*(_DWORD *)(v10 + 0x30) ) /*0x7f55f2*/
      *(_DWORD *)(v10 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f55fd*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v10 + 0x30), 7u, 0, 0); /*0x7f5609*/
    v11 = (int)*(this + 0x27); /*0x7f560e*/
    if ( !*(_DWORD *)(v11 + 0x30) ) /*0x7f5614*/
      *(_DWORD *)(v11 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f561f*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v11 + 0x30), 0xEu, 0, 0); /*0x7f562b*/
    v12 = (int)*(this + 0x27); /*0x7f5630*/
    if ( !*(_DWORD *)(v12 + 0x30) ) /*0x7f5636*/
      *(_DWORD *)(v12 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f5641*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v12 + 0x30), 0x1Bu, 0, 0); /*0x7f564d*/
    v13 = (int)*(this + 0x27); /*0x7f5652*/
    if ( !*(_DWORD *)(v13 + 0x30) ) /*0x7f5658*/
      *(_DWORD *)(v13 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f5663*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v13 + 0x30), 0xFu, 0, 0); /*0x7f566f*/
    v14 = (int)*(this + 0x27); /*0x7f5674*/
    if ( !*(_DWORD *)(v14 + 0x30) ) /*0x7f567a*/
      *(_DWORD *)(v14 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7f5685*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v14 + 0x30), 0xA8u, 0xFu, 0); /*0x7f5694*/
  }
  ((void (__thiscall *)(NiD3DPass **))(*this)[1].VertexShaderTarget)(this); /*0x7f56a3*/
  v18 = 0xFFFFFFFF; /*0x7f56aa*/
  if ( v2 ) /*0x7f56ae*/
  {
    v5 = v2[7].Unk08-- == 1; /*0x7f56b0*/
    if ( v5 ) /*0x7f56b3*/
      sub_772560(v2); /*0x7f56b7*/
  }
  return 1; /*0x7f56be*/
}
