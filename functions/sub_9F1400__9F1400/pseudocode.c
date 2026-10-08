int sub_9F1400()
{
  GameSetting_ConstrAndReg( /*0x9f140f*/
    &stru_B387E8,
    "sDeviceRemoved",
    "The save device you selected is no longer available.  You will need to select a new device the next time you save.  "
    "Until then, Autosave is disabled.");
  return atexit(sub_A216F0); /*0x9f141f*/
}
