void __thiscall NiTList<BSStringT<char>>::~NiTList<BSStringT<char>>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<BSStringT<char>>,BSStringT<char>>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<BSStringT<char>>,BSStringT<char>>::`vftable';
}
