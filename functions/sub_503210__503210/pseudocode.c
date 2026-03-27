char __cdecl sub_503210(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  UInt16 v9[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0;
  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9) )
    return sub_4F6CF0(a4, *(int *)v9, 0, a7);
  else
    return nullsub_24();
}
