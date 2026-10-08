void __thiscall NiTPointerList<NiGeometry *>::~NiTPointerList<NiGeometry *>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x733468*/
  NiTPointerList::FreeAllNodes(this); /*0x733476*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiGeometry *>::`vftable'; /*0x73347b*/
}
