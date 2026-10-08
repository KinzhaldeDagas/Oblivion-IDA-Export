// Apply one purchased training level. The shared Player_SkillLevelIncrease call skips progress consumption but still performs base-skill, requirement, mastery, per-skill, specialization, attribute-bonus, and seven-major side effects; then increment session and training statistics.
void __thiscall Player_TrainSkill(PlayerCharacter *this, TESSkill_RecordView *skill)
{
  Player_SkillLevelIncrease(this, skill, 1, 1); // Training flag bypasses consumption of skillExp, but major/non-major classification and all level-increase counters still run inside Player_SkillLevelIncrease. /*0x66a3dc*/
  ++this->trainingSessionsUsed; /*0x66a3e1*/
  ++this->miscStats[3]; /*0x66a3e8*/
}
