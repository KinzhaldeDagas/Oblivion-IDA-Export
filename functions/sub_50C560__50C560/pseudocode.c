bool __usercall sub_50C560@<al>(
        char bp0@<bpl>,
        double a2@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *a6,
        TESObjectREFR *a4,
        TESObjectREFR *a8,
        Script *a9,
        ScriptEventList *l,
        int a11,
        UInt32 *a3)
{
  bool result; // al
  UInt16 v13[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v13 = 0; /*0x50c58a*/
  result = Script_ExtractArgs(a1, a6, a3, a4, a8, a9, l, v13); /*0x50c592*/
  if ( result ) /*0x50c59c*/
  {
    if ( a4 ) /*0x50c5a3*/
    {
      if ( *(_DWORD *)v13 ) /*0x50c5ac*/
      {
        if ( sub_4DE660((char *)a4) > 2 ) /*0x50c5b6*/
          ActivateRef(a4, a2, st6_0, st7_0, 0, 0, 0, 1); /*0x50c5c2*/
        sub_4D90D0(a4, "Open"); /*0x50c5ce*/
        ExtraDataList_ResetSavedAttachedAnimationData(&a4->member.baseExtraList, bp0); /*0x50c5d6*/
        return 1; /*0x50c5df*/
      }
      if ( sub_4DE660((char *)a4) < 3 ) /*0x50c5e8*/
        ActivateRef(a4, a2, st6_0, st7_0, 0, 0, 0, 1); /*0x50c5f4*/
      sub_4D90D0(a4, "Close"); /*0x50c600*/
      ExtraDataList_ResetSavedAttachedAnimationData(&a4->member.baseExtraList, bp0); /*0x50c608*/
    }
    return 1; /*0x50c60d*/
  }
  return result; /*0x50c5a0*/
}
