void __thiscall NiTPointerList<ReferenceVolume *>::~NiTPointerList<ReferenceVolume *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,ReferenceVolume *>::`vftable'; /*0x7aa828*/
  NiTPointerList::FreeAllNodes(this); /*0x7aa836*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,ReferenceVolume *>::`vftable'; /*0x7aa83b*/
}
