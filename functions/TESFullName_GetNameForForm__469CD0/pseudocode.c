// 3DTheft decode: TESFullName_GetNameForForm only dynamic-casts the passed form to TESFullName and returns its raw name/EmptyString; it does not apply worldspace fallback.
CHAR *__cdecl TESFullName_GetNameForForm(TESForm *a1)
{
  TESFullName *v1; // eax
  CHAR *result; // eax

  v1 = (TESFullName *)OblivionDynamicCast( /*0x469ce3*/
                        a1,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESFullName `RTTI Type Descriptor',
                        0);
  if ( !v1 ) /*0x469ced*/
    return EmptyString; /*0x469ced*/
  result = v1->name.m_data; /*0x469cef*/
  if ( !result ) /*0x469cf4*/
    return EmptyString; /*0x469cf6*/
  return result; /*0x469cfb*/
}
