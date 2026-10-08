// Verified: Menu vtable +0x14 callback; topic IDs >=0x64 hide +0x38 highlight, service IDs clear mouseover on provided tile.
void __thiscall DialogMenu::HandleMouseout(DialogMenu *this, int tileID, Tile *tile)
{
  if ( tileID < 0x64 ) /*0x59dca5*/
  {
    if ( tile ) /*0x59dcc3*/
      Tile_SetFloat(tile, 0xFDDu, 0.0); /*0x59dcd0*/
  }
  else
  {
    Tile_SetFloat(*((Tile **)this + 0xE), 0xFA1u, 1.0); /*0x59dcb5*/
  }
}
