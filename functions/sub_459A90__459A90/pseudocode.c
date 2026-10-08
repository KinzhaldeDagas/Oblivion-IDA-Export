void __usercall sub_459A90(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  _DWORD *OpenMenuTile; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EF); /*0x459a98*/
  if ( OpenMenuTile ) /*0x459aa2*/
  {
    if ( Tile_GetParentMenu(OpenMenuTile) ) /*0x459aa6*/
    {
      sub_578F20(a2, a3, a4, a5); /*0x459aaf*/
      sub_57B950(a2, a3, a4, 3, flt_A2FE7C); /*0x459ac0*/
    }
  }
  *(_DWORD *)(a1 + 0x18) |= 0x2000u; /*0x459ac8*/
  sub_5732D0((NiNode **)unk_B3A6B0, a3, a4, flt_B33A48[0], 2, flt_B33A48[0]); /*0x459ae1*/
}
