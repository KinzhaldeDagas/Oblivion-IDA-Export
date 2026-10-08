bool __cdecl sub_506750(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  UInt16 v9[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0xFFFFFFFF; /*0x50677a*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x506782*/
  if ( result ) /*0x50678c*/
  {
    if ( *(_DWORD *)v9 != 0xFFFFFFFF ) /*0x506798*/
    {
      sub_46AB20(a4, *(_DWORD *)v9 != 0); /*0x5067a2*/
      a4->vtbl->super.MarkAsModified((TESForm *)a4, 1); /*0x5067b0*/
    }
    return 1; /*0x5067b2*/
  }
  return result; /*0x506790*/
}
