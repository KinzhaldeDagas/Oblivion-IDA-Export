double __usercall sub_5A8710@<st0>(double a1@<st1>, double result@<st0>, int arg0)
{
  signed int v4; // eax
  Tile *v5; // ecx
  double v6; // st7
  bool v7; // al
  bool IsSneaking; // al
  _DWORD *v9; // ecx
  _DWORD *v10; // ecx
  bool v11; // zf
  float v12; // [esp+0h] [ebp-10h]
  float v13; // [esp+0h] [ebp-10h]
  float v14; // [esp+0h] [ebp-10h]
  float v15; // [esp+0h] [ebp-10h]
  float v16; // [esp+0h] [ebp-10h]
  float v17; // [esp+0h] [ebp-10h]
  float v18; // [esp+4h] [ebp-Ch]
  float v19; // [esp+4h] [ebp-Ch]
  float a2a; // [esp+8h] [ebp-8h]
  float a2b; // [esp+8h] [ebp-8h]
  float a2; // [esp+8h] [ebp-8h]
  float a2c; // [esp+8h] [ebp-8h]
  float a2d; // [esp+8h] [ebp-8h]
  float a2e; // [esp+8h] [ebp-8h]
  float a2f; // [esp+8h] [ebp-8h]

  if ( dword_B3B0B4[0xA7] ) /*0x5a8711*/
  {
    if ( dword_B3B0B4[0xA8] ) /*0x5a871e*/
    {
      v4 = sub_578FE0(); /*0x5a872b*/
      v5 = (Tile *)dword_B3B0B4[0xA7]; /*0x5a8736*/
      if ( v4 == 0x414 ) /*0x5a873c*/
      {
        Tile_SetFloat(v5, 0xFA1u, 1.0); /*0x5a8748*/
        Tile_SetFloat((Tile *)dword_B3B0B4[0xA8], 0xFA1u, 1.0); /*0x5a875e*/
        v6 = 1.0; /*0x5a8763*/
      }
      else
      {
        a2a = (float)((byte_B13210 != 0) + 1); /*0x5a877d*/
        Tile_SetFloat(v5, 0xFA1u, a2a); /*0x5a8785*/
        Tile_SetFloat((Tile *)dword_B3B0B4[0xA8], 0xFA1u, fConstant_2); /*0x5a879f*/
        v6 = fConstant_2; /*0x5a87a4*/
      }
      a2b = v6; /*0x5a87b1*/
      Tile_SetFloat((Tile *)dword_B3B0B4[0xA9], 0xFA1u, a2b); /*0x5a87b9*/
      result = sub_5894A0((_DWORD *)dword_B3B0B4[0xA7], 0xFB0); /*0x5a87c9*/
      if ( arg0 == 2 ) /*0x5a87e8*/
        v7 = a1 == dbl_A3DDD8; /*0x5a87ea*/
      else
        v7 = arg0 > 0; /*0x5a87f0*/
      if ( a1 == dbl_A3DDD8 ) /*0x5a87f5*/
      {
        if ( !v7 ) /*0x5a88d7*/
        {
          if ( byte_B13210 ) /*0x5a88dd*/
          {
            a2d = flt_B140BC; /*0x5a88f4*/
            Tile_GetFloat((_DWORD *)dword_B3B0B4[0xA7], 0xFB0); /*0x5a8902*/
            v15 = result; /*0x5a890e*/
            sub_589980((_DWORD *)dword_B3B0B4[0xA7], 0xFB0, v15, 0.0, a2d); /*0x5a8916*/
          }
          a2e = flt_B140C4; /*0x5a892a*/
          Tile_GetFloat((_DWORD *)dword_B3B0B4[0xA8], 0xFB6); /*0x5a8938*/
          v16 = result; /*0x5a8944*/
          sub_589980((_DWORD *)dword_B3B0B4[0xA8], 0xFB6, v16, 0.0, a2e); /*0x5a894c*/
          v10 = (_DWORD *)dword_B3B0B4[0xA9]; /*0x5a8951*/
          v11 = dword_B3B0B4[0xA9] == 0; /*0x5a8957*/
          BYTE1(dword_B3B0B4[0xAB]) = 1; /*0x5a8959*/
          if ( !v11 && !bHealthBarShowing_Gameplay ) /*0x5a8962*/
          {
            a2f = flt_B140C0; /*0x5a8974*/
            Tile_GetFloat(v10, 0xFB6); /*0x5a8982*/
            v17 = result; /*0x5a898e*/
            sub_589980((_DWORD *)dword_B3B0B4[0xA9], 0xFB6, v17, 0.0, a2f); /*0x5a8996*/
          }
        }
      }
      else if ( v7 && !reference->unk5C0 ) /*0x5a8809*/
      {
        IsSneaking = Actor_IsSneaking(reference); /*0x5a8816*/
        v9 = (_DWORD *)dword_B3B0B4[0xA8]; /*0x5a8821*/
        a2 = flt_B140C4; /*0x5a882c*/
        if ( IsSneaking ) /*0x5a8830*/
        {
          v18 = flt_B140B8; /*0x5a8838*/
          Tile_GetFloat(v9, 0xFB6); /*0x5a8840*/
          v12 = result; /*0x5a884c*/
          sub_589980((_DWORD *)dword_B3B0B4[0xA8], 0xFB6, v12, v18, a2); /*0x5a8854*/
          BYTE1(dword_B3B0B4[0xAB]) = 1; /*0x5a8859*/
        }
        else
        {
          Tile_GetFloat(v9, 0xFB6); /*0x5a886c*/
          v13 = result; /*0x5a8878*/
          sub_589980((_DWORD *)dword_B3B0B4[0xA8], 0xFB6, v13, 0.0, a2); /*0x5a8880*/
          BYTE1(dword_B3B0B4[0xAB]) = 0; /*0x5a8885*/
        }
        if ( byte_B13210 ) /*0x5a888c*/
        {
          a2c = flt_B140BC; /*0x5a88a8*/
          v19 = flt_A40098; /*0x5a88b2*/
          Tile_GetFloat((_DWORD *)dword_B3B0B4[0xA7], 0xFB0); /*0x5a88ba*/
          v14 = result; /*0x5a88c6*/
          sub_589980((_DWORD *)dword_B3B0B4[0xA7], 0xFB0, v14, v19, a2c); /*0x5a88ce*/
        }
      }
    }
  }
  return result; /*0x5a88d4*/
}
