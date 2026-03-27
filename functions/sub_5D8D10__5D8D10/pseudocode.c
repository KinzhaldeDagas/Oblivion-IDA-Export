void __thiscall sub_5D8D10(int this, int a2, Tile *a3)
{
  sub_57BD80();
  if ( a2 == 6 || a2 == 2 )
    Tile_SetFloat(a3, (_DWORD *)0xFA7, flt_A40098);
  Tile_SetFloat(*(Tile **)(this + 0x44), (_DWORD *)0xFA1, 1.0);
}
