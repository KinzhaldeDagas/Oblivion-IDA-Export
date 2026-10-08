void __thiscall NiTList<MagicItemAndIndex *>::~NiTList<MagicItemAndIndex *>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<MagicItemAndIndex *>,MagicItemAndIndex *>::`vftable'; /*0x5b1de8*/
  NiTPointerList::FreeAllNodes(this); /*0x5b1df6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<MagicItemAndIndex *>,MagicItemAndIndex *>::`vftable'; /*0x5b1dfb*/
}
