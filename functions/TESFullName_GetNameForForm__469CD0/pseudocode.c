CHAR *__cdecl TESFullName_GetNameForForm(TESForm *a1)
{
  TESFullName *v1; // eax
  CHAR *result; // eax

  v1 = (TESFullName *)OblivionDynamicCast(
                        a1,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESFullName `RTTI Type Descriptor',
                        0);
  if ( !v1 )
    return EmptyString;
  result = v1->name.m_data;
  if ( !result )
    return EmptyString;
  return result;
}
