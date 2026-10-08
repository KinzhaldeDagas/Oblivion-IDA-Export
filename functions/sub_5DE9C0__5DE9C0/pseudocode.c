void __thiscall sub_5DE9C0(Tile **this, char arg0)
{
  Tile *v3; // ecx
  Tile *v4; // eax
  double v5; // st7
  float a2; // [esp+0h] [ebp-8h]

  if ( this != (Tile **)0xFFFFFFD8 ) /*0x5de9c8*/
  {
    v3 = *(this + 0x25); /*0x5de9ce*/
    if ( v3 ) /*0x5de9d6*/
    {
      v4 = *(this + 0x27); /*0x5de9dc*/
      if ( v4 ) /*0x5de9e4*/
      {
        if ( *(this + 0x28) ) /*0x5de9ea*/
        {
          if ( arg0 ) /*0x5de9f9*/
          {
            Tile_SetFloat(v3, 0xFB3u, flt_A2FE7C); /*0x5dea09*/
            Tile_SetFloat(*(this + 0x25), 0xFB3u, 0.0); /*0x5dea1f*/
            Tile_SetFloat(*(this + 0x27), 0xFAFu, fConstant_2); /*0x5dea39*/
            v5 = fConstant_2; /*0x5dea3e*/
          }
          else
          {
            Tile_SetFloat(v4, 0xFAFu, 1.0); /*0x5dea52*/
            v5 = 1.0; /*0x5dea57*/
          }
          a2 = v5; /*0x5dea60*/
          Tile_SetFloat(*(this + 0x28), 0xFAFu, a2); /*0x5dea68*/
        }
      }
    }
  }
}
