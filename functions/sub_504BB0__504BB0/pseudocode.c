bool __cdecl sub_504BB0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  double *v8; // ebx
  bool result; // al
  void *v10; // eax
  unsigned int v11; // [esp-Ch] [ebp-1Ch]
  int v12; // [esp+8h] [ebp-8h] BYREF
  int v13; // [esp+Ch] [ebp-4h] BYREF

  v8 = a7;
  *a7 = 0.0;
  a7 = 0;
  v12 = 0;
  v13 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &a7, &v12, &v13);
  if ( result )
  {
    v11 = (unsigned int)a7;
    v10 = OblivionDynamicCast(
            a4,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
            &Actor `RTTI Type Descriptor',
            0);
    if ( sub_675C40(&ActorProcessManager_ptr, v13, v12, (int)v10, v11, 0, 0xFFFFFFFF) )
      *v8 = 1.0;
    return 1;
  }
  return result;
}
