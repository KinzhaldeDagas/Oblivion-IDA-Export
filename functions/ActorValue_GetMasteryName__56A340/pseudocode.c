// Return the localized mastery-tier name for SkillMasteryLevel 0..4.
const char *__cdecl ActorValue_GetMasteryName(SkillMasteryLevel mastery)
{
  const char **v1; // eax

  if ( (unsigned int)mastery <= kSkillMastery_Master && (v1 = *(const char ***)(4 * mastery + 0xB12B38)) != 0 ) /*0x56a352*/
    return *v1; /*0x56a354*/
  else
    return 0; /*0x56a357*/
}
