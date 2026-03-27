char __usercall sub_501670@<al>(
        double st4_0@<st3>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a5,
        Script *a6,
        ScriptEventList *l,
        double *a8,
        UInt32 *a3)
{
  char result; // al
  UInt16 v10[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v10 = 0;
  result = Script_ExtractArgs(a1, arg4, a3, a4, a5, a6, l, v10);
  if ( result )
    return sub_4F6060(st4_0, (Actor *)a4, *(int *)v10, 0, a8);
  return result;
}
