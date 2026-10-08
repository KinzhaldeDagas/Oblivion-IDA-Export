_DWORD *__thiscall NiTListBase<DFALL<Tile::TileTemplateItem *>,Tile::TileTemplateItem *>::NiTListBase<DFALL<Tile::TileTemplateItem *>,Tile::TileTemplateItem *>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<Tile::TileTemplateItem *>,Tile::TileTemplateItem *>::`vftable'; /*0x584458*/
  if ( (a2 & 1) != 0 ) /*0x58445e*/
    FormHeapFree((unsigned int)this); /*0x584461*/
  return this; /*0x58446b*/
}
