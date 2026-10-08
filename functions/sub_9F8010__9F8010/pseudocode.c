int sub_9F8010()
{
  GameSetting_ConstrAndReg(&MEMORY[0xB39500], "sMakeDefaults", "Make these your default settings?"); /*0x9f801f*/
  return atexit(sub_A23120); /*0x9f802f*/
}
