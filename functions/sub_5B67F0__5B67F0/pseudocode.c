void __thiscall sub_5B67F0(Tile **this, float a2, float a3, float a4)
{
  Tile *v4; // esi
  float v5; // [esp+14h] [ebp+Ch]
  float v6; // [esp+14h] [ebp+Ch]

  if ( LOBYTE(a4) ) /*0x5b67f6*/
    v4 = *(this + 0x16); /*0x5b67f8*/
  else
    v4 = *(this + 0x18); /*0x5b67fd*/
  v5 = Tile_GetFloat(v4, 0xFBA) + a2; /*0x5b6813*/
  Tile_SetFloat(v4, 0xFB8u, v5); /*0x5b6823*/
  v6 = Tile_GetFloat(v4, 0xFBB) + a3; /*0x5b683b*/
  Tile_SetFloat(v4, 0xFB9u, v6); /*0x5b684b*/
}
