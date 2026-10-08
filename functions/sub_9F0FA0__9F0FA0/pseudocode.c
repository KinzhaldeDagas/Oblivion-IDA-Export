int sub_9F0FA0()
{
  GameSetting_ConstrAndReg( /*0x9f0faf*/
    &stru_B386D0,
    "sSaveGameOutOfDiskSpace",
    "%s does not have sufficent disk space available.  Please select another device or delete some of your existing data.");
  return atexit(sub_A214C0); /*0x9f0fbf*/
}
