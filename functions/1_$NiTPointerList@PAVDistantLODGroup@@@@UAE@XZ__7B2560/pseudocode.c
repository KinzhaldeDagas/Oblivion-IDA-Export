void __thiscall NiTPointerList<DistantLODGroup *>::~NiTPointerList<DistantLODGroup *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,DistantLODGroup *>::`vftable'; /*0x7b2588*/
  NiTPointerList::FreeAllNodes(this); /*0x7b2596*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,DistantLODGroup *>::`vftable'; /*0x7b259b*/
}
