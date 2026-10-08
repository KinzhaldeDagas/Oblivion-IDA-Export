void __thiscall BSShaderProperty::~BSShaderProperty(BSShaderProperty *this)
{
  this->vtbl = &BSShaderProperty::`vftable'; /*0x7e2678*/
  this->member.passInfo = 0; /*0x7e2686*/
  BSShaderProperty_ClearRenderPassLists(this); /*0x7e268d*/
  NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>((NiTPointerList__BSImageSpaceShader *)&this->member.unk58); /*0x7e269a*/
  NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>((NiTPointerList__BSImageSpaceShader *)&this->member.unk48); /*0x7e26a7*/
  NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>((NiTPointerList__BSImageSpaceShader *)&this->member.unk38); /*0x7e26b4*/
  NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>((NiTPointerList__BSImageSpaceShader *)&this->member.passes); /*0x7e26c1*/
  NiDitherProperty::~NiDitherProperty((NiDitherProperty *)this); /*0x7e26d0*/
}
