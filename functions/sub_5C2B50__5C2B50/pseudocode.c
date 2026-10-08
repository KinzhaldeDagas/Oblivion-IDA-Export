void __stdcall sub_5C2B50(Tile *a1, float arg4)
{
  float a2; // [esp+0h] [ebp-8h]

  a2 = -Tile_GetFloat(a1, 0xFAE); /*0x5c2b64*/
  Tile_SetFloat(a1, (_DWORD *)0xFB1, a2); /*0x5c2b6e*/
  Tile_SetFloat(a1, (_DWORD *)0xFB1, arg4); /*0x5c2b82*/
  Tile_SetFloat(a1, (_DWORD *)0xFB1, 0.0); /*0x5c2b94*/
}
