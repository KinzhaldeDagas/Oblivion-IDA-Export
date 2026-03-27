TESForm::ModReferenceList *__thiscall TESFullName_CopyFrom(unsigned int *this, TESForm *a2)
{
  TESForm::ModReferenceList *result; // eax
  const char *next; // eax

  result = (TESForm::ModReferenceList *)OblivionDynamicCast(
                                          a2,
                                          0,
                                          (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                                          &TESFullName `RTTI Type Descriptor',
                                          0);
  if ( result )
  {
    next = (const char *)result->next;
    if ( !next )
      next = EmptyString;
    return (TESForm::ModReferenceList *)BSStringT_Set((BSStringT *)(this + 1), next, 0);
  }
  return result;
}
