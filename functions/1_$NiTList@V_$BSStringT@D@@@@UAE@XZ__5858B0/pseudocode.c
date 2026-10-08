void __thiscall NiTList<BSStringT<char>>::~NiTList<BSStringT<char>>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<BSStringT<char>>,BSStringT<char>>::`vftable'; /*0x5858d8*/
  NiTPointerList::FreeAllNodes(this); /*0x5858e6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<BSStringT<char>>,BSStringT<char>>::`vftable'; /*0x5858eb*/
}
