UInt8 __cdecl ResurrectActor(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Actor *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  Actor *v8; // esi
  UInt8 result; // al
  UInt32 v10; // [esp+8h] [ebp-4h] BYREF

  v8 = (Actor *)OblivionDynamicCast(
                  a4,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  v10 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, (Script *)a5, l, &v10);
  if ( result )
  {
    if ( v8 )
      v8->vtbl->Resurrect(v8, 1u, v8->members.super.super.niNode != 0, v10 == 1);
    return 1;
  }
  return result;
}
