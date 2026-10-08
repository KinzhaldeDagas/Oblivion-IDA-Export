void __thiscall sub_7BB080(SkyShader *this)
{
  NiD3DShaderConstantMap **p_PixelConstantMap; // esi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap **p_VertexConstantMap; // esi
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax

  p_PixelConstantMap = &this->super.member.super.PixelConstantMap; /*0x7bb0a9*/
  if ( !this->super.member.super.PixelConstantMap ) /*0x7bb0a5*/
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7bb0b0*/
    if ( v3 ) /*0x7bb0c6*/
      v4 = NiD3DShaderCostantMapPixel::Construct(v3, (int)this->super.member.super.super.D3DRenderer); /*0x7bb0ce*/
    else
      v4 = 0; /*0x7bb0d5*/
    NiSmartPointer_Set__((Ni2DBuffer **)p_PixelConstantMap, (Ni2DBuffer *)v4); /*0x7bb0e2*/
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7bb110*/
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
  p_VertexConstantMap = &this->super.member.super.VertexConstantMap; /*0x7bb116*/
  if ( !this->super.member.super.VertexConstantMap ) /*0x7bb112*/
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7bb121*/
    if ( v6 ) /*0x7bb137*/
      v7 = NiD3DShaderCostantMapVertex::Construct(v6, (int)this->super.member.super.super.D3DRenderer); /*0x7bb13f*/
    else
      v7 = 0; /*0x7bb146*/
    NiSmartPointer_Set__((Ni2DBuffer **)&this->super.member.super.VertexConstantMap, (Ni2DBuffer *)v7); /*0x7bb153*/
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7bb179*/
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
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7bb19c*/
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
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7bb1c5*/
      *p_VertexConstantMap,
      "Color0",
      0x10000007,
      0,
      4,
      1,
      EmptyString,
      0x10,
      4,
      qword_B43178,
      0);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7bb1ee*/
      *p_VertexConstantMap,
      "Color1",
      0x10000007,
      0,
      5,
      1,
      EmptyString,
      0x10,
      4,
      &qword_B43178[2],
      0);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7bb217*/
      *p_VertexConstantMap,
      "Color2",
      0x10000007,
      0,
      6,
      1,
      EmptyString,
      0x10,
      4,
      &qword_B43178[4],
      0);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7bb240*/
      *p_VertexConstantMap,
      "eyepos",
      0x10000007,
      0,
      7,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B43168,
      0);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7bb26b*/
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
