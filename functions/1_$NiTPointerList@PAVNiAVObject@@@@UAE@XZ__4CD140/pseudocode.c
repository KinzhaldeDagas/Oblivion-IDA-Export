void __thiscall NiTPointerList<NiAVObject *>::~NiTPointerList<NiAVObject *>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>::`vftable'; /*0x4cd168*/
  NiTPointerList::FreeAllNodes(this); /*0x4cd176*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>::`vftable'; /*0x4cd17b*/
}
