void __cdecl sub_5053D0(int a1, int a2, void *a3, int a4, int a5, int a6, double *a7)
{
  TESObjectREFR *v7; // eax
  TESObjectREFR *v8; // esi
  double v9; // st7
  char *Name; // eax

  v7 = (TESObjectREFR *)OblivionDynamicCast( /*0x5053e5*/
                          a3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  v8 = v7; /*0x5053ea*/
  if ( v7 ) /*0x5053f1*/
  {
    v9 = (double)(unsigned __int8)sub_6760D0((int)&qword_B3BB2C[0x75], (int)v7); /*0x505409*/
    *a7 = v9; /*0x50540d*/
    if ( MEMORY[0xB361AC] ) /*0x50540f*/
    {
      Name = TESObjectREFR_GetName(v8); /*0x505425*/
      if ( 0.0 == v9 ) /*0x505423*/
      {
        Interface_ConsolePrint(" %s is not detected", Name); /*0x505448*/
        sub_505450(); /*0x50544e*/
      }
      else
      {
        Interface_ConsolePrint(" %s is detected", Name); /*0x505430*/
      }
    }
  }
}
