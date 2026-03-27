char __cdecl sub_503390(
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
  UInt16 v10[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v10 = v8;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10);
  if ( result )
    return sub_4F6FC0((int)a4, *(int *)v10, 0, a7);
  return result;
}
