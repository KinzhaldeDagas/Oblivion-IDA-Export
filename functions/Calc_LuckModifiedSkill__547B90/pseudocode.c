// Compute Luck-adjusted effective skill as skill + iActorLuckSkillBase + Luck*fActorLuckSkillMult, then clamp to 0..100. Defaults simplify to skill + (Luck-50)*0.4.
double __cdecl Calc_LuckModifiedSkill(SInt32 skillValue, SInt32 luckValue)
{
  float luckValuea; // [esp+8h] [ebp+8h]
  float luckValueb; // [esp+8h] [ebp+8h]

  luckValuea = (double)luckValue * g_fActorLuckSkillMult.value; /*0x547b9a*/
  luckValueb = luckValuea + (double)g_iActorLuckSkillBase.value; /*0x547ba8*/
  Calc_LuckModifiedSkill_::ApplySkillCap(); /*0x547bb1*/
  return (double)skillValue + luckValueb;
}
