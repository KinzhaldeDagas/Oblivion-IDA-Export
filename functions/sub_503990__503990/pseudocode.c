char __cdecl Cmd_GetDisposition_Execute(
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

  *(_DWORD *)v9 = 0; /*0x5039ba*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x5039c2*/
  if ( result ) /*0x5039cc*/
    return GetDisposition_Eval(a4, *(TESObjectREFR **)v9, 0, value); /*0x5039de*/
  return result; /*0x5039d0*/
}
