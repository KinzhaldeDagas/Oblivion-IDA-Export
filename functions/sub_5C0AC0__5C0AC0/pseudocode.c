char __thiscall sub_5C0AC0(int this, int arg0, float a3)
{
  double v8; // st7
  float a2; // [esp+0h] [ebp-8h]

  if ( InterfaceManager_MenuModeHasFocus(0x3F8) )
  {
    if ( arg0 == 0xF )
    {
      if ( a3 >= 1.0 )
      {
        sub_57DE50(3);
        v8 = flt_A6B1F0;
LABEL_5:
        a2 = v8;
        Tile_SetFloat(*(Tile **)(this + 0x34), (_DWORD *)0xFB7, a2);
        Tile_SetFloat(*(Tile **)(this + 0x34), (_DWORD *)0xFB7, 0.0);
        return 1;
      }
    }
    else if ( arg0 == 0x10 && a3 >= 1.0 )
    {
      sub_57DE50(3);
      v8 = flt_A6D1E8;
      goto LABEL_5;
    }
  }
  return 0;
}
