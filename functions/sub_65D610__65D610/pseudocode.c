// Clear Combat/Magic/Stealth specialization advance bytes. Normal character level-up does not call this wholesale reset; class/race finalization does.
void __thiscall Player_ClearSpecializationAdvanceCounts(PlayerCharacter *this)
{
  this->combatAndMagicAdvanceCounts = 0; /*0x65d612*/
  this->stealthAdvanceCount = 0; /*0x65d619*/
}
