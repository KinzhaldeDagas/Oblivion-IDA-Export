void __thiscall NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7aa688*/
  NiTPointerList::FreeAllNodes(this); /*0x7aa696*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7aa69b*/
}
