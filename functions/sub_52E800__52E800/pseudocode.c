// Oblivion-native checked skill-name lookup. Accepts only the 21 skill actor values (0x0C..0x20) before indexing the skill-name table.
const char *__cdecl ActorValue_GetSkillNameChecked(SkillActorValue actorValue)
{
  if ( (unsigned int)(actorValue - 0xC) > 0x14 ) /*0x52e80a*/
    return 0; /*0x52e815*/
  else
    return (const char *)ActorValue_GetName(actorValue); /*0x52e810*/
}
