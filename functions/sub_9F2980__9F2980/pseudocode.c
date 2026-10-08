int sub_9F2980()
{
  GameSetting_ConstrAndReg( /*0x9f298f*/
    &stru_B38CE8,
    "sMustRestart",
    "You must exit and restart Oblivion for changes in this setting to take effect.");
  return atexit(sub_A220F0); /*0x9f299f*/
}
