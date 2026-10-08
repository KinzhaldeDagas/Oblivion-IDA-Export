bool __cdecl sub_504460(
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

  *(_DWORD *)v9 = 0; /*0x50448b*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x504493*/
  if ( result ) /*0x50449d*/
  {
    *a7 = 0.0; /*0x5044ac*/
    if ( a4 ) /*0x5044ae*/
    {
      if ( l ) /*0x5044b2*/
      {
        if ( sub_4FB5F0(l, *(int *)v9, 0x400) ) /*0x5044c0*/
          *a7 = 1.0; /*0x5044cb*/
      }
    }
    return 1; /*0x5044cf*/
  }
  return result; /*0x5044a2*/
}
