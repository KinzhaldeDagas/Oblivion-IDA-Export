char __cdecl sub_50C0F0(int a1, int a2, void *a3, int a4, int a5, int a6, double *a7)
{
  double *v7; // esi
  Actor *v8; // eax
  int v9; // eax

  v7 = a7;
  *a7 = 0.0;
  v8 = (Actor *)OblivionDynamicCast(
                  a3,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  a7 = 0;
  if ( v8 )
  {
    v9 = sub_5E2E00(v8);
    if ( v9 )
    {
      a7 = *(double **)(v9 + 0xC);
      sub_4F9FB0(&a7, v7);
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetPackageTarget >> (%08x)", a7);
  return 1;
}
