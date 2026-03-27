bool __cdecl sub_507AE0(
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
  UInt16 v10[2]; // [esp+0h] [ebp-8h] BYREF
  int v11; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)v10 = 0;
  v11 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &v11);
  if ( result )
  {
    GlobalObject = Sky_CreateOrGetGlobalObject();
    if ( GlobalObject->firstWeather )
    {
      if ( v11 )
      {
        GlobalObject->weatherOverride = *(TESWeather **)v10;
      }
      else
      {
        GlobalObject->weather018 = *(TESWeather **)v10;
        TESDataHandler_g_PlayerRef->region = 0;
      }
      if ( !IsConsoleMode )
      {
        sub_53FB60(GlobalObject, 1);
        return 1;
      }
    }
    else
    {
      ForceWeather(GlobalObject, *(TESWeather **)v10, v11 != 0);
    }
    return 1;
  }
  return result;
}
