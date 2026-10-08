bool __cdecl sub_503E90(
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

  *(_DWORD *)v9 = 0; /*0x503ebb*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x503ec3*/
  if ( result ) /*0x503ecd*/
  {
    *a7 = 0.0; /*0x503edc*/
    if ( a4 ) /*0x503ede*/
    {
      if ( l ) /*0x503ee2*/
      {
        if ( sub_4FB5F0(l, *(int *)v9, 8) ) /*0x503eed*/
          *a7 = 1.0; /*0x503ef8*/
      }
    }
    return 1; /*0x503efc*/
  }
  return result; /*0x503ed2*/
}
