bool __cdecl sub_504760(
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

  *(_DWORD *)v9 = 0; /*0x50478b*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x504793*/
  if ( result ) /*0x50479d*/
  {
    *a7 = 0.0; /*0x5047ac*/
    if ( a4 ) /*0x5047ae*/
    {
      if ( l ) /*0x5047b2*/
      {
        if ( sub_4FB5F0(l, *(int *)v9, 0x40000000) ) /*0x5047c0*/
          *a7 = 1.0; /*0x5047cb*/
      }
    }
    return 1; /*0x5047cf*/
  }
  return result; /*0x5047a2*/
}
