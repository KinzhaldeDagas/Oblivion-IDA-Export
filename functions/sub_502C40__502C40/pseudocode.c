char __cdecl Cmd_GetStageDone_Execute(
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
  UInt32 stage; // [esp+4h] [ebp-8h] BYREF
  UInt16 v10[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v10 = 0; /*0x502c4e*/
  stage = 0; /*0x502c52*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &stage); /*0x502c7b*/
  if ( result ) /*0x502c85*/
    return GetStageDone_Eval(a4, *(TESQuest **)v10, stage, value); /*0x502c9c*/
  return result; /*0x502c87*/
}
