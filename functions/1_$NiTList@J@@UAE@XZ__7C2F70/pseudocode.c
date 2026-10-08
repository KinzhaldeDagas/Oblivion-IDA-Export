void __thiscall NiTList<long>::~NiTList<long>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<long>,long>::`vftable'; /*0x7c2f98*/
  NiTPointerList::FreeAllNodes(this); /*0x7c2fa6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<long>,long>::`vftable'; /*0x7c2fab*/
}
