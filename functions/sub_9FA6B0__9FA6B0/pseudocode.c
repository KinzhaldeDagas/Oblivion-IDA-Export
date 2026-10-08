// Verified setting registration: registers GameSettingFloat fPathImpassableDoorPenalty with default 409600.0 and pairs it with atexit cleanup GameSettings_Unregister_fPathImpassableDoorPenalty.
int GameSettings_Register_fPathImpassableDoorPenalty()
{
  GameSetting_ConstrAndReg_float(fPathImpassableDoorPenalty, (int)"fPathImpassableDoorPenalty", 409600.0); /*0x9fa6c4*/
  return atexit(GameSettings_Unregister_fPathImpassableDoorPenalty); /*0x9fa6d4*/
}
