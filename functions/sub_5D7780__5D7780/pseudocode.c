void __userpurge sub_5D7780(int a1@<ecx>, double a2@<st0>, double a3@<st2>, signed int a4, Tile *a5)
{
  _DWORD *v8; // eax
  bool v9; // zf
  float v10; // [esp+20h] [ebp+8h]
  float v11; // [esp+20h] [ebp+8h]
  float v12; // [esp+20h] [ebp+8h]
  float v13; // [esp+20h] [ebp+8h]
  float v14; // [esp+20h] [ebp+8h]

  if ( a5 ) /*0x5d778d*/
  {
    v8 = *(_DWORD **)(a1 + 0x58); /*0x5d7793*/
    if ( v8[1] || *v8 ) /*0x5d779c*/
    {
      if ( a4 == 0xE || a4 == 0xF ) /*0x5d77b2*/
      {
        a3 = 0.0; /*0x5d77b4*/
        Tile_SetFloat(a5, 0xFA7u, 0.0); /*0x5d77c1*/
      }
      if ( a4 >= 0x3E8 || a4 == 2 ) /*0x5d77d1*/
      {
        v9 = *(_DWORD *)(a1 + 0x34) == 0; /*0x5d77ef*/
        *(_BYTE *)(a1 + 0x60) = 0xFF; /*0x5d77f3*/
        *(_DWORD *)(a1 + 0x5C) = 0; /*0x5d77f7*/
        if ( !v9 ) /*0x5d77fe*/
        {
          sub_57DE50(4); /*0x5d7806*/
          sub_588D90(a5, a2); /*0x5d7810*/
          v10 = a2 - Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x34), 0xFBD); /*0x5d782e*/
          Tile_SetFloat(*(Tile **)(a1 + 0x34), 0xFABu, v10); /*0x5d783e*/
          v11 = Tile_GetFloat(a5, 0xFCB) - dbl_A49310; /*0x5d7859*/
          Tile_SetFloat(*(Tile **)(a1 + 0x34), 0xFCBu, v11); /*0x5d7869*/
          v12 = Tile_GetFloat(a5, 0xFCA) - dbl_A49310; /*0x5d7884*/
          Tile_SetFloat(*(Tile **)(a1 + 0x34), 0xFCAu, v12); /*0x5d7894*/
          v13 = sub_588C50(a5) + dbl_A3C800; /*0x5d78aa*/
          Tile_SetFloat(*(Tile **)(a1 + 0x34), 0xFADu, v13); /*0x5d78ba*/
          sub_588CF0(a5); /*0x5d78c1*/
          v14 = a3 + dbl_A3C800; /*0x5d78d0*/
          Tile_SetFloat(*(Tile **)(a1 + 0x34), 0xFACu, v14); /*0x5d78e0*/
          Tile_SetFloat(*(Tile **)(a1 + 0x34), 0xFA1u, fConstant_2); /*0x5d78f7*/
          *(_DWORD *)(a1 + 0x5C) = a5; /*0x5d78fc*/
        }
      }
      else
      {
        Tile_SetFloat(*(Tile **)(a1 + 0x34), 0xFA1u, 1.0); /*0x5d77e1*/
      }
    }
  }
}
