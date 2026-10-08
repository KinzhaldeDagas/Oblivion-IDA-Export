void __thiscall NiTPointerList<TallGrassGroup *>::~NiTPointerList<TallGrassGroup *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,TallGrassGroup *>::`vftable'; /*0x7c2f38*/
  NiTPointerList::FreeAllNodes(this); /*0x7c2f46*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,TallGrassGroup *>::`vftable'; /*0x7c2f4b*/
}
