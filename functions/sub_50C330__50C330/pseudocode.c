char __cdecl sub_50C330(int a1, int a2, void *a3, int a4, int a5, int a6, double *a7)
{
  _BYTE *v7; // eax

  *a7 = 0.0; /*0x50c33d*/
  v7 = OblivionDynamicCast( /*0x50c34c*/
         a3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  if ( v7 ) /*0x50c356*/
  {
    if ( v7[0xC9] ) /*0x50c358*/
      *a7 = 1.0; /*0x50c363*/
  }
  if ( MEMORY[0xB361AC] ) /*0x50c365*/
    Interface_ConsolePrint("GetForceSneak >> %0.2f", *a7); /*0x50c37b*/
  return 1; /*0x50c385*/
}
