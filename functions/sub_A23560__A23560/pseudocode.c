// Verified atexit cleanup calls GameSetting_destr on the fTreeNearDistanceBase GameSettingFloat.
void __cdecl GameSetting_fTreeNearDistanceBase_atexit()
{
  GameSetting_destr((int *)fTreeNearDistanceBase); /*0xa23565*/
}
