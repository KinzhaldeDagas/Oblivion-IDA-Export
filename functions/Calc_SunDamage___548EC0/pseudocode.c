double __cdecl Calc_SunDamage__(float a1, float a2, float a3, float a4, char a5, float a6, char a7)
{
  double v7; // st7
  double v8; // st6
  double v9; // st7
  float v11; // [esp+0h] [ebp-8h]
  float v12; // [esp+4h] [ebp-4h]
  float v13; // [esp+10h] [ebp+8h]
  float v14; // [esp+10h] [ebp+8h]
  float v15; // [esp+10h] [ebp+8h]
  float v17; // [esp+14h] [ebp+Ch]

  v7 = a2;
  v8 = a3;
  if ( a3 > (double)a2 || a4 < v7 )
    return 0.0;
  if ( flt_A2F918 < v7 )
    v8 = a4;
  v13 = (dbl_A2F910 - v7) / (dbl_A2F910 - v8);
  v14 = pow(v13, dbl_A3C800);
  v15 = 1.0 - v14;
  v9 = 1.0;
  if ( a5 )
    v11 = 1.0;
  else
    v11 = fMagicSunDamageSunHiddenScale;
  if ( a7 )
    v9 = fMagicSunDamageWaterScale;
  v17 = v9;
  v12 = (1.0 - fMagicSunDamageMinWeather) * a6 + fMagicSunDamageMinWeather;
  return (float)(fMagicSunDamageBaseDamage * a1 * v15 * v12 * v17 * v11);
}
