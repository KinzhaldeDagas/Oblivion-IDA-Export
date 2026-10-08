void __thiscall sub_591D40(Tile *this, Tile *parent, char *name, Tile *sibling)
{
  Tile::Init(this, parent, name, sibling); /*0x591d54*/
  Tile_SetFloat(this, 0xFCCu, flt_A40098); /*0x591d6a*/
  Tile_SetFloat(this, 0xFCDu, flt_A40098); /*0x591d80*/
  Tile_SetFloat(this, 0xFCEu, flt_A40098); /*0x591d96*/
  Tile_SetFloat(this, 0xFA7u, 0.0); /*0x591da8*/
}
