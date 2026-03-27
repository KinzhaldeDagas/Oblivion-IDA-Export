BSShaderProperty *__thiscall BSShaderProperty::BSShaderProperty(BSShaderProperty *this)
{
  NiObjectNET::NiObjectNET((NiObjectNET *)this);
  this->member.super.flags = 1;
  this->vtbl = &BSShaderProperty::`vftable';
  this->member.passes.numItems = 0;
  this->member.passes.start = 0;
  this->member.passes.end = 0;
  this->member.passes.vtlb = &NiTPointerList<BSShaderProperty::RenderPass *>::`vftable';
  this->member.unk38.numItems = 0;
  this->member.unk38.start = 0;
  this->member.unk38.end = 0;
  this->member.unk38.vtlb = &NiTPointerList<BSShaderProperty::RenderPass *>::`vftable';
  this->member.unk48.numItems = 0;
  this->member.unk48.start = 0;
  this->member.unk48.end = 0;
  this->member.unk48.vtlb = &NiTPointerList<BSShaderProperty::RenderPass *>::`vftable';
  this->member.unk58.numItems = 0;
  this->member.unk58.start = 0;
  this->member.unk58.end = 0;
  this->member.unk58.vtlb = &NiTPointerList<BSShaderProperty::RenderPass *>::`vftable';
  this->member.alpha = 1.0;
  this->member.passInfo = 0;
  this->member.lastRenderPassState = 0;
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)&this->member.passes);
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)&this->member.unk38);
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)&this->member.unk48);
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)&this->member.unk58);
  this->member.unk068 = 0;
  return this;
}
