void __thiscall sub_5DDEA0(Tile **this)
{
  double v2; // rt1
  Tile *v3; // ecx
  double v4; // st7
  float a2; // [esp+0h] [ebp-10h]
  float a2a; // [esp+0h] [ebp-10h]
  float a3a; // [esp+8h] [ebp-8h]
  float a3; // [esp+8h] [ebp-8h]
  float v9; // [esp+Ch] [ebp-4h]
  float Float; // [esp+Ch] [ebp-4h]
  float v11; // [esp+Ch] [ebp-4h]
  float v12; // [esp+Ch] [ebp-4h]
  float v13; // [esp+Ch] [ebp-4h]

  v9 = flt_B1485C + (flt_B14864 - flt_B1485C) * (Tile_GetFloat(*(this + 0xE), 0xFB5) / fCostant_100); /*0x5ddecf*/
  if ( v9 != g_RequestedRenderGamma && v9 > 0.0 ) /*0x5ddef3*/
  {
    g_RequestedRenderGamma = v9; /*0x5ddef5*/
    MEMORY[0xB33E90][0x1114] = 1; /*0x5ddefb*/
  }
  if ( *(this + 0x3A) ) /*0x5ddf06*/
  {
    a3a = Tile_GetFloat(*(this + 0x19), 0xFB5); /*0x5ddf20*/
    Float = Tile_GetFloat(*(this + 0x1B), 0xFB5); /*0x5ddf31*/
    v2 = fCostant_100; /*0x5ddf51*/
    a3 = flt_B14834 + a3a / v2 * (flt_B1483C - flt_B14834); /*0x5ddf57*/
    v11 = Float / v2 * (flt_B14854 - flt_B1484C) + flt_B1484C; /*0x5ddf77*/
    if ( v11 < (double)a3 ) /*0x5ddf8a*/
    {
      a2 = flt_A6B328; /*0x5ddfa3*/
      if ( *(this + 0x3A) == *(this + 0x21) ) /*0x5ddfab*/
      {
        Tile_SetFloat(*(this + 0x1B), 0xFB3u, a2); /*0x5ddfb0*/
        v12 = (a3 - flt_B1484C) / (flt_B14854 - flt_B1484C) * fCostant_100; /*0x5ddfd5*/
        Tile_SetFloat(*(this + 0x1B), 0xFB3u, v12); /*0x5ddfe5*/
        v3 = *(this + 0x1B); /*0x5ddfeb*/
      }
      else
      {
        Tile_SetFloat(*(this + 0x19), 0xFB3u, a2); /*0x5ddff3*/
        v13 = (v11 - flt_B14834) / (flt_B1483C - flt_B14834) * fCostant_100; /*0x5de018*/
        Tile_SetFloat(*(this + 0x19), 0xFB3u, v13); /*0x5de028*/
        v3 = *(this + 0x19); /*0x5de02e*/
      }
      Tile_SetFloat(v3, 0xFB3u, 0.0); /*0x5de03b*/
    }
  }
  if ( 3 * *((_DWORD *)*(this + 0x44) + 2) > (unsigned int)(4 * *((_DWORD *)*(this + 0x44) + 3)) /*0x5de0ab*/
    && (Tile_GetFloat(*(this + 0x11), 0xFDD) == fConstant_1
     || Tile_GetFloat(*(this + 0x23), 0xFDD) == fConstant_1
     || Tile_GetFloat(*(this + 0x24), 0xFDD) == fConstant_1) )
  {
    v4 = fConstant_2; /*0x5de0ad*/
  }
  else
  {
    v4 = 1.0; /*0x5de0b5*/
  }
  a2a = v4; /*0x5de0bb*/
  Tile_SetFloat(*(this + 1), 0xFB1u, a2a); /*0x5de0c3*/
  if ( Tile_GetFloat(*(this + 0x25), 0xFB5) < fCostant_100 ) /*0x5de0e3*/
  {
    if ( OB_RendererGlobalState_010201A0[0x1DE] ) /*0x5de0e5*/
      (*((void (__thiscall **)(Tile **, int, _DWORD))*this + 3))(this, 9, *(this + 0x12)); /*0x5de0fb*/
  }
}
