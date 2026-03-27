double __cdecl Calc_SkillModifiedMagickaCost(float a1, int a2, int a3)
{
  float v4; // [esp+0h] [ebp-4h]
  float v5; // [esp+0h] [ebp-4h]

  v4 = Calc_LuckModifiedSkill(a2, a3) / fCostant_100;
  v5 = (1.0 - v4) * fMagicCasterSkillCostMult + fMagicCasterSkillCostBase;
  return (float)(v5 * a1);
}
