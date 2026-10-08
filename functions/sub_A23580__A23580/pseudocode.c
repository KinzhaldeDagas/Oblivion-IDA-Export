// Verified atexit cleanup calls GameSetting_destr on fTreeSizeConversion.
void __cdecl GameSetting_fTreeSizeConversion_atexit()
{
  GameSetting_destr((int *)fTreeSizeConversion); /*0xa23585*/
}
