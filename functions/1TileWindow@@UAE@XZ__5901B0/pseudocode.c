void __thiscall TileWindow::~TileWindow(TileWindow *this)
{
  *(_DWORD *)this = &TileWindow::`vftable'; /*0x5901d8*/
  if ( !*((_BYTE *)this + 4) ) /*0x5901de*/
    Tile::Release(this); /*0x5901ec*/
  Tile::~Tile(this); /*0x5901fb*/
}
