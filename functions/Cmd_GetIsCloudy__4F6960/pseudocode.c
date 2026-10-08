char __cdecl Cmd_GetIsCloudy(int a1, int a2, int a3, double *a4)
{
  Sky *GlobalObject; // eax
  TESWeather *firstWeather; // ecx
  double weatherPercent; // st6
  TESWeather *secondWeather; // ecx
  double v8; // st7
  double v9; // st6
  double v10; // rt0
  double v11; // st7

  GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x4f6960*/
  firstWeather = GlobalObject->firstWeather; /*0x4f6967*/
  if ( firstWeather && (*((_BYTE *)firstWeather + 0x53) & 2) != 0 )// GetIsCloudy uses TESWeather+0x53 bit 1, blended by Sky+0xD8 weatherPercent against secondWeather. /*0x4f6972*/
    weatherPercent = GlobalObject->weatherPercent; /*0x4f6974*/
  else
    weatherPercent = 0.0; /*0x4f697c*/
  *a4 = weatherPercent; /*0x4f6982*/
  secondWeather = GlobalObject->secondWeather; /*0x4f6984*/
  if ( secondWeather && (*((_BYTE *)secondWeather + 0x53) & 2) != 0 ) /*0x4f698f*/
  {
    v8 = weatherPercent; /*0x4f6991*/
    v9 = 1.0 - GlobalObject->weatherPercent; /*0x4f699b*/
  }
  else
  {
    v10 = weatherPercent; /*0x4f699f*/
    v9 = 0.0; /*0x4f699f*/
    v8 = v10; /*0x4f699f*/
  }
  v11 = v8 + v9; /*0x4f69a1*/
  *a4 = v11; /*0x4f69a3*/
  if ( MEMORY[0xB361AC] ) /*0x4f69a5*/
    Interface_ConsolePrint("GetIsCloudy >> %0.2f", v11); /*0x4f69b9*/
  return 1; /*0x4f69c3*/
}
