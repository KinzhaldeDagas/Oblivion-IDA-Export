bool __cdecl sub_505F60(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  bool result; // al
  UInt16 v9[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0; /*0x505f8a*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x505f92*/
  if ( result ) /*0x505f9c*/
  {
    sub_4F8E70(a4, *(void **)v9, 0, a7); /*0x505fae*/
    return 1; /*0x505fb6*/
  }
  return result; /*0x505fa0*/
}
