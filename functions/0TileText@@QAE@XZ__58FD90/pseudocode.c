TileText *__thiscall TileText::TileText(TileText *this, Tile *parent)
{
  *((_DWORD *)this + 2) = 0; /*0x58fdbb*/
  *((_WORD *)this + 6) = 0; /*0x58fdbe*/
  *((_WORD *)this + 7) = 0; /*0x58fdc2*/
  *((_DWORD *)this + 8) = 0; /*0x58fdc6*/
  *((_DWORD *)this + 6) = 0; /*0x58fdc9*/
  *((_DWORD *)this + 7) = 0; /*0x58fdcc*/
  *((_DWORD *)this + 5) = &NiTList<Tile::Value *>::`vftable'; /*0x58fdcf*/
  *((_DWORD *)this + 0xF) = 0; /*0x58fdd6*/
  *((_DWORD *)this + 0xD) = 0; /*0x58fdd9*/
  *((_DWORD *)this + 0xE) = 0; /*0x58fddc*/
  *((_DWORD *)this + 0xC) = &NiTList<Tile *>::`vftable'; /*0x58fddf*/
  *((_DWORD *)this + 9) = 0; /*0x58fde6*/
  *((_DWORD *)this + 4) = 0; /*0x58fde9*/
  *((_BYTE *)this + 4) = 0; /*0x58fdec*/
  *((_BYTE *)this + 6) = 0; /*0x58fdef*/
  *(_DWORD *)this = &TileText::`vftable'; /*0x58fdfc*/
  if ( *(float *)&parent != 0.0 ) /*0x58fe02*/
    Tile::SetParent(this, parent, 0); /*0x58fe06*/
  *((_BYTE *)this + 0x50) = 0; /*0x58fe0d*/
  return this; /*0x58fe10*/
}
