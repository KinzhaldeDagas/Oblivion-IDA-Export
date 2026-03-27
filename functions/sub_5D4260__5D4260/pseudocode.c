void __userpurge sub_5D4260(int a1@<ecx>, double a2@<st0>, int arg0, _DWORD *a4)
{
  double Float; // st4
  Tile *v10; // ecx
  int a3; // [esp+14h] [ebp-Ch]
  float v12; // [esp+24h] [ebp+4h]
  float v13; // [esp+24h] [ebp+4h]
  float v14; // [esp+24h] [ebp+4h]
  float v15; // [esp+24h] [ebp+4h]
  float v16; // [esp+24h] [ebp+4h]
  float v17; // [esp+28h] [ebp+8h]
  float v18; // [esp+28h] [ebp+8h]

  if ( arg0 == 0x18 || arg0 == 0x14 )
  {
    if ( a4 && *(_DWORD *)(a1 + 0x40) )
    {
      Float = Tile_GetFloat(a4, 0xFE0);
      a3 = Double_To_SInt32(a2);
      sub_588D90(a4, a2);
      v12 = a2 - Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x40), 0xFBD);
      Tile_SetFloat(*(Tile **)(a1 + 0x40), (_DWORD *)0xFAB, v12);
      v13 = (float)(2 * a3);
      v17 = Tile_GetFloat(a4, 0xFCB) - v13;
      Tile_SetFloat(*(Tile **)(a1 + 0x40), (_DWORD *)0xFCB, v17);
      v14 = Tile_GetFloat(a4, 0xFCA) - v13;
      Tile_SetFloat(*(Tile **)(a1 + 0x40), (_DWORD *)0xFCA, v14);
      v15 = (float)a3;
      v18 = sub_588C50(a4) + v15;
      Tile_SetFloat(*(Tile **)(a1 + 0x40), (_DWORD *)0xFAD, v18);
      sub_588CF0(a4);
      v16 = Float + v15;
      Tile_SetFloat(*(Tile **)(a1 + 0x40), (_DWORD *)0xFAC, v16);
      Tile_SetFloat(*(Tile **)(a1 + 0x40), (_DWORD *)0xFA1, fConstant_2);
      Tile_SetFloat(*(Tile **)(a1 + 0x40), (_DWORD *)0xFC8, fConstant_2);
    }
    else
    {
      v10 = *(Tile **)(a1 + 0x40);
      if ( v10 )
        Tile_SetFloat(v10, (_DWORD *)0xFA1, 1.0);
    }
  }
  if ( arg0 == 0x18 || arg0 == 0x14 || arg0 == 0xF || arg0 == 0xE )
    sub_57DE50(4);
}
