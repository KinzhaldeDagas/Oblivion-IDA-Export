bool __usercall sub_5068C0@<al>(
        char bp0@<bpl>,
        double a2@<st7>,
        double st1_0@<st6>,
        double st3_0@<st4>,
        double a5@<st3>,
        double a6@<st2>,
        double a7@<st1>,
        double a8@<st0>,
        ParamInfo *a1,
        UInt8 *a10,
        TESObjectREFR *a4,
        TESObjectREFR *a12,
        Script *a13,
        ScriptEventList *l,
        int a15,
        UInt32 *a3)
{
  bool result; // al
  UInt16 v18[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v18 = 0; /*0x5068e8*/
  result = Script_ExtractArgs(a1, a10, a3, a4, a12, a13, l, v18); /*0x5068f0*/
  if ( result ) /*0x5068fa*/
  {
    sub_444840(MEMORY[0xB333A0], bp0, a2, st1_0, st3_0, a5, a6, a7, a8, *(unsigned int *)v18); /*0x506908*/
    return 1; /*0x50690d*/
  }
  return result; /*0x5068fd*/
}
