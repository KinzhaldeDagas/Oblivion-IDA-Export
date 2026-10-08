void __thiscall BoltShader::PrepareCostants_(BoltShader *this)
{
  NiD3DShaderConstantMap **p_VertexConstantMap; // edi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax
  int v5; // eax
  NiD3DShaderConstantMap **p_PixelConstantMap; // edi
  NiD3DShaderConstantMap *v7; // eax
  NiD3DShaderConstantMap *v8; // eax

  p_VertexConstantMap = &this->super.member.super.VertexConstantMap; /*0x7f3c39*/
  if ( !this->super.member.super.VertexConstantMap )
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7f3c44*/
    if ( v3 ) /*0x7f3c5a*/
      v4 = NiD3DShaderCostantMapVertex::Construct(v3, (int)this->super.member.super.super.D3DRenderer); /*0x7f3c62*/
    else
      v4 = 0; /*0x7f3c69*/
    NiSmartPointer_Set__((Ni2DBuffer **)p_VertexConstantMap, (Ni2DBuffer *)v4); /*0x7f3c76*/
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7f3c9c*/
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
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7f3cc7*/
      *p_VertexConstantMap,
      "fVars",
      0x10000009,
      0,
      4,
      4,
      EmptyString,
      0x40,
      4,
      &this->Unk00[0x2F],
      0);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7f3cf2*/
      *p_VertexConstantMap,
      "EyePosition",
      0x10000007,
      0,
      8,
      1,
      EmptyString,
      0x10,
      4,
      &this->Unk00[0x2B],
      0);
    v5 = unk_B468FC; /*0x7f3cf4*/
    if ( !unk_B468FC )
    {
      v5 = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2 ? 0x4B : 0xEB;
      unk_B468FC = v5; /*0x7f3d12*/
    }
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7f3d43*/
      *p_VertexConstantMap,
      "bolt data",
      0x10000009,
      0,
      0xE,
      v5,
      EmptyString,
      0x10 * v5,
      4,
      (void *)this->Unk00[1],
      0);
  }
  p_PixelConstantMap = &this->super.member.super.PixelConstantMap; /*0x7f3d49*/
  if ( !this->super.member.super.PixelConstantMap ) /*0x7f3d45*/
  {
    v7 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7f3d54*/
    if ( v7 ) /*0x7f3d6a*/
      v8 = NiD3DShaderCostantMapPixel::Construct(v7, (int)this->super.member.super.super.D3DRenderer); /*0x7f3d72*/
    else
      v8 = 0; /*0x7f3d79*/
    NiSmartPointer_Set__((Ni2DBuffer **)&this->super.member.super.PixelConstantMap, (Ni2DBuffer *)v8); /*0x7f3d86*/
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7f3db4*/
      *p_PixelConstantMap,
      "CoreColor",
      0x10000007,
      0,
      0,
      1,
      EmptyString,
      0x10,
      4,
      &this->Unk00[0x40],
      0);
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7f3ddf*/
      *p_PixelConstantMap,
      "GlowColor",
      0x10000007,
      0,
      1,
      1,
      EmptyString,
      0x10,
      4,
      &this->Unk00[0x44],
      0);
  }
}
