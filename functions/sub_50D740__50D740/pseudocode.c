bool __cdecl sub_50D740(
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
  int v10; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0;
  v10 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9, &v10);
  if ( result )
  {
    TESDataHandler_g_PlayerRef->miscStats[*(_DWORD *)v9] += v10;
    return 1;
  }
  return result;
}
