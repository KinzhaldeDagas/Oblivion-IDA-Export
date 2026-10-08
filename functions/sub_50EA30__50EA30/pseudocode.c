bool __cdecl sub_50EA30(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  int v8; // ecx
  bool result; // al
  const char *v10; // eax
  UInt16 v11[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v11 = v8; /*0x50ea30*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11); /*0x50ea58*/
  if ( result ) /*0x50ea62*/
  {
    reference->isInSEWorld = *(_DWORD *)v11 != 0; /*0x50ea72*/
    if ( MEMORY[0xB361AC] ) /*0x50ea78*/
    {
      v10 = "is"; /*0x50ea8e*/
      if ( !reference->isInSEWorld ) /*0x50ea87*/
        v10 = "is not"; /*0x50ea95*/
      Interface_ConsolePrint("The player %s in the SE world", v10); /*0x50eaa0*/
    }
    return 1; /*0x50eaa8*/
  }
  return result; /*0x50ea65*/
}
