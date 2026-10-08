// Return one of exactly seven SkillActorValue entries from TESClass::majorSkills. Caller must supply index 0..6.
SkillActorValue __thiscall TESClass_GetMajorSkillAV(TESClass *this, UInt32 index)
{
  return this->members.majorSkills[index]; /*0x51bf08*/
}
