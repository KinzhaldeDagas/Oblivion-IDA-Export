char *__thiscall TESObjectREFR_GetName(TESObjectREFR *this)
{
  TESFullName *v1; // eax
  char *result; // eax

  v1 = (TESFullName *)OblivionDynamicCast(
                        this->member.baseForm,
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
