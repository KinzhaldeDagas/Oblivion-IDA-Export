int sub_9F2860()
{
  GameSetting_ConstrAndReg( /*0x9f286f*/
    &stru_B38CA0,
    "sQuitPastMainMenu",
    "Are you sure you want to exit the game?  All unsaved progress will be lost.");
  return atexit(sub_A22060); /*0x9f287f*/
}
