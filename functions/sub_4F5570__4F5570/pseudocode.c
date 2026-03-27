char __cdecl sub_4F5570(int a1, int a2, int a3, double *a4)
{
  double GameDayOfWeek; // st7

  *a4 = 0.0;
  GameDayOfWeek = (double)(int)TimeGlobals_GetGameDayOfWeek(&TimeGlobals);
  *a4 = GameDayOfWeek;
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetDayOfWeek >> %0.2f", GameDayOfWeek);
  return 1;
}
