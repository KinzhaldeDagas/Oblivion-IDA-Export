void __thiscall TileText::~TileText(TileText *this)
{
  *(_DWORD *)this = &TileText::`vftable'; /*0x58fe78*/
  if ( !*((_BYTE *)this + 4) ) /*0x58fe7e*/
    Tile::Release((int)this); /*0x58fe8c*/
  Tile::~Tile(this); /*0x58fe9b*/
}
