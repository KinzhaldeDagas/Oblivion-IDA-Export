char __usercall sub_505710@<al>(
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

  *(_DWORD *)v11 = 0;
  result = Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, v11);
  if ( result )
    return sub_4F8300(st6_0, a2, (int)a4, *(int *)v11, 0, a9);
  return result;
}
