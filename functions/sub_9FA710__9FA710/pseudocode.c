// Verified setting registration: registers GameSettingFloat fPathMinimalUseDoorPenalty with default 40960.0 and pairs it with atexit cleanup GameSettings_Unregister_fPathMinimalUseDoorPenalty.
int GameSettings_Register_fPathMinimalUseDoorPenalty()
{
  GameSetting_ConstrAndReg_float(&fPathMinimalUseDoorPenalty, (int)"fPathMinimalUseDoorPenalty", 40960.0); /*0x9fa724*/
  return atexit(GameSettings_Unregister_fPathMinimalUseDoorPenalty); /*0x9fa734*/
}
