// Verified: Menu vtable +0x10 callback from focus setter; IDs >=0x64 copy topic geometry into bound tile +0x38 and show it. Custom ID48 bypasses native topic highlight path.
void __thiscall DialogMenu::HandleMouseover(DialogMenu *this, int tileID, Tile *tile)
{
  _DWORD *i; // esi
  float a2; // [esp+0h] [ebp-Ch]
  float a3a; // [esp+10h] [ebp+4h]
  float a3b; // [esp+10h] [ebp+4h]
  float a3; // [esp+10h] [ebp+4h]
  float tilea; // [esp+14h] [ebp+8h]

  if ( tileID >= 0x64 ) /*0x59db78*/
  {
    sub_57DE50(4); /*0x59db81*/
    a3a = Tile_GetFloat(tile, 0xFAB); /*0x59db99*/
    a3b = a3a - dbl_A2FAA0; /*0x59dbab*/
    Tile_SetFloat(*((Tile **)this + 0xE), 0xFABu, a3b); /*0x59dbbb*/
    a2 = Tile_GetFloat(tile, 0xFCB); /*0x59dbd0*/
    Tile_SetFloat(*((Tile **)this + 0xE), 0xFCBu, a2); /*0x59dbd8*/
    a3 = Tile_GetFloat(tile, 0xFAD); /*0x59dbe9*/
    tilea = Tile_GetFloat(tile, 0xFAC); /*0x59dbf9*/
    for ( i = *((_DWORD **)tile + 4); i; i = (_DWORD *)i[4] ) /*0x59dc02*/
    {
      if ( Tile_GetFloat(i, 0xFA6) == fConstant_2 ) /*0x59dc1b*/
      {
        a3 = Tile_GetFloat(i, 0xFAD) + a3; /*0x59dc34*/
        tilea = Tile_GetFloat(i, 0xFAC) + tilea; /*0x59dc41*/
      }
    }
    Tile_SetFloat(*((Tile **)this + 0xE), 0xFADu, a3); /*0x59dc5c*/
    Tile_SetFloat(*((Tile **)this + 0xE), 0xFACu, tilea); /*0x59dc71*/
    Tile_SetFloat(*((Tile **)this + 0xE), 0xFA1u, fConstant_2); /*0x59dc88*/
  }
}
