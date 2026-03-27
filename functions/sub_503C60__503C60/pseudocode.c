bool __cdecl sub_503C60(
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
  UInt16 v9[2]; // [esp+0h] [ebp-8h] BYREF
  float v10; // [esp+4h] [ebp-4h] BYREF

  *(float *)v9 = 0.0;
  v10 = 0.0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9, &v10);
  if ( result )
  {
    *(float *)v9 = fabs(*(float *)v9);
    flt_B42F4C = *(float *)v9;
    v10 = fabs(v10);
    flt_B2C73C = v10;
    return 1;
  }
  return result;
}
