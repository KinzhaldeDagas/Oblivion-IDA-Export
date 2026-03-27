bool __usercall sub_501960@<al>(
        double st5_0@<st2>,
        double a2@<st1>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        int a9,
        UInt32 *a3)
{
  bool result; // al
  int *v11; // eax
  UInt16 v12[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v12 = 0;
  result = Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, v12);
  if ( result )
  {
    v11 = (int *)OblivionDynamicCast(
                   a4,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
    if ( v11 )
      Actor_Kill(v11, st5_0, a2, 0.0, *(const char **)v12, COERCE_INT(0.0));
    return 1;
  }
  return result;
}
