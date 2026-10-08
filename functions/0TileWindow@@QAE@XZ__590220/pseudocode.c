TileWindow *TileWindow::TileWindow()
{
  TileWindow *result; // eax

  result = (TileWindow *)FormHeapAlloc(0x40u); /*0x590222*/
  if ( !result ) /*0x59022e*/
    return 0; /*0x59026e*/
  *((_DWORD *)result + 2) = 0; /*0x590230*/
  *((_WORD *)result + 6) = 0; /*0x590233*/
  *((_WORD *)result + 7) = 0; /*0x590237*/
  *((_DWORD *)result + 8) = 0; /*0x59023b*/
  *((_DWORD *)result + 6) = 0; /*0x59023e*/
  *((_DWORD *)result + 7) = 0; /*0x590241*/
  *((_DWORD *)result + 5) = &NiTList<Tile::Value *>::`vftable'; /*0x590244*/
  *((_DWORD *)result + 0xF) = 0; /*0x59024b*/
  *((_DWORD *)result + 0xD) = 0; /*0x59024e*/
  *((_DWORD *)result + 0xE) = 0; /*0x590251*/
  *((_DWORD *)result + 0xC) = &NiTList<Tile *>::`vftable'; /*0x590254*/
  *((_DWORD *)result + 9) = 0; /*0x59025b*/
  *((_DWORD *)result + 4) = 0; /*0x59025e*/
  *((_BYTE *)result + 4) = 0; /*0x590261*/
  *((_BYTE *)result + 6) = 0; /*0x590264*/
  *(_DWORD *)result = &TileWindow::`vftable'; /*0x590267*/
  return result; /*0x59026d*/
}
