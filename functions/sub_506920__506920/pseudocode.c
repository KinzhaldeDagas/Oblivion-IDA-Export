bool __cdecl sub_506920(
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

  *(_DWORD *)v9 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9);
  if ( result )
  {
    nullsub_returnvVoid_1arg(*(_DWORD *)v9);
    if ( IsConsoleMode )
      Interface_ConsolePrint("Deleted all non persistent actors in high process.");
    return 1;
  }
  return result;
}
