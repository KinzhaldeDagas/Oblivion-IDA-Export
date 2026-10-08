int GameSetting_Init_fArrowAgeMax()
{
  GameSetting_ConstrAndReg_float(&g_GameSettingStringPointers_B36CD8[0xDC], (int)"fArrowAgeMax", 90.0);// Register float game setting fArrowAgeMax with default value 90.0 seconds; lifecycle update enters state 3 after elapsedTime exceeds it. /*0x9e9964*/
  return atexit(sub_A1E7B0); /*0x9e9974*/
}
