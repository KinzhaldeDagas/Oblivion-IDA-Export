char __cdecl Cmd_GetIsCurrentWeather(int a1, TESWeather *a2, int a3, double *a4)
{
  TESWeather *v4; // esi

  v4 = 0;
  *a4 = 0.0;
  if ( a2 )
  {
    if ( *((_BYTE *)a2 + 4) == 0x2D )
      v4 = a2;
  }
  if ( v4 == Sky_CreateOrGetGlobalObject()->firstWeather )
    *a4 = 1.0;
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsCurrentWeather >> %0.2f", *a4);
  return 1;
}
