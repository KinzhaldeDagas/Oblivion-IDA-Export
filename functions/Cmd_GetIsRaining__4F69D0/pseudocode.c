char __cdecl Cmd_GetIsRaining(int a1, int a2, int a3, double *a4)
{
  Sky *GlobalObject; // eax
  double v5; // st7
  float v7; // [esp+8h] [ebp-4h]

  GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x4f69d1*/
  if ( Sky_IsRainingByWeatherFlags(GlobalObject) )// GetIsRaining delegates to Sky rain-state helper 0x4F5ED0 rather than comparing weather FormIDs. /*0x4f69d8*/
    v5 = 1.0; /*0x4f69e1*/
  else
    v5 = 0.0; /*0x4f69e5*/
  v7 = v5; /*0x4f69eb*/
  *a4 = v7; /*0x4f69f1*/
  if ( MEMORY[0xB361AC] ) /*0x4f69f3*/
    Interface_ConsolePrint("GetIsRaining >> %0.2f", v7); /*0x4f6a07*/
  return 1; /*0x4f6a12*/
}
