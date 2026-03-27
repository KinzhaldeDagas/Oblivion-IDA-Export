void __stdcall sub_5B1430(_DWORD *a1, int a2, int a3, int a4)
{
  char v4[256]; // [esp+4h] [ebp-104h] BYREF

  if ( a2 < 0 )
  {
    Tile_SetString(a1, (_DWORD *)0xFB1, word_A36430);
  }
  else
  {
    _sprintf(v4, "%i", a2);
    Tile_SetString(a1, (_DWORD *)0xFB1, v4);
  }
  if ( a3 < 0 )
  {
    Tile_SetString(a1, (_DWORD *)0xFB2, word_A36430);
  }
  else
  {
    _sprintf(v4, "%i", a3);
    Tile_SetString(a1, (_DWORD *)0xFB2, v4);
  }
  if ( a4 < 0 )
  {
    Tile_SetString(a1, (_DWORD *)0xFB3, word_A36430);
  }
  else
  {
    _sprintf(v4, "%i", a4);
    Tile_SetString(a1, (_DWORD *)0xFB3, v4);
  }
}
