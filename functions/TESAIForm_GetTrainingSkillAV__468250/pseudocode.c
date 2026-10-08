// Decode TESAIForm's one-byte training-skill index at +0x0C into SkillActorValue by adding kSkillAV_Armorer (0x0C).
SkillActorValue __thiscall TESAIForm_GetTrainingSkillAV(void *this)
{
  return *((unsigned __int8 *)this + 0xC) + 0xC; /*0x468257*/
}
