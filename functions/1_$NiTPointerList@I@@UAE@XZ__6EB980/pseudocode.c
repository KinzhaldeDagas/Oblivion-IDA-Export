void __thiscall NiTPointerList<unsigned int>::~NiTPointerList<unsigned int>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,unsigned int>::`vftable'; /*0x6eb9a8*/
  NiTPointerList::FreeAllNodes(this); /*0x6eb9b6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,unsigned int>::`vftable'; /*0x6eb9bb*/
}
