char __cdecl Cmd_GetcurrentWeatherPercent(int a1, int a2, int a3, double *a4)
{
  double weatherPercent; // st7

  weatherPercent = Sky_CreateOrGetGlobalObject()->weatherPercent;
  *a4 = weatherPercent;
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetCurrentWeatherPercent >> %0.2f", weatherPercent);
  return 1;
}
