bool __cdecl Cmd_ForceWeather(
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
  Sky *GlobalObject; // eax
  TESWeather *v10; // [esp-8h] [ebp-10h]
  char v11; // [esp-4h] [ebp-Ch]
  int v12; // [esp+0h] [ebp-8h] BYREF
  UInt16 v13[2]; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)v13 = 0; /*0x500dbf*/
  v12 = 0; /*0x500dc7*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v13, &v12); /*0x500dcf*/
  if ( result ) /*0x500dd9*/
  {
    v11 = v12 != 0; /*0x500dea*/
    v10 = *(TESWeather **)v13; /*0x500deb*/
    GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x500dec*/
    ForceWeather(GlobalObject, v10, v11);       // ForceWeather script command resolves args then calls Sky::ForceWeather(weather, overrideFlag). Useful naming reference after the Sky field behavior is observed in Oblivion IDA. /*0x500df3*/
    return 1; /*0x500df8*/
  }
  return result; /*0x500ddb*/
}
