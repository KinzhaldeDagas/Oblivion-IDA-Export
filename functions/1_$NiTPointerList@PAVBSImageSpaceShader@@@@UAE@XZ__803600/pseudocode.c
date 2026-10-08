void __thiscall NiTPointerList<BSImageSpaceShader *>::~NiTPointerList<BSImageSpaceShader *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSImageSpaceShader *>::`vftable'; /*0x803628*/
  NiTPointerList::FreeAllNodes(this); /*0x803636*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,BSImageSpaceShader *>::`vftable'; /*0x80363b*/
}
