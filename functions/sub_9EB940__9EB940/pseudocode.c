// Construct/register iLevelUpSkillCount with Oblivion default 10 major-skill advances.
int InitSetting_iLevelUpSkillCount()
{
  GameSetting_ConstrAndReg(&g_iLevelUpSkillCount.value, (int)"iLevelUpSkillCount", 0xA); /*0x9eb94c*/
  return atexit(sub_A1F350); /*0x9eb95c*/
}
