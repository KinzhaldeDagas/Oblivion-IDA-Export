void __thiscall WaterShaderHeightMap::CreateCostantTable(WaterShaderHeightMap *this)
{
  NiD3DShaderConstantMap **p_PixelConstantMap; // edi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap **p_VertexConstantMap; // edi
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax

  p_PixelConstantMap = &this->super.super.super.PixelConstantMap;
  if ( !this->super.super.super.PixelConstantMap )
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v3 )
      v4 = NiD3DShaderCostantMapPixel::Construct(v3, (int)this->super.super.super.super.D3DRenderer);
    else
      v4 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)p_PixelConstantMap, (Ni2DBuffer *)v4);
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant(
      *p_PixelConstantMap,
      "Time",
      0x10000007,
      0,
      0,
      1,
      EmptyString,
      0x10,
      4,
      &this->Time,
      0);
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant(
      *p_PixelConstantMap,
      "fPassNum",
      0x10000007,
      0,
      1,
      1,
      EmptyString,
      0x10,
      4,
      &this->fPassNum,
      0);
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant(
      *p_PixelConstantMap,
      "fResolution",
      0x10000007,
      0,
      2,
      1,
      EmptyString,
      0x10,
      4,
      &fResolution,
      0);
  }
  p_VertexConstantMap = &this->super.super.super.VertexConstantMap;
  if ( !this->super.super.super.VertexConstantMap )
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v6 )
      v7 = NiD3DShaderCostantMapVertex::Construct(v6, (int)this->super.super.super.super.D3DRenderer);
    else
      v7 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)&this->super.super.super.VertexConstantMap, (Ni2DBuffer *)v7);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant(
      *p_VertexConstantMap,
      "texRatio0",
      0x10000007,
      0,
      6,
      1,
      EmptyString,
      0x10,
      4,
      &this->Unk090,
      0);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant(
      *p_VertexConstantMap,
      "texRatio1",
      0x10000007,
      0,
      7,
      1,
      EmptyString,
      0x10,
      4,
      &this->Unk0A0,
      0);
  }
}
