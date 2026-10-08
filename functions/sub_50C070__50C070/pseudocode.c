char __cdecl sub_50C070(int a1, int a2, void *a3, int a4, int a5, int a6, double *a7)
{
  double *v7; // esi
  void *v8; // eax
  int v9; // eax

  v7 = a7; /*0x50c077*/
  *a7 = 0.0; /*0x50c07d*/
  v8 = OblivionDynamicCast( /*0x50c08c*/
         a3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  a7 = 0; /*0x50c096*/
  if ( v8 ) /*0x50c09e*/
  {
    v9 = (*(int (__thiscall **)(void *))(*(_DWORD *)v8 + 0x338))(v8); /*0x50c0aa*/
    if ( v9 ) /*0x50c0ae*/
    {
      a7 = *(double **)(v9 + 0xC); /*0x50c0b9*/
      sub_4F9FB0(&a7, v7); /*0x50c0bd*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x50c0c5*/
    Interface_ConsolePrint("GetCombatTarget >> (%08x)", a7); /*0x50c0d9*/
  return 1; /*0x50c0cc*/
}
