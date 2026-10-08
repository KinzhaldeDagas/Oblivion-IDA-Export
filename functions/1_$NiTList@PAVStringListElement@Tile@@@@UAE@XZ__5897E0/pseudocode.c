void __thiscall NiTList<Tile::StringListElement *>::~NiTList<Tile::StringListElement *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<Tile::StringListElement *>,Tile::StringListElement *>::`vftable'; /*0x589808*/
  NiTPointerList::FreeAllNodes(this); /*0x589816*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<Tile::StringListElement *>,Tile::StringListElement *>::`vftable'; /*0x58981b*/
}
