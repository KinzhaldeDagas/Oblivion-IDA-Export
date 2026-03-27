NiD3DShader *__thiscall NiD3DShader::NiD3DShader(NiD3DShader *this)
{
  sub_779070(this);
  this->__vftable = (NiD3DShaderInterfaceVtbl *)&NiD3DShader::`vftable';
  this->member.IsInitialized = 0;
  this->member.Unk021 = 0;
  this->member.ShaderDeclaration = 0;
  this->member.RenderStateGroup = 0;
  this->member.PixelConstantMap = 0;
  this->member.VertexConstantMap = 0;
  this->member.CurrentPassIndex = 0;
  this->member.PassCount = 0;
  this->member.CurrentPass = 0;
  NiTArray<NiPointer<NiD3DPass>>::NiTArray<NiPointer<NiD3DPass>>(
    (NiTArray<NiPointer<NiD3DPass>> *)&this->member.Passes,
    2u,
    2);
  sub_76C8C0(&this->member.Passes);
  this->member.Unk050[5] = 0;
  this->member.Unk050[6] = 0;
  this->member.Unk050[7] = 0;
  this->__vftable = (NiD3DShaderInterfaceVtbl *)&NiD3DDefaultShader::`vftable';
  return this;
}
