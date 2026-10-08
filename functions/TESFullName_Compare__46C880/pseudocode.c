bool __thiscall TESFullName_Compare(TESForm::ModReferenceList *this, TESForm *a2)
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

  v3 = (TESForm::ModReferenceList *)OblivionDynamicCast( /*0x46c896*/
                                      a2,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                                      &TESFullName `RTTI Type Descriptor',
                                      0);
  if ( !v3 ) /*0x46c8a0*/
    return 1; /*0x46c8a2*/
  LOWORD(v5) = *((_WORD *)this + 4); /*0x46c8a8*/
  if ( (_WORD)v5 == 0xFFFF ) /*0x46c8b2*/
    v5 = strlen((const char *)this->next); /*0x46c8b7*/
  else
    v5 = (unsigned __int16)v5; /*0x46c8cd*/
  if ( !v5 )
  {
    LOWORD(v6) = v3[1].data; /*0x46c8d4*/
    v6 = (_WORD)v6 == 0xFFFF ? strlen((const char *)v3->next) : (unsigned __int16)v6;
    if ( !v6 ) /*0x46c8f7*/
      return 0; /*0x46c8f7*/
  }
  v7 = *((_WORD *)this + 4); /*0x46c8fd*/
  v8 = v7 == 0xFFFF ? strlen((const char *)this->next) : v7;
  LOWORD(v9) = v3[1].data; /*0x46c922*/
  v9 = (_WORD)v9 == 0xFFFF ? strlen((const char *)v3->next) : (unsigned __int16)v9;
  if ( v8 != v9 ) /*0x46c946*/
    return 1; /*0x46c946*/
  if ( ((next = (const char *)v3->next) != 0 || (next = EmptyString) != 0) && (v11 = this->next) != 0 ) /*0x46c95d*/
    v12 = strcmp((const char *)v11, next); /*0x46c964*/
  else
    v12 = 2 * (next == 0) - 1; /*0x46c98e*/
  return v12 != 0; /*0x46c997*/
}
