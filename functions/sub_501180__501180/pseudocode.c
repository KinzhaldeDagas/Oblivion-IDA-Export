char __cdecl sub_501180(int a1, int a2, void *a3, int a4, int a5, int a6, double *a7)
{
  TESObjectREFR *v7; // eax
  void **v8; // ecx
  char *Name; // eax
  const char *v11; // [esp-4h] [ebp-4h]

  v7 = (TESObjectREFR *)OblivionDynamicCast( /*0x501193*/
                          a3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  if ( v7 ) /*0x50119d*/
  {
    if ( LOBYTE(v7[1].member.rot.x) ) /*0x50119f*/
      *a7 = 0.0; /*0x5011b5*/
    else
      *a7 = 1.0; /*0x5011ab*/
    if ( MEMORY[0xB361AC] ) /*0x5011b7*/
    {
      v8 = (void **)"On"; /*0x5011c4*/
      if ( !LOBYTE(v7[1].member.rot.x) ) /*0x5011c0*/
        v8 = &aOff; /*0x5011cb*/
      v11 = (const char *)v8; /*0x5011d0*/
      Name = TESObjectREFR_GetName(v7); /*0x5011d3*/
      Interface_ConsolePrint("%s processing is  %s", Name, v11); /*0x5011de*/
    }
  }
  return 1; /*0x5011e8*/
}
