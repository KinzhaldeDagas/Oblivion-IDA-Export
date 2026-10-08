void __thiscall sub_57D300(Tile *this, Tile *arg0, signed int a3)
{
  double v3; // st7
  float a2; // [esp+0h] [ebp-4h]

  v3 = (double)a3; /*0x57d304*/
  if ( a3 < 0 ) /*0x57d30a*/
    v3 = v3 + flt_A2FC78; /*0x57d30c*/
  a2 = v3; /*0x57d317*/
  Tile_SetFloat(this, (UInt32)arg0, a2); /*0x57d31b*/
}
