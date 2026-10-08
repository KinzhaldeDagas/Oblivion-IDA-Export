_DWORD *__cdecl sub_5902A0(TileWindow *a1, int a2)
{
  double v2; // st7
  _DWORD *result; // eax

  switch ( a2 ) /*0x5902ae*/
  {
    case 0x385: /*0x5902ae*/
      result = sub_590070(); /*0x5902ba*/
      break; /*0x5902c2*/
    case 0x386: /*0x5902ae*/
      result = sub_590000(); /*0x5902c8*/
      break; /*0x5902d0*/
    case 0x387: /*0x5902ae*/
      result = sub_58FEC0(); /*0x5902eb*/
      break; /*0x5902f3*/
    case 0x388: /*0x5902ae*/
      result = (_DWORD *)FormHeapAlloc(0x5Cu); /*0x5902d3*/
      if ( !result ) /*0x5902dd*/
        goto LABEL_9; /*0x5902dd*/
      v2 = kTerrainLODQuadRayDirectionZ; /*0x58ff52*/
      result[2] = 0; /*0x58ff5a*/
      *((_WORD *)result + 6) = 0; /*0x58ff5d*/
      *((_WORD *)result + 7) = 0; /*0x58ff61*/
      result[8] = 0; /*0x58ff65*/
      result[6] = 0; /*0x58ff68*/
      result[7] = 0; /*0x58ff6b*/
      result[5] = &NiTList<Tile::Value *>::`vftable'; /*0x58ff6e*/
      result[0xF] = 0; /*0x58ff75*/
      result[0xD] = 0; /*0x58ff78*/
      result[0xE] = 0; /*0x58ff7b*/
      result[0xC] = &NiTList<Tile *>::`vftable'; /*0x58ff7e*/
      result[4] = 0; /*0x58ff85*/
      *((_BYTE *)result + 4) = 0; /*0x58ff88*/
      *((_BYTE *)result + 6) = 0; /*0x58ff8b*/
      *result = &Tile3D::`vftable'; /*0x58ff8e*/
      result[0x12] = 0; /*0x58ff94*/
      *((_WORD *)result + 0x26) = 0; /*0x58ff97*/
      *((_WORD *)result + 0x27) = 0; /*0x58ff9b*/
      result[0x14] = 0; /*0x58ff9f*/
      *((_WORD *)result + 0x2A) = 0; /*0x58ffa2*/
      *((_WORD *)result + 0x2B) = 0; /*0x58ffa6*/
      *((float *)result + 0x16) = v2; /*0x58ffaa*/
      result[9] = 0; /*0x58ffad*/
      result[0x10] = 0; /*0x58ffb0*/
      result[0x11] = 0; /*0x58ffb3*/
      break; /*0x5902df*/
    case 0x389: /*0x5902ae*/
      result = TileMenu::TileMenu(); /*0x5902f9*/
      break; /*0x590301*/
    case 0x38B: /*0x5902ae*/
      result = TileWindow::TileWindow(); /*0x590307*/
      break; /*0x59030f*/
    default:
LABEL_9:
      result = 0; /*0x590310*/
      break; /*0x590310*/
  }
  return result; /*0x5902c2*/
}
