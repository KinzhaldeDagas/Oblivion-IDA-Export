// Verified atexit cleanup calls GameSetting_destr on fTreeWindVariance.
void __cdecl GameSetting_fTreeWindVariance_atexit()
{
  GameSetting_destr((int *)fTreeWindVariance); /*0xa23595*/
}
