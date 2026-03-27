void __thiscall BSShaderProperty::~BSShaderProperty(BSShaderProperty *this)
{
  this->vtbl = &BSShaderProperty::`vftable';
  this->member.passInfo = 0;
  sub_7E24C0(this);
  NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>((NiTPointerList__BSImageSpaceShader *)&this->member.unk58);
  NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>((NiTPointerList__BSImageSpaceShader *)&this->member.unk48);
  NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>((NiTPointerList__BSImageSpaceShader *)&this->member.unk38);
  NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>((NiTPointerList__BSImageSpaceShader *)&this->member.passes);
  NiDitherProperty::~NiDitherProperty((NiDitherProperty *)this);
}
