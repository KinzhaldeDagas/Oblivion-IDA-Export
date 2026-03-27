void __thiscall sub_5B1A10(int this, signed int a2, int a3)
{
  if ( a2 >= 0x3E9 )
  {
    *(_DWORD *)(this + 0x48) = 0;
    Tile_SetFloat(*(Tile **)(this + 0x28), (_DWORD *)0xFA1, 1.0);
    sub_57BD80();
  }
}
