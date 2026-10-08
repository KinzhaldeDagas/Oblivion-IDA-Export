char *__thiscall TESObjectREFR_GetName(TESObjectREFR *this)
{
  TESFullName *v1; // eax
  char *result; // eax

  v1 = (TESFullName *)OblivionDynamicCast( /*0x4da2b2*/
                        this->member.baseForm,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESFullName `RTTI Type Descriptor',
                        0);
  if ( !v1 ) /*0x4da2bc*/
    return EmptyString; /*0x4da2bc*/
  result = v1->name.m_data; /*0x4da2be*/
  if ( !result ) /*0x4da2c3*/
    return EmptyString; /*0x4da2c5*/
  return result; /*0x4da2ca*/
}
