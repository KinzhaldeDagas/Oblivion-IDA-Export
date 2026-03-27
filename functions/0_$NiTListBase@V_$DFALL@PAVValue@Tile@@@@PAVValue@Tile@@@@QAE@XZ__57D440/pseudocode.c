_DWORD *__thiscall NiTListBase<DFALL<Tile::Value *>,Tile::Value *>::NiTListBase<DFALL<Tile::Value *>,Tile::Value *>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<Tile::Value *>,Tile::Value *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
