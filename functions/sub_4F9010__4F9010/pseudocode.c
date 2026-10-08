char __cdecl sub_4F9010(TESChildCELL *a1, int a2, int a3, double *a4)
{
  TESObjectCELL *DwordAtOffset40; // eax
  void *v5; // eax
  const char *v6; // eax
  void *v8; // eax
  const char *v9; // eax

  *a4 = 0.0; /*0x4f901e*/
  if ( a1 ) /*0x4f9020*/
  {
    if ( Shared_GetDwordAtOffset40(a1) ) /*0x4f9024*/
    {
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x4f902f*/
      if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x4f9036*/
        *a4 = 1.0; /*0x4f9041*/
    }
  }
  if ( !MEMORY[0xB361AC] ) /*0x4f904a*/
    return 1; /*0x4f904a*/
  if ( 0.0 == *a4 ) /*0x4f9064*/
  {
    v8 = OblivionDynamicCast( /*0x4f9091*/
           a1,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESFullName `RTTI Type Descriptor',
           0);
    if ( !v8 || (v9 = *((const char **)v8 + 1)) == 0 ) /*0x4f90a2*/
      v9 = EmptyString; /*0x4f90a4*/
    Interface_ConsolePrint("%s is not an Interior", v9); /*0x4f90af*/
    return 1; /*0x4f90b8*/
  }
  v5 = OblivionDynamicCast( /*0x4f9066*/
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFullName `RTTI Type Descriptor',
         0);
  if ( !v5 || (v6 = *((const char **)v5 + 1)) == 0 ) /*0x4f9077*/
    v6 = EmptyString; /*0x4f9079*/
  Interface_ConsolePrint("%s is in an Interior", v6); /*0x4f9084*/
  return 1; /*0x4f908c*/
}
