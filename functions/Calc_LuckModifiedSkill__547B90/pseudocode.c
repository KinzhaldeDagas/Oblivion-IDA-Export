double __cdecl Calc_LuckModifiedSkill(int a1, signed int a2)
{
  float v3; // [esp+8h] [ebp+8h]
  float v4; // [esp+8h] [ebp+8h]

  v3 = (double)a2 * fActorLuckSkillMult;
  v4 = v3 + (double)iActorLuckSkillBase;
  Calc_LuckModifiedSkill_::ApplySkillCap();
  return (double)a1 + v4;
}
