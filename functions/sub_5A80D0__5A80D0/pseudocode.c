void sub_5A80D0()
{
  double v0; // st7
  _DWORD *v1; // ecx
  double v2; // st7
  _DWORD *v3; // ecx
  double v4; // st7
  _DWORD *v5; // ecx
  double v6; // st7
  _DWORD *v7; // ecx
  float Float; // [esp+0h] [ebp-Ch]
  float v9; // [esp+0h] [ebp-Ch]
  float v10; // [esp+0h] [ebp-Ch]
  float v11; // [esp+0h] [ebp-Ch]
  float v12; // [esp+4h] [ebp-8h]
  float v13; // [esp+4h] [ebp-8h]
  float v14; // [esp+4h] [ebp-8h]
  float v15; // [esp+4h] [ebp-8h]
  float v16; // [esp+8h] [ebp-4h]
  float v17; // [esp+8h] [ebp-4h]
  float v18; // [esp+8h] [ebp-4h]
  float v19; // [esp+8h] [ebp-4h]

  switch ( sub_6762B0((char *)&ActorProcessManager_ptr, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0) )
  {
    case 0:
      v0 = flt_A3D8F0;
      v1 = (_DWORD *)dword_B3B354;
      flt_B140B8 = flt_A3D8F0;
      v16 = flt_B140C4;
      v12 = v0;
      Float = Tile_GetFloat(v1, 0xFB6);
      sub_589980((_DWORD *)dword_B3B354, 0xFB6, Float, v12, v16);
      dword_B3B368 = 0;
      byte_B3B361 = 1;
      break;
    case 1:
      v2 = flt_A3D8F0;
      v3 = (_DWORD *)dword_B3B354;
      flt_B140B8 = flt_A3D8F0;
      v17 = flt_B140C4;
      v13 = v2;
      v9 = Tile_GetFloat(v3, 0xFB6);
      sub_589980((_DWORD *)dword_B3B354, 0xFB6, v9, v13, v17);
      byte_B3B361 = 1;
      dword_B3B368 = 1;
      break;
    case 2:
      v4 = flt_A3D8F0;
      v5 = (_DWORD *)dword_B3B354;
      flt_B140B8 = flt_A3D8F0;
      v18 = flt_B140C4;
      v14 = v4;
      v10 = Tile_GetFloat(v5, 0xFB6);
      sub_589980((_DWORD *)dword_B3B354, 0xFB6, v10, v14, v18);
      dword_B3B368 = 2;
      byte_B3B361 = 1;
      break;
    case 3:
      v6 = flt_A57EF8;
      v7 = (_DWORD *)dword_B3B354;
      flt_B140B8 = flt_A57EF8;
      v19 = flt_B140C4;
      v15 = v6;
      v11 = Tile_GetFloat(v7, 0xFB6);
      sub_589980((_DWORD *)dword_B3B354, 0xFB6, v11, v15, v19);
      dword_B3B368 = 3;
      byte_B3B361 = 1;
      def_5A80EB();
      break;
    default:
      JUMPOUT(0x5A8237);
  }
}
