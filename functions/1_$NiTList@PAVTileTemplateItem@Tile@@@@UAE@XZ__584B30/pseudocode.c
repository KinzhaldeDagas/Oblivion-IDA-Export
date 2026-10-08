void __thiscall NiTList<Tile::TileTemplateItem *>::~NiTList<Tile::TileTemplateItem *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<Tile::TileTemplateItem *>,Tile::TileTemplateItem *>::`vftable'; /*0x584b58*/
  NiTPointerList::FreeAllNodes(this); /*0x584b66*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<Tile::TileTemplateItem *>,Tile::TileTemplateItem *>::`vftable'; /*0x584b6b*/
}
