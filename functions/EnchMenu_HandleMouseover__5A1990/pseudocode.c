double __userpurge EnchMenu_HandleMouseover@<st0>(int a1@<ecx>, double result@<st0>, signed int arg0, _DWORD *a4)
{
  bool v7; // zf
  double Float; // st6
  int a3; // [esp+14h] [ebp-Ch]
  double v10; // [esp+18h] [ebp-8h]
  float v11; // [esp+24h] [ebp+4h]
  float v12; // [esp+24h] [ebp+4h]
  float v13; // [esp+24h] [ebp+4h]
  float v14; // [esp+24h] [ebp+4h]
  float v15; // [esp+24h] [ebp+4h]
  float v16; // [esp+28h] [ebp+8h]
  float v17; // [esp+28h] [ebp+8h]

  if ( arg0 >= 0x3E8 || arg0 == 0x14 || arg0 == 0x16 || arg0 == 2 || arg0 == 0x18 ) /*0x5a19b6*/
  {
    if ( !a4 ) /*0x5a19c2*/
      return result; /*0x5a19c2*/
    v7 = *(_DWORD *)(a1 + 0x5C) == 0; /*0x5a19c8*/
    *(_DWORD *)(a1 + 0x94) = 0; /*0x5a19cc*/
    if ( !v7 ) /*0x5a19d6*/
    {
      Float = Tile_GetFloat(a4, 0xFE0); /*0x5a19e4*/
      a3 = Double_To_SInt32(result); /*0x5a19f2*/
      v10 = sub_588D90(a4, result); /*0x5a19fb*/
      v11 = v10 - Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x5C), 0xFBD); /*0x5a1a14*/
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFABu, v11); /*0x5a1a24*/
      v12 = (float)(2 * a3); /*0x5a1a3c*/
      v16 = Tile_GetFloat(a4, 0xFCB) - v12; /*0x5a1a4d*/
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFCBu, v16); /*0x5a1a5d*/
      v13 = Tile_GetFloat(a4, 0xFCA) - v12; /*0x5a1a76*/
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFCAu, v13); /*0x5a1a86*/
      v14 = (float)a3; /*0x5a1a91*/
      v17 = sub_588C50(a4) + v14; /*0x5a1aa2*/
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFADu, v17); /*0x5a1ab2*/
      result = sub_588CF0(a4); /*0x5a1ab9*/
      v15 = Float + v14; /*0x5a1ac6*/
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFACu, v15); /*0x5a1ad6*/
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFA1u, fConstant_2); /*0x5a1aed*/
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFC8u, fConstant_2); /*0x5a1b04*/
      *(_DWORD *)(a1 + 0x94) = a4; /*0x5a1b09*/
    }
  }
  if ( arg0 >= 0x3E8 || arg0 == 0x14 || arg0 == 0x16 || arg0 == 2 || arg0 == 0x18 || arg0 == 0xF || arg0 == 0xE ) /*0x5a1b34*/
    sub_57DE50(4); /*0x5a1b38*/
  return result; /*0x5a1b40*/
}
