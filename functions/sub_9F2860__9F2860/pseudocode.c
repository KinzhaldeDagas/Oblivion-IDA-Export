int sub_9F2860()
{
  GameSetting_ConstrAndReg(
    (int *)&unk_B38CA0,
    (int)"sQuitPastMainMenu",
    (int)"Are you sure you want to exit the game?  All unsaved progress will be lost.");
  return atexit(sub_A22060);
}
