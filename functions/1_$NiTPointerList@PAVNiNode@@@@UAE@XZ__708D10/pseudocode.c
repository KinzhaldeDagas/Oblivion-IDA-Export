void __thiscall NiTPointerList<NiNode *>::~NiTPointerList<NiNode *>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiNode *>::`vftable'; /*0x708d38*/
  NiTPointerList::FreeAllNodes(this); /*0x708d46*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiNode *>::`vftable'; /*0x708d4b*/
}
