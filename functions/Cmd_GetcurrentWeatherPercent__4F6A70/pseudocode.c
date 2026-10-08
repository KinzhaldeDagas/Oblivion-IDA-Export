char __cdecl Cmd_GetCurrentWeatherPercent(int a1, int a2, int a3, double *a4)
{
  double weatherPercent; // st7

  weatherPercent = Sky_CreateOrGetGlobalObject()->weatherPercent;// GetCurrentWeatherPercent reads Sky+0xD8. /*0x4f6a75*/
  *a4 = weatherPercent; /*0x4f6a7f*/
  if ( MEMORY[0xB361AC] ) /*0x4f6a81*/
    Interface_ConsolePrint("GetCurrentWeatherPercent >> %0.2f", weatherPercent); /*0x4f6a95*/
  return 1; /*0x4f6a9f*/
}
