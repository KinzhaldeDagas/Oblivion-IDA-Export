void __thiscall sub_5D6CD0(Tile **this, int a2, int a3)
{
  Tile *v3; // ecx

  if ( a2 == 6 ) /*0x5d6cd7*/
  {
    v3 = *(this + 0xD); /*0x5d6cda*/
  }
  else
  {
    if ( a2 != 5 ) /*0x5d6ce2*/
      return; /*0x5d6ce2*/
    v3 = *(this + 0xC); /*0x5d6ce5*/
  }
  Tile_SetFloat(v3, 0xFA7u, flt_A40098); /*0x5d6cf6*/
}
