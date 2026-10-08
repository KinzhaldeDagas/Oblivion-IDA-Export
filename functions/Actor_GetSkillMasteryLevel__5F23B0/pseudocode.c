// Oblivion skill-mastery accessor. Accept only native skill AVs 0x0C..0x20, compute the actor's base calculated skill, and map it through the five configurable mastery thresholds.
SkillMasteryLevel __thiscall Actor_GetSkillMasteryLevel(Actor *this, SkillActorValue actorValue)
{
  int v2; // ebx
  int v3; // edi
  SkillMasteryLevel result; // eax
  SInt32 BaseCalcAVi; // eax

  result = kSkillMastery_Novice; /*0x5f23b8*/
  if ( (unsigned int)(actorValue - 0xC) <= 0x14 ) /*0x5f23be*/
  {
    BaseCalcAVi = Actor_GetBaseCalcAVi((int *)this, v2, v3, actorValue - 0xC, actorValue); /*0x5f23c1*/
    return Calc_MasteryFromSkill(BaseCalcAVi); /*0x5f23c7*/
  }
  return result; /*0x5f23bd*/
}
