bool __cdecl sub_504150(
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

  *(_DWORD *)v9 = 0; /*0x50417b*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x504183*/
  if ( result ) /*0x50418d*/
  {
    *a7 = 0.0; /*0x50419c*/
    if ( a4 ) /*0x50419e*/
    {
      if ( l ) /*0x5041a2*/
      {
        if ( sub_4FB5F0(l, *(int *)v9, 0x10) ) /*0x5041ad*/
          *a7 = 1.0; /*0x5041b8*/
      }
    }
    return 1; /*0x5041bc*/
  }
  return result; /*0x504192*/
}
