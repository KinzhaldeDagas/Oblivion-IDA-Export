bool __cdecl sub_506260(
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

  *(_DWORD *)v9 = 0; /*0x506288*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x506290*/
  if ( result ) /*0x50629a*/
  {
    if ( *(_DWORD *)v9 ) /*0x5062a3*/
      TESObjectCELL_SetDetachTime(*(ExtraDataList **)v9, (BSExtraDataVtbl *)0xFFFFFFFF); /*0x5062a7*/
    return 1; /*0x5062ac*/
  }
  return result; /*0x50629d*/
}
