void __thiscall NiTList<unsigned int>::~NiTList<unsigned int>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<unsigned int>,unsigned int>::`vftable'; /*0x6aa688*/
  NiTPointerList::FreeAllNodes(this); /*0x6aa696*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<unsigned int>,unsigned int>::`vftable'; /*0x6aa69b*/
}
