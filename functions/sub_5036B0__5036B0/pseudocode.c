char __cdecl sub_5036B0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  int v8; // ecx
  char result; // al
  char v10; // [esp+1h] [ebp-1h] BYREF

  v10 = HIBYTE(v8);
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &v10);
  if ( result )
    return sub_4F71D0((int)a4, v10, 0, a7);
  return result;
}
