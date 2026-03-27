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

  *(float *)v9 = 1.0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9);
  if ( result )
  {
    sub_7EB080(*(float *)v9);
    return 1;
  }
  return result;
}
