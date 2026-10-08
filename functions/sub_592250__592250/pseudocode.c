void __thiscall sub_592250(Tile *this, Tile *parent, char *name, Tile *sibling)
{
  Tile::Init(this, parent, name, sibling); /*0x592264*/
  Tile_SetString(this, (_DWORD *)0xFDE, word_A36430); /*0x592275*/
  Tile_SetFloat(this, 0xFCCu, flt_A6B1A0); /*0x59228b*/
  Tile_SetFloat(this, 0xFCDu, flt_A6B19C); /*0x5922a1*/
  Tile_SetFloat(this, 0xFCEu, flt_A6B198); /*0x5922b7*/
  Tile_SetFloat(this, 0xFA7u, flt_A40098); /*0x5922cd*/
}
