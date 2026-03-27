void __usercall sub_5A8710(double a1@<st4>, int arg0)
{
  signed int v7; // eax
  Tile *v8; // ecx
  double v9; // st7
  double v10; // st7
  bool v11; // al
  bool IsSneaking; // al
  _DWORD *v13; // ecx
  _DWORD *v14; // ecx
  bool v15; // zf
  float v16; // [esp+0h] [ebp-10h]
  float v17; // [esp+0h] [ebp-10h]
  float v18; // [esp+0h] [ebp-10h]
  float v19; // [esp+0h] [ebp-10h]
  float v20; // [esp+0h] [ebp-10h]
  float v21; // [esp+0h] [ebp-10h]
  float v22; // [esp+4h] [ebp-Ch]
  float v23; // [esp+4h] [ebp-Ch]
  float a2a; // [esp+8h] [ebp-8h]
  float a2b; // [esp+8h] [ebp-8h]
  float a2; // [esp+8h] [ebp-8h]
  float a2c; // [esp+8h] [ebp-8h]
  float a2d; // [esp+8h] [ebp-8h]
  float a2e; // [esp+8h] [ebp-8h]
  float a2f; // [esp+8h] [ebp-8h]

  if ( dword_B3B350 )
  {
    if ( dword_B3B354 )
    {
      v7 = sub_578FE0();
      v8 = (Tile *)dword_B3B350;
      if ( v7 == 0x414 )
      {
        Tile_SetFloat(v8, (_DWORD *)0xFA1, 1.0);
        Tile_SetFloat((Tile *)dword_B3B354, (_DWORD *)0xFA1, 1.0);
        v9 = 1.0;
      }
      else
      {
        a2a = (float)((byte_B13210 != 0) + 1);
        Tile_SetFloat(v8, (_DWORD *)0xFA1, a2a);
        Tile_SetFloat((Tile *)dword_B3B354, (_DWORD *)0xFA1, fConstant_2);
        v9 = fConstant_2;
      }
      a2b = v9;
      Tile_SetFloat((Tile *)Player_HUDHealthBarTile_, (_DWORD *)0xFA1, a2b);
      v10 = sub_5894A0((_DWORD *)dword_B3B350, 0xFB0);
      if ( arg0 == 2 )
        v11 = a1 == dbl_A3DDD8;
      else
        v11 = arg0 > 0;
      if ( a1 == dbl_A3DDD8 )
      {
        if ( !v11 )
        {
          if ( byte_B13210 )
          {
            a2d = flt_B140BC;
            Tile_GetFloat((_DWORD *)dword_B3B350, 0xFB0);
            v19 = v10;
            sub_589980((_DWORD *)dword_B3B350, 0xFB0, v19, 0.0, a2d);
          }
          a2e = flt_B140C4;
          Tile_GetFloat((_DWORD *)dword_B3B354, 0xFB6);
          v20 = v10;
          sub_589980((_DWORD *)dword_B3B354, 0xFB6, v20, 0.0, a2e);
          v14 = Player_HUDHealthBarTile_;
          v15 = Player_HUDHealthBarTile_ == 0;
          byte_B3B361 = 1;
          if ( !v15 && !bHealthBarShowing_Gameplay )
          {
            a2f = flt_B140C0;
            Tile_GetFloat(v14, 0xFB6);
            v21 = v10;
            sub_589980(Player_HUDHealthBarTile_, 0xFB6, v21, 0.0, a2f);
          }
        }
      }
      else if ( v11 && !TESDataHandler_g_PlayerRef->unk5C0 )
      {
        IsSneaking = Actor_IsSneaking(TESDataHandler_g_PlayerRef);
        v13 = (_DWORD *)dword_B3B354;
        a2 = flt_B140C4;
        if ( IsSneaking )
        {
          v22 = flt_B140B8;
          Tile_GetFloat(v13, 0xFB6);
          v16 = v10;
          sub_589980((_DWORD *)dword_B3B354, 0xFB6, v16, v22, a2);
          byte_B3B361 = 1;
        }
        else
        {
          Tile_GetFloat(v13, 0xFB6);
          v17 = v10;
          sub_589980((_DWORD *)dword_B3B354, 0xFB6, v17, 0.0, a2);
          byte_B3B361 = 0;
        }
        if ( byte_B13210 )
        {
          a2c = flt_B140BC;
          v23 = flt_A40098;
          Tile_GetFloat((_DWORD *)dword_B3B350, 0xFB0);
          v18 = v10;
          sub_589980((_DWORD *)dword_B3B350, 0xFB0, v18, v23, a2c);
        }
      }
    }
  }
}
