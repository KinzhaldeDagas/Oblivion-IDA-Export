int sub_9F1400()
{
  GameSetting_ConstrAndReg(
    (int *)&unk_B387E8,
    (int)"sDeviceRemoved",
    (int)"The save device you selected is no longer available.  You will need to select a new device the next time you sa"
         "ve.  Until then, Autosave is disabled.");
  return atexit(sub_A216F0);
}
