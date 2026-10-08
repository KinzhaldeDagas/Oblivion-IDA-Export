void __thiscall WaterShaderHeightMap::CreateCostantTable(WaterShaderHeightMap *this)
{
  NiD3DShaderConstantMap **p_PixelConstantMap; // edi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap **p_VertexConstantMap; // edi
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax

  p_PixelConstantMap = &this->super.super.super.PixelConstantMap; /*0x7dfa59*/
  if ( !this->super.super.super.PixelConstantMap ) /*0x7dfa55*/
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7dfa64*/
    if ( v3 ) /*0x7dfa7a*/
      v4 = NiD3DShaderCostantMapPixel::Construct(v3, (int)this->super.super.super.super.D3DRenderer); /*0x7dfa82*/
    else
      v4 = 0; /*0x7dfa89*/
    NiSmartPointer_Set__((Ni2DBuffer **)p_PixelConstantMap, (Ni2DBuffer *)v4); /*0x7dfa96*/
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7dfac4*/
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
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7dfaef*/
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
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7dfb18*/
      *p_PixelConstantMap,
      "fResolution",
      0x10000007,
      0,
      2,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x74],
      0);
  }
  p_VertexConstantMap = &this->super.super.super.VertexConstantMap; /*0x7dfb1e*/
  if ( !this->super.super.super.VertexConstantMap ) /*0x7dfb1a*/
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7dfb29*/
    if ( v6 ) /*0x7dfb3f*/
      v7 = NiD3DShaderCostantMapVertex::Construct(v6, (int)this->super.super.super.super.D3DRenderer); /*0x7dfb47*/
    else
      v7 = 0; /*0x7dfb4e*/
    NiSmartPointer_Set__((Ni2DBuffer **)&this->super.super.super.VertexConstantMap, (Ni2DBuffer *)v7); /*0x7dfb5b*/
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7dfb89*/
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
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7dfbb4*/
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
