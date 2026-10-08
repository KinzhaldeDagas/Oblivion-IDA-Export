_DWORD *__thiscall NiTListBase<DFALL<Tile::Value *>,Tile::Value *>::NiTListBase<DFALL<Tile::Value *>,Tile::Value *>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<Tile::Value *>,Tile::Value *>::`vftable'; /*0x57d448*/
  if ( (a2 & 1) != 0 ) /*0x57d44e*/
    FormHeapFree((unsigned int)this); /*0x57d451*/
  return this; /*0x57d45b*/
}
