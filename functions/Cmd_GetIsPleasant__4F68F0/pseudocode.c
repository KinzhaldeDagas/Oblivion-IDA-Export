char __cdecl Cmd_GetIsPleasant(int a1, int a2, int a3, double *a4)
{
  Sky *GlobalObject; // eax
  TESWeather *firstWeather; // ecx
  double weatherPercent; // st6
  TESWeather *secondWeather; // ecx
  double v8; // st7
  double v9; // st6
  double v10; // rt0
  double v11; // st7

  GlobalObject = Sky_CreateOrGetGlobalObject();
  firstWeather = GlobalObject->firstWeather;
  if ( firstWeather && (*((_BYTE *)firstWeather + 0x53) & 1) != 0 )
    weatherPercent = GlobalObject->weatherPercent;
  else
    weatherPercent = 0.0;
  *a4 = weatherPercent;
  secondWeather = GlobalObject->secondWeather;
  if ( secondWeather && (*((_BYTE *)secondWeather + 0x53) & 1) != 0 )
  {
    v8 = weatherPercent;
    v9 = 1.0 - GlobalObject->weatherPercent;
  }
  else
  {
    v10 = weatherPercent;
    v9 = 0.0;
    v8 = v10;
  }
  v11 = v8 + v9;
  *a4 = v11;
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsPleasant >> %0.2f", v11);
  return 1;
}
