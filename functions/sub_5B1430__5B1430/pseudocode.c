void __stdcall sub_5B1430(_DWORD *a1, int a2, int a3, int a4)
{
  char v4[256]; // [esp+4h] [ebp-104h] BYREF

  if ( a2 < 0 ) /*0x5b1455*/
  {
    Tile_SetString(a1, (_DWORD *)0xFB1, word_A36430); /*0x5b147d*/
  }
  else
  {
    _sprintf(v4, "%i", a2); /*0x5b1462*/
    Tile_SetString(a1, (_DWORD *)0xFB1, v4); /*0x5b146f*/
  }
  if ( a3 < 0 ) /*0x5b148b*/
  {
    Tile_SetString(a1, (_DWORD *)0xFB2, word_A36430); /*0x5b14b3*/
  }
  else
  {
    _sprintf(v4, "%i", a3); /*0x5b1498*/
    Tile_SetString(a1, (_DWORD *)0xFB2, v4); /*0x5b14a5*/
  }
  if ( a4 < 0 ) /*0x5b14c1*/
  {
    Tile_SetString(a1, (_DWORD *)0xFB3, word_A36430); /*0x5b14e9*/
  }
  else
  {
    _sprintf(v4, "%i", a4); /*0x5b14ce*/
    Tile_SetString(a1, (_DWORD *)0xFB3, v4); /*0x5b14db*/
  }
}
