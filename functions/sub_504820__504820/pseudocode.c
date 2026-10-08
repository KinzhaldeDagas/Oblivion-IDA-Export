char __usercall sub_504820@<al>(
        double st6_0@<st1>,
        double a2@<st0>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        double *a9,
        UInt32 *a3)
{
  char result; // al
  UInt16 v11[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v11 = 0; /*0x50484a*/
  result = Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, v11); /*0x504852*/
  if ( result ) /*0x50485c*/
  {
    if ( a4 && *(_DWORD *)v11 ) /*0x50486b*/
      return sub_4F74B0(st6_0, a2, (int)a4, *(int *)v11, 0, a9); /*0x504876*/
    else
      return 1; /*0x504881*/
  }
  return result; /*0x504860*/
}
