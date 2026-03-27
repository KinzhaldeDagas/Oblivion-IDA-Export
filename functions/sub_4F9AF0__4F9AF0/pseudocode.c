void __thiscall sub_4F9AF0(TESForm *this, TESForm *a2)
{
  TESForm *v3; // ebx
  TESForm::ModReferenceList **p_next; // ebx
  TESForm::ModReferenceList **i; // ebp
  TESForm::ModReferenceList *v6; // edi
  int v7; // eax
  TESForm::ModReferenceList **v8; // esi
  bool v9; // zf
  TESForm::ModReferenceList **v10; // eax
  TESForm *a2a; // [esp+10h] [ebp+4h]

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESLoadScreen `RTTI Type Descriptor',
                    0);
  a2a = v3;
  if ( v3 )
  {
    sub_4F99C0(this);
    p_next = &v3[1].member.modlist.next;
    for ( i = (TESForm::ModReferenceList **)((char *)this + 0x2C); p_next; p_next = (TESForm::ModReferenceList **)p_next[1] )
    {
      if ( !p_next[1] && !*p_next )
        break;
      v6 = *p_next;
      if ( *p_next )
      {
        v7 = (int)(i + 1);
        v8 = i;
        if ( i[1] )
        {
          do
          {
            v8 = *(TESForm::ModReferenceList ***)v7;
            v9 = *(_DWORD *)(*(_DWORD *)v7 + 4) == 0;
            v7 = *(_DWORD *)v7 + 4;
          }
          while ( !v9 );
        }
        if ( *v8 )
        {
          v10 = (TESForm::ModReferenceList **)FormHeapAlloc(8u);
          if ( v10 )
          {
            *v10 = v6;
            v10[1] = 0;
            v8[1] = (TESForm::ModReferenceList *)v10;
          }
          else
          {
            v8[1] = 0;
          }
        }
        else
        {
          *v8 = v6;
        }
      }
      if ( i[1] )
        i = (TESForm::ModReferenceList **)i[1];
    }
    TESForm_CopyAllComponentsFrom(this, a2a);
  }
}
