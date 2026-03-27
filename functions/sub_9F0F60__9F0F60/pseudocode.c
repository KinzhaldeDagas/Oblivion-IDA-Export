int sub_9F0F60()
{
  GameSetting_ConstrAndReg(
    &dword_B386C0,
    (int)"sSaveGameContentIsMissing",
    (int)"This save relies on content that is no longer present. Some objects may no longer be available. Continue Loading?");
  return atexit(sub_A214A0);
}
