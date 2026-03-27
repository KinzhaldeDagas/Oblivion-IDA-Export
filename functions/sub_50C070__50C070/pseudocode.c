char __cdecl sub_50C070(int a1, int a2, void *a3, int a4, int a5, int a6, double *a7)
{
  double *v7; // esi
  void *v8; // eax
  int v9; // eax

  v7 = a7;
  *a7 = 0.0;
  v8 = OblivionDynamicCast(
         a3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  a7 = 0;
  if ( v8 )
  {
    v9 = (*(int (__thiscall **)(void *))(*(_DWORD *)v8 + 0x338))(v8);
    if ( v9 )
    {
      a7 = *(double **)(v9 + 0xC);
      sub_4F9FB0(&a7, v7);
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetCombatTarget >> (%08x)", a7);
  return 1;
}
