int __cdecl ActorValue_GetMasterySkill(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
      result = 0;
      break;
    case 1:
      result = iSkillApprenticeMin;
      break;
    case 2:
      result = iSkillJourneymanMin;
      break;
    case 3:
      result = iSkillExpertMin;
      break;
    case 4:
      result = iSkillMasterMin;
      break;
    default:
      JUMPOUT(0x56A38B);
  }
  return result;
}
