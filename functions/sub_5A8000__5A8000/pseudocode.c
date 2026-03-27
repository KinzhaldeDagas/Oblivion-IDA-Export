int __cdecl sub_5A8000(_DWORD *a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // ecx
  bool v3; // zf

  if ( a1 )
  {
    dword_B3B350 = (int)sub_5894F0(a1, 1);
    Player_HUDHealthBarTile_ = sub_5894F0(a1, 2);
    v1 = sub_5894F0(a1, 3);
    v2 = (_DWORD *)dword_B3B350;
    v3 = dword_B3B350 == 0;
    dword_B3B354 = (int)v1;
    if ( !v3 )
    {
      if ( Player_HUDHealthBarTile_ )
      {
        if ( v1 )
        {
          flt_B140BC = Tile_GetFloat(v2, 0xFB1);
          flt_B140C0 = Tile_GetFloat(Player_HUDHealthBarTile_, 0xFB7);
          flt_B140C4 = Tile_GetFloat((_DWORD *)dword_B3B354, 0xFB7);
        }
      }
    }
  }
  return 0;
}
