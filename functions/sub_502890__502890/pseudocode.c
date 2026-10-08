char __cdecl Cmd_GetItemCount_Execute(
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

  *(_DWORD *)v9 = 0; /*0x5028ba*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x5028c2*/
  if ( result ) /*0x5028cc*/
    return GetItemCount_Eval(a4, *(TESForm **)v9, 0, a7); /*0x5028de*/
  return result; /*0x5028d0*/
}
