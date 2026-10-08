char __cdecl Cmd_GetIsCurrentWeather(int a1, TESWeather *a2, int a3, double *a4)
{
  TESWeather *v4; // esi

  v4 = 0; /*0x4f6abc*/
  *a4 = 0.0; /*0x4f6abe*/
  if ( a2 ) /*0x4f6ac2*/
  {                                             // Weather validation uses TESForm+0x04 formType == 0x2D (TESWeather). FormID for weather checks is TESForm+0x0C.
    if ( *((_BYTE *)a2 + 4) == 0x2D ) /*0x4f6ac8*/
      v4 = a2; /*0x4f6aca*/
  }
  if ( v4 == Sky_CreateOrGetGlobalObject()->firstWeather )// Current weather pointer source: Sky+0x10 firstWeather. For FormID-based chances, compare/read ((TESForm*)Sky->firstWeather)->refID at +0x0C. /*0x4f6ad4*/
    *a4 = 1.0; /*0x4f6ad8*/
  if ( MEMORY[0xB361AC] ) /*0x4f6ada*/
    Interface_ConsolePrint("GetIsCurrentWeather >> %0.2f", *a4); /*0x4f6af0*/
  return 1; /*0x4f6af8*/
}
