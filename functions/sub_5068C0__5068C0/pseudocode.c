bool __usercall sub_5068C0@<al>(
        char bp0@<bpl>,
        double a2@<st7>,
        double st1_0@<st6>,
        double st2_0@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        ParamInfo *a1,
        UInt8 *a11,
        TESObjectREFR *a4,
        TESObjectREFR *a13,
        Script *a14,
        ScriptEventList *l,
        int a16,
        UInt32 *a3)
{
  bool result; // al
  UInt16 v18[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v18 = 0;
  result = Script_ExtractArgs(a1, a11, a3, a4, a13, a14, l, v18);
  if ( result )
  {
    sub_444840(TES, bp0, a2, st1_0, st2_0, a5, a6, a7, a8, a9, *(unsigned int *)v18);
    return 1;
  }
  return result;
}
