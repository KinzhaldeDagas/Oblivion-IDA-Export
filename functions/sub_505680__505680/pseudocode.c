bool __cdecl sub_505680(
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

  *(_DWORD *)v9 = 0; /*0x5056aa*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x5056b2*/
  if ( result ) /*0x5056bc*/
  {
    if ( a4 ) /*0x5056c3*/
    {
      if ( *(_DWORD *)v9 ) /*0x5056cc*/
      {
        sub_46AA50(a4, 1); /*0x5056d0*/
        return 1; /*0x5056d9*/
      }
      sub_46AA50(a4, 0); /*0x5056dc*/
    }
    return 1; /*0x5056e1*/
  }
  return result; /*0x5056c0*/
}
