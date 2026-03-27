bool __usercall sub_502CB0@<al>(
        double st5_0@<st2>,
        double a2@<st1>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        double *a9,
        UInt32 *a3)
{
  double *v10; // edi
  bool result; // al
  int v12; // [esp+4h] [ebp-4h] BYREF

  v10 = a9;
  *a9 = 0.0;
  a9 = 0;
  v12 = 0;
  result = Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, &a9, &v12);
  if ( result )
  {
    if ( a9 )
    {
      if ( sub_529AC0(a9, st5_0, a2, v12) )
        *v10 = 1.0;
    }
    return 1;
  }
  return result;
}
