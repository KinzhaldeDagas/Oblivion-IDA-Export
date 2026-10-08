bool __cdecl sub_503D90(
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

  *(_DWORD *)v9 = 0; /*0x503dbb*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x503dc3*/
  if ( result ) /*0x503dcd*/
  {
    *a7 = 0.0; /*0x503ddc*/
    if ( a4 ) /*0x503dde*/
    {
      if ( l ) /*0x503de2*/
      {
        if ( sub_4FB5F0(l, *(int *)v9, 0x4000) ) /*0x503df0*/
          *a7 = 1.0; /*0x503dfb*/
      }
    }
    return 1; /*0x503dff*/
  }
  return result; /*0x503dd2*/
}
