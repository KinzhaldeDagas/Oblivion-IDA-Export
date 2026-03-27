char __cdecl sub_4F8AD0(int a1, BSExtraDataVtbl *a2, int a3, double *a4)
{
  BSExtraDataVtbl *v7; // esi
  void *v8; // eax
  const char *v9; // eax
  void *v11; // eax
  const char *v12; // eax

  v7 = a2;
  if ( !a2 )
    v7 = (BSExtraDataVtbl *)TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
  if ( a1 )
  {
    if ( v7 )
    {
      if ( ExtraDataList_GetOwner((ExtraDataList *)(a1 + 0x44)) == v7 )
        *a4 = 1.0;
    }
  }
  if ( !IsConsoleMode )
    return 1;
  if ( 0.0 == *a4 )
  {
    v11 = OblivionDynamicCast(
            v7,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESFullName `RTTI Type Descriptor',
            0);
    if ( !v11 || (v12 = *((const char **)v11 + 1)) == 0 )
      v12 = EmptyString;
    Interface_ConsolePrint("%s is not the owner", v12);
    return 1;
  }
  v8 = OblivionDynamicCast(
         v7,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFullName `RTTI Type Descriptor',
         0);
  if ( !v8 || (v9 = *((const char **)v8 + 1)) == 0 )
    v9 = EmptyString;
  Interface_ConsolePrint("%s is the owner", v9);
  return 1;
}
