double __cdecl Calc_KnockbackFactor(int a1, int a2, float a3, int a4)
{
  double v4; // st7
  double v6; // [esp+4h] [ebp-8h]
  float v7; // [esp+1Ch] [ebp+10h]
  float v8; // [esp+1Ch] [ebp+10h]

  v6 = Calc_LuckModifiedSkill(a1, a2);
  *(float *)&v6 = v6 / Calc_FatigueFactor(a3);
  v7 = (double)a4 * fKnockbackDamageMult + fKnockbackDamageBase;
  v4 = v7;
  v8 = fKnockbackAgilMult * *(float *)&v6 + fKnockbackAgilBase;
  return (float)(v4 * v8);
}
