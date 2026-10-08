// Authoritative Oblivion major predicate. The chargen placeholder class FormID g_iClassCharactergenClass (0x000230E6) classifies no skills as major; otherwise scan exactly majorSkills[0..6]. Any failed match is non-major/minor. Duplicate or invalid entries reduce the number of distinct native majors.
bool __thiscall TESClass_IsMajorSkillAV(TESClass *this, SkillActorValue actorValue)
{
  bool result; // al
  int v3; // edx
  SkillActorValue *majorSkills; // ecx

  result = 0; /*0x51c093*/
  if ( this->members.super.refID != g_iClassCharactergenClass.value )// If this is the character-generation placeholder class, return false without scanning majorSkills[7]. /*0x51c09b*/
  {
    v3 = 0; /*0x51c0a5*/
    majorSkills = this->members.majorSkills; /*0x51c0a7*/
    do /*0x51c0c3*/
    {
      if ( result ) /*0x51c0b2*/
        break; /*0x51c0b2*/
      result = *majorSkills == actorValue; /*0x51c0b8*/
      ++v3; /*0x51c0ba*/
      ++majorSkills; /*0x51c0bd*/
    }
    while ( v3 < 7 ); /*0x51c0c3*/
  }
  return result; /*0x51c09d*/
}
