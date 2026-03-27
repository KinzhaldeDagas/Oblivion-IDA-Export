_DWORD *__thiscall NiTListBase<DFALL<Tile::StringListElement *>,Tile::StringListElement *>::NiTListBase<DFALL<Tile::StringListElement *>,Tile::StringListElement *>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<Tile::StringListElement *>,Tile::StringListElement *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
