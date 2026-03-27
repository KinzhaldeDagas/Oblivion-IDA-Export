char __cdecl sub_502690(
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
  UInt16 v9[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9);
  if ( result )
    return sub_4F61A0((Actor *)a4, *(Actor **)v9, 0, a7);
  return result;
}
