void __thiscall NiTPointerList<Script *>::~NiTPointerList<Script *>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,Script *>::`vftable'; /*0x4fb488*/
  NiTPointerList::FreeAllNodes(this); /*0x4fb496*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,Script *>::`vftable'; /*0x4fb49b*/
}
