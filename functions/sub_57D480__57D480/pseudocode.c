void __usercall sub_57D480(int a1@<ecx>, char bp0@<bpl>, double a3@<st1>, double a4@<st0>)
{
  double v5; // st5
  double v7; // st6
  Tile *v8; // eax
  Tile *v9; // edi
  double v10; // st6
  Tile *v11; // ecx
  float a2; // [esp+0h] [ebp-Ch]

  v5 = flt_A3D8F0; /*0x57d480*/
  sub_57B950(bp0, a3, 3, flt_A3D8F0); /*0x57d490*/
  v7 = flt_A31E2C; /*0x57d495*/
  sub_57B950(bp0, v7, 3, flt_A31E2C); /*0x57d4a3*/
  HUDMainMenu_Create(v5, a4, v7); /*0x57d4a8*/
  v9 = v8; /*0x57d4b1*/
  sub_5A6040(v5, v7, 1, 1); /*0x57d4b3*/
  if ( v9 ) /*0x57d4bd*/
    Tile_SetFloat(v9, 0xFA1u, 1.0); /*0x57d4cc*/
  v10 = flt_A2FE7C; /*0x57d4d1*/
  sub_57B950(bp0, v10, 3, flt_A2FE7C); /*0x57d4dd*/
  *(_WORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x1C) + 0x24) + 0x18) |= 1u; /*0x57d4ee*/
  Tile_SetFloat(*(Tile **)(a1 + 0x1C), 0xFA1u, 1.0); /*0x57d4fe*/
  sub_58E870(*(_DWORD *)(a1 + 0x1C), v5, v10, 1.0); /*0x57d506*/
  v11 = *(Tile **)(a1 + 0x68); /*0x57d512*/
  a2 = fConstant_2; /*0x57d515*/
  *(_BYTE *)(a1 + 8) = 1; /*0x57d51d*/
  Tile_SetFloat(v11, 0xFAEu, a2); /*0x57d521*/
}
