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

  *(_DWORD *)v19 = 0; /*0x507988*/
  result = Script_ExtractArgs(a1, a11, a3, a4, a13, a14, l, v19); /*0x507990*/
  if ( result ) /*0x50799a*/
  {
    v18 = *(_DWORD *)v19; /*0x50799e*/
    if ( !*(_DWORD *)v19 ) /*0x5079a3*/
    {
      v18 = 0xFFFFFFFF; /*0x5079a5*/
      *(_DWORD *)v19 = 0xFFFFFFFF; /*0x5079a8*/
    }
    sub_445DF0(MEMORY[0xB333A0], edi0, a2, st1_0, st2_0, a5, a6, a7, a8, a9, v18, 0); /*0x5079b4*/
    if ( *(_WORD *)&MEMORY[0xB333A0]->unk51 ) /*0x5079be*/
      Interface_ConsolePrint("TestAllCells %s", "running"); /*0x5079d5*/
    else
      Interface_ConsolePrint("TestAllCells %s", "stopped"); /*0x5079ec*/
    return 1; /*0x5079f4*/
  }
  return result; /*0x50799d*/
}
