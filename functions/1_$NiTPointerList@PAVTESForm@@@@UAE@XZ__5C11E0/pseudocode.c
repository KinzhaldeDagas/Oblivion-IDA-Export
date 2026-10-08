void __thiscall NiTPointerList<TESForm *>::~NiTPointerList<TESForm *>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,TESForm *>::`vftable'; /*0x5c1208*/
  NiTPointerList::FreeAllNodes(this); /*0x5c1216*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,TESForm *>::`vftable'; /*0x5c121b*/
}
