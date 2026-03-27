bool __cdecl sub_50E950(
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

  *(float *)v9 = 0.0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9);
  if ( result )
  {
    if ( *(float *)v9 == flt_B06C2C || *(float *)v9 <= 0.0 )
    {
      return 1;
    }
    else
    {
      flt_B06C2C = *(float *)v9;
      byte_B34FA4 = 1;
      return 1;
    }
  }
  return result;
}
