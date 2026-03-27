TileWindow *TileWindow::TileWindow()
{
  TileWindow *result; // eax

  result = (TileWindow *)FormHeapAlloc(0x40u);
  if ( !result )
    return 0;
  *((_DWORD *)result + 2) = 0;
  *((_WORD *)result + 6) = 0;
  *((_WORD *)result + 7) = 0;
  *((_DWORD *)result + 8) = 0;
  *((_DWORD *)result + 6) = 0;
  *((_DWORD *)result + 7) = 0;
  *((_DWORD *)result + 5) = &NiTList<Tile::Value *>::`vftable';
  *((_DWORD *)result + 0xF) = 0;
  *((_DWORD *)result + 0xD) = 0;
  *((_DWORD *)result + 0xE) = 0;
  *((_DWORD *)result + 0xC) = &NiTList<Tile *>::`vftable';
  *((_DWORD *)result + 9) = 0;
  *((_DWORD *)result + 4) = 0;
  *((_BYTE *)result + 4) = 0;
  *((_BYTE *)result + 6) = 0;
  *(_DWORD *)result = &TileWindow::`vftable';
  return result;
}
