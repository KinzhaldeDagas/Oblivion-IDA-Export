void __thiscall sub_5DE9C0(Tile **this, char arg0)
{
  Tile *v3; // ecx
  Tile *v4; // eax
  double v5; // st7
  float a2; // [esp+0h] [ebp-8h]

  if ( this != (Tile **)0xFFFFFFD8 )
  {
    v3 = *(this + 0x25);
    if ( v3 )
    {
      v4 = *(this + 0x27);
      if ( v4 )
      {
        if ( *(this + 0x28) )
        {
          if ( arg0 )
          {
            Tile_SetFloat(v3, (_DWORD *)0xFB3, flt_A2FE7C);
            Tile_SetFloat(*(this + 0x25), (_DWORD *)0xFB3, 0.0);
            Tile_SetFloat(*(this + 0x27), (_DWORD *)0xFAF, fConstant_2);
            v5 = fConstant_2;
          }
          else
          {
            Tile_SetFloat(v4, (_DWORD *)0xFAF, 1.0);
            v5 = 1.0;
          }
          a2 = v5;
          Tile_SetFloat(*(this + 0x28), (_DWORD *)0xFAF, a2);
        }
      }
    }
  }
}
