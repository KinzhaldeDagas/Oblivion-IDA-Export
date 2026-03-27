int sub_9F11A0()
{
  GameSetting_ConstrAndReg(
    &dword_B38750,
    (int)"sSaveGameCorruptMenuMessage",
    (int)"The save game is corrupt and cannot be loaded.");
  return atexit(sub_A215C0);
}
