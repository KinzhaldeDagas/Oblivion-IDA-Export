void __cdecl sub_5A8BC0(signed int a1)
{
  float a2; // [esp+0h] [ebp-20h]

  if ( dword_B3B350 )
  {
    Tile_SetFloat((Tile *)dword_B3B350, (_DWORD *)0xFB2, 1.0);
    Tile_SetFloat((Tile *)dword_B3B350, (_DWORD *)0xFB2, fConstant_2);
    a2 = (float)a1;
    Tile_SetFloat((Tile *)dword_B3B350, (_DWORD *)0xFB3, a2);
    Tile_SetString((_DWORD *)dword_B3B350, (_DWORD *)0xFAE, 0);
    Tile_SetFloat((Tile *)dword_B3B350, (_DWORD *)0xFAF, 1.0);
    FormHeapFree(0);
  }
}
