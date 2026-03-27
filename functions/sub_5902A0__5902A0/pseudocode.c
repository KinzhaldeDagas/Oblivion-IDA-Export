_DWORD *__cdecl sub_5902A0(TileWindow *a1, int a2)
{
  double v2; // st7
  _DWORD *result; // eax

  switch ( a2 )
  {
    case 0x385:
      result = sub_590070();
      break;
    case 0x386:
      result = sub_590000();
      break;
    case 0x387:
      result = sub_58FEC0();
      break;
    case 0x388:
      result = (_DWORD *)FormHeapAlloc(0x5Cu);
      if ( !result )
        goto LABEL_9;
      v2 = flt_A30634;
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
      result[4] = 0;
      *((_BYTE *)result + 4) = 0;
      *((_BYTE *)result + 6) = 0;
      *result = &Tile3D::`vftable';
      result[0x12] = 0;
      *((_WORD *)result + 0x26) = 0;
      *((_WORD *)result + 0x27) = 0;
      result[0x14] = 0;
      *((_WORD *)result + 0x2A) = 0;
      *((_WORD *)result + 0x2B) = 0;
      *((float *)result + 0x16) = v2;
      result[9] = 0;
      result[0x10] = 0;
      result[0x11] = 0;
      break;
    case 0x389:
      result = TileMenu::TileMenu();
      break;
    case 0x38B:
      result = TileWindow::TileWindow();
      break;
    default:
LABEL_9:
      result = 0;
      break;
  }
  return result;
}
