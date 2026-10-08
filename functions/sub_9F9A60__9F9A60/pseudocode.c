// Register sSkillNameSpeechcraft, the final native skill-name setting corresponding to SkillActorValue 0x20.
int InitSetting_sSkillNameSpeechcraft()
{
  GameSetting_ConstrAndReg((int *)&g_sSkillNameSpeechcraft, (int)"sSkillNameSpeechcraft", (int)"Speechcraft"); /*0x9f9a6f*/
  return atexit(sub_A23AA0); /*0x9f9a7f*/
}
