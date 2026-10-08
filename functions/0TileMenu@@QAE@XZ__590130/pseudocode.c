TileMenu *TileMenu::TileMenu()
{
  TileMenu *result; // eax

  result = (TileMenu *)FormHeapAlloc(0x48u); /*0x590132*/
  if ( !result ) /*0x59013e*/
    return 0; /*0x590181*/
  *((_DWORD *)result + 2) = 0; /*0x590140*/
  *((_WORD *)result + 6) = 0; /*0x590143*/
  *((_WORD *)result + 7) = 0; /*0x590147*/
  *((_DWORD *)result + 8) = 0; /*0x59014b*/
  *((_DWORD *)result + 6) = 0; /*0x59014e*/
  *((_DWORD *)result + 7) = 0; /*0x590151*/
  *((_DWORD *)result + 5) = &NiTList<Tile::Value *>::`vftable'; /*0x590154*/
  *((_DWORD *)result + 0xF) = 0; /*0x59015b*/
  *((_DWORD *)result + 0xD) = 0; /*0x59015e*/
  *((_DWORD *)result + 0xE) = 0; /*0x590161*/
  *((_DWORD *)result + 0xC) = &NiTList<Tile *>::`vftable'; /*0x590164*/
  *((_DWORD *)result + 9) = 0; /*0x59016b*/
  *((_DWORD *)result + 4) = 0; /*0x59016e*/
  *((_BYTE *)result + 4) = 0; /*0x590171*/
  *((_BYTE *)result + 6) = 0; /*0x590174*/
  *(_DWORD *)result = &TileMenu::`vftable'; /*0x590177*/
  *((_DWORD *)result + 0x11) = 0; /*0x59017d*/
  return result; /*0x590180*/
}
