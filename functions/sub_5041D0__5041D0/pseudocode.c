bool __cdecl sub_5041D0(
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

  *(_DWORD *)v9 = 0; /*0x5041fb*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x504203*/
  if ( result ) /*0x50420d*/
  {
    *a7 = 0.0; /*0x50421c*/
    if ( a4 ) /*0x50421e*/
    {
      if ( l ) /*0x504222*/
      {
        if ( sub_4FB5F0(l, *(int *)v9, 0x8000) ) /*0x504230*/
          *a7 = 1.0; /*0x50423b*/
      }
    }
    return 1; /*0x50423f*/
  }
  return result; /*0x504212*/
}
