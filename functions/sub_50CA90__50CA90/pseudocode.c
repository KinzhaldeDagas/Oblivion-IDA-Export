bool __cdecl sub_50CA90(
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
  PlayerCharacter *v9; // eax
  SInt32 v10; // eax
  UInt16 v11[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v11 = 0; /*0x50cab8*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11); /*0x50cac0*/
  if ( result ) /*0x50caca*/
  {
    v9 = reference; /*0x50cace*/
    v9->unk6F8 += *(_DWORD *)v11; /*0x50cad6*/
    v9->unk6FC = 0; /*0x50cadc*/
    if ( MEMORY[0xB361AC] ) /*0x50cae6*/
    {
      v10 = reference->vtbl->super.GetInfamy((Actor *)reference); /*0x50cafd*/
      Interface_ConsolePrint("Player infamy is %d ", v10); /*0x50cb05*/
    }
    return 1; /*0x50cb0d*/
  }
  return result; /*0x50cacd*/
}
