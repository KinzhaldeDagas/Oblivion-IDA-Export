void __cdecl Cmd_GetInSameCell_Execute(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  UInt16 v8[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v8 = 0; /*0x50323a*/
  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v8) ) /*0x503242*/
    GetInSameCell_Eval((TESChildCELL *)a4, *(unsigned __int8 **)v8, 0, a7); /*0x50325e*/
  else
    nullsub_24(); /*0x50324f*/
}
