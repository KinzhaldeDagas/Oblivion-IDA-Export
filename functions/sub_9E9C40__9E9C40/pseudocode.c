int GameSetting_Init_iArrowInventoryChance()
{
  GameSetting_ConstrAndReg((int *)&g_GameSettingStringPointers_B36CD8[0xFC], (int)"iArrowInventoryChance", 0x32);// Register integer game setting iArrowInventoryChance with default value 50. Actor-hit recovery compares random 0..99 against this live setting. /*0x9e9c4c*/
  return atexit(sub_A1E8B0); /*0x9e9c5c*/
}
