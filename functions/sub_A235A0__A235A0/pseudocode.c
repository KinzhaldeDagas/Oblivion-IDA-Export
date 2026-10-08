// Verified atexit cleanup calls GameSetting_destr on fLeafRockTimeScale.
void __cdecl GameSetting_fLeafRockTimeScale_atexit()
{
  GameSetting_destr((int *)fLeafRockTimeScale); /*0xa235a5*/
}
