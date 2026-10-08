void __usercall sub_5083C0(
        double st0_0@<st7>,
        double a2@<st4>,
        double a3@<st3>,
        double st5_0@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        double a7@<st6>,
        double a8@<st5>,
        ParamInfo *a1,
        UInt8 *a10,
        TESObjectREFR *a4,
        TESObjectREFR *a12,
        Script *a13,
        ScriptEventList *l,
        int a15,
        UInt32 *a16)
{
  int GlobalScriptStateObj; // eax
  InterfaceManager *Singleton; // eax
  char ArgList[4]; // [esp+14h] [ebp-204h] BYREF

  if ( Script_ExtractArgs(a1, a10, a16, a4, a12, a13, l, ArgList) ) /*0x50841d*/
  {
    GlobalScriptStateObj = GetGlobalScriptStateObj__(1); /*0x508444*/
    if ( *(char *)(GlobalScriptStateObj + 0x31) > 0 ) /*0x508450*/
    {
      sub_5859C0((int *)GlobalScriptStateObj, (char)ArgList, st5_0, a5, a6); /*0x508454*/
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x508461*/
      sub_57CFE0((int)Singleton, st5_0, a5, a6, 3, 0); /*0x50846b*/
    }
    sub_66FD90((TESObjectREFR *)reference, ArgList, st0_0, a2, a3, st5_0, a5, a6, a7, a8, ArgList, 0.0); /*0x50847d*/
  }
}
