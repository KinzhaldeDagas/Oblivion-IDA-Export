// Verified in OblivionNew 2026-09-26 from command record B0C730 and native instructions: extracts one float; changed positive values update B06C2C and set B34FA4, sharing the deferred renderer gamma path.
bool __cdecl Cmd_SetGamma_Execute(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  UInt16 v9[2]; // [esp+0h] [ebp-4h] BYREF

  *(float *)v9 = 0.0; /*0x50e95b*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x50e97d*/
  if ( result ) /*0x50e987*/
  {
    if ( *(float *)v9 == g_RequestedRenderGamma || *(float *)v9 <= 0.0 ) /*0x50e9aa*/
    {
      return 1; /*0x50e9bf*/
    }
    else
    {
      g_RequestedRenderGamma = *(float *)v9; /*0x50e9ac*/
      MEMORY[0xB33E90][0x1114] = 1; /*0x50e9b2*/
      return 1; /*0x50e9b9*/
    }
  }
  return result; /*0x50e98a*/
}
