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

  *(_DWORD *)v13 = 0;
  result = Script_ExtractArgs(a1, a6, a3, a4, a8, a9, l, v13);
  if ( result )
  {
    if ( a4 )
    {
      if ( *(_DWORD *)v13 )
      {
        if ( sub_4DE660((char *)a4) > 2 )
          ActivateRef(a4, a2, st6_0, st7_0, 0, 0, 0, 1);
        sub_4D90D0(a4, "Open");
        sub_4212F0(&a4->member.baseExtraList, bp0);
        return 1;
      }
      if ( sub_4DE660((char *)a4) < 3 )
        ActivateRef(a4, a2, st6_0, st7_0, 0, 0, 0, 1);
      sub_4D90D0(a4, "Close");
      sub_4212F0(&a4->member.baseExtraList, bp0);
    }
    return 1;
  }
  return result;
}
