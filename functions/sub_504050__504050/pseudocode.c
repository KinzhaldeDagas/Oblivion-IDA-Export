bool __cdecl sub_504050(
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

  *(_DWORD *)v9 = 0; /*0x50407b*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x504083*/
  if ( result ) /*0x50408d*/
  {
    *a7 = 0.0; /*0x50409c*/
    if ( a4 ) /*0x50409e*/
    {
      if ( l ) /*0x5040a2*/
      {
        if ( sub_4FB5F0(l, *(int *)v9, 0x80) ) /*0x5040b0*/
          *a7 = 1.0; /*0x5040bb*/
      }
    }
    return 1; /*0x5040bf*/
  }
  return result; /*0x504092*/
}
