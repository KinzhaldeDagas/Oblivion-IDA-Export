void __usercall sub_5083C0(
        double st0_0@<st7>,
        double a2@<st4>,
        double a3@<st3>,
        double st5_0@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        ParamInfo *a1,
        UInt8 *a8,
        TESObjectREFR *a4,
        TESObjectREFR *a10,
        Script *a11,
        ScriptEventList *l,
        int a13,
        UInt32 *a14)
{
  _BYTE *GlobalScriptStateObj; // eax
  InterfaceManager *Singleton; // eax
  char ArgList[4]; // [esp+14h] [ebp-204h] BYREF

  if ( Script_ExtractArgs(a1, a8, a14, a4, a10, a11, l, ArgList) )
  {
    GlobalScriptStateObj = (_BYTE *)GetGlobalScriptStateObj__(1);
    if ( (char)GlobalScriptStateObj[0x31] > 0 )
    {
      sub_5859C0(GlobalScriptStateObj, (char)ArgList, st5_0, a5, a6);
      Singleton = InterfaceManager_GetSingleton(0, 1);
      sub_57CFE0((int)Singleton, st5_0, a5, a6, 3, 0);
    }
    sub_66FD90((int)TESDataHandler_g_PlayerRef, (char)ArgList, st0_0, a2, a3, st5_0, a5, a6, (char)ArgList, 0);
  }
}
