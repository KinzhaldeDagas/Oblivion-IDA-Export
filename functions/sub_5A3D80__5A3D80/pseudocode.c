void __userpurge sub_5A3D80(int a1@<ecx>, double a2@<st1>, int a3, int a4)
{
  int i; // esi
  double Float; // st5
  _DWORD v9[21]; // [esp+8h] [ebp-54h]

  if ( a3 > 0 )
  {
    v9[0] = 0xFAE;
    v9[1] = 0xFAF;
    v9[2] = 0xFB0;
    v9[3] = 0xFB1;
    v9[4] = 0xFB2;
    v9[5] = 0xFB3;
    v9[6] = 0xFB4;
    v9[7] = 0xFB5;
    v9[8] = 0xFB6;
    v9[9] = 0xFB7;
    v9[0xA] = 0xFB8;
    v9[0xB] = 0xFB9;
    v9[0xC] = 0xFBA;
    v9[0xD] = 0xFBB;
    v9[0xE] = 0xFBC;
    v9[0xF] = 0xFBD;
    v9[0x10] = 0xFBE;
    v9[0x11] = 0xFBF;
    v9[0x12] = 0xFC0;
    v9[0x13] = 0xFC1;
    v9[0x14] = 0xFC2;
    for ( i = 0; i < 0x15; ++i )
    {
      Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), v9[i]);
      *(float *)(i * 4 + 0xB3B2E0) = Float;
    }
    dword_B3B2D8 = *(_DWORD *)(a1 + 0x34);
    dword_B3B2DC = a3;
    sub_5A3D00(Float, a2, a3);
  }
}
