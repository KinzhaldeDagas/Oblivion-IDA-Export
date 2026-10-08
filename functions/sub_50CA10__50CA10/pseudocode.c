bool __cdecl sub_50CA10(
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
  UInt16 v10[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v10 = 0; /*0x50ca38*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10); /*0x50ca40*/
  if ( result ) /*0x50ca4a*/
  {
    reference->unk6F4 = *(_DWORD *)v10; /*0x50ca56*/
    if ( MEMORY[0xB361AC] ) /*0x50ca5c*/
    {
      v9 = reference->vtbl->super.GetFame((Actor *)reference); /*0x50ca73*/
      Interface_ConsolePrint("Player Fame is %d ", v9); /*0x50ca7b*/
    }
    return 1; /*0x50ca83*/
  }
  return result; /*0x50ca4d*/
}
