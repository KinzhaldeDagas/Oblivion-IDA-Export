char __usercall Cmd_GetBaseAV@<al>(
        int ebx0@<ebx>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a6,
        ScriptEventList *l,
        double *a8,
        UInt32 *a3)
{
  char result; // al
  UInt16 v10[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v10 = 0; /*0x501a2a*/
  result = Script_ExtractArgs(a1, arg4, a3, a4, argC, a6, l, v10); /*0x501a32*/
  if ( result ) /*0x501a3c*/
    return Cmd_GetBaseAV_EvalOrConsole(ebx0, (int *)a4, *(int *)v10, 0, a8); /*0x501a4e*/
  return result; /*0x501a40*/
}
