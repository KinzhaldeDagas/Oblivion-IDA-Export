// HasMagicEffect command execute callback: extracts a magic-effect code parameter and calls the shared object/magic-target evaluator.
char __usercall Cmd_HasMagicEffect_Execute@<al>(
        double st6_0@<st1>,
        double a2@<st0>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        double *a9,
        UInt32 *a3)
{
  char result; // al
  UInt16 v11[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v11 = 0; /*0x50573a*/
  result = Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, v11); /*0x505742*/
  if ( result ) /*0x50574c*/
    return Cmd_HasMagicEffect_EvalOrConsole(st6_0, a2, (int)a4, *(int *)v11, 0, a9); /*0x50575e*/
  return result; /*0x505750*/
}
