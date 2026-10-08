char __cdecl sub_502F70(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  char result; // al
  UInt16 v9[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0; /*0x502f9a*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x502fa2*/
  if ( result ) /*0x502fac*/
    return Cmd_GetIsCurrentWeather((int)a4, *(TESWeather **)v9, 0, a7); /*0x502fbe*/
  return result; /*0x502fb0*/
}
