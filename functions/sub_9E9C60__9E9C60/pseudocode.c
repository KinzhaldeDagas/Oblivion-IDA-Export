int GameSetting_Init_iArrowMaxRefCount()
{
  GameSetting_ConstrAndReg((int *)&g_GameSettingStringPointers_B36CD8[0xFE], (int)"iArrowMaxRefCount", 0xF);// Register integer game setting iArrowMaxRefCount with default value 15. This pass does not yet assign its exact pruning caller. /*0x9e9c6c*/
  return atexit(sub_A1E8C0); /*0x9e9c7c*/
}
