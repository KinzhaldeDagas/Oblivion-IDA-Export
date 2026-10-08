NiTPointerList__BSImageSpaceShader *__thiscall sub_76DD10(NiTPointerList__BSImageSpaceShader *this, char a2)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiDX9AdditionalDepthStencilBufferData *>::`vftable'; /*0x76dd13*/
  NiTPointerList::FreeAllNodes(this); /*0x76dd19*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiDX9AdditionalDepthStencilBufferData *>::`vftable'; /*0x76dd23*/
  if ( (a2 & 1) != 0 ) /*0x76dd29*/
    FormHeapFree((unsigned int)this); /*0x76dd2c*/
  return this; /*0x76dd36*/
}
