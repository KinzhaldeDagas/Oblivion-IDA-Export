void __thiscall NiTList<Tile::Value *>::~NiTList<Tile::Value *>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<Tile::Value *>,Tile::Value *>::`vftable'; /*0x57e478*/
  NiTPointerList::FreeAllNodes(this); /*0x57e486*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<Tile::Value *>,Tile::Value *>::`vftable'; /*0x57e48b*/
}
