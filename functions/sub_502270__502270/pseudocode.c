char __cdecl sub_502270(
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
  UInt16 v12[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v12 = 0; /*0x502298*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12); /*0x5022a0*/
  if ( result ) /*0x5022aa*/
    return sub_4F4570(0, *(int *)v12, 0, a7); /*0x5022bb*/
  return result; /*0x5022ad*/
}
