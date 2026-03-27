bool __usercall sub_508700@<al>(
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
  Actor *v11; // eax
  Actor *i; // esi
  int *v13; // eax
  UInt16 v14[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v14 = 0;
  result = Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, v14);
  if ( result )
  {
    v11 = sub_673A50(&ActorProcessManager_ptr, 0);
    for ( i = sub_7616D0((ActorList *)v11); i; i = *(Actor **)&i->members.super.super.super.type )
    {
      if ( !*(_DWORD *)&i->members.super.super.super.type && !i->vtbl )
        break;
      v13 = (int *)OblivionDynamicCast(
                     i->vtbl,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
      if ( v13 )
        Actor_Kill(v13, st5_0, a2, 0.0, *(const char **)v14, COERCE_INT(0.0));
    }
    return 1;
  }
  return result;
}
