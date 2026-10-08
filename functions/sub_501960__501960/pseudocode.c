bool __usercall sub_501960@<al>(
        double st6_0@<st1>,
        double a2@<st0>,
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
  Actor *v12; // eax
  UInt16 v13[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v13 = 0; /*0x50198a*/
  result = Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, v13); /*0x501992*/
  if ( result ) /*0x50199c*/
  {
    v12 = (Actor *)OblivionDynamicCast( /*0x5019b0*/
                     a4,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    if ( v12 ) /*0x5019ba*/
      Actor_Kill(v12, 0.0, st6_0, a2, *(Actor **)v13, COERCE_INT(0.0)); /*0x5019c9*/
    return 1; /*0x5019ce*/
  }
  return result; /*0x5019a0*/
}
