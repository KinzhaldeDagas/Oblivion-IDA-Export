double __cdecl sub_547910(float a1, float a2, float a3, float a4, float a5)
{
  double v5; // st7
  float v7; // [esp+0h] [ebp-4h]
  float v8; // [esp+8h] [ebp+4h]
  float v9; // [esp+8h] [ebp+4h]
  float v10; // [esp+8h] [ebp+4h]
  float v11; // [esp+8h] [ebp+4h]
  float v13; // [esp+Ch] [ebp+8h]

  v7 = (a1 - a2) * fCombatVulnerabilityMod;
  v5 = a5 - flt_B37320;
  if ( v5 <= 0.0 )
    v5 = 0.0;
  v8 = v5;
  v9 = v8 / fCostant_100 + 1.0;
  v10 = 1.0 / v9;
  v11 = pow(v10, flt_B37318);
  v13 = a4 / a3 * flt_B37310;
  return (float)(v11 * (v13 + v7));
}
