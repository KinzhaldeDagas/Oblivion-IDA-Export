void __thiscall sub_598190(Tile **this, int a2, int a3)
{
  Tile *v4; // ecx

  sub_57BD80(); /*0x598193*/
  v4 = *(this + 0xD); /*0x598198*/
  *(this + 0xF) = 0; /*0x59819d*/
  if ( v4 ) /*0x5981a5*/
  {
    Tile_SetFloat(v4, 0xFA1u, 1.0); /*0x5981b2*/
    InterfaceManager_GetSingleton(0, 1)->altActiveTile = 0; /*0x5981c3*/
  }
}
