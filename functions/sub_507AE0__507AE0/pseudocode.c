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

  *(_DWORD *)v10 = 0; /*0x507b10*/
  v11 = 0; /*0x507b18*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &v11); /*0x507b20*/
  if ( result ) /*0x507b2a*/
  {
    GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x507b30*/
    if ( GlobalObject->firstWeather ) /*0x507b37*/
    {
      if ( v11 ) /*0x507b42*/
      {
        GlobalObject->weatherOverride = *(TESWeather **)v10; /*0x507b47*/
      }
      else
      {
        GlobalObject->weather018 = *(TESWeather **)v10; /*0x507b4f*/
        reference->region = 0; /*0x507b57*/
      }
      if ( !MEMORY[0xB361AC] ) /*0x507b61*/
      {
        sub_53FB60(GlobalObject, 1); /*0x507b6c*/
        return 1; /*0x507b76*/
      }
    }
    else
    {
      ForceWeather(GlobalObject, *(TESWeather **)v10, v11 != 0); /*0x507b84*/
    }
    return 1; /*0x507b89*/
  }
  return result; /*0x507b2c*/
}
