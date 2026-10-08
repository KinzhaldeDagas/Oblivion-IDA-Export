// First of 21 sequential Oblivion skill-name setting constructors. Addresses 0x9F97E0..0x9F9A60 register Armorer through Speechcraft in SkillActorValue order.
int InitSetting_sSkillNameArmorer()
{
  GameSetting_ConstrAndReg((int *)&g_sSkillNameArmorer, (int)"sSkillNameArmorer", (int)"Armorer"); /*0x9f97ef*/
  return atexit(sub_A23960); /*0x9f97ff*/
}
