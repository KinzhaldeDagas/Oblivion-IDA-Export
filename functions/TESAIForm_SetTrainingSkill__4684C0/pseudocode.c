// Accept only SkillActorValue 0x0C..0x20 and store its zero-based 0..20 index in TESAIForm+0x0C.
UInt32 __thiscall TESAIForm_SetTrainingSkill(void *this, SkillActorValue actorValue)
{
  UInt32 result; // eax

  result = actorValue; /*0x4684c0*/
  if ( (unsigned int)(actorValue - 0xC) <= 0x14 ) /*0x4684ca*/
  {
    LOBYTE(result) = actorValue - 0xC; /*0x4684cc*/
    *((_BYTE *)this + 0xC) = actorValue - 0xC; /*0x4684ce*/
  }
  return result; /*0x4684d1*/
}
