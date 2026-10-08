CHAR *__thiscall sub_488DF0(EntryData *this)
{
  TESFullName *v1; // eax
  unsigned int v2; // ecx
  CHAR *result; // eax

  v1 = (TESFullName *)OblivionDynamicCast( /*0x488e02*/
                        this->type,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                        &TESFullName `RTTI Type Descriptor',
                        0);
  if ( !v1 ) /*0x488e0c*/
    return (CHAR *)MEMORY[0xB38D30].value; /*0x488e0c*/
  LOWORD(v2) = v1->name.m_dataLen; /*0x488e0e*/
  v2 = (_WORD)v2 == 0xFFFF ? strlen(v1->name.m_data) : (unsigned __int16)v2;
  if ( !v2 ) /*0x488e33*/
    return (CHAR *)MEMORY[0xB38D30].value; /*0x488e42*/
  result = v1->name.m_data; /*0x488e35*/
  if ( !result ) /*0x488e3a*/
    return EmptyString; /*0x488e3c*/
  return result; /*0x488e41*/
}
