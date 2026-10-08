TESForm::ModReferenceList *__thiscall TESFullName_CopyFrom(unsigned int *this, TESForm *a2)
{
  TESForm::ModReferenceList *result; // eax
  const char *next; // eax

  result = (TESForm::ModReferenceList *)OblivionDynamicCast( /*0x46c856*/
                                          a2,
                                          0,
                                          (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                                          &TESFullName `RTTI Type Descriptor',
                                          0);
  if ( result ) /*0x46c860*/
  {
    next = (const char *)result->next; /*0x46c862*/
    if ( !next ) /*0x46c867*/
      next = EmptyString; /*0x46c869*/
    return (TESForm::ModReferenceList *)BSStringT_Set((BSStringT *)(this + 1), next, 0); /*0x46c874*/
  }
  return result; /*0x46c879*/
}
