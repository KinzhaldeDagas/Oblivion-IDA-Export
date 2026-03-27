void __usercall sub_459A90(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  _DWORD *OpenMenuTile; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EF);
  if ( OpenMenuTile )
  {
    if ( Tile_GetParentMenu(OpenMenuTile) )
    {
      sub_578F20(a2, a3, a4, a5);
      sub_57B950(a2, a3, a4, flt_A2FE7C, 3, flt_A2FE7C);
    }
  }
  *(_DWORD *)(a1 + 0x18) |= 0x2000u;
  sub_5732D0((NiAVObject **)dword_B3A6B0, a3, a4, flt_B33A48, 2, flt_B33A48);
}
