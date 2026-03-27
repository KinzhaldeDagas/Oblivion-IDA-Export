void __thiscall sub_57D300(Tile *this, Tile *arg0, signed int a3)
{
  double v3; // st7
  float a2; // [esp+0h] [ebp-4h]

  v3 = (double)a3;
  if ( a3 < 0 )
    v3 = v3 + flt_A2FC78;
  a2 = v3;
  Tile_SetFloat(this, arg0, a2);
}
