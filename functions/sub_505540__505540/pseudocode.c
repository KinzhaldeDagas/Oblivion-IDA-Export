bool __cdecl sub_505540(
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

  *(_DWORD *)v9 = 0; /*0x50556a*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x505572*/
  if ( result ) /*0x50557c*/
  {
    sub_4F81A0((int)a4, *(int *)v9, 0, a7); /*0x50558e*/
    return 1; /*0x505596*/
  }
  return result; /*0x505580*/
}
