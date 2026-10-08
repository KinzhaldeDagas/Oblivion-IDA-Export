char __cdecl sub_50C0F0(int a1, int a2, void *a3, int a4, int a5, int a6, double *a7)
{
  double *v7; // esi
  Actor *v8; // eax
  int v9; // eax

  v7 = a7; /*0x50c0f7*/
  *a7 = 0.0; /*0x50c0fd*/
  v8 = (Actor *)OblivionDynamicCast( /*0x50c10c*/
                  a3,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  a7 = 0; /*0x50c116*/
  if ( v8 ) /*0x50c11e*/
  {
    sub_5E2E00(v8); /*0x50c122*/
    if ( v9 ) /*0x50c129*/
    {
      a7 = *(double **)(v9 + 0xC); /*0x50c134*/
      sub_4F9FB0(&a7, v7); /*0x50c138*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x50c140*/
    Interface_ConsolePrint("GetPackageTarget >> (%08x)", a7); /*0x50c154*/
  return 1; /*0x50c147*/
}
