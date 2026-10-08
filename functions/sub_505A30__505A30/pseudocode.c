bool __cdecl sub_505A30(
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
  char *v9; // eax
  UInt16 v10[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v10 = 0; /*0x505a5a*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10); /*0x505a62*/
  if ( result ) /*0x505a6c*/
  {
    v9 = (char *)OblivionDynamicCast( /*0x505a80*/
                   a4,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
    if ( v9 ) /*0x505a8a*/
      sub_5E8EC0(v9, *(_DWORD *)v10 > 0); /*0x505a97*/
    if ( MEMORY[0xB361AC] ) /*0x505a9c*/
      Interface_ConsolePrint("SetGhost >> %d", *(_DWORD *)v10); /*0x505aaf*/
    return 1; /*0x505ab7*/
  }
  return result; /*0x505a70*/
}
