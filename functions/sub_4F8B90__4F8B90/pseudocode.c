char __cdecl sub_4F8B90(int a1, TESObjectCELL *cell, TESForm *a3, double *a4)
{
  void *v4; // eax
  const char *v5; // eax
  void *v7; // eax
  const char *v8; // eax

  if ( TESObjectCELL_GetOwner(cell) == a3 ) /*0x4f8ba3*/
    *a4 = 1.0; /*0x4f8ba7*/
  if ( !MEMORY[0xB361AC] ) /*0x4f8bb0*/
    return 1; /*0x4f8bb0*/
  if ( 0.0 == *a4 ) /*0x4f8bca*/
  {
    v7 = OblivionDynamicCast( /*0x4f8bf5*/
           a3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESFullName `RTTI Type Descriptor',
           0);
    if ( !v7 || (v8 = *((const char **)v7 + 1)) == 0 ) /*0x4f8c06*/
      v8 = EmptyString; /*0x4f8c08*/
    Interface_ConsolePrint("%s is not the owner", v8); /*0x4f8c13*/
    return 1; /*0x4f8c1b*/
  }
  v4 = OblivionDynamicCast( /*0x4f8bcc*/
         a3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFullName `RTTI Type Descriptor',
         0);
  if ( !v4 || (v5 = *((const char **)v4 + 1)) == 0 ) /*0x4f8bdd*/
    v5 = EmptyString; /*0x4f8bdf*/
  Interface_ConsolePrint("%s is the owner", v5); /*0x4f8bea*/
  return 1; /*0x4f8bf4*/
}
