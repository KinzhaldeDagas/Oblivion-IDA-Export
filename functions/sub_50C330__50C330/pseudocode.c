char __cdecl sub_50C330(int a1, int a2, void *a3, int a4, int a5, int a6, double *a7)
{
  _BYTE *v10; // eax

  *a7 = 0.0;
  v10 = OblivionDynamicCast(
          a3,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
          &Actor `RTTI Type Descriptor',
          0);
  if ( v10 )
  {
    if ( v10[0xC9] )
      *a7 = 1.0;
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetForceSneak >> %0.2f", *a7);
  return 1;
}
