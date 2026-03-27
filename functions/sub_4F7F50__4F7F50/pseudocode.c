char __cdecl sub_4F7F50(int a1, int a2, int a3, double *a4)
{
  Sky *sky; // eax
  double windSpeed; // st7

  *a4 = 0.0;
  if ( !TES )
    return 0;
  sky = TES->sky;
  if ( !sky )
    return 0;
  windSpeed = sky->windSpeed;
  *a4 = windSpeed;
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetWindSpeed >> %0.2f", windSpeed);
  return 1;
}
