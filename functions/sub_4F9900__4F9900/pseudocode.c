bool __thiscall sub_4F9900(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v5; // edx
  int v6; // edi
  TESForm::ModReferenceList **p_next; // ecx
  int v8; // esi
  TESForm::ModReferenceList **v9; // edx
  TESForm::ModReferenceList **v10; // esi
  TESFormVtbl *v11; // edx
  TESForm *v12; // ecx

  v3 = (TESForm *)OblivionDynamicCast( /*0x4f9916*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESLoadScreen `RTTI Type Descriptor',
                    0);
  if ( !v3 ) /*0x4f9920*/
    return 1; /*0x4f9922*/
  v5 = (TESForm *)((char *)this + 0x2C); /*0x4f992d*/
  v6 = 0; /*0x4f992f*/
  p_next = &v3[1].member.modlist.next; /*0x4f9933*/
  if ( this != (TESForm *)0xFFFFFFD4 ) /*0x4f9936*/
  {
    do /*0x4f9945*/
    {
      if ( v5->vtbl ) /*0x4f9938*/
        ++v6; /*0x4f993d*/
      v5 = *(TESForm **)&v5->member.type; /*0x4f9940*/
    }
    while ( v5 ); /*0x4f9945*/
  }
  v8 = 0; /*0x4f9948*/
  v9 = &v3[1].member.modlist.next; /*0x4f994c*/
  if ( v3 != (TESForm *)0xFFFFFFD4 ) /*0x4f994e*/
  {
    do /*0x4f995d*/
    {
      if ( *v9 ) /*0x4f9950*/
        ++v8; /*0x4f9955*/
      v9 = (TESForm::ModReferenceList **)v9[1]; /*0x4f9958*/
    }
    while ( v9 ); /*0x4f995d*/
  }
  if ( v6 != v8 ) /*0x4f9961*/
    return 1; /*0x4f998b*/
  if ( v3 != (TESForm *)0xFFFFFFD4 ) /*0x4f9965*/
  {
    do /*0x4f9998*/
    {
      v10 = (TESForm::ModReferenceList **)p_next[1]; /*0x4f9967*/
      if ( !v10 && !*p_next ) /*0x4f996e*/
        break; /*0x4f9970*/
      v11 = (TESFormVtbl *)*p_next; /*0x4f9972*/
      v12 = (TESForm *)((char *)this + 0x2C); /*0x4f9974*/
      if ( this == (TESForm *)0xFFFFFFD4 ) /*0x4f9978*/
        return 1; /*0x4f9978*/
      while ( v12->vtbl != v11 ) /*0x4f9982*/
      {
        v12 = *(TESForm **)&v12->member.type; /*0x4f9984*/
        if ( !v12 ) /*0x4f9989*/
          return 1; /*0x4f9989*/
      }
      p_next = v10; /*0x4f9994*/
    }
    while ( v10 ); /*0x4f9998*/
  }
  return TESForm_CompareAllComponentsTo(this, v3) != 0; /*0x4f9924*/
}
