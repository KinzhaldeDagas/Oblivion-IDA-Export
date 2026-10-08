// Recomputes required skill-use progress for all 21 native Oblivion skill actor values by calling Player_RecalculateRequiredSkillExperience.
int __thiscall Player_RecalculateAllRequiredSkillExperience(PlayerCharacter *this)
{
  int i; // esi
  SkillActorValue AVFromGroupOffset; // eax
  int result; // eax

  for ( i = 0; i < 0x15; ++i ) /*0x6670c4*/
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, i); /*0x6670c9*/
    result = Player_RecalculateRequiredSkillExperience(this, AVFromGroupOffset); /*0x6670d4*/
  }
  return result; /*0x6670e1*/
}
