void __cdecl Calc_HandToHandDamage(int a1, int a2, int a3, float a4, char a5, float *a6, float *a7)
{
  double v7; // st7
  float v8; // [esp+4h] [ebp-4h]
  float v9; // [esp+4h] [ebp-4h]
  float v10; // [esp+14h] [ebp+Ch]
  float v11; // [esp+14h] [ebp+Ch]
  float v12; // [esp+14h] [ebp+Ch]
  float v13; // [esp+14h] [ebp+Ch]

  v8 = Calc_LuckModifiedSkill(a1, a2);
  v9 = v8 * fConstant_Inv100 * fHandDamageSkillMult + fHandDamageSkillBase;
  if ( a3 >= 0x64 )
    a3 = 0x64;
  v10 = fConstant_Inv100 * (double)a3 * fHandDamageStrengthMult + fHandDamageStrengthBase;
  v11 = Calc_FatigueFactor(a4) * (v10 * v9);
  v7 = v11;
  *a6 = v11;
  if ( v11 >= 1.0 )
    v7 = 1.0;
  v12 = v7;
  v13 = (fHandHealthMax - fHandHealthMin) * v12 + fHandHealthMin;
  *a6 = v13;
  if ( a5 )
    *a7 = 0.0;
  else
    *a7 = v13 * fHandFatigueDamageMult + fHandFatigueDamageBase;
}
