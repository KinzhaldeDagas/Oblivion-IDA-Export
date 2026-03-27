void __thiscall sub_7BB080(SkyShader *this)
{
  NiD3DShaderConstantMap **p_PixelConstantMap; // esi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap **p_VertexConstantMap; // esi
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax

  p_PixelConstantMap = &this->super.member.super.PixelConstantMap;
  if ( !this->super.member.super.PixelConstantMap )
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v3 )
      v4 = NiD3DShaderCostantMapPixel::Construct(v3, (int)this->super.member.super.super.D3DRenderer);
    else
      v4 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)p_PixelConstantMap, (Ni2DBuffer *)v4);
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant(
      *p_PixelConstantMap,
      "Params",
      0x10000005,
      0,
      4,
      1,
      EmptyString,
      8,
      4,
      &this->unkDC[1],
      0);
  }
  p_VertexConstantMap = &this->super.member.super.VertexConstantMap;
  if ( !this->super.member.super.VertexConstantMap )
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u);
    if ( v6 )
      v7 = NiD3DShaderCostantMapVertex::Construct(v6, (int)this->super.member.super.super.D3DRenderer);
    else
      v7 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)&this->super.member.super.VertexConstantMap, (Ni2DBuffer *)v7);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant(
      *p_VertexConstantMap,
      "WorldViewProjTranspose",
      0x20000009,
      0,
      0,
      4,
      0,
      0,
      0,
      0,
      0);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant(
      *p_VertexConstantMap,
      "WorldTranspose",
      0x20000009,
      0,
      8,
      4,
      0,
      0,
      0,
      0,
      0);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant(
      *p_VertexConstantMap,
      "Color0",
      0x10000007,
      0,
      4,
      1,
      EmptyString,
      0x10,
      4,
      &qword_B43178,
      0);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant(
      *p_VertexConstantMap,
      "Color1",
      0x10000007,
      0,
      5,
      1,
      EmptyString,
      0x10,
      4,
      &qword_B43188,
      0);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant(
      *p_VertexConstantMap,
      "Color2",
      0x10000007,
      0,
      6,
      1,
      EmptyString,
      0x10,
      4,
      &qword_B43198,
      0);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant(
      *p_VertexConstantMap,
      "eyepos",
      0x10000007,
      0,
      7,
      1,
      EmptyString,
      0x10,
      4,
      &dword_B43168,
      0);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant(
      *p_VertexConstantMap,
      "Params",
      0x10000004,
      0,
      0xC,
      1,
      EmptyString,
      4,
      4,
      this->unkDC,
      0);
  }
}
