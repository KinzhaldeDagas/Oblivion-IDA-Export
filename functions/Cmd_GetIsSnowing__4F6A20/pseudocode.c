char __cdecl Cmd_GetIsSnowing(int a1, int a2, int a3, double *a4)
{
  Sky *GlobalObject; // eax
  double v5; // st7
  float v7; // [esp+8h] [ebp-4h]

  GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x4f6a21*/
  if ( Sky_IsSnowingByWeatherFlags(GlobalObject) )// GetIsSnowing delegates to Sky snow-state helper 0x4F5F70 rather than comparing weather FormIDs. /*0x4f6a28*/
    v5 = 1.0; /*0x4f6a31*/
  else
    v5 = 0.0; /*0x4f6a35*/
  v7 = v5; /*0x4f6a3b*/
  *a4 = v7; /*0x4f6a41*/
  if ( MEMORY[0xB361AC] ) /*0x4f6a43*/
    Interface_ConsolePrint("GetIsSnowing >> %0.2f", v7); /*0x4f6a57*/
  return 1; /*0x4f6a62*/
}
