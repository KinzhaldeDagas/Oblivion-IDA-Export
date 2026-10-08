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

  v8 = arg8; /*0x506de1*/
  if ( arg8->vtbl->IsActor(arg8) ) /*0x506def*/
  {
    result = Script_ExtractArgs(a1, a2, a3, v8, a4, a5, l, &arg8); /*0x506e1d*/
    if ( !result ) /*0x506e27*/
      return result; /*0x506e27*/
    v10 = (TESObjectREFR *)OblivionDynamicCast( /*0x506e3a*/
                             v8,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
    if ( v10 ) /*0x506e44*/
    {
      if ( arg8 ) /*0x506e4b*/
        LOBYTE(v10[1].member.rot.x) = 1; /*0x506e53*/
      else
        LOBYTE(v10[1].member.rot.x) = 0; /*0x506e4d*/
      if ( MEMORY[0xB361AC] ) /*0x506e57*/
      {
        v11 = (void **)"On"; /*0x506e64*/
        if ( !LOBYTE(v10[1].member.rot.x) ) /*0x506e60*/
          v11 = &aOff; /*0x506e6b*/
        v13 = (const char *)v11; /*0x506e70*/
        Name = TESObjectREFR_GetName(v10); /*0x506e73*/
        Interface_ConsolePrint("%s processing is  %s", Name, v13); /*0x506e7e*/
      }
    }
  }
  return 1; /*0x506e29*/
}
