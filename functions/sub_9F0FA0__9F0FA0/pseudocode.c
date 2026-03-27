int sub_9F0FA0()
{
  GameSetting_ConstrAndReg(
    (int *)&unk_B386D0,
    (int)"sSaveGameOutOfDiskSpace",
    (int)"%s does not have sufficent disk space available.  Please select another device or delete some of your existing data.");
  return atexit(sub_A214C0);
}
