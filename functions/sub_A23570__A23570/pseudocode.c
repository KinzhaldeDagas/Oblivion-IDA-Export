// Verified atexit cleanup calls GameSetting_destr on fTreeFarDistanceBase.
void __cdecl GameSetting_fTreeFarDistanceBase_atexit()
{
  GameSetting_destr((int *)fTreeFarDistanceBase); /*0xa23575*/
}
