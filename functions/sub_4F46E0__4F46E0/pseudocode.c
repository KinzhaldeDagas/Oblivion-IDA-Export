char __cdecl sub_4F46E0(int a1, int a2, int a3, double *a4)
{
  double GameHour; // st7

  GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
  *a4 = GameHour;
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetCurrentTime >> %0.2f", GameHour);
  return 1;
}
