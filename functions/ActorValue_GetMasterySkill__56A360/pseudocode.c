// Return the minimum skill value for a mastery tier: Novice 0, Apprentice 25, Journeyman 50, Expert 75, Master 100.
SInt32 __cdecl ActorValue_GetMinimumSkillForMastery(SkillMasteryLevel mastery)
{
  SInt32 result; // eax

  switch ( mastery ) /*0x56a369*/
  {
    case kSkillMastery_Novice: /*0x56a369*/
      result = 0; /*0x56a370*/
      break; /*0x56a372*/
    case kSkillMastery_Apprentice: /*0x56a369*/
      result = g_iSkillApprenticeMin.value; /*0x56a373*/
      break; /*0x56a378*/
    case kSkillMastery_Journeyman: /*0x56a369*/
      result = g_iSkillJourneymanMin.value; /*0x56a379*/
      break; /*0x56a37e*/
    case kSkillMastery_Expert: /*0x56a369*/
      result = g_iSkillExpertMin.value; /*0x56a37f*/
      break; /*0x56a384*/
    case kSkillMastery_Master: /*0x56a369*/
      result = g_iSkillMasterMin.value; /*0x56a385*/
      break; /*0x56a38a*/
    default:
      JUMPOUT(0x56A38B); /*0x56a38b*/
  }
  return result; /*0x56a372*/
}
