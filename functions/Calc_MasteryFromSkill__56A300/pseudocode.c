int __cdecl Calc_MasteryFromSkill(int a1)
{
  if ( a1 < iSkillApprenticeMin )
    return 0;
  if ( a1 < iSkillJourneymanMin )
    return 1;
  if ( a1 >= iSkillExpertMin )
    return (a1 >= iSkillMasterMin) + 3;
  return 2;
}
