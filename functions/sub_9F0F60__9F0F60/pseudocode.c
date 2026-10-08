int sub_9F0F60()
{
  GameSetting_ConstrAndReg( /*0x9f0f6f*/
    &stru_B386C0,
    "sSaveGameContentIsMissing",
    "This save relies on content that is no longer present. Some objects may no longer be available. Continue Loading?");
  return atexit(sub_A214A0); /*0x9f0f7f*/
}
