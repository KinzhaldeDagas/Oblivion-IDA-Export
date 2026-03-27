TileText *__thiscall TileText::TileText(TileText *this, float a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_WORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 5) = &NiTList<Tile::Value *>::`vftable';
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xC) = &NiTList<Tile *>::`vftable';
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 4) = 0;
  *((_BYTE *)this + 6) = 0;
  *(_DWORD *)this = &TileText::`vftable';
  if ( a2 != 0.0 )
    sub_58D1C0((float *)this, a2, 0);
  *((_BYTE *)this + 0x50) = 0;
  return this;
}
