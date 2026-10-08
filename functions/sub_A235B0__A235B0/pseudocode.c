// Verified atexit cleanup calls GameSetting_destr on fLeafRustleTimeScale.
void __cdecl GameSetting_fLeafRustleTimeScale_atexit()
{
  GameSetting_destr((int *)fLeafRustleTimeScale); /*0xa235b5*/
}
