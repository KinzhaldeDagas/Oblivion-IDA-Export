int sub_9F2980()
{
  GameSetting_ConstrAndReg(
    &dword_B38CE8,
    (int)"sMustRestart",
    (int)"You must exit and restart Oblivion for changes in this setting to take effect.");
  return atexit(sub_A220F0);
}
