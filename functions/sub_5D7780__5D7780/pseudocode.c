void __userpurge sub_5D7780(int a1@<ecx>, double a2@<st0>, double a3@<st3>, signed int a4, Tile *a5)
{
  _DWORD *v10; // eax
  bool v11; // zf
  float v12; // [esp+20h] [ebp+8h]
  float v13; // [esp+20h] [ebp+8h]
  float v14; // [esp+20h] [ebp+8h]
  float v15; // [esp+20h] [ebp+8h]
  float v16; // [esp+20h] [ebp+8h]

  if ( a5 )
  {
    v10 = *(_DWORD **)(a1 + 0x58);
    if ( v10[1] || *v10 )
    {
      if ( a4 == 0xE || a4 == 0xF )
      {
        a3 = 0.0;
        Tile_SetFloat(a5, (_DWORD *)0xFA7, 0.0);
      }
      if ( a4 >= 0x3E8 || a4 == 2 )
      {
        v11 = *(_DWORD *)(a1 + 0x34) == 0;
        *(_BYTE *)(a1 + 0x60) = 0xFF;
        *(_DWORD *)(a1 + 0x5C) = 0;
        if ( !v11 )
        {
          sub_57DE50(4);
          sub_588D90(a5, a2);
          v12 = a2 - Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x34), 0xFBD);
          Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFAB, v12);
          v13 = Tile_GetFloat(a5, 0xFCB) - dbl_A49310;
          Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFCB, v13);
          v14 = Tile_GetFloat(a5, 0xFCA) - dbl_A49310;
          Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFCA, v14);
          v15 = sub_588C50(a5) + dbl_A3C800;
          Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFAD, v15);
          sub_588CF0(a5);
          v16 = a3 + dbl_A3C800;
          Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFAC, v16);
          Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFA1, fConstant_2);
          *(_DWORD *)(a1 + 0x5C) = a5;
        }
      }
      else
      {
        Tile_SetFloat(*(Tile **)(a1 + 0x34), (_DWORD *)0xFA1, 1.0);
      }
    }
  }
}
