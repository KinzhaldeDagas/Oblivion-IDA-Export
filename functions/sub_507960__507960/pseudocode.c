bool __usercall sub_507960@<al>(
        int edi0@<edi>,
        double a2@<st7>,
        double st1_0@<st6>,
        double st2_0@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        ParamInfo *a1,
        UInt8 *a11,
        TESObjectREFR *a4,
        TESObjectREFR *a13,
        Script *a14,
        ScriptEventList *l,
        int a16,
        UInt32 *a3)
{
  bool result; // al
  int v18; // eax
  UInt16 v19[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v19 = 0;
  result = Script_ExtractArgs(a1, a11, a3, a4, a13, a14, l, v19);
  if ( result )
  {
    v18 = *(_DWORD *)v19;
    if ( !*(_DWORD *)v19 )
    {
      v18 = 0xFFFFFFFF;
      *(_DWORD *)v19 = 0xFFFFFFFF;
    }
    sub_445DF0(TES, edi0, a2, st1_0, st2_0, a5, a6, a7, a8, a9, v18, 0);
    if ( TES->unk51 || TES->unk52 )
    {
      Interface_ConsolePrint("TestAllCells %s", "running");
      return 1;
    }
    else
    {
      Interface_ConsolePrint("TestAllCells %s", "stopped");
      return 1;
    }
  }
  return result;
}
