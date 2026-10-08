void __cdecl sub_5A8BC0(signed int a1)
{
  float a2; // [esp+0h] [ebp-20h]

  if ( dword_B3B0B4[0xA7] ) /*0x5a8be4*/
  {
    Tile_SetFloat((Tile *)dword_B3B0B4[0xA7], 0xFB2u, 1.0); /*0x5a8c11*/
    Tile_SetFloat((Tile *)dword_B3B0B4[0xA7], 0xFB2u, fConstant_2); /*0x5a8c2b*/
    a2 = (float)a1; /*0x5a8c3b*/
    Tile_SetFloat((Tile *)dword_B3B0B4[0xA7], 0xFB3u, a2); /*0x5a8c43*/
    Tile_SetString((_DWORD *)dword_B3B0B4[0xA7], (_DWORD *)0xFAE, 0); /*0x5a8c54*/
    Tile_SetFloat((Tile *)dword_B3B0B4[0xA7], 0xFAFu, 1.0); /*0x5a8c6a*/
    FormHeapFree(0); /*0x5a8c70*/
  }
}
