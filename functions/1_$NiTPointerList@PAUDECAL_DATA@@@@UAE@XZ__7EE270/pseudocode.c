void __thiscall NiTPointerList<DECAL_DATA *>::~NiTPointerList<DECAL_DATA *>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,DECAL_DATA *>::`vftable'; /*0x7ee298*/
  NiTPointerList::FreeAllNodes(this); /*0x7ee2a6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,DECAL_DATA *>::`vftable'; /*0x7ee2ab*/
}
