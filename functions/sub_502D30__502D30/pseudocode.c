bool __cdecl Cmd_StartQuest_Execute(
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

  *(_DWORD *)v9 = 0; /*0x502d58*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x502d60*/
  if ( result ) /*0x502d6a*/
  {
    if ( *(_DWORD *)v9 ) /*0x502d73*/
      TESQuest::SetRunning(*(TESQuest **)v9, 1); /*0x502d77*/
    return 1; /*0x502d7c*/
  }
  return result; /*0x502d6d*/
}
