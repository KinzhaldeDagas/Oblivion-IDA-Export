int sub_9F1160()
{
  GameSetting_ConstrAndReg(
    &dword_B38740,
    (int)"sSaveGameIsCorrupt",
    (int)"The save game is corrupt.  Returning to game.");
  return atexit(sub_A215A0);
}
