bool __usercall sub_508700@<al>(
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
  Actor *ListHead; // eax
  Actor *i; // esi
  Actor *v14; // eax
  UInt16 v15[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v15 = 0; /*0x508728*/
  result = Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, v15); /*0x508730*/
  if ( result ) /*0x50873a*/
  {
    ListHead = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 0); /*0x508746*/
    for ( i = ActorList_ReturnHead((ActorList *)ListHead); i; i = *(Actor **)&i->members.super.super.super.type ) /*0x508756*/
    {
      if ( !*(_DWORD *)&i->members.super.super.super.type && !i->vtbl ) /*0x50875e*/
        break; /*0x508761*/
      v14 = (Actor *)OblivionDynamicCast( /*0x508774*/
                       i->vtbl,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                       &Actor `RTTI Type Descriptor',
                       0);
      if ( v14 ) /*0x50877e*/
        Actor_Kill(v14, 0.0, st6_0, a2, *(Actor **)v15, COERCE_INT(0.0)); /*0x50878d*/
    }
    return 1; /*0x508799*/
  }
  return result; /*0x50873d*/
}
