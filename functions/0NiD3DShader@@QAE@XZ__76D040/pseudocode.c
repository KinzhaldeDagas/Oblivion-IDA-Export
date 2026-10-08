NiD3DShader *__thiscall NiD3DShader::NiD3DShader(NiD3DShader *this)
{
  sub_779070(this); /*0x76d045*/
  this->__vftable = (NiD3DShaderInterfaceVtbl *)&NiD3DShader::`vftable'; /*0x76d04c*/
  this->member.IsInitialized = 0; /*0x76d052*/
  this->member.Unk021 = 0; /*0x76d055*/
  this->member.ShaderDeclaration = 0; /*0x76d058*/
  this->member.RenderStateGroup = 0; /*0x76d05b*/
  this->member.PixelConstantMap = 0; /*0x76d05e*/
  this->member.VertexConstantMap = 0; /*0x76d061*/
  this->member.CurrentPassIndex = 0; /*0x76d069*/
  this->member.PassCount = 0; /*0x76d06c*/
  this->member.CurrentPass = 0; /*0x76d073*/
  NiTArray<NiPointer<NiD3DPass>>::NiTArray<NiPointer<NiD3DPass>>( /*0x76d076*/
    (NiTArray<NiPointer<NiD3DPass>> *)&this->member.Passes,
    2u,
    2);
  sub_76C8C0(&this->member.Passes); /*0x76d07d*/
  this->member.Unk050[5] = 0; /*0x76d083*/
  this->member.Unk050[6] = 0; /*0x76d086*/
  this->member.Unk050[7] = 0; /*0x76d089*/
  this->__vftable = (NiD3DShaderInterfaceVtbl *)&NiD3DDefaultShader::`vftable'; /*0x76d08c*/
  return this; /*0x76d082*/
}
