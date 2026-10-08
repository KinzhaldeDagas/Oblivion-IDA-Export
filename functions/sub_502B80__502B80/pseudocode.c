char __cdecl Cmd_GetQuestRunning_Execute(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *value,
        UInt32 *a3)
{
  char result; // al
  UInt16 v9[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0; /*0x502baa*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x502bb2*/
  if ( result ) /*0x502bbc*/
    return GetQuestRunning_Eval(a4, *(TESQuest **)v9, 0, value); /*0x502bce*/
  return result; /*0x502bc0*/
}
