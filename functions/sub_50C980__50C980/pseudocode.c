bool __cdecl sub_50C980(
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
  SInt32 v9; // eax
  SInt32 v10; // eax
  UInt16 v11[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v11 = 0; /*0x50c9a8*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11); /*0x50c9b0*/
  if ( result ) /*0x50c9ba*/
  {
    v9 = reference->vtbl->super.GetFame((Actor *)reference); /*0x50c9cc*/
    reference->unk6F4 = *(_DWORD *)v11 + v9; /*0x50c9d7*/
    if ( MEMORY[0xB361AC] ) /*0x50c9dd*/
    {
      v10 = reference->vtbl->super.GetFame((Actor *)reference); /*0x50c9f4*/
      Interface_ConsolePrint("Player Fame is %d ", v10); /*0x50c9fc*/
    }
    return 1; /*0x50ca04*/
  }
  return result; /*0x50c9bd*/
}
