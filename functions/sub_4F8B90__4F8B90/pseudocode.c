char __cdecl sub_4F8B90(int a1, ExtraDataList *a2, void *a3, double *a4)
{
  void *v4; // eax
  void *v5; // eax
  const char *v6; // eax
  void *v8; // eax
  const char *v9; // eax

  TESObjectCELL_GetOwner(a2);
  if ( v4 == a3 )
    *a4 = 1.0;
  if ( !IsConsoleMode )
    return 1;
  if ( 0.0 == *a4 )
  {
    v8 = OblivionDynamicCast(
           a3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESFullName `RTTI Type Descriptor',
           0);
    if ( !v8 || (v9 = *((const char **)v8 + 1)) == 0 )
      v9 = EmptyString;
    Interface_ConsolePrint("%s is not the owner", v9);
    return 1;
  }
  v5 = OblivionDynamicCast(
         a3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFullName `RTTI Type Descriptor',
         0);
  if ( !v5 || (v6 = *((const char **)v5 + 1)) == 0 )
    v6 = EmptyString;
  Interface_ConsolePrint("%s is the owner", v6);
  return 1;
}
