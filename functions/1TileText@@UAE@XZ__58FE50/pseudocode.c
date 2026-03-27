void __thiscall TileText::~TileText(TileText *this)
{
  *(_DWORD *)this = &TileText::`vftable';
  if ( !*((_BYTE *)this + 4) )
    sub_58DA70((int)this);
  Tile::~Tile(this);
}
