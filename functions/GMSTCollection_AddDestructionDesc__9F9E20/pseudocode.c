int GMSTCollection_AddDestructionDesc()
{
  GameSetting_ConstrAndReg(&MEMORY[0xB3A224], "sSkillDescDestruction", "Destruction Description"); /*0x9f9e2f*/
  return atexit(sub_A23C80); /*0x9f9e3f*/
}
