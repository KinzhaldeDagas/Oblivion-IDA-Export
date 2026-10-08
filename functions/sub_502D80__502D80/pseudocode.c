bool __cdecl Cmd_StopQuest_Execute(
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

  *(_DWORD *)v9 = 0; /*0x502da8*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x502db0*/
  if ( result ) /*0x502dba*/
  {
    if ( *(_DWORD *)v9 ) /*0x502dc3*/
      TESQuest::SetRunning(*(TESQuest **)v9, 0); /*0x502dc7*/
    return 1; /*0x502dcc*/
  }
  return result; /*0x502dbd*/
}
