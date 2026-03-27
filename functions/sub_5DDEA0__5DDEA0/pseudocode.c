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

  v9 = flt_B1485C + (flt_B14864 - flt_B1485C) * (Tile_GetFloat(*(this + 0xE), 0xFB5) / fCostant_100);
  if ( v9 != flt_B06C2C && v9 > 0.0 )
  {
    flt_B06C2C = v9;
    byte_B34FA4 = 1;
  }
  if ( *(this + 0x3A) )
  {
    a3a = Tile_GetFloat(*(this + 0x19), 0xFB5);
    Float = Tile_GetFloat(*(this + 0x1B), 0xFB5);
    v2 = fCostant_100;
    a3 = flt_B14834 + a3a / v2 * (flt_B1483C - flt_B14834);
    v11 = Float / v2 * (flt_B14854 - flt_B1484C) + flt_B1484C;
    if ( v11 < (double)a3 )
    {
      a2 = flt_A6B328;
      if ( *(this + 0x3A) == *(this + 0x21) )
      {
        Tile_SetFloat(*(this + 0x1B), (_DWORD *)0xFB3, a2);
        v12 = (a3 - flt_B1484C) / (flt_B14854 - flt_B1484C) * fCostant_100;
        Tile_SetFloat(*(this + 0x1B), (_DWORD *)0xFB3, v12);
        v3 = *(this + 0x1B);
      }
      else
      {
        Tile_SetFloat(*(this + 0x19), (_DWORD *)0xFB3, a2);
        v13 = (v11 - flt_B14834) / (flt_B1483C - flt_B14834) * fCostant_100;
        Tile_SetFloat(*(this + 0x19), (_DWORD *)0xFB3, v13);
        v3 = *(this + 0x19);
      }
      Tile_SetFloat(v3, (_DWORD *)0xFB3, 0.0);
    }
  }
  if ( 3 * *((_DWORD *)*(this + 0x44) + 2) > (unsigned int)(4 * *((_DWORD *)*(this + 0x44) + 3))
    && (Tile_GetFloat(*(this + 0x11), 0xFDD) == fConstant_1
     || Tile_GetFloat(*(this + 0x23), 0xFDD) == fConstant_1
     || Tile_GetFloat(*(this + 0x24), 0xFDD) == fConstant_1) )
  {
    v4 = fConstant_2;
  }
  else
  {
    v4 = 1.0;
  }
  a2a = v4;
  Tile_SetFloat(*(this + 1), (_DWORD *)0xFB1, a2a);
  if ( Tile_GetFloat(*(this + 0x25), 0xFB5) < fCostant_100 )
  {
    if ( byte_B43077 )
      (*((void (__thiscall **)(Tile **, int, _DWORD))*this + 3))(this, 9, *(this + 0x12));
  }
}
