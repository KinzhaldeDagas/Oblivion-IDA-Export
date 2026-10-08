double __userpurge sub_5D4260@<st0>(int a1@<ecx>, double result@<st0>, int arg0, _DWORD *a4)
{
  double Float; // st6
  Tile *v8; // ecx
  int a3; // [esp+14h] [ebp-Ch]
  double v10; // [esp+18h] [ebp-8h]
  float v11; // [esp+24h] [ebp+4h]
  float v12; // [esp+24h] [ebp+4h]
  float v13; // [esp+24h] [ebp+4h]
  float v14; // [esp+24h] [ebp+4h]
  float v15; // [esp+24h] [ebp+4h]
  float v16; // [esp+28h] [ebp+8h]
  float v17; // [esp+28h] [ebp+8h]

  if ( arg0 == 0x18 || arg0 == 0x14 ) /*0x5d4273*/
  {
    if ( a4 && *(_DWORD *)(a1 + 0x40) ) /*0x5d4286*/
    {
      Float = Tile_GetFloat(a4, 0xFE0); /*0x5d4298*/
      a3 = Double_To_SInt32(result); /*0x5d42a6*/
      v10 = sub_588D90(a4, result); /*0x5d42af*/
      v11 = v10 - Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x40), 0xFBD); /*0x5d42c8*/
      Tile_SetFloat(*(Tile **)(a1 + 0x40), 0xFABu, v11); /*0x5d42d8*/
      v12 = (float)(2 * a3); /*0x5d42ef*/
      v16 = Tile_GetFloat(a4, 0xFCB) - v12; /*0x5d4300*/
      Tile_SetFloat(*(Tile **)(a1 + 0x40), 0xFCBu, v16); /*0x5d4310*/
      v13 = Tile_GetFloat(a4, 0xFCA) - v12; /*0x5d4329*/
      Tile_SetFloat(*(Tile **)(a1 + 0x40), 0xFCAu, v13); /*0x5d4339*/
      v14 = (float)a3; /*0x5d4344*/
      v17 = sub_588C50(a4) + v14; /*0x5d4355*/
      Tile_SetFloat(*(Tile **)(a1 + 0x40), 0xFADu, v17); /*0x5d4365*/
      result = sub_588CF0(a4); /*0x5d436c*/
      v15 = Float + v14; /*0x5d4379*/
      Tile_SetFloat(*(Tile **)(a1 + 0x40), 0xFACu, v15); /*0x5d4389*/
      Tile_SetFloat(*(Tile **)(a1 + 0x40), 0xFA1u, fConstant_2); /*0x5d43a0*/
      Tile_SetFloat(*(Tile **)(a1 + 0x40), 0xFC8u, fConstant_2); /*0x5d43b7*/
    }
    else
    {
      v8 = *(Tile **)(a1 + 0x40); /*0x5d43bf*/
      if ( v8 ) /*0x5d43c4*/
        Tile_SetFloat(v8, 0xFA1u, 1.0); /*0x5d43d1*/
    }
  }
  if ( arg0 == 0x18 || arg0 == 0x14 || arg0 == 0xF || arg0 == 0xE ) /*0x5d43e9*/
    sub_57DE50(4); /*0x5d43ed*/
  return result; /*0x5d43f5*/
}
