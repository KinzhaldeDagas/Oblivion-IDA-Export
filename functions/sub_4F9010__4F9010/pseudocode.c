char __cdecl sub_4F9010(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  TESObjectCELL *ParentCell; // eax
  void *v8; // eax
  const char *v9; // eax
  void *v11; // eax
  const char *v12; // eax

  *a4 = 0.0;
  if ( a1 )
  {
    if ( TESObjectREFR_GetParentCell(a1) )
    {
      ParentCell = TESObjectREFR_GetParentCell(a1);
      if ( TESObjectCELL_IsInterior(ParentCell) )
        *a4 = 1.0;
    }
  }
  if ( !IsConsoleMode )
    return 1;
  if ( 0.0 == *a4 )
  {
    v11 = OblivionDynamicCast(
            a1,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESFullName `RTTI Type Descriptor',
            0);
    if ( !v11 || (v12 = *((const char **)v11 + 1)) == 0 )
      v12 = EmptyString;
    Interface_ConsolePrint("%s is not an Interior", v12);
    return 1;
  }
  v8 = OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFullName `RTTI Type Descriptor',
         0);
  if ( !v8 || (v9 = *((const char **)v8 + 1)) == 0 )
    v9 = EmptyString;
  Interface_ConsolePrint("%s is in an Interior", v9);
  return 1;
}
