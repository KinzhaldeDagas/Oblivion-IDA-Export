_DWORD *sub_590070()
{
  _DWORD *result; // eax

  result = (_DWORD *)FormHeapAlloc(0x44u); /*0x590072*/
  if ( !result ) /*0x59007e*/
    return 0; /*0x5900be*/
  result[2] = 0; /*0x590080*/
  *((_WORD *)result + 6) = 0; /*0x590083*/
  *((_WORD *)result + 7) = 0; /*0x590087*/
  result[8] = 0; /*0x59008b*/
  result[6] = 0; /*0x59008e*/
  result[7] = 0; /*0x590091*/
  result[5] = &NiTList<Tile::Value *>::`vftable'; /*0x590094*/
  result[0xF] = 0; /*0x59009b*/
  result[0xD] = 0; /*0x59009e*/
  result[0xE] = 0; /*0x5900a1*/
  result[0xC] = &NiTList<Tile *>::`vftable'; /*0x5900a4*/
  result[9] = 0; /*0x5900ab*/
  result[4] = 0; /*0x5900ae*/
  *((_BYTE *)result + 4) = 0; /*0x5900b1*/
  *((_BYTE *)result + 6) = 0; /*0x5900b4*/
  *result = &TileRect::`vftable'; /*0x5900b7*/
  return result; /*0x5900bd*/
}
