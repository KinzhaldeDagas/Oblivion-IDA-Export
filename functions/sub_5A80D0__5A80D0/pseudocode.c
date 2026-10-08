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

  switch ( sub_6762B0((char *)&qword_B3BB2C[0x75], (TESObjectREFR *)reference, 0) ) /*0x5a80eb*/
  {
    case 0: /*0x5a80eb*/
      v0 = flt_A3D8F0; /*0x5a80f2*/
      v1 = (_DWORD *)dword_B3B0B4[0xA8]; /*0x5a80f8*/
      flt_B140B8 = flt_A3D8F0; /*0x5a80fe*/
      v16 = flt_B140C4; /*0x5a810d*/
      v12 = v0; /*0x5a8111*/
      Float = Tile_GetFloat(v1, 0xFB6); /*0x5a8125*/
      sub_589980((_DWORD *)dword_B3B0B4[0xA8], 0xFB6, Float, v12, v16); /*0x5a812d*/
      dword_B3B0B4[0xAD] = 0; /*0x5a8132*/
      BYTE1(dword_B3B0B4[0xAB]) = 1; /*0x5a813c*/
      break; /*0x5a8143*/
    case 1: /*0x5a80eb*/
      v2 = flt_A3D8F0; /*0x5a8144*/
      v3 = (_DWORD *)dword_B3B0B4[0xA8]; /*0x5a814a*/
      flt_B140B8 = flt_A3D8F0; /*0x5a8150*/
      v17 = flt_B140C4; /*0x5a815f*/
      v13 = v2; /*0x5a8163*/
      v9 = Tile_GetFloat(v3, 0xFB6); /*0x5a8177*/
      sub_589980((_DWORD *)dword_B3B0B4[0xA8], 0xFB6, v9, v13, v17); /*0x5a817f*/
      BYTE1(dword_B3B0B4[0xAB]) = 1; /*0x5a8189*/
      dword_B3B0B4[0xAD] = 1; /*0x5a818e*/
      break; /*0x5a8193*/
    case 2: /*0x5a80eb*/
      v4 = flt_A3D8F0; /*0x5a8194*/
      v5 = (_DWORD *)dword_B3B0B4[0xA8]; /*0x5a819a*/
      flt_B140B8 = flt_A3D8F0; /*0x5a81a0*/
      v18 = flt_B140C4; /*0x5a81af*/
      v14 = v4; /*0x5a81b3*/
      v10 = Tile_GetFloat(v5, 0xFB6); /*0x5a81c7*/
      sub_589980((_DWORD *)dword_B3B0B4[0xA8], 0xFB6, v10, v14, v18); /*0x5a81cf*/
      dword_B3B0B4[0xAD] = 2; /*0x5a81d4*/
      BYTE1(dword_B3B0B4[0xAB]) = 1; /*0x5a81de*/
      break; /*0x5a81e5*/
    case 3: /*0x5a80eb*/
      v6 = flt_A57EF8; /*0x5a81e6*/
      v7 = (_DWORD *)dword_B3B0B4[0xA8]; /*0x5a81ec*/
      flt_B140B8 = flt_A57EF8; /*0x5a81f2*/
      v19 = flt_B140C4; /*0x5a8201*/
      v15 = v6; /*0x5a8205*/
      v11 = Tile_GetFloat(v7, 0xFB6); /*0x5a8219*/
      sub_589980((_DWORD *)dword_B3B0B4[0xA8], 0xFB6, v11, v15, v19); /*0x5a8221*/
      dword_B3B0B4[0xAD] = 3; /*0x5a8226*/
      BYTE1(dword_B3B0B4[0xAB]) = 1; /*0x5a8230*/
      def_5A80EB(); /*0x5a8231*/
      break; /*0x5a8231*/
    default:
      JUMPOUT(0x5A8237); /*0x5a8237*/
  }
}
