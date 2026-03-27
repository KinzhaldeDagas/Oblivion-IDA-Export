double __cdecl Calc_MagicExplosionSize_(int a1, int a2, float a3, int a4, int a5, float a6)
{
  double v6; // st7
  double v8; // [esp+4h] [ebp-8h]
  float v9; // [esp+10h] [ebp+4h]
  float v10; // [esp+14h] [ebp+8h]
  float v11; // [esp+14h] [ebp+8h]
  float v12; // [esp+14h] [ebp+8h]
  float v13; // [esp+14h] [ebp+8h]

  if ( a2 <= 0 )
  {
    v6 = 1.0;
  }
  else
  {
    v10 = a3 / (double)a2;
    v11 = v10 * v10;
    v6 = 1.0 - v11;
  }
  v12 = v6;
  v13 = fMagicExplosionPowerMult * v12 * (double)a1 + fMagicExplosionPowerBase;
  v8 = Calc_LuckModifiedSkill(a4, a5);
  v9 = Calc_FatigueFactor(a6) * v8;
  return (float)(v13 - fMagicExplosionAgilityMult * v9);
}
