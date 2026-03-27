bool __thiscall TESFullName_Compare(TESForm::ModReferenceList *this, TESForm *a1)
{
  TESForm::ModReferenceList *v3; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned __int16 v7; // cx
  unsigned int v8; // edi
  unsigned int v9; // ecx
  const char *next; // ecx
  TESForm::ModReferenceList *v11; // eax
  int v12; // eax

  v3 = (TESForm::ModReferenceList *)OblivionDynamicCast(
                                      a1,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                                      &TESFullName `RTTI Type Descriptor',
                                      0);
  if ( !v3 )
    return 1;
  LOWORD(v5) = *((_WORD *)this + 4);
  if ( (_WORD)v5 == 0xFFFF )
    v5 = strlen((const char *)this->next);
  else
    v5 = (unsigned __int16)v5;
  if ( !v5 )
  {
    LOWORD(v6) = v3[1].data;
    v6 = (_WORD)v6 == 0xFFFF ? strlen((const char *)v3->next) : (unsigned __int16)v6;
    if ( !v6 )
      return 0;
  }
  v7 = *((_WORD *)this + 4);
  v8 = v7 == 0xFFFF ? strlen((const char *)this->next) : v7;
  LOWORD(v9) = v3[1].data;
  v9 = (_WORD)v9 == 0xFFFF ? strlen((const char *)v3->next) : (unsigned __int16)v9;
  if ( v8 != v9 )
    return 1;
  if ( ((next = (const char *)v3->next) != 0 || (next = EmptyString) != 0) && (v11 = this->next) != 0 )
    v12 = strcmp((const char *)v11, next);
  else
    v12 = 2 * (next == 0) - 1;
  return v12 != 0;
}
