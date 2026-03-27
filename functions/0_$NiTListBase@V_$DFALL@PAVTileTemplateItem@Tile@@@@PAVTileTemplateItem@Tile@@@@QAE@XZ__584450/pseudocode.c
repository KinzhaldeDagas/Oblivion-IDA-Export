_DWORD *__thiscall NiTListBase<DFALL<Tile::TileTemplateItem *>,Tile::TileTemplateItem *>::NiTListBase<DFALL<Tile::TileTemplateItem *>,Tile::TileTemplateItem *>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<Tile::TileTemplateItem *>,Tile::TileTemplateItem *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
