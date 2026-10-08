char __cdecl Cmd_GetIsCurrentPackage_Execute(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *value,
        UInt32 *a3)
{
  char result; // al
  UInt16 v9[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0; /*0x5050da*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x5050e2*/
  if ( result ) /*0x5050ec*/
  {
    if ( a4 && *(_DWORD *)v9 ) /*0x5050fb*/
      return GetIsCurrentPackage_Eval(a4, *(TESPackage **)v9, 0, value); /*0x505106*/
    else
      return 1; /*0x505111*/
  }
  return result; /*0x5050f0*/
}
