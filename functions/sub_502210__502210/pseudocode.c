bool __cdecl sub_502210(
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
  UInt16 v9[2]; // [esp+8h] [ebp-4h] BYREF

  *(float *)v9 = 0.0; /*0x50221b*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x50223d*/
  if ( result ) /*0x502247*/
  {
    Interface_ConsolePrint("Value = %0.4f", *(float *)v9); /*0x502259*/
    return 1; /*0x502261*/
  }
  return result; /*0x50224a*/
}
