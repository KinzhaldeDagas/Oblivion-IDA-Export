char __thiscall sub_7B1670(NiD3DPass **this)
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
  int v12; // ebp
  int v13; // ebp
  int v14; // ebp
  int v15; // ebp
  int v16; // ebp
  NiD3DPass *v18; // [esp+18h] [ebp-10h] BYREF
  unsigned int v19; // [esp+24h] [ebp-4h]

  v2 = 0; /*0x7b1699*/
  v19 = 0; /*0x7b16a6*/
  v3 = NiD3DPassPool_Acquire(&v18); /*0x7b16b2*/
  v4 = *(this + 0x25); /*0x7b16b4*/
  v5 = v4 == *v3; /*0x7b16ba*/
  LOBYTE(v19) = 1; /*0x7b16bd*/
  if ( !v5 ) /*0x7b16c2*/
  {
    if ( v4 ) /*0x7b16c6*/
    {
      v5 = v4->RefCount-- == 1; /*0x7b16c8*/
      if ( v5 ) /*0x7b16cc*/
        NiD3DPass_ReleaseToPool(v4); /*0x7b16ce*/
    }
    v6 = *v3; /*0x7b16d3*/
    v5 = *v3 == 0; /*0x7b16d6*/
    *(this + 0x25) = *v3; /*0x7b16d8*/
    if ( !v5 ) /*0x7b16de*/
      ++v6->RefCount; /*0x7b16e0*/
  }
  v7 = v18; /*0x7b16e4*/
  LOBYTE(v19) = 0; /*0x7b16ea*/
  if ( v18 ) /*0x7b16ee*/
  {
    --v18->RefCount; /*0x7b16f0*/
    if ( !v7->RefCount ) /*0x7b16f9*/
      NiD3DPass_ReleaseToPool(v7); /*0x7b16fd*/
  }
  v8 = (NiD3DTextureStage *)*NiD3DTextureStagePool_Acquire(&v18); /*0x7b170f*/
  if ( v8 ) /*0x7b1713*/
  {
    v2 = v8; /*0x7b1715*/
    ++v8[7].Unk08; /*0x7b1717*/
  }
  v9 = (NiD3DTextureStage *)v18; /*0x7b171f*/
  LOBYTE(v19) = 0; /*0x7b1725*/
  if ( v18 ) /*0x7b1729*/
  {
    --*(_DWORD *)&v18->SoftwareVP; /*0x7b172b*/
    if ( !v9[7].Unk08 ) /*0x7b1734*/
      sub_772560(v9); /*0x7b1738*/
  }
  BSShader_ConfigureTextureStageSampler(v2, 0, 3, 2); /*0x7b1743*/
  NiD3DTextureStage_ApplyFilterPreset(v2, 1u); /*0x7b174f*/
  NiD3DPass_SetTextureStage(*(this + 0x25), (*(this + 0x25))->CurrentStage, &v2->Stage); /*0x7b175f*/
  v10 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v18); /*0x7b1771*/
  v5 = v2 == *v10; /*0x7b1773*/
  LOBYTE(v19) = 3; /*0x7b1776*/
  if ( !v5 ) /*0x7b177b*/
  {
    if ( v2 ) /*0x7b177f*/
    {
      v5 = v2[7].Unk08-- == 1; /*0x7b1781*/
      if ( v5 ) /*0x7b1785*/
        sub_772560(v2); /*0x7b1789*/
    }
    v2 = *v10; /*0x7b178e*/
    if ( *v10 ) /*0x7b1793*/
      ++v2[7].Unk08; /*0x7b1799*/
  }
  v11 = (NiD3DTextureStage *)v18; /*0x7b179d*/
  LOBYTE(v19) = 0; /*0x7b17a3*/
  if ( v18 ) /*0x7b17a7*/
  {
    --*(_DWORD *)&v18->SoftwareVP; /*0x7b17a9*/
    if ( !v11[7].Unk08 ) /*0x7b17b2*/
      sub_772560(v11); /*0x7b17b6*/
  }
  BSShader_ConfigureTextureStageSampler(v2, 1, 3, 2); /*0x7b17c2*/
  NiD3DTextureStage_ApplyFilterPreset(v2, 0); /*0x7b17cd*/
  NiD3DPass_SetTextureStage(*(this + 0x25), (*(this + 0x25))->CurrentStage, &v2->Stage); /*0x7b17dd*/
  v12 = (int)*(this + 0x25); /*0x7b17e2*/
  if ( !*(_DWORD *)(v12 + 0x30) ) /*0x7b17e8*/
    *(_DWORD *)(v12 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7b17f2*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v12 + 0x30), 7u, 0, 0); /*0x7b17fc*/
  v13 = (int)*(this + 0x25); /*0x7b1801*/
  if ( !*(_DWORD *)(v13 + 0x30) ) /*0x7b1807*/
    *(_DWORD *)(v13 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7b1811*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v13 + 0x30), 0xEu, 0, 0); /*0x7b181b*/
  v14 = (int)*(this + 0x25); /*0x7b1820*/
  if ( !*(_DWORD *)(v14 + 0x30) ) /*0x7b1826*/
    *(_DWORD *)(v14 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7b1830*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v14 + 0x30), 0x1Bu, 0, 0); /*0x7b183a*/
  v15 = (int)*(this + 0x25); /*0x7b183f*/
  if ( !*(_DWORD *)(v15 + 0x30) ) /*0x7b1845*/
    *(_DWORD *)(v15 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7b184f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v15 + 0x30), 0xFu, 0, 0); /*0x7b1859*/
  v16 = (int)*(this + 0x25); /*0x7b185e*/
  if ( !*(_DWORD *)(v16 + 0x30) ) /*0x7b1864*/
    *(_DWORD *)(v16 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7b186e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v16 + 0x30), 0xA8u, 0xFu, 0); /*0x7b187c*/
  ((void (__thiscall *)(NiD3DPass **))(*this)[1].VertexShaderTarget)(this); /*0x7b188b*/
  v19 = 0xFFFFFFFF; /*0x7b1892*/
  if ( v2 ) /*0x7b1896*/
  {
    v5 = v2[7].Unk08-- == 1; /*0x7b1898*/
    if ( v5 ) /*0x7b189b*/
      sub_772560(v2); /*0x7b189f*/
  }
  return 1; /*0x7b18a6*/
}
