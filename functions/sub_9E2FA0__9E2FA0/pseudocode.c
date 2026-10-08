int sub_9E2FA0()
{
  GameSetting_ConstrAndReg(&MEMORY[0xB35C0C], "sDefaultCellName", "Wilderness");// 3DTheft decode: Oblivion registers sDefaultCellName as "Wilderness". For plugin wilderness checks, unnamed exterior cells should be treated as wilderness rather than using worldspace fallback names. /*0x9e2faf*/
  return atexit(sub_A1BAD0); /*0x9e2fbf*/
}
