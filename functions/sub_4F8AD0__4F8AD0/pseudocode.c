char __cdecl sub_4F8AD0(int a1, TESForm *a2, int a3, double *a4)
{
  TESForm *v4; // esi
  void *v5; // eax
  const char *v6; // eax
  void *v8; // eax
  const char *v9; // eax

  v4 = a2; /*0x4f8ad1*/
  if ( !a2 ) /*0x4f8ad8*/
    v4 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x4f8aea*/
  if ( a1 ) /*0x4f8af6*/
  {
    if ( v4 ) /*0x4f8afa*/
    {
      if ( ExtraDataList_GetOwner((ExtraDataList *)(a1 + 0x44)) == v4 ) /*0x4f8b06*/
        *a4 = 1.0; /*0x4f8b0a*/
    }
  }
  if ( !MEMORY[0xB361AC] ) /*0x4f8b13*/
    return 1; /*0x4f8b13*/
  if ( 0.0 == *a4 ) /*0x4f8b2d*/
  {
    v8 = OblivionDynamicCast( /*0x4f8b5a*/
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESFullName `RTTI Type Descriptor',
           0);
    if ( !v8 || (v9 = *((const char **)v8 + 1)) == 0 ) /*0x4f8b6b*/
      v9 = EmptyString; /*0x4f8b6d*/
    Interface_ConsolePrint("%s is not the owner", v9); /*0x4f8b78*/
    return 1; /*0x4f8b81*/
  }
  v5 = OblivionDynamicCast( /*0x4f8b2f*/
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFullName `RTTI Type Descriptor',
         0);
  if ( !v5 || (v6 = *((const char **)v5 + 1)) == 0 ) /*0x4f8b40*/
    v6 = EmptyString; /*0x4f8b42*/
  Interface_ConsolePrint("%s is the owner", v6); /*0x4f8b4d*/
  return 1; /*0x4f8b55*/
}
