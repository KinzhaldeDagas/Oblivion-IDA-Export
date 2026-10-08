bool __cdecl sub_504250(
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

  *(_DWORD *)v9 = 0; /*0x50427b*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x504283*/
  if ( result ) /*0x50428d*/
  {
    *a7 = 0.0; /*0x50429c*/
    if ( a4 ) /*0x50429e*/
    {
      if ( l ) /*0x5042a2*/
      {
        if ( sub_4FB5F0(l, *(int *)v9, 0x20) ) /*0x5042ad*/
          *a7 = 1.0; /*0x5042b8*/
      }
    }
    return 1; /*0x5042bc*/
  }
  return result; /*0x504292*/
}
