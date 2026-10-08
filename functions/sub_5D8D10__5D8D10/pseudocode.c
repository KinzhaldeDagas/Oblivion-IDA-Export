void __thiscall sub_5D8D10(Tile **this, int a2, Tile *a3)
{
  sub_57BD80(); /*0x5d8d13*/
  if ( a2 == 6 || a2 == 2 ) /*0x5d8d24*/
    Tile_SetFloat(a3, (_DWORD *)0xFA7, flt_A40098);// MEF v31 verified SpellPurchaseMenu guard site: if stack argument a3 is null, skip only Tile_SetFloat(a3, 0xFA7, flt_A40098) and resume at independent second tile update 0x5D8D3E; otherwise replay FLD and continue at 0x5D8D2C. /*0x5d8d39*/
  Tile_SetFloat(*(this + 0x11), (_DWORD *)0xFA1, 1.0); /*0x5d8d4c*/
}
