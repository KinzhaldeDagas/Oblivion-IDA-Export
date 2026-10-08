// CommandInfo.execute wrapper for GetGlobalValue (index 74). Extracts the Global parameter and delegates to GetGlobalValue_Eval, which is also the CTDA callback.
char __cdecl Cmd_GetGlobalValue_Execute(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  char result; // al
  UInt16 v9[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0; /*0x50395a*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x503962*/
  if ( result ) /*0x50396c*/
    return GetGlobalValue_Eval((int)a4, *(int *)v9, 0, a7); /*0x50397e*/
  return result; /*0x503970*/
}
