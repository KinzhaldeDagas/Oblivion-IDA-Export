char __thiscall sub_5C0AC0(Tile **this, int arg0, float a3)
{
  double v4; // st7
  float a2; // [esp+0h] [ebp-8h]

  if ( InterfaceManager_MenuModeHasFocus(0x3F8) ) /*0x5c0ac8*/
  {
    if ( arg0 == 0xF ) /*0x5c0adb*/
    {
      if ( a3 >= 1.0 ) /*0x5c0ae8*/
      {
        sub_57DE50(3); /*0x5c0aec*/
        v4 = flt_A6B1F0; /*0x5c0af1*/
LABEL_5:
        a2 = v4; /*0x5c0af7*/
        Tile_SetFloat(*(this + 0xD), 0xFB7u, a2); /*0x5c0b02*/
        Tile_SetFloat(*(this + 0xD), 0xFB7u, 0.0); /*0x5c0b15*/
        return 1; /*0x5c0b1d*/
      }
    }
    else if ( arg0 == 0x10 && a3 >= 1.0 ) /*0x5c0b30*/
    {
      sub_57DE50(3); /*0x5c0b34*/
      v4 = flt_A6D1E8; /*0x5c0b39*/
      goto LABEL_5; /*0x5c0b3f*/
    }
  }
  return 0; /*0x5c0b1c*/
}
