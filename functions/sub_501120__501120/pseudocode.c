char __cdecl sub_501120(int a1, int a2, void *a3)
{
  TESObjectREFR *v3; // eax
  bool v4; // cl
  bool v5; // zf
  void **v6; // ecx
  char *Name; // eax
  const char *v9; // [esp-4h] [ebp-4h]

  v3 = (TESObjectREFR *)OblivionDynamicCast(
                          a3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  if ( v3 )
  {
    v4 = LOBYTE(v3[1].member.rot.x) == 0;
    LOBYTE(v3[1].member.rot.x) = v4;
    if ( IsConsoleMode )
    {
      v5 = !v4;
      v6 = (void **)&aOn_0;
      if ( v5 )
        v6 = &aOff;
      v9 = (const char *)v6;
      Name = TESObjectREFR_GetName(v3);
      Interface_ConsolePrint("%s processing is  %s", Name, v9);
    }
  }
  return 1;
}
