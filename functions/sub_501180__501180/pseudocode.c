char __cdecl sub_501180(int a1, int a2, void *a3, int a4, int a5, int a6, double *a7)
{
  TESObjectREFR *v7; // eax
  void **v8; // ecx
  char *Name; // eax
  const char *v11; // [esp-4h] [ebp-4h]

  v7 = (TESObjectREFR *)OblivionDynamicCast(
                          a3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  if ( v7 )
  {
    if ( LOBYTE(v7[1].member.rot.x) )
      *a7 = 0.0;
    else
      *a7 = 1.0;
    if ( IsConsoleMode )
    {
      v8 = (void **)&aOn_0;
      if ( !LOBYTE(v7[1].member.rot.x) )
        v8 = &aOff;
      v11 = (const char *)v8;
      Name = TESObjectREFR_GetName(v7);
      Interface_ConsolePrint("%s processing is  %s", Name, v11);
    }
  }
  return 1;
}
