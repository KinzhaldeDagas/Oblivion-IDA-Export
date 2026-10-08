void __thiscall TileRect::~TileRect(TileRect *this)
{
  *(_DWORD *)this = &TileRect::`vftable'; /*0x5819c8*/
  if ( !*((_BYTE *)this + 4) ) /*0x5819ce*/
    Tile::Release(this); /*0x5819dc*/
  Tile::~Tile(this); /*0x5819eb*/
}
