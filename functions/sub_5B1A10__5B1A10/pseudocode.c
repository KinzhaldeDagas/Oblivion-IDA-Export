void __thiscall sub_5B1A10(int this, signed int a2, int a3)
{
  if ( a2 >= 0x3E9 ) /*0x5b1a18*/
  {
    *(_DWORD *)(this + 0x48) = 0; /*0x5b1a20*/
    Tile_SetFloat(*(Tile **)(this + 0x28), 0xFA1u, 1.0); /*0x5b1a2f*/
    sub_57BD80(); /*0x5b1a34*/
  }
}
