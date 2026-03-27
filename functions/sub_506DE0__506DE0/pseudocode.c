bool __cdecl sub_506DE0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *arg8,
        TESObjectREFR *a4,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  TESObjectREFR *v8; // esi
  bool result; // al
  TESObjectREFR *v10; // eax
  void **v11; // ecx
  char *Name; // eax
  const char *v13; // [esp-4h] [ebp-8h]

  v8 = arg8;
  if ( arg8->vtbl->IsActor(arg8) )
  {
    result = Script_ExtractArgs(a1, a2, a3, v8, a4, a5, l, &arg8);
    if ( !result )
      return result;
    v10 = (TESObjectREFR *)OblivionDynamicCast(
                             v8,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
    if ( v10 )
    {
      if ( arg8 )
        LOBYTE(v10[1].member.rot.x) = 1;
      else
        LOBYTE(v10[1].member.rot.x) = 0;
      if ( IsConsoleMode )
      {
        v11 = (void **)&aOn_0;
        if ( !LOBYTE(v10[1].member.rot.x) )
          v11 = &aOff;
        v13 = (const char *)v11;
        Name = TESObjectREFR_GetName(v10);
        Interface_ConsolePrint("%s processing is  %s", Name, v13);
      }
    }
  }
  return 1;
}
