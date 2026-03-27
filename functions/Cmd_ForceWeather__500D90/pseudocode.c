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

  *(_DWORD *)v13 = 0;
  v12 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v13, &v12);
  if ( result )
  {
    v11 = v12 != 0;
    v10 = *(TESWeather **)v13;
    GlobalObject = Sky_CreateOrGetGlobalObject();
    ForceWeather(GlobalObject, v10, v11);
    return 1;
  }
  return result;
}
