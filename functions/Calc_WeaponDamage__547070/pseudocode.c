double __cdecl Calc_WeaponDamage(int a1, int a2, int a3, float a4, int a5, float a6, float a7, float a8)
{
  double v8; // st7
  double v9; // st7
  float v11; // [esp+4h] [ebp-8h]
  float v12; // [esp+4h] [ebp-8h]
  float v13; // [esp+8h] [ebp-4h]
  int v14; // [esp+20h] [ebp+14h]
  int v15; // [esp+20h] [ebp+14h]
  float v16; // [esp+24h] [ebp+18h]
  float v17; // [esp+2Ch] [ebp+20h]
  float v18; // [esp+2Ch] [ebp+20h]

  v11 = Calc_LuckModifiedSkill(a1, a2);
  v8 = (double)a5 * fDamageWeaponMult;
  v14 = a3;
  v13 = v8;
  v16 = fDamageWeaponConditionMult * a6 + fDamageWeaponConditionBase;
  v12 = v11 * fConstant_Inv100 * fDamageSkillMult + fDamageSkillBase;
  if ( a3 >= 0x64 )
    v14 = 0x64;
  *(float *)&v15 = fConstant_Inv100 * (double)v14 * fDamageStrengthMult + fDamageStrengthBase;
  if ( LOBYTE(a8) )
    v9 = 1.0;
  else
    v9 = Calc_FatigueFactor(a4);
  v17 = v9;
  v18 = v16 * v13 * v12 * *(float *)&v15 * v17;
  return (float)(v18 * a7);
}
