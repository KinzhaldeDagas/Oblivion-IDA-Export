void __thiscall TileWindow::~TileWindow(TileWindow *this)
{
  *(_DWORD *)this = &TileWindow::`vftable';
  if ( !*((_BYTE *)this + 4) )
    sub_58DA70((int)this);
  Tile::~Tile(this);
}
