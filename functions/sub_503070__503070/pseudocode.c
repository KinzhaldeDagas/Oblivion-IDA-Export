char __usercall sub_503070@<al>(
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
  UInt16 v10[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v10 = 0;
  if ( Script_ExtractArgs(a1, arg4, a3, a4, a5, a6, l, v10) )
    return sub_4F6D70(ebx0, a4, *(TESForm **)v10, 0, a8);
  else
    return nullsub_1();
}
