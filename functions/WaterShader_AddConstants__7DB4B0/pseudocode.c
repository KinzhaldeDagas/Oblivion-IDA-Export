// Pass230: WaterShader::AddConstants declares WaterSM3 FogParam ps c9 at 0x00B45E74 and FogColor ps c10 at 0x00B45E84.
void __thiscall WaterShader::AddConstants(WaterShader *this)
{
  NiD3DShaderConstantMap **p_PixelConstantMap; // esi
  NiD3DShaderConstantMap *v3; // eax
  NiD3DShaderConstantMap *v4; // eax
  NiD3DShaderConstantMap **p_VertexConstantMap; // esi
  NiD3DShaderConstantMap *v6; // eax
  NiD3DShaderConstantMap *v7; // eax

  p_PixelConstantMap = &this->super.member.super.PixelConstantMap; /*0x7db4d9*/
  if ( !this->super.member.super.PixelConstantMap ) /*0x7db4d5*/
  {
    v3 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7db4e4*/
    if ( v3 ) /*0x7db4fa*/
      v4 = NiD3DShaderCostantMapPixel::Construct(v3, (int)this->super.member.super.super.D3DRenderer); /*0x7db502*/
    else
      v4 = 0; /*0x7db509*/
    NiSmartPointer_Set__((Ni2DBuffer **)p_PixelConstantMap, (Ni2DBuffer *)v4); /*0x7db516*/
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db542*/
      *p_PixelConstantMap,
      "Scroll",
      0x10000007,
      0,
      0,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x14],
      0);
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db56b*/
      *p_PixelConstantMap,
      "EyePos",
      0x10000007,
      0,
      1,
      1,
      EmptyString,
      0x10,
      4,
      &flt_B45DD4,
      0);
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db594*/
      *p_PixelConstantMap,
      "SunDir",
      0x10000007,
      0,
      2,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B45DF4,
      0);
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db5bd*/
      *p_PixelConstantMap,
      "SunColor",
      0x10000007,
      0,
      3,
      1,
      EmptyString,
      0x10,
      4,
      &unk_B45E04,
      0);
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db5e6*/
      *p_PixelConstantMap,
      "NormalOffset",
      0x10000007,
      0,
      4,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x2C],
      0);
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db60f*/
      *p_PixelConstantMap,
      "ShallowColor",
      0x10000007,
      0,
      5,
      1,
      EmptyString,
      0x10,
      4,
      OB_ShaderConstantStorage_010201A0,
      0);
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db638*/
      *p_PixelConstantMap,
      "DeepColor",
      0x10000007,
      0,
      6,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[4],
      0);
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db661*/
      *p_PixelConstantMap,
      "ReflectionColor",
      0x10000007,
      0,
      7,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[8],
      0);
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db68a*/
      *p_PixelConstantMap,
      "VarAmounts",
      0x10000007,
      0,
      8,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0xC],
      0);
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db6b3*/
      *p_PixelConstantMap,
      "FogParam",
      0x10000007,
      0,
      9,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x18],
      0);                                       // Fog constant-map decode: WaterShader pixel map declares FogParam at ps c9 from B45E14[0x18] / B45E74; writer is WaterShader fog consumer 0x7DCBD0.
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db6dc*/
      *p_PixelConstantMap,
      "FogColor",
      0x10000007,
      0,
      0xA,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x1C],
      0);                                       // Fog constant-map decode: WaterShader pixel map declares FogColor at ps c10 from B45E14[0x1C] / B45E84; writer is WaterShader fog consumer 0x7DCBD0.
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db705*/
      *p_PixelConstantMap,
      "FresnelRI",
      0x10000007,
      0,
      0xB,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x20],
      0);
    (*p_PixelConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db72e*/
      *p_PixelConstantMap,
      "BlendRadius",
      0x10000007,
      0,
      0xC,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x28],
      0);
  }
  p_VertexConstantMap = &this->super.member.super.VertexConstantMap; /*0x7db734*/
  if ( !this->super.member.super.VertexConstantMap ) /*0x7db730*/
  {
    v6 = (NiD3DShaderConstantMap *)FormHeapAlloc(0x34u); /*0x7db73f*/
    if ( v6 ) /*0x7db755*/
      v7 = NiD3DShaderCostantMapVertex::Construct(v6, (int)this->super.member.super.super.D3DRenderer); /*0x7db75d*/
    else
      v7 = 0; /*0x7db764*/
    NiSmartPointer_Set__((Ni2DBuffer **)&this->super.member.super.VertexConstantMap, (Ni2DBuffer *)v7); /*0x7db771*/
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db797*/
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
    ((void (__thiscall *)(NiD3DShaderConstantMap *, const char *, int, int, CHAR *))(*p_VertexConstantMap)->_vtbl->sub_9A8800)( /*0x7db7b1*/
      *p_VertexConstantMap,
      "WorldTranspose",
      0x20000009,
      4,
      EmptyString);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db7da*/
      *p_VertexConstantMap,
      "Tile",
      0x10000007,
      0,
      8,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x24],
      0);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db803*/
      *p_VertexConstantMap,
      "QPosAdjust",
      0x10000007,
      0,
      9,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x30],
      0);
    (*p_VertexConstantMap)->_vtbl->NiD3DShaderConstantMap__AddConstant( /*0x7db82c*/
      *p_VertexConstantMap,
      "DepthOffset",
      0x10000007,
      0,
      0xA,
      1,
      EmptyString,
      0x10,
      4,
      &OB_ShaderConstantStorage_010201A0[0x34],
      0);
  }
}
