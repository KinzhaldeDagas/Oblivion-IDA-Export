int InitSetting_sSkillNameAlteration()
{
  GameSetting_ConstrAndReg(&g_sSkillNameAlteration, "sSkillNameAlteration", "Alteration"); /*0x9f98ef*/
  return atexit(sub_A239E0); /*0x9f98ff*/
}
