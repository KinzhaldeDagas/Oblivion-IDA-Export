char __cdecl sub_502C40(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  char result; // al
  int v9; // [esp+4h] [ebp-8h] BYREF
  UInt16 v10[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v10 = 0;
  v9 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &v9);
  if ( result )
    return sub_4F4BC0((int)a4, *(_DWORD **)v10, v9, a7);
  return result;
}
