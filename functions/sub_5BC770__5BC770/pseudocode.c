void __userpurge sub_5BC770(int a1@<ecx>, double st7_0@<st0>, int a3, _DWORD *a4)
{
  _DWORD *v9; // eax
  double v10; // st5
  Tile *v11; // ecx
  float a2; // [esp+0h] [ebp-14h]
  float a2a; // [esp+0h] [ebp-14h]
  float a2b; // [esp+0h] [ebp-14h]
  float a2c; // [esp+0h] [ebp-14h]
  float a2d; // [esp+0h] [ebp-14h]
  float v17; // [esp+1Ch] [ebp+8h]

  if ( *(_DWORD *)(a1 + 0x30) && a4 && Tile_GetFloat(a4, 0xFA8) >= flt_A46B10 )
  {
    sub_588D90(a4, st7_0);
    v9 = sub_589390(a4);
    v17 = st7_0 - Tile_GetFloat(v9, 0xFAB) - dbl_A2F928;
    Tile_SetFloat(*(Tile **)(a1 + 0x30), (_DWORD *)0xFAB, v17);
    a2 = Tile_GetFloat(a4, 0xFCB);
    Tile_SetFloat(*(Tile **)(a1 + 0x30), (_DWORD *)0xFCB, a2);
    a2a = Tile_GetFloat(a4, 0xFCA);
    Tile_SetFloat(*(Tile **)(a1 + 0x30), (_DWORD *)0xFCA, a2a);
    a2b = Tile_GetFloat(a4, 0xFAD);
    Tile_SetFloat(*(Tile **)(a1 + 0x30), (_DWORD *)0xFAD, a2b);
    a2c = Tile_GetFloat(a4, 0xFAC);
    Tile_SetFloat(*(Tile **)(a1 + 0x30), (_DWORD *)0xFAC, a2c);
    v10 = fConstant_2;
    v11 = *(Tile **)(a1 + 0x30);
  }
  else
  {
    v11 = *(Tile **)(a1 + 0x30);
    if ( !v11 )
      return;
    v10 = 1.0;
  }
  a2d = v10;
  Tile_SetFloat(v11, (_DWORD *)0xFA1, a2d);
}
