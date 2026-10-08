bool __cdecl Cmd_EnableFastTravel_Execute(
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

  *(_DWORD *)v9 = 0; /*0x50d488*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x50d490*/
  if ( result ) /*0x50d49a*/
  {
    BYTE1(reference->unk5A8) = *(_DWORD *)v9 != 0;// EnableFastTravel script command writes PlayerCharacter+0x5A9 (BYTE1 unk5A8). PlayerCharacter_CanStartFastTravel requires this byte nonzero. /*0x50d4aa*/
    return 1; /*0x50d4b0*/
  }
  return result; /*0x50d49d*/
}
