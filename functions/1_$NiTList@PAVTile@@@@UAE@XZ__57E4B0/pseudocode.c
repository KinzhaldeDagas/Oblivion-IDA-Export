void __thiscall NiTList<Tile *>::~NiTList<Tile *>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<Tile *>,Tile *>::`vftable'; /*0x57e4d8*/
  NiTPointerList::FreeAllNodes(this); /*0x57e4e6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<Tile *>,Tile *>::`vftable'; /*0x57e4eb*/
}
