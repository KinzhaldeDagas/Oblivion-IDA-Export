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

  *(_DWORD *)v9 = 0; /*0x506948*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x506950*/
  if ( result ) /*0x50695a*/
  {
    nullsub_returnvVoid_1arg(*(int *)v9); /*0x506967*/
    if ( MEMORY[0xB361AC] ) /*0x50696c*/
      Interface_ConsolePrint("Deleted all non persistent actors in high process."); /*0x50697a*/
    return 1; /*0x506982*/
  }
  return result; /*0x50695d*/
}
