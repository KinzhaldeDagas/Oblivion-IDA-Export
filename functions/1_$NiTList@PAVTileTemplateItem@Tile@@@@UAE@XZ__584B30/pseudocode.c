void __thiscall NiTList<Tile::TileTemplateItem *>::~NiTList<Tile::TileTemplateItem *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<Tile::TileTemplateItem *>,Tile::TileTemplateItem *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<Tile::TileTemplateItem *>,Tile::TileTemplateItem *>::`vftable';
}
