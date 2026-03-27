char __cdecl sub_508340(int a1, int a2, void *a3)
{
  TESObjectREFR *v3; // eax
  TESObjectREFR *v4; // esi
  TESObjectREFR *v5; // eax
  char *v6; // eax
  char *v8; // eax
  char *Name; // [esp-4h] [ebp-8h]

  v3 = (TESObjectREFR *)OblivionDynamicCast(
                          a3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  v4 = v3;
  if ( v3 )
  {
    v5 = (TESObjectREFR *)sub_41F070(&v3->member.baseExtraList);
    if ( IsConsoleMode )
    {
      if ( v5 )
      {
        Name = TESObjectREFR_GetName(v5);
        v6 = TESObjectREFR_GetName(v4);
        Interface_ConsolePrint("%s set to look at %s", v6, Name);
        return 1;
      }
      v8 = TESObjectREFR_GetName(v4);
      Interface_ConsolePrint("%s set to not look at anyone", v8);
    }
  }
  return 1;
}
