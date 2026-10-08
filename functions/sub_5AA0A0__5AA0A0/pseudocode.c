void __thiscall sub_5AA0A0(Tile **this, int a2, int a3)
{
  Tile *v4; // ecx

  sub_57BD80(); /*0x5aa0a3*/
  v4 = *(this + 0xA); /*0x5aa0a8*/
  *(this + 0xF) = 0; /*0x5aa0ad*/
  if ( v4 ) /*0x5aa0b5*/
  {
    Tile_SetFloat(v4, (_DWORD *)0xFA1, 1.0); /*0x5aa0c2*/
    InterfaceManager_GetSingleton(0, 1)->altActiveTile = 0; /*0x5aa0d3*/
  }
}
