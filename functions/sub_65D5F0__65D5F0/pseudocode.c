// Increment the Combat, Magic, or Stealth advance byte from TESSkill::specialization. This counter is independent of class major membership.
void __thiscall Player_IncrementSpecializationAdvanceCount(PlayerCharacter *this, SkillSpecialization specialization)
{
  if ( (unsigned int)specialization <= kSkillSpecialization_Stealth ) /*0x65d5f7*/
    ++*((_BYTE *)&this->combatAndMagicAdvanceCounts + specialization); /*0x65d5f9*/
}
