BSShaderProperty *__thiscall BSShaderProperty::BSShaderProperty(BSShaderProperty *this)
{
  NiObjectNET::NiObjectNET((NiObjectNET *)this); /*0x7e281b*/
  this->member.super.flags = 1; /*0x7e2820*/
  this->vtbl = &BSShaderProperty::`vftable'; /*0x7e282b*/
  this->member.passes.numItems = 0; /*0x7e2835*/
  this->member.passes.start = 0; /*0x7e2838*/
  this->member.passes.end = 0; /*0x7e283b*/
  this->member.passes.vtlb = &NiTPointerList<BSShaderProperty::RenderPass *>::`vftable'; /*0x7e283e*/
  this->member.unk38.numItems = 0; /*0x7e2847*/
  this->member.unk38.start = 0; /*0x7e284a*/
  this->member.unk38.end = 0; /*0x7e284d*/
  this->member.unk38.vtlb = &NiTPointerList<BSShaderProperty::RenderPass *>::`vftable'; /*0x7e2850*/
  this->member.unk48.numItems = 0; /*0x7e2859*/
  this->member.unk48.start = 0; /*0x7e285c*/
  this->member.unk48.end = 0; /*0x7e285f*/
  this->member.unk48.vtlb = &NiTPointerList<BSShaderProperty::RenderPass *>::`vftable'; /*0x7e2862*/
  this->member.unk58.numItems = 0; /*0x7e2869*/
  this->member.unk58.start = 0; /*0x7e286c*/
  this->member.unk58.end = 0; /*0x7e286f*/
  this->member.unk58.vtlb = &NiTPointerList<BSShaderProperty::RenderPass *>::`vftable'; /*0x7e2872*/
  this->member.alpha = 1.0; /*0x7e287b*/
  this->member.passInfo = 0; /*0x7e2883*/
  this->member.lastRenderPassState = 0; /*0x7e2886*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)&this->member.passes); /*0x7e2889*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)&this->member.unk38); /*0x7e2890*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)&this->member.unk48); /*0x7e2897*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)&this->member.unk58); /*0x7e289f*/
  this->member.unk068 = 0; /*0x7e28a4*/
  return this; /*0x7e28a9*/
}
