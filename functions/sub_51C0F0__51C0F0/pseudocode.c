// Oblivion major-slot setter. Writes only actor values 0x0C..0x20, silently ignores other values, and does not bounds-check index; callers must constrain index to 0..6.
void __thiscall TESClass_SetMajorSkillAV(TESClass *this, UInt32 index, SkillActorValue actorValue)
{                                               // Unsigned range test accepts exactly the 21 native skill actor values Armorer..Speechcraft (0x0C..0x20).
  if ( (unsigned int)(actorValue - 0xC) <= 0x14 ) /*0x51c0fa*/
    this->members.majorSkills[index] = actorValue; /*0x51c100*/
}
