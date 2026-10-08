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

  GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x4f68f0*/
  firstWeather = GlobalObject->firstWeather; /*0x4f68f7*/
  if ( firstWeather && (*((_BYTE *)firstWeather + 0x53) & 1) != 0 )// GetIsPleasant uses TESWeather+0x53 bit 0, blended by Sky+0xD8 weatherPercent against secondWeather. /*0x4f6902*/
    weatherPercent = GlobalObject->weatherPercent; /*0x4f6904*/
  else
    weatherPercent = 0.0; /*0x4f690c*/
  *a4 = weatherPercent; /*0x4f6912*/
  secondWeather = GlobalObject->secondWeather; /*0x4f6914*/
  if ( secondWeather && (*((_BYTE *)secondWeather + 0x53) & 1) != 0 ) /*0x4f691f*/
  {
    v8 = weatherPercent; /*0x4f6921*/
    v9 = 1.0 - GlobalObject->weatherPercent; /*0x4f692b*/
  }
  else
  {
    v10 = weatherPercent; /*0x4f692f*/
    v9 = 0.0; /*0x4f692f*/
    v8 = v10; /*0x4f692f*/
  }
  v11 = v8 + v9; /*0x4f6931*/
  *a4 = v11; /*0x4f6933*/
  if ( MEMORY[0xB361AC] ) /*0x4f6935*/
    Interface_ConsolePrint("GetIsPleasant >> %0.2f", v11); /*0x4f6949*/
  return 1; /*0x4f6953*/
}
