// Store raw Oblivion skill-use progress. Negative inputs clamp to 0; only native SkillActorValue 0x0C..0x20 maps into PlayerCharacter::skillExp[21]. This helper does not apply major/minor multipliers.
void __thiscall Player_SetSkillProgress(PlayerCharacter *this, SkillActorValue actorValue, float progress)
{                                               // Clamp negative progress to 0. Positive progress is not capped at the current requirement, allowing excess to carry across an increase.
  if ( progress < 0.0 ) /*0x65fa4e*/
    progress = 0.0; /*0x65fa50*/
  if ( (unsigned int)(actorValue - 0xC) <= 0x14 )// Reject actor values outside the fixed 21-skill range 0x0C..0x20. /*0x65fa62*/
    this->skillExp[ActorValue_GetGroupOffsetFromAV(2, actorValue)] = progress;// Oblivion group 2 maps native SkillActorValue 0x0C..0x20 to skillExp index 0..20. /*0x65fa76*/
}
