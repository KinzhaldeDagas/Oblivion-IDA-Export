_DWORD *__thiscall NiTListBase<DFALL<Tile::StringListElement *>,Tile::StringListElement *>::NiTListBase<DFALL<Tile::StringListElement *>,Tile::StringListElement *>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<Tile::StringListElement *>,Tile::StringListElement *>::`vftable'; /*0x588b08*/
  if ( (a2 & 1) != 0 ) /*0x588b0e*/
    FormHeapFree((unsigned int)this); /*0x588b11*/
  return this; /*0x588b1b*/
}
