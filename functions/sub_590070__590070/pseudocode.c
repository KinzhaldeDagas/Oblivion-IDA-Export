_DWORD *sub_590070()
{
  _DWORD *result; // eax

  result = (_DWORD *)FormHeapAlloc(0x44u);
  if ( !result )
    return 0;
  result[2] = 0;
  *((_WORD *)result + 6) = 0;
  *((_WORD *)result + 7) = 0;
  result[8] = 0;
  result[6] = 0;
  result[7] = 0;
  result[5] = &NiTList<Tile::Value *>::`vftable';
  result[0xF] = 0;
  result[0xD] = 0;
  result[0xE] = 0;
  result[0xC] = &NiTList<Tile *>::`vftable';
  result[9] = 0;
  result[4] = 0;
  *((_BYTE *)result + 4) = 0;
  *((_BYTE *)result + 6) = 0;
  *result = &TileRect::`vftable';
  return result;
}
