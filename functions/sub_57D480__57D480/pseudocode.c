void __usercall sub_57D480(int a1@<ecx>, int ebx0@<ebx>, char a3@<bpl>, double a4@<st1>, double a5@<st0>)
{
  double v6; // st5
  double v8; // st6
  double v9; // st7
  Tile *v10; // eax
  Tile *v11; // edi
  double v12; // st6
  Tile *v13; // ecx
  float a2; // [esp+0h] [ebp-Ch]

  v6 = flt_A3D8F0;
  sub_57B950(a3, v6, a4, 3, flt_A3D8F0);
  v8 = flt_A31E2C;
  sub_57B950(a3, v6, v8, 3, flt_A31E2C);
  v9 = sub_5A6B00(ebx0, a3, v6, a5, v8);
  v11 = v10;
  sub_5A6040(v6, v8, a3, v9, 1, 1);
  if ( v11 )
    Tile_SetFloat(v11, (_DWORD *)0xFA1, 1.0);
  v12 = flt_A2FE7C;
  sub_57B950(a3, v6, v12, 3, flt_A2FE7C);
  *(_WORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x1C) + 0x24) + 0x18) |= 1u;
  Tile_SetFloat(*(Tile **)(a1 + 0x1C), (_DWORD *)0xFA1, 1.0);
  sub_58E870(*(_DWORD *)(a1 + 0x1C), v6, v12, 1.0);
  v13 = *(Tile **)(a1 + 0x68);
  a2 = fConstant_2;
  *(_BYTE *)(a1 + 8) = 1;
  Tile_SetFloat(v13, (_DWORD *)0xFAE, a2);
}
