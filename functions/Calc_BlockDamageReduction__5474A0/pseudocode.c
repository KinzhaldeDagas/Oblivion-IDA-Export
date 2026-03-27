double __cdecl Calc_BlockDamageReduction(int a1, int a2, float a3, float a4, char a5)
{
  double v5; // st7
  float v7; // [esp+4h] [ebp-4h]
  float v8; // [esp+4h] [ebp-4h]
  float v9; // [esp+18h] [ebp+10h]
  float v10; // [esp+18h] [ebp+10h]

  v7 = Calc_LuckModifiedSkill(a1, a2);
  v8 = v7 * fConstant_Inv100 * fBlockSkillMult + fBlockSkillBase;
  if ( LOBYTE(a4) )
  {
    v5 = fBlockAmountWeaponMult;
  }
  else if ( a5 )
  {
    v5 = fBlockAmountHandToHandMult;
  }
  else
  {
    v5 = 1.0;
  }
  v9 = v5;
  v10 = Calc_FatigueFactor(a3) * v8 * v9;
  if ( fBlockMax <= (double)v10 )
    return fBlockMax;
  return v10;
}
