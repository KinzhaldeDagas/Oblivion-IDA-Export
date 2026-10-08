int InitSetting_sSkillNameSecurity()
{
  GameSetting_ConstrAndReg(&g_sSkillNameSecurity, "sSkillNameSecurity", "Security"); /*0x9f9a2f*/
  return atexit(sub_A23A80); /*0x9f9a3f*/
}
