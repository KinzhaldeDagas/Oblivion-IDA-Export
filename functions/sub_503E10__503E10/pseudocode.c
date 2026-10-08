bool __cdecl sub_503E10(
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

  *(_DWORD *)v9 = 0; /*0x503e3b*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x503e43*/
  if ( result ) /*0x503e4d*/
  {
    *a7 = 0.0; /*0x503e5c*/
    if ( a4 ) /*0x503e5e*/
    {
      if ( l ) /*0x503e62*/
      {
        if ( sub_4FB5F0(l, *(int *)v9, 2) ) /*0x503e6d*/
          *a7 = 1.0; /*0x503e78*/
      }
    }
    return 1; /*0x503e7c*/
  }
  return result; /*0x503e52*/
}
