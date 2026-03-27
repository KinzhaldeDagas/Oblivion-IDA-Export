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

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESLoadScreen `RTTI Type Descriptor',
                    0);
  if ( !v3 )
    return 1;
  v5 = (TESForm *)((char *)this + 0x2C);
  v6 = 0;
  p_next = &v3[1].member.modlist.next;
  if ( this != (TESForm *)0xFFFFFFD4 )
  {
    do
    {
      if ( v5->vtbl )
        ++v6;
      v5 = *(TESForm **)&v5->member.type;
    }
    while ( v5 );
  }
  v8 = 0;
  v9 = &v3[1].member.modlist.next;
  if ( v3 != (TESForm *)0xFFFFFFD4 )
  {
    do
    {
      if ( *v9 )
        ++v8;
      v9 = (TESForm::ModReferenceList **)v9[1];
    }
    while ( v9 );
  }
  if ( v6 != v8 )
    return 1;
  if ( v3 != (TESForm *)0xFFFFFFD4 )
  {
    do
    {
      v10 = (TESForm::ModReferenceList **)p_next[1];
      if ( !v10 && !*p_next )
        break;
      v11 = (TESFormVtbl *)*p_next;
      v12 = (TESForm *)((char *)this + 0x2C);
      if ( this == (TESForm *)0xFFFFFFD4 )
        return 1;
      while ( v12->vtbl != v11 )
      {
        v12 = *(TESForm **)&v12->member.type;
        if ( !v12 )
          return 1;
      }
      p_next = v10;
    }
    while ( v10 );
  }
  return TESForm_CompareAllComponentsTo(this, v3) != 0;
}
