// Map a base skill value to Oblivion's five mastery tiers using iSkillApprenticeMin=25, iSkillJourneymanMin=50, iSkillExpertMin=75, and iSkillMasterMin=100.
SkillMasteryLevel __cdecl Calc_MasteryFromSkill(SInt32 skillValue)
{
  if ( skillValue < g_iSkillApprenticeMin.value ) /*0x56a30a*/
    return kSkillMastery_Novice; /*0x56a30c*/
  if ( skillValue < g_iSkillJourneymanMin.value ) /*0x56a315*/
    return kSkillMastery_Apprentice; /*0x56a317*/
  if ( skillValue >= g_iSkillExpertMin.value ) /*0x56a323*/
    return (skillValue >= g_iSkillMasterMin.value) + 3; /*0x56a339*/
  return kSkillMastery_Journeyman; /*0x56a30e*/
}
