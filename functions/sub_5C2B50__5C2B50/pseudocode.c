void __stdcall sub_5C2B50(Tile *a1, float arg4)
{
  float a2; // [esp+0h] [ebp-8h]

  a2 = -Tile_GetFloat(a1, 0xFAE);
  Tile_SetFloat(a1, (_DWORD *)0xFB1, a2);
  Tile_SetFloat(a1, (_DWORD *)0xFB1, arg4);
  Tile_SetFloat(a1, (_DWORD *)0xFB1, 0.0);
}
