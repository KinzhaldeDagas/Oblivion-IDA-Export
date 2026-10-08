char __cdecl sub_502E20(
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
  Actor *v9; // [esp+4h] [ebp-8h] BYREF
  UInt16 v10[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v10 = 0; /*0x502e2e*/
  v9 = 0; /*0x502e32*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &v9); /*0x502e5b*/
  if ( result ) /*0x502e65*/
    return sub_4F67E0((Actor *)a4, *(int *)v10, v9, a7); /*0x502e7c*/
  return result; /*0x502e67*/
}
