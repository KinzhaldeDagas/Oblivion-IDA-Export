void __thiscall NiTList<Tile::StringListElement *>::~NiTList<Tile::StringListElement *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<Tile::StringListElement *>,Tile::StringListElement *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<Tile::StringListElement *>,Tile::StringListElement *>::`vftable';
}
