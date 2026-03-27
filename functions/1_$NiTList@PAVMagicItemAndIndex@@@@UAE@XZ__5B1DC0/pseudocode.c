void __thiscall NiTList<MagicItemAndIndex *>::~NiTList<MagicItemAndIndex *>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<MagicItemAndIndex *>,MagicItemAndIndex *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<MagicItemAndIndex *>,MagicItemAndIndex *>::`vftable';
}
