CHAR *__thiscall sub_488DF0(EntryData *this)
{
  TESFullName *v1; // eax
  unsigned int v2; // ecx
  CHAR *result; // eax

  v1 = (TESFullName *)OblivionDynamicCast(
                        this->type,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                        &TESFullName `RTTI Type Descriptor',
                        0);
  if ( !v1 )
    return (CHAR *)sMissingName;
  LOWORD(v2) = v1->name.m_dataLen;
  v2 = (_WORD)v2 == 0xFFFF ? strlen(v1->name.m_data) : (unsigned __int16)v2;
  if ( !v2 )
    return (CHAR *)sMissingName;
  result = v1->name.m_data;
  if ( !result )
    return EmptyString;
  return result;
}
