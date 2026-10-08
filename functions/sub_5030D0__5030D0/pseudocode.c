char __usercall Cmd_GetInCellParam_Execute@<al>(
        int ebx0@<ebx>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a5,
        Script *a6,
        ScriptEventList *l,
        double *a8,
        UInt32 *a3)
{
  char result; // al
  TESObjectREFR *v10; // [esp+4h] [ebp-8h] BYREF
  UInt16 v11[2]; // [esp+8h] [ebp-4h] BYREF

  v10 = 0; /*0x5030de*/
  *(_DWORD *)v11 = 0; /*0x5030e2*/
  result = Script_ExtractArgs(a1, arg4, a3, a4, a5, a6, l, v11, &v10); /*0x50310b*/
  if ( result ) /*0x503115*/
    return GetInCell_Eval(ebx0, a4, *(TESForm **)v11, v10, a8); /*0x50312c*/
  return result; /*0x503117*/
}
