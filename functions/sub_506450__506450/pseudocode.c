bool __cdecl sub_506450(
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
  UInt16 v9[2]; // [esp+4h] [ebp-4h] BYREF

  *(float *)v9 = 1.0; /*0x50645b*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x50647d*/
  if ( result ) /*0x506487*/
  {
    sub_7EB080(*(float *)v9); /*0x506492*/
    return 1; /*0x50649a*/
  }
  return result; /*0x50648a*/
}
