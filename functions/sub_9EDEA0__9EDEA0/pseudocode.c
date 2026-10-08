// Initializes Oblivion iClassCharactergenClass to FormID 0x000230E6. While the player still uses this placeholder class, class-major and specialization auto-stat bonuses are suppressed.
int InitSetting_iClassCharactergenClass()
{
  GameSetting_ConstrAndReg(&g_iClassCharactergenClass, (int)"iClassCharactergenClass", 0x230E6); /*0x9edeaf*/
  return atexit(sub_A20120); /*0x9edebf*/
}
