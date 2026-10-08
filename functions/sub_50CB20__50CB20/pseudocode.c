bool __cdecl sub_50CB20(
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
  int v10; // ecx
  PlayerCharacter *v11; // eax
  SInt32 v12; // eax
  UInt16 v13[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v13 = 0; /*0x50cb48*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v13); /*0x50cb50*/
  if ( result ) /*0x50cb5a*/
  {
    v9 = reference->vtbl->super.GetInfamy((Actor *)reference); /*0x50cb6c*/
    v10 = *(_DWORD *)v13 - v9; /*0x50cb71*/
    v11 = reference; /*0x50cb73*/
    v11->unk6F8 += v10; /*0x50cb78*/
    v11->unk6FC = 0; /*0x50cb7e*/
    if ( MEMORY[0xB361AC] ) /*0x50cb88*/
    {
      v12 = reference->vtbl->super.GetInfamy((Actor *)reference); /*0x50cb9f*/
      Interface_ConsolePrint("Player infamy is %d ", v12); /*0x50cba7*/
    }
    return 1; /*0x50cbaf*/
  }
  return result; /*0x50cb5d*/
}
