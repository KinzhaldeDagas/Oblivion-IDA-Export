void __usercall Cmd_GetInCell_Execute(
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
  UInt16 v9[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0; /*0x50309a*/
  if ( Script_ExtractArgs(a1, arg4, a3, a4, a5, a6, l, v9) ) /*0x5030a2*/
    GetInCell_Eval(ebx0, a4, *(TESForm **)v9, 0, a8); /*0x5030be*/
  else
    nullsub_1(); /*0x5030af*/
}
