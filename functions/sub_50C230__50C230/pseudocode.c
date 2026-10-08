char __cdecl sub_50C230(int a1, int a2, void *a3, int a4, int a5, int a6, double *a7)
{
  _BYTE *v7; // eax

  *a7 = 0.0; /*0x50c23d*/
  v7 = OblivionDynamicCast( /*0x50c24c*/
         a3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  if ( v7 ) /*0x50c256*/
  {
    if ( v7[0xC8] ) /*0x50c258*/
      *a7 = 1.0; /*0x50c263*/
  }
  if ( MEMORY[0xB361AC] ) /*0x50c265*/
    Interface_ConsolePrint("GetForceRun >> %0.2f", *a7); /*0x50c27b*/
  return 1; /*0x50c285*/
}
