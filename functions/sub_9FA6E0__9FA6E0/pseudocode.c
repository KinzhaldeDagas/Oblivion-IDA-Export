// Verified setting registration: registers GameSettingFloat fPathMustLockpickPenalty with default 40960.0 and pairs it with atexit cleanup GameSettings_Unregister_fPathMustLockpickPenalty.
int GameSettings_Register_fPathMustLockpickPenalty()
{
  GameSetting_ConstrAndReg_float(fPathMustLockpickPenalty, (int)"fPathMustLockpickPenalty", 40960.0); /*0x9fa6f4*/
  return atexit(GameSettings_Unregister_fPathMustLockpickPenalty); /*0x9fa704*/
}
